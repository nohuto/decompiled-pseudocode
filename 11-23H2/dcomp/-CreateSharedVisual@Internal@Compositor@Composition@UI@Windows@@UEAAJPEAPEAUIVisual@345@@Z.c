/*
 * XREFs of ?CreateSharedVisual@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x18010F120
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?CreateSharedVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisual@234@@Z @ 0x180126EE8 (-CreateSharedVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisual@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::CreateSharedVisual(
        Windows::UI::Composition::Compositor::Internal *this,
        struct Windows::UI::Composition::IVisual **a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  struct Windows::UI::Composition::Visual *v7; // rax
  struct Windows::UI::Composition::Visual *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::Compositor::Internal *)((char *)this - 1112);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1112));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v9 = 0LL;
    v5 = Windows::UI::Composition::CompositorCommon::CreateSharedVisual(v2, &v9);
    v4 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x64Bu);
    }
    else
    {
      v7 = v9;
      v9 = 0LL;
      *a2 = (struct Windows::UI::Composition::IVisual *)(((unsigned __int64)v7 + 168) & -(__int64)(v7 != 0LL));
      v4 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v9,
      v6);
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v4;
}
