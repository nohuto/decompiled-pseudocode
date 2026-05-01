/*
 * XREFs of ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x18012EFF4
 * Callers:
 *     ??$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedDesktopOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E374 (--$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperation.c)
 *     ??$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedPresentationOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E4B4 (--$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOper.c)
 *     ??$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedNotificationOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E5F4 (--$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOper.c)
 *     ??$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedArrangementOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E734 (--$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOpera.c)
 *     ??$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedForegroundOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E874 (--$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperat.c)
 *     ??$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedTabletModeOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E9B4 (--$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperat.c)
 *     ??$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedSizeConstraintsOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012EAF4 (--$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedO.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowOwnershipOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012EC34 (--$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOp.c)
 *     ??$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedHotkeyOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012ED74 (--$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsS.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowingOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012EEB4 (--$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperatio.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<IamAccess>::operator=(
        volatile signed __int32 **a1,
        volatile int *a2)
{
  volatile int *v2; // r8
  volatile signed __int32 *v4; // rcx

  v2 = a2;
  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 9), a2);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v4);
  }
  return a1;
}
