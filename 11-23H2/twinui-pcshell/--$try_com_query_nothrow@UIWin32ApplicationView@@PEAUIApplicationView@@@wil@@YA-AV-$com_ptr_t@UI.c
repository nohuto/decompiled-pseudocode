/*
 * XREFs of ??$try_com_query_nothrow@UIWin32ApplicationView@@PEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_returncode_policy@wil@@@0@$$QEAPEAUIApplicationView@@@Z @ 0x1800975F4
 * Callers:
 *     _lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator() @ 0x1800974D4 (_lambda_9cd1b560a470dbb5c6e1d5da28bd3866_--operator().c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802CF350 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::try_com_query_nothrow<IWin32ApplicationView,IApplicationView *>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a2;
  *a1 = 0LL;
  (**v3)(v3, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, a1);
  return a1;
}
