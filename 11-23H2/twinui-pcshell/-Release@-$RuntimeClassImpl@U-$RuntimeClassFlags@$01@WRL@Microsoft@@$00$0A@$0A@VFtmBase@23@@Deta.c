/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0870
 * Callers:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18005F5C4 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___ @ 0x1800E0294 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_ee3e0a0da20eb1cf2fabc.c)
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E0330 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800E04B0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x1800E07A0 (-SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z.c)
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x18012D570 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012E28C (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@I.c)
 *     ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x18012EFF4 (--4-$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z.c)
 *     ??$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z @ 0x18012F0C8 (--$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z.c)
 *     ?v_ShutdownServices@CApplicationViewManager@@UEAAJPEAUIProfferService@@@Z @ 0x1801B9750 (-v_ShutdownServices@CApplicationViewManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     ??1?$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ @ 0x180497B00 (--1-$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 9);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 9, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 72LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
