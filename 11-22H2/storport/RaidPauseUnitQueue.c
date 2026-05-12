/*
 * XREFs of RaidPauseUnitQueue @ 0x1C0044AB0
 * Callers:
 *     StorPortCompleteRequest @ 0x1C0045970 (StorPortCompleteRequest.c)
 *     StorPortPauseDevice @ 0x1C0046510 (StorPortPauseDevice.c)
 *     RaUnitRequestPowerUp @ 0x1C004B78C (RaUnitRequestPowerUp.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     RaidPauseDeviceQueue @ 0x1C004071C (RaidPauseDeviceQueue.c)
 */

void __fastcall RaidPauseUnitQueue(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // dl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  RaidPauseDeviceQueue(a1 + 656);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v3 = *(_BYTE *)(v2 + 56);
  else
    v3 = -1;
  if ( (qword_1C0092468 & 0x200) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      4,
      retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) | (((unsigned __int8)*(_DWORD *)(a1 + 96) | (v3 << 8)) << 8)) << 8),
      *(int *)(a1 + 680),
      0LL,
      0LL);
}
