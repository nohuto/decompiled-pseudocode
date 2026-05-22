/*
 * XREFs of ?OpenSharedTargetFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVisualTargetPartner@345@@Z @ 0x18000B430
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?OpenSharedTargetFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualTarget@234@@Z @ 0x18000B4C8 (-OpenSharedTargetFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualTarge.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::OpenSharedTargetFromHandle(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        void *a2,
        struct Windows::UI::Composition::IVisualTargetPartner **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::Partner *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::CompositorCommon::Partner *)((char *)this - 296));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v9 = 0LL;
      v6 = Windows::UI::Composition::CompositorCommon::OpenSharedTargetFromHandle(v3, a2, &v9);
      v7 = v6;
      if ( v6 < 0 )
      {
        DoStackCaptureDirect(v6, 0x1D4Cu);
        if ( v9 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
      }
      else
      {
        *a3 = (struct Windows::UI::Composition::IVisualTargetPartner *)(((unsigned __int64)v9 + 136) & -(__int64)(v9 != 0LL));
        v7 = 0;
      }
    }
    else
    {
      v7 = -2147024890;
      DoStackCaptureDirect(-2147024890, 0x1D49u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v7;
}
