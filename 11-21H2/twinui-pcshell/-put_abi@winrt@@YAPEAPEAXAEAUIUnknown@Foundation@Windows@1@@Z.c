/*
 * XREFs of ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800F79D0
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_ea1c8442aa00b161fccf4dbbf1910f23_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1801A3DD0 (-Invoke@-$delegate@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_dfc53eb855280adfc513fa31c55f1c7f_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1801A3EA0 (-Invoke@-$delegate@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActi.c)
 *     ??$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@23@XZ @ 0x1801C1A34 (--$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 *     ??$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonObject@Json@Data@23@XZ @ 0x1801C1AF4 (--$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@.c)
 *     ??$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManager@Deployment@Management@23@XZ @ 0x1801C1BB4 (--$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Fou.c)
 *     ??$wait_get@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@1@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@81@@Z @ 0x1801C3AD8 (--$wait_get@U-$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@W.c)
 *     ??$wait_get@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@1@AEBU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@71@@Z @ 0x1801C3BE8 (--$wait_get@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Win.c)
 *     ??$wait_get@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUDeploymentResult@Deployment@Management@Windows@1@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@51@@Z @ 0x1801C3CF8 (--$wait_get@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt.c)
 *     ??D?$fast_iterator@U?$IVectorView@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@2@XZ @ 0x1801C48E4 (--D-$fast_iterator@U-$IVectorView@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@.c)
 *     _lambda_c7ad7d039b35a8565706af83963bb0b1_::operator() @ 0x1801C5694 (_lambda_c7ad7d039b35a8565706af83963bb0b1_--operator().c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA?AUPackage@ApplicationModel@Windows@3@XZ @ 0x1801C6078 (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 *     ??$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x1801D0208 (--$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActiva.c)
 *     ??$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x1801D02C8 (--$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationF.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void **__fastcall winrt::put_abi(winrt *this, struct IUnknown *a2)
{
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
  return (void **)this;
}
