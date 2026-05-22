/*
 * XREFs of ?CreateGraphicsDevice@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUICompositionGraphicsDevice@345@@Z @ 0x180065610
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionGraphicsDevice@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIUnknown@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionGraphicsDevice@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIUnknown@@@Z @ 0x18006569C (--$MakeAndInitialize2@VCompositionGraphicsDevice@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::SystemOnly::CreateGraphicsDevice(
        Windows::UI::Composition::Compositor::SystemOnly *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionGraphicsDevice **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v11; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1128);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1128));
  if ( (v3->SpinCount & 2) != 0 )
  {
    v10 = 0LL;
    v11 = a2;
    v12 = v3;
    v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::Compositor *,IUnknown * &>(
           &v10,
           &v12,
           &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A9,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
      DoStackCaptureDirect(v7, 0x891u);
    }
    else
    {
      *a3 = (struct Windows::UI::Composition::ICompositionGraphicsDevice *)((v10 + 136) & ((unsigned __int128)-(__int128)v10 >> 64));
      v7 = 0;
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
