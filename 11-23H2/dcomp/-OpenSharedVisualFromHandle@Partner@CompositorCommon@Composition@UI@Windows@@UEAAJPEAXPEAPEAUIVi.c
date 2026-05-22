/*
 * XREFs of ?OpenSharedVisualFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVisual@345@@Z @ 0x180128B80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?OpenSharedVisualFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisual@234@@Z @ 0x180128AE4 (-OpenSharedVisualFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisual@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::OpenSharedVisualFromHandle(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        void *a2,
        struct Windows::UI::Composition::IVisual **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  struct Windows::UI::Composition::Visual *v10; // rax
  struct Windows::UI::Composition::Visual *v12; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::Partner *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 296));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v12 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
        (volatile signed __int32 **)&v12,
        v6);
      v8 = Windows::UI::Composition::CompositorCommon::OpenSharedVisualFromHandle(v3, a2, &v12);
      v7 = v8;
      if ( v8 < 0 )
      {
        DoStackCaptureDirect(v8, 0x1D1Au);
      }
      else
      {
        v10 = v12;
        v12 = 0LL;
        *a3 = (struct Windows::UI::Composition::IVisual *)(((unsigned __int64)v10 + 168) & -(__int64)(v10 != 0LL));
        v7 = 0;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
        (volatile signed __int32 **)&v12,
        v9);
    }
    else
    {
      v7 = -2147024890;
      DoStackCaptureDirect(-2147024890, 0x1D17u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v7;
}
