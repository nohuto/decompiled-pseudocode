/*
 * XREFs of ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C
 * Callers:
 *     ?CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEAPEAVCCompositionTexture@2@@Z @ 0x1800987B0 (-CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEA.c)
 *     ??I?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ @ 0x18009DB04 (--I-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ.c)
 *     ?CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18009FE90 (-CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z.c)
 *     ?DisposeOnDelayedDestruction@CCompositionTextureBinding@DirectComposition@@UEAAXXZ @ 0x1800A0490 (-DisposeOnDelayedDestruction@CCompositionTextureBinding@DirectComposition@@UEAAXXZ.c)
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 *     ??$MakeAndInitialize@VSharedD3DDevice@Internal@Composition@UI@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800A0FF4 (--$MakeAndInitialize@VSharedD3DDevice@Internal@Composition@UI@Windows@@UIInspectable@@$$V@Detail.c)
 *     ?BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionTexture@234@@Z @ 0x1800A3614 (-BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionText.c)
 *     ?Destroy@CompositionTexture@Composition@UI@Windows@@UEAAXXZ @ 0x1800A3750 (-Destroy@CompositionTexture@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A57D8 (-CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUShared.c)
 *     ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A5D8C (-EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11D.c)
 *     ?RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@PEAVDeviceClient@2345@PEAPEAUSharedDevice@12345@@Z @ 0x1800A65A0 (-RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV-$_List_ite.c)
 *     ?AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z @ 0x1800A733C (-AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z.c)
 *     ?RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z @ 0x1800A75FC (-RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z.c)
 *     ??$com_weak_query_failfast@AEAPEAUIAsyncDeferral@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIAsyncDeferral@Internal@Windows@@@Z @ 0x180114F24 (--$com_weak_query_failfast@AEAPEAUIAsyncDeferral@Internal@Windows@@@wil@@YA-AV-$com_ptr_t@UIWeak.c)
 *     ?ChangeState@HolographicCompositor@Internal@Composition@UI@Windows@@AEAAXJ@Z @ 0x180115F4C (-ChangeState@HolographicCompositor@Internal@Composition@UI@Windows@@AEAAXJ@Z.c)
 *     ?ChangeState@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@AEAAXJ@Z @ 0x1801196C4 (-ChangeState@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@AEAAXJ@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x18016BEBC (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18016CB10 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18016CE4C (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
