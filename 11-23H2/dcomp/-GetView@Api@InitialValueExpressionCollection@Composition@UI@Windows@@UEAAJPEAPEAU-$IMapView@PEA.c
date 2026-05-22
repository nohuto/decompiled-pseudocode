/*
 * XREFs of ?GetView@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180194B80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@@V1234@PEAVInitialValueExpressionCollection@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionCollectionMapView@Composition@UI@Windows@@$$QEAPEAVInitialValueExpressionCollection@456@@Z @ 0x1801944D4 (--$MakeAndInitialize2@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@@V1234@PEA.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Api::GetView(
        __int64 a1,
        unsigned __int64 *a2)
{
  struct Windows::UI::Composition::InitialValueExpressionCollection *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::InitialValueExpressionCollection *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = (struct Windows::UI::Composition::InitialValueExpressionCollection *)(a1 - 128);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v9 = 0LL;
    v10 = v2;
    v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InitialValueExpressionCollectionMapView,Windows::UI::Composition::InitialValueExpressionCollectionMapView,Windows::UI::Composition::InitialValueExpressionCollection *>(
           &v9,
           &v10);
    v5 = v6;
    if ( v6 >= 0 )
    {
      *a2 = ((unsigned __int64)v9 + 40) & -(__int64)(v9 != 0LL);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinitialvalueexpressioncollection.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
      DoStackCaptureDirect(v5, 0x19Cu);
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
