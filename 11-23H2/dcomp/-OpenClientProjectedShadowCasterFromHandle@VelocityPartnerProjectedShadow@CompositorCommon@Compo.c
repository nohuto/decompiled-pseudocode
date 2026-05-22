/*
 * XREFs of ?OpenClientProjectedShadowCasterFromHandle@VelocityPartnerProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJ_KPEAPEAUICompositionProjectedShadowCaster@345@@Z @ 0x1801286E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180120424 (--$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V12_ea_180120424.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::VelocityPartnerProjectedShadow::OpenClientProjectedShadowCasterFromHandle(
        Windows::UI::Composition::CompositorCommon::VelocityPartnerProjectedShadow *this,
        void *a2,
        struct Windows::UI::Composition::ICompositionProjectedShadowCaster **a3)
{
  struct Windows::UI::Composition::Compositor *v3; // rsi
  int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rdi
  struct Windows::UI::Composition::Compositor *v10; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+60h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+70h] [rbp+40h] BYREF
  void *v14; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::VelocityPartnerProjectedShadow *)((char *)this - 344);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 344));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v13 = 0LL;
    v12 = 0LL;
    v14 = a2;
    v10 = v3;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadowCaster,Windows::UI::Composition::CompositionProjectedShadowCaster,Windows::UI::Composition::Compositor *,void * &>(
           &v12,
           &v10,
           &v14);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = v12;
      v12 = 0LL;
      v6 = 0;
      v13 = v8;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13DB,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v7);
      v8 = 0LL;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x1E77u);
    }
    else
    {
      v13 = 0LL;
      *a3 = (struct Windows::UI::Composition::ICompositionProjectedShadowCaster *)(((unsigned __int64)v8 + 136) & -(__int64)(v8 != 0LL));
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
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
  return (unsigned int)v6;
}
