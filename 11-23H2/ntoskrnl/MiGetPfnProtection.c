/*
 * XREFs of MiGetPfnProtection @ 0x1402160B4
 * Callers:
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x140358D30 (MiRevokeExecutePte.c)
 * Callees:
 *     MiGetWsleProtection @ 0x140216124 (MiGetWsleProtection.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // r8
  _KPROCESS *Process; // rcx

  LOBYTE(v3) = MiGetWsleContents(a1, a2, a3, a2);
  result = MiGetWsleProtection(v4, v3);
  if ( !(_DWORD)result )
  {
    v7 = (*(_DWORD *)(v6 + 16) >> 5) & 0x1F;
    if ( _bittest64((const signed __int64 *)(v6 + 40), 0x28u) || *(__int64 *)(v6 + 8) <= 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.StaticBitmap[12] )
      {
        if ( MiLocateCloneAddress(Process, *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL, v7) )
          LODWORD(v7) = MmMakeProtectNotWriteCopy[(unsigned int)v7];
      }
      return (unsigned int)v7;
    }
    else
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)v7];
    }
  }
  return result;
}
