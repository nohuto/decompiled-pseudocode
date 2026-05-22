/*
 * XREFs of ?CreateSharedHostProjectedShadowCaster@VelocityPartnerProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180126BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x1801204E4 (--$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V12_ea_1801204E4.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::VelocityPartnerProjectedShadow::CreateSharedHostProjectedShadowCaster(
        Windows::UI::Composition::CompositorCommon::VelocityPartnerProjectedShadow *this,
        struct Windows::UI::Composition::ICompositionProjectedShadowCaster **a2)
{
  struct Windows::UI::Composition::Compositor *v2; // rsi
  int v4; // ebx
  int v5; // eax
  Microsoft::WRL2::NestableRuntimeClass *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  char v9; // [rsp+50h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+58h] [rbp+38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+60h] [rbp+40h] BYREF
  struct Windows::UI::Composition::Compositor *v12; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon::VelocityPartnerProjectedShadow *)((char *)this - 344);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 344));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v11 = 0LL;
    v10 = 0LL;
    v9 = 1;
    v12 = v2;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadowCaster,Windows::UI::Composition::CompositionProjectedShadowCaster,Windows::UI::Composition::Compositor *,bool>(
           &v10,
           &v12,
           (bool *)&v9);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = v10;
      v10 = 0LL;
      v4 = 0;
      v11 = v6;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F6,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v5);
      v6 = 0LL;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
    if ( v4 < 0 )
    {
      DoStackCaptureDirect(v4, 0x1E5Bu);
    }
    else
    {
      v11 = 0LL;
      *a2 = (struct Windows::UI::Composition::ICompositionProjectedShadowCaster *)(((unsigned __int64)v6 + 136) & -(__int64)(v6 != 0LL));
      v4 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
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
  return (unsigned int)v4;
}
