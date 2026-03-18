/*
 * XREFs of PsIoRateControlReference @ 0x140363780
 * Callers:
 *     IoGetIoRateControl @ 0x140363850 (IoGetIoRateControl.c)
 * Callees:
 *     PspIoRateEntryIoControlReference @ 0x14036381C (PspIoRateEntryIoControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405E0FA0 (PspJobIoRateVolumeEntryReference.c)
 */

__int64 __fastcall PsIoRateControlReference(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v10; // rax
  __int64 result; // rax

  v5 = a1 + 1592;
  v10 = PspIoRateEntryIoControlReference(a1 + 1592);
  *a3 = v10;
  if ( v10 )
    *a4 = *(_QWORD *)(a1 + 1544);
  else
    v5 = 0LL;
  *a5 = v5;
  a3[1] = 0LL;
  a5[1] = 0LL;
  result = *(_QWORD *)(a1 + 1656);
  if ( (*(_BYTE *)(a1 + 1664) & 1) != 0 )
  {
    if ( !result )
      return result;
    result ^= a1 + 1656;
  }
  if ( result && a2 )
  {
    result = PspJobIoRateVolumeEntryReference(a1, a2);
    if ( result )
    {
      a3[1] = *(_QWORD *)(result + 40);
      a4[1] = *(_QWORD *)(result + 48);
      a5[1] = result;
    }
  }
  return result;
}
