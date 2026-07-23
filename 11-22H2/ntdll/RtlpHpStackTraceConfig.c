/*
 * XREFs of RtlpHpStackTraceConfig @ 0x180115FF8
 * Callers:
 *     RtlSetHeapInformation @ 0x18007CB90 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpHpStackTraceDisable @ 0x18011606C (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x1801160C0 (RtlpHpStackTraceEnable.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceConfig(__int64 a1)
{
  void *v1; // rdi
  __int64 v2; // rbx
  HANDLE Buffer[3]; // [rsp+20h] [rbp-68h] BYREF
  int v5; // [rsp+38h] [rbp-50h]
  __int64 v6; // [rsp+70h] [rbp-18h]

  v1 = *(void **)(a1 + 8);
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == (void *)-1LL )
  {
    if ( (v2 & 1) != 0 )
      RtlpHpStackTraceEnable();
    else
      RtlpHpStackTraceDisable();
    return 0LL;
  }
  else
  {
    memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
    v5 = 0x10000000;
    v6 = v2;
    return RtlpHeapPerformCrossProcessQuery(v1, Buffer);
  }
}
