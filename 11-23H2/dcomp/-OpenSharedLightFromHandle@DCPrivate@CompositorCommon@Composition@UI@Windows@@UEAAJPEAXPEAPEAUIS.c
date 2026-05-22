/*
 * XREFs of ?OpenSharedLightFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUISharedLight@Private@345@@Z @ 0x1800077F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize2@VSharedLight@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedLight@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x180007888 (--$MakeAndInitialize2@VSharedLight@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEA.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::OpenSharedLightFromHandle(
        Windows::UI::Composition::CompositorCommon::DCPrivate *this,
        void *a2,
        struct Windows::UI::Composition::Private::ISharedLight **a3)
{
  Microsoft::WRL2::ContextSession *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // edx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF
  Microsoft::WRL2::ContextSession *v14; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::DCPrivate *)((char *)this - 328);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::CompositorCommon::DCPrivate *)((char *)this - 328));
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v7 = -2147024890;
    v9 = 7621;
LABEL_9:
    DoStackCaptureDirect(v7, v9);
    goto LABEL_5;
  }
  v12 = 0LL;
  v13 = a2;
  v14 = v3;
  v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::SharedLight,Windows::UI::Composition::Private::SharedLight,Windows::UI::Composition::Compositor *,void * &>(
         &v12,
         &v14,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12C6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v6,
      v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    v9 = 7624;
    goto LABEL_9;
  }
  *a3 = (struct Windows::UI::Composition::Private::ISharedLight *)((v12 + 264) & ((unsigned __int128)-(__int128)v12 >> 64));
  v7 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v7;
}
