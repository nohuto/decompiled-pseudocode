/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800AFD18
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800AFC50 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperatio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowOwnershipOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x1800B1D10 (--$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOp.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800B25E4 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivi.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18017D304 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
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
  v4 = PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(a1);
  if ( v4 < 0 )
  {
    v6 = 581LL;
  }
  else
  {
    v8 = *a1;
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1 + 3);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedWindowOwnershipOperations,PrivilegedWindowOwnershipOperations,IamAccess *,PrivilegedOperationsService * &>(
           a1 + 3,
           &v8,
           v7);
    if ( v4 < 0 )
    {
      v6 = 582LL;
    }
    else
    {
      v10 = a1[3];
      v9 = GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
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
