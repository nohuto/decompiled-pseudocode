/*
 * XREFs of RtlpHpStackTraceConfig @ 0x180115C20
 * Callers:
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 * Callees:
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpHpStackTraceDisable @ 0x180115C94 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180115CE8 (RtlpHpStackTraceEnable.c)
 */

__int64 __fastcall RtlpHpStackTraceConfig(__int64 a1)
{
  void *v1; // rdi
  void *v2; // rbx
  HANDLE Buffer[13]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *(void **)(a1 + 8);
  v2 = (void *)*(unsigned __int16 *)(a1 + 2);
  if ( v1 == (void *)-1LL )
  {
    if ( ((unsigned __int8)v2 & 1) != 0 )
      RtlpHpStackTraceEnable();
    else
      RtlpHpStackTraceDisable();
    return 0LL;
  }
  else
  {
    memset(Buffer, 0, 0x60uLL);
    LODWORD(Buffer[3]) = 0x10000000;
    Buffer[10] = v2;
    return RtlpHeapPerformCrossProcessQuery(v1, Buffer);
  }
}
