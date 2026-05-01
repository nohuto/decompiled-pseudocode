/*
 * XREFs of ?PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z @ 0x18001DE44
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18001E7F0 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ @ 0x1803C3190 (-PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x1801D70F8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::PrepareApplicationForLaunch(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2)
{
  if ( !a2 || !(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
      this,
      2LL,
      *(_BYTE *)(*((_QWORD *)this + 20) + 754LL) != 0 ? 0x20 : 0);
}
