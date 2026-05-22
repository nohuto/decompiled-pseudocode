/*
 * XREFs of ?CreateRadialGradientBrush@Velocity_RadialGradient@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionRadialGradientBrush@345@@Z @ 0x1801264D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionRadialGradientBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionRadialGradientBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1801205A4 (--$MakeAndInitialize2@VCompositionRadialGradientBrush@Composition@UI@Windows@@V1234@PEAVComposit.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Velocity_RadialGradient::CreateRadialGradientBrush(
        Windows::UI::Composition::CompositorCommon::Velocity_RadialGradient *this,
        struct Windows::UI::Composition::ICompositionRadialGradientBrush **a2)
{
  struct Windows::UI::Composition::Compositor *v2; // rsi
  int v4; // ebx
  int v5; // eax
  Microsoft::WRL2::NestableRuntimeClass *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+48h] [rbp+10h] BYREF
  struct Windows::UI::Composition::Compositor *v11; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon::Velocity_RadialGradient *)((char *)this - 248);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 248));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v10 = 0LL;
    v9 = 0LL;
    v11 = v2;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionRadialGradientBrush,Windows::UI::Composition::CompositionRadialGradientBrush,Windows::UI::Composition::Compositor *>(
           &v9,
           &v11);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = v9;
      v9 = 0LL;
      v4 = 0;
      v10 = v6;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x567,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v5);
      v6 = 0LL;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
    if ( v4 < 0 )
    {
      DoStackCaptureDirect(v4, 0x17ECu);
    }
    else
    {
      v10 = 0LL;
      *a2 = (struct Windows::UI::Composition::ICompositionRadialGradientBrush *)(((unsigned __int64)v6 + 240) & -(__int64)(v6 != 0LL));
      v4 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
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
