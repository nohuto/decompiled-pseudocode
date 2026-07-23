/*
 * XREFs of MiCanPageMove @ 0x1403BE08C
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140236D20 (MiProbeLeafPteAccess.c)
 *     MiReferenceInPageFile @ 0x1402A1794 (MiReferenceInPageFile.c)
 *     MiTradeTransitionPage @ 0x1403BDE00 (MiTradeTransitionPage.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 >= 0 )
    return 1LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( (v2 & 0x400) == 0 )
    return 1LL;
  if ( (v1 & 0x20000000000000LL) == 0 )
  {
    if ( qword_140C65B40 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C65B40;
    v3 = v2 >> 16;
    v4 = *(_QWORD *)v3;
    if ( v3 != *(_QWORD *)v3 + 128LL && (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
      return (*(_DWORD *)(v4 + 92) & 0x20000) == 0;
    return 1LL;
  }
  return 0LL;
}
