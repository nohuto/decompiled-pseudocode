/*
 * XREFs of ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180140140
 * Callers:
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x18012D570 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012DF6C (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@V.c)
 *     ??$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedForegroundOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E874 (--$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperat.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x180191BF8 (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForegroundOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForeg.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedForegroundOperations,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
