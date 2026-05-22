/*
 * XREFs of ?OpenSharedVisualReferenceFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVisualReference@Internal@345@@Z @ 0x180128DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?OpenSharedVisualReferenceFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualReference@Internal@234@@Z @ 0x180128D14 (-OpenSharedVisualReferenceFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::OpenSharedVisualReferenceFromHandle(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        void *a2,
        struct Windows::UI::Composition::Internal::IVisualReference **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  struct Windows::UI::Composition::Internal::VisualReference *v8; // rax
  struct Windows::UI::Composition::Internal::VisualReference *v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::Partner *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 296));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v10 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
      v7 = Windows::UI::Composition::CompositorCommon::OpenSharedVisualReferenceFromHandle(v3, a2, &v10);
      v6 = v7;
      if ( v7 < 0 )
      {
        DoStackCaptureDirect(v7, 0x1D2Fu);
      }
      else
      {
        v8 = v10;
        v10 = 0LL;
        *a3 = (struct Windows::UI::Composition::Internal::IVisualReference *)(((unsigned __int64)v8 + 136) & -(__int64)(v8 != 0LL));
        v6 = 0;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
    }
    else
    {
      v6 = -2147024890;
      DoStackCaptureDirect(-2147024890, 0x1D2Cu);
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v6;
}
