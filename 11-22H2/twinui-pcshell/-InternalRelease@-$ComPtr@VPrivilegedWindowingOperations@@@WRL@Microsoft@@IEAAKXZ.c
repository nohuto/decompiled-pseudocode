/*
 * XREFs of ?InternalRelease@?$ComPtr@VPrivilegedWindowingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180140118
 * Callers:
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x18012D570 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012DDDC (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedNotificationOperations@.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012E0FC (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperatio.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012E28C (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@I.c)
 *     ??$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedNotificationOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E5F4 (--$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOper.c)
 *     ??$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedSizeConstraintsOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012EAF4 (--$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedO.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowingOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012EEB4 (--$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperatio.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801405E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PrivilegedWindowingOperations>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
