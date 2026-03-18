/*
 * XREFs of PspComputeReportWakeFilter @ 0x1406793A4
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x140679034 (PspFreezeJobTree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspComputeReportWakeFilter(_DWORD *a1, __int64 a2, _QWORD *a3, char a4)
{
  int v4; // eax
  __int64 result; // rax

  *(_QWORD *)a2 = *a3;
  if ( a4 )
  {
    *(_DWORD *)a2 &= ~a1[286];
    *(_DWORD *)(a2 + 4) &= ~a1[287];
  }
  v4 = a1[288] & *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v4;
  result = (unsigned int)~v4;
  a1[288] &= result;
  return result;
}
