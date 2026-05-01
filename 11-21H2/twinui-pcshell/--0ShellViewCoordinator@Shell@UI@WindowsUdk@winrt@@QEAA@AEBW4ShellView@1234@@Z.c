/*
 * XREFs of ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800F4858
 * Callers:
 *     _lambda_e50579c82ea5c29b9cd271c5825fe17b_::operator() @ 0x180192118 (_lambda_e50579c82ea5c29b9cd271c5825fe17b_--operator().c)
 *     _lambda_9d3043a0a526c8b68512f884d1ed5c9d_::operator() @ 0x18019443C (_lambda_9d3043a0a526c8b68512f884d1ed5c9d_--operator().c)
 *     _lambda_9b41e49093e020fa356c5dbea766620b_::operator() @ 0x1801AA380 (_lambda_9b41e49093e020fa356c5dbea766620b_--operator().c)
 * Callees:
 *     ??$call_factory@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@V_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@impl@winrt@@YA?AUShellViewCoordinator@Shell@UI@WindowsUdk@1@$$QEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x1800F4884 (--$call_factory@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2.c)
 */

winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *__fastcall winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *this,
        const enum winrt::WindowsUdk::UI::Shell::ShellView *a2)
{
  const enum winrt::WindowsUdk::UI::Shell::ShellView *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory,_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_>(
    this,
    &v4);
  return this;
}
