/*
 * XREFs of ?CreateProjectedShadowReceiver@VelocityProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x1800067B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowReceiver@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180006870 (--$MakeAndInitialize2@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@V1234@PEAVComp.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow::CreateProjectedShadowReceiver(
        Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow *this,
        struct Windows::UI::Composition::ICompositionProjectedShadowReceiver **a2)
{
  Microsoft::WRL2::ContextSession *v2; // rsi
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdi
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  Microsoft::WRL2::ContextSession *v12; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow *)((char *)this - 392);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow *)((char *)this - 392));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v11 = 0LL;
    v10 = 0LL;
    v12 = v2;
    v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadowReceiver,Windows::UI::Composition::CompositionProjectedShadowReceiver,Windows::UI::Composition::Compositor *>(
           &v10,
           &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13BF,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v4,
        v8);
      v6 = 0LL;
    }
    else
    {
      v6 = v10;
      v10 = 0LL;
      v5 = 0;
      v11 = v6;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x22AFu);
    }
    else
    {
      v11 = 0LL;
      *a2 = (struct Windows::UI::Composition::ICompositionProjectedShadowReceiver *)((v6 + 136) & -(__int64)(v6 != 0));
      v5 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
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
  return (unsigned int)v5;
}
