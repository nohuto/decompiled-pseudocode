/*
 * XREFs of ?SetStartUpEvent@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBUguid@3@AEBW4StartUpEvent@Dashboard@Shell@UI@WindowsUdk@3@@Z @ 0x1805BDC08
 * Callers:
 *     _lambda_2dae2f99b30523bdf650a32b001ab8be_::operator() @ 0x1801C4BD8 (_lambda_2dae2f99b30523bdf650a32b001ab8be_--operator().c)
 *     _lambda_312c58877751c28ad9ce6cd478c8fff2_::operator() @ 0x1801C4CBC (_lambda_312c58877751c28ad9ce6cd478c8fff2_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::SetStartUpEvent(
        __int64 **a1,
        __int128 *a2,
        unsigned int *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a1;
  v4 = *v3;
  v6 = *a2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v4 + 104))(v3, &v6, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
