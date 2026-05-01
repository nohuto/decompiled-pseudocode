/*
 * XREFs of ??$try_com_query@UITaskbarLayoutItem2@@AEAV?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UITaskbarLayoutItem2@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@Z @ 0x1802873B4
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::try_com_query<ITaskbarLayoutItem2,Microsoft::WRL::ComPtr<ITaskbarLayoutItem> &>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a2;
  *a1 = 0LL;
  (**v3)(v3, &GUID_0437407b_4598_4e99_b045_bf1f3a3d11b4, a1);
  return a1;
}
