/*
 * XREFs of ?CreateInteropVisualReferenceController@InteropCompositor@Composition@UI@Windows@@QEAAJPEAVInteropVisual@234@PEAPEAVInteropVisualReferenceController@234@@Z @ 0x18015D0F0
 * Callers:
 *     ?CreateVisualReferenceController@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@PEAPEAUIDCompositionVisualReferenceControllerPartner@@@Z @ 0x18015E8F0 (-CreateVisualReferenceController@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18015C164 (--$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVIntero.c)
 *     ?SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z @ 0x18016F4C0 (-SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::CreateInteropVisualReferenceController(
        Windows::UI::Composition::InteropCompositor *this,
        struct Windows::UI::Composition::InteropVisual *a2,
        struct Windows::UI::Composition::InteropVisualReferenceController **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct Windows::UI::Composition::Visual *v8; // rdx
  Windows::UI::Composition::Private::VisualReferenceController *v9; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::Private::VisualReferenceController *v12; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v13; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v13 = this;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualReferenceController,Windows::UI::Composition::InteropVisualReferenceController,Windows::UI::Composition::InteropCompositor *>(
         &v12,
         &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = a2;
    v9 = v12;
    v5 = Windows::UI::Composition::Private::VisualReferenceController::SetVisual(v12, v8);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v12 = 0LL;
      v6 = 0;
      *a3 = v9;
      goto LABEL_7;
    }
    v7 = 199LL;
  }
  else
  {
    v7 = 197LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcompositor.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
  return v6;
}
