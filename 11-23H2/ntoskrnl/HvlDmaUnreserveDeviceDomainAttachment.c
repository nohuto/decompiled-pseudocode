/*
 * XREFs of HvlDmaUnreserveDeviceDomainAttachment @ 0x140544370
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403CC390 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x14045F916 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaUnreserveDeviceDomainAttachment(__int64 a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = -1LL;
  v3[1] = a1;
  v1 = HvcallFastExtended(65806LL, (__int64)v3, 0x10u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
