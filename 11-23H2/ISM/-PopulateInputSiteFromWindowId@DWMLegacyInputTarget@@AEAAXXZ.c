/*
 * XREFs of ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x1801BB0F8
 * Callers:
 *     ??0DWMLegacyInputTarget@@IEAA@KKK_K@Z @ 0x1801BAEAC (--0DWMLegacyInputTarget@@IEAA@KKK_K@Z.c)
 * Callees:
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x180022100 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180023B44 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180023B80 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x1800A040C (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x1801638D0 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall DWMLegacyInputTarget::PopulateInputSiteFromWindowId(DWMLegacyInputTarget *this)
{
  struct InputSiteManager *InputSiteManager; // rax
  char *InputSiteFromId; // rax
  __int64 v4; // rcx
  struct InputSiteManager *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId(
                              (__int64)InputSiteManager,
                              (__int64)&v9,
                              1,
                              *((_QWORD *)this + 8));
  Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)this + 9, InputSiteFromId);
  v4 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( !*((_QWORD *)this + 9) )
  {
    v5 = ISMStatics::GetInputSiteManager();
    v6 = (__int64 *)*((_QWORD *)v5 + 7);
    v7 = (__int64 *)*((_QWORD *)v5 + 8);
    while ( v6 != v7 )
    {
      InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>(*v6, &v9);
      v8 = v9;
      if ( v9
        && BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v9 + 8)) == *((_QWORD *)this + 8) )
      {
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)this + 9, *v6);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 16) + 8LL))(v8 + 16);
        return;
      }
      if ( v8 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 16) + 8LL))(v8 + 16);
      }
      ++v6;
    }
  }
}
