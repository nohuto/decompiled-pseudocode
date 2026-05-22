/*
 * XREFs of ?CreateBrush@Api@CompositionEffectFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositionEffectBrush@345@@Z @ 0x18002DF90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionEffectBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionEffectFactory@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionEffectFactory@456@@Z @ 0x18002E024 (--$MakeAndInitialize2@VCompositionEffectBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@P.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectFactory::Api::CreateBrush(
        Windows::UI::Composition::CompositionEffectFactory::Api *this,
        struct Windows::UI::Composition::ICompositionEffectBrush **a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  char *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = (char *)this - 136;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[32] & 2) != 0 )
  {
    v5 = *((_QWORD *)v2 + 3);
    v10 = 0LL;
    v12 = v5;
    v11 = v2;
    v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionEffectFactory *>(
           &v10,
           &v12,
           &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectfactory.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
      DoStackCaptureDirect(v7, 0x1BCu);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionEffectBrush *)((v10 + 152) & -(__int64)(v10 != 0));
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
