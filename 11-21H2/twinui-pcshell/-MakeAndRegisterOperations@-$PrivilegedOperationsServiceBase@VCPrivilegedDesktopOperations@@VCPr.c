/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800AF7A0
 * Callers:
 *     ??$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AD4AC (--$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800AF868 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedDesktopOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x1800B1824 (--$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperation.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18017D354 (-InternalRelease@-$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
        __int64 *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v6; // rdx
  int v7[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h] BYREF
  GUID v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v7 = a2;
  v4 = PrivilegedOperationsServiceBase<CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(a1);
  if ( v4 < 0 )
  {
    v6 = 581LL;
  }
  else
  {
    v8 = *a1;
    Microsoft::WRL::ComPtr<CPrivilegedDesktopOperations>::InternalRelease(a1 + 10);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedDesktopOperations,CPrivilegedDesktopOperations,IamAccess *,PrivilegedOperationsService * &>(
           a1 + 10,
           &v8,
           v7);
    if ( v4 < 0 )
    {
      v6 = 582LL;
    }
    else
    {
      v10 = a1[10];
      v9 = GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
      v11 = 0LL;
      v4 = CImmersiveShellComponent::RegisterServiceInformation(
             (CImmersiveShellComponent *)(a2 + 48),
             (const struct CImmersiveShellComponent::ISC_SERVICE *)&v9,
             1u);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 585LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
