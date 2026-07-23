/*
 * XREFs of MiUnlinkProtectedStandbyPfn @ 0x140285920
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkStandbyPage @ 0x14046D7FA (MiUnlinkStandbyPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiDecayNodeNowEmpty @ 0x14034ABE0 (MiDecayNodeNowEmpty.c)
 */

__int64 __fastcall MiUnlinkProtectedStandbyPfn(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  ULONG_PTR v2; // r8
  unsigned __int64 v3; // rbx
  BOOL v4; // edi
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r9
  signed __int64 v10; // rdx
  __int64 result; // rax
  signed __int64 v12; // r8
  signed __int64 v13; // rdx

  v1 = *a1 & 0xFFFFFFFFFFLL;
  v2 = qword_140C68160;
  v3 = a1[3] & 0xFFFFFFFFFFLL;
  v4 = 0;
  if ( v3 >= qword_140C68160 && v3 < qword_140C68160 + 2048 )
    v4 = v1 == v3;
  v5 = 0xFFFFDE0000000000uLL;
  v6 = 0xFFFFFF0000000000uLL;
  if ( v3 < qword_140C68160 || v3 >= qword_140C68160 + 2048 )
  {
    *(_QWORD *)(48 * v3 - 0x220000000000LL) = v1 | *(_QWORD *)(48 * v3 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
  }
  else
  {
    v7 = MiSwizzleInvalidPte((v1 << 12) | 0x880);
    *(_QWORD *)(v8 + 16) = v7;
  }
  v9 = v5 + 48 * v1;
  if ( v1 < v2 || v1 >= v2 + 2048 )
  {
    v10 = *(_QWORD *)(v9 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), v3 | v6 & v10, v10);
    v12 = result;
    if ( v10 != result )
    {
      do
      {
        v13 = v12;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), v3 | v6 & v12, v12);
        v12 = result;
      }
      while ( v13 != result );
    }
  }
  else
  {
    result = MiSetPfnPteFrame(v9, v3);
  }
  if ( v4 )
    return MiDecayNodeNowEmpty(v3);
  return result;
}
