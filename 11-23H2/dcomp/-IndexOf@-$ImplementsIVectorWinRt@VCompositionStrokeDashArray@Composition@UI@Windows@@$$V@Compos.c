/*
 * XREFs of ?IndexOf@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJMPEAIPEAE@Z @ 0x180170F00
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?IndexOf@?$VectorBasedCollection@M@Composition@UI@Windows@@QEBA_NMPEAI@Z @ 0x180171004 (-IndexOf@-$VectorBasedCollection@M@Composition@UI@Windows@@QEBA_NMPEAI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::CompositionStrokeDashArray,>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        bool *a4)
{
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v9; // rdx

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  v7 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    *a4 = (unsigned __int8)Windows::UI::Composition::VectorBasedCollection<float>::IndexOf(a1 - 32, v9, a3) != 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v4;
}
