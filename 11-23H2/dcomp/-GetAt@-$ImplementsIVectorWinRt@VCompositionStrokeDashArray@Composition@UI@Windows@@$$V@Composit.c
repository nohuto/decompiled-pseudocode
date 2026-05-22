/*
 * XREFs of ?GetAt@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAM@Z @ 0x180170970
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ItemExistsAt@?$VectorBasedCollection@M@Composition@UI@Windows@@QEBAJI@Z @ 0x180171230 (-ItemExistsAt@-$VectorBasedCollection@M@Composition@UI@Windows@@QEBAJI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::CompositionStrokeDashArray,>::GetAt(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v6; // rbp
  unsigned int v7; // edi
  int v8; // eax

  *a3 = 0;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  v6 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::VectorBasedCollection<float>::ItemExistsAt(a1 - 32, (unsigned int)v6);
    v7 = v8;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0xFu);
    }
    else
    {
      v7 = 0;
      *a3 = *(_DWORD *)(*(_QWORD *)(a1 - 24) + 4 * v6);
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
