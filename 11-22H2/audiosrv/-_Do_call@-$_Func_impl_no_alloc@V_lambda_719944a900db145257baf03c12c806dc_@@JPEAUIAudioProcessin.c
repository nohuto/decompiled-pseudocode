/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_719944a900db145257baf03c12c806dc_@@JPEAUIAudioProcessingObject@@U_GUID@@I@std@@EEAAJ$$QEAPEAUIAudioProcessingObject@@$$QEAU_GUID@@$$QEAI@Z @ 0x180157530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 std::_Func_impl_no_alloc<_lambda_719944a900db145257baf03c12c806dc_,long,IAudioProcessingObject *,_GUID,unsigned int>::_Do_call(
        __int64 a1,
        int (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        ...)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  char v5; // bl
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v4 = *a2;
  v5 = 0;
  v7 = 0LL;
  if ( **(_BYTE **)(a1 + 8) || (v7 = 0LL, (**v4)(v4, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, (__int64 *)va) >= 0) )
    v5 = 1;
  **(_BYTE **)(a1 + 8) = v5;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)va);
  return 0LL;
}
