/*
 * XREFs of ?SetRoot@Partner@VisualTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180014C70
 * Callers:
 *     ?SetRoot@Partner@VisualTarget@Composition@UI@Windows@@W7EAAJPEAUIVisual@345@@Z @ 0x1800AD170 (-SetRoot@Partner@VisualTarget@Composition@UI@Windows@@W7EAAJPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetRoot@VisualTarget@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180060B30 (-SetRoot@VisualTarget@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTarget::Partner::SetRoot(
        Windows::UI::Composition::VisualTarget::Partner *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::VisualTarget *v2; // rdi
  Microsoft::WRL2::ContextSession *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::VisualTarget::Partner *)((char *)this - 136);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v8);
    v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
           &v8);
    v6 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0xD2u);
    }
    else
    {
      Windows::UI::Composition::VisualTarget::SetRoot(v2, v8);
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v8);
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
