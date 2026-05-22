/*
 * XREFs of ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual@@@Z @ 0x18000CF50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?CreateInteropVisual@InteropCompositor@Composition@UI@Windows@@QEAAJPEAPEAVInteropVisual@234@@Z @ 0x18000CFF4 (-CreateInteropVisual@InteropCompositor@Composition@UI@Windows@@QEAAJPEAPEAVInteropVisual@234@@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateVisual(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IDCompositionVisual **a2)
{
  Windows::UI::Composition::InteropCompositor *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  struct Windows::UI::Composition::InteropVisual *v6; // rax
  struct Windows::UI::Composition::InteropVisual *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1200);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1200));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v8);
    v4 = Windows::UI::Composition::InteropCompositor::CreateInteropVisual(v2, &v8);
    v5 = v4;
    if ( v4 < 0 )
    {
      DoStackCaptureDirect(v4, 0x1D7u);
    }
    else
    {
      v6 = v8;
      v8 = 0LL;
      *a2 = (struct IDCompositionVisual *)(((unsigned __int64)v6 + 296) & -(__int64)(v6 != 0LL));
      v5 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v8);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
