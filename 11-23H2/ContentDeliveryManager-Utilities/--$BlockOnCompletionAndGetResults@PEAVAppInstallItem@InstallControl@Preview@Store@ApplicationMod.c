/*
 * XREFs of ??$BlockOnCompletionAndGetResults@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@UIAppInstallItem@23456@@@YAJPEAU?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@V?$ComPtrRef@V?$ComPtr@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007A990
 * Callers:
 *     ?StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z @ 0x180084540 (-StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007C2E0 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Previe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BlockOnCompletionAndGetResults<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *,Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  result = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>(a1);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, a2);
  return result;
}
