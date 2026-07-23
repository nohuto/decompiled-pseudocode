/*
 * XREFs of MiProbePacketContended @ 0x1402E6814
 * Callers:
 *     MiProbeAndLockPacket @ 0x140236330 (MiProbeAndLockPacket.c)
 *     MmProbeAndLockSelectedPages @ 0x1403D55A0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiProbePacketContended(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // r10
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_QWORD *)(a1 + 104);
  v3 = 0;
  if ( v1 && (unsigned int)MiPageTableLockIsContended(*v2, v1) || (unsigned int)MiWorkingSetIsContended(*v2) )
    return 1LL;
  LOBYTE(v3) = KeShouldYieldProcessor() != 0;
  return v3;
}
