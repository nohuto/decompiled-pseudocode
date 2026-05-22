/*
 * XREFs of ?CreateSharedTarget@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIVisualTargetPartner@345@@Z @ 0x180126D60
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateSharedTarget@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisualTarget@234@@Z @ 0x180126CEC (-CreateSharedTarget@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisualTarget@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::CreateSharedTarget(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        struct Windows::UI::Composition::IVisualTargetPartner **a2)
{
  DirectComposition::CDevice **v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (DirectComposition::CDevice **)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 296));
  if ( ((_BYTE)v2[4] & 2) != 0 )
  {
    v7 = 0LL;
    v5 = Windows::UI::Composition::CompositorCommon::CreateSharedTarget(v2, &v7);
    v4 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x1CE1u);
      if ( v7 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::IVisualTargetPartner *)(((unsigned __int64)v7 + 136) & -(__int64)(v7 != 0LL));
      v4 = 0;
    }
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
