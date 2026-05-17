/*
 * XREFs of RtlpHpStackTraceConfig @ 0x1801174A8
 * Callers:
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpHpStackTraceDisable @ 0x18011751C (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180117570 (RtlpHpStackTraceEnable.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceConfig(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-68h] BYREF
  int v5; // [rsp+38h] [rbp-50h]
  __int64 v6; // [rsp+70h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == -1 )
  {
    if ( (v2 & 1) != 0 )
      RtlpHpStackTraceEnable();
    else
      RtlpHpStackTraceDisable();
    return 0LL;
  }
  else
  {
    memset_thunk_772440563353939046(v4, 0, 0x60uLL);
    v5 = 0x10000000;
    v6 = v2;
    return RtlpHeapPerformCrossProcessQuery(v1, (__int64)v4);
  }
}
