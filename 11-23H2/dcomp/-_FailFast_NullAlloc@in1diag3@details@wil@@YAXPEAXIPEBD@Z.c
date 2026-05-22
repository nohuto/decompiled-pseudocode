/*
 * XREFs of ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4
 * Callers:
 *     ??$make_unique_failfast@VExpressionAnimationBuilder@Composition@UI@Windows@@AEAPEAVExpressionAnimation@234@@wil@@YA?AV?$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U?$default_delete@VExpressionAnimationBuilder@Composition@UI@Windows@@@wistd@@@wistd@@AEAPEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x18003D434 (--$make_unique_failfast@VExpressionAnimationBuilder@Composition@UI@Windows@@AEAPEAVExpressionAni.c)
 *     ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30 (-RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z.c)
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 *     ?RuntimeClassInitialize@InteropRemoteRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z @ 0x180091814 (-RuntimeClassInitialize@InteropRemoteRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_N@Z @ 0x1800926B8 (-RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropDesktopTree@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z @ 0x180093C58 (-RuntimeClassInitialize@InteropDesktopTree@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUI.c)
 *     ?OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@PEBG@Z @ 0x180160320 (-OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@P.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18016A3C8 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x180197D74 (-RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x1801983E4 (-RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJP_ea_1801983E4.c)
 *     ?RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180198848 (-RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180198E8C (-RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z.c)
 *     ?RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x18019ACBC (-RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800E33E8 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_NullAlloc(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = -2147024882;
  wil::details::ReportFailure_Hr<3>((__int64)this, a2, a3, (__int64)a4, v4, retaddr, v5);
}
