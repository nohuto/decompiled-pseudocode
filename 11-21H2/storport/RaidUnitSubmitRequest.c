/*
 * XREFs of RaidUnitSubmitRequest @ 0x1C0009690
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 *     StorUnitStartBypassIo @ 0x1C0056990 (StorUnitStartBypassIo.c)
 * Callees:
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 */

__int64 __fastcall RaidUnitSubmitRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  unsigned int v8; // edx
  BOOL v9; // eax
  __int64 v10; // r8
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v2 + 8);
  *(_BYTE *)(v2 + 3) |= 1u;
  *(_BYTE *)(v5 + 3) = 0;
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v7 = *(unsigned int *)(v5 + 20);
    v6 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v6 = *(_DWORD *)(v5 + 12);
    v7 = *(unsigned __int8 *)(v5 + 2);
  }
  if ( (qword_1C00793A8 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | ((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  v8 = (v6 >> 17) & 4 | 2;
  if ( (v6 & 0x10) == 0 )
    v8 = (v6 >> 17) & 4;
  v9 = 0;
  if ( (v6 & 0x102) != 0x102 && (v6 & 0x80010) == 0 )
  {
    if ( (unsigned int)v7 > 0x20 || (v12 = 0x1000D0000LL, !_bittest64(&v12, v7)) )
      v9 = 1;
  }
  v10 = v8 | 1;
  if ( !v9 )
    v10 = v8;
  RaidStartIoPacket(a1, a2, v10);
  return 259LL;
}
