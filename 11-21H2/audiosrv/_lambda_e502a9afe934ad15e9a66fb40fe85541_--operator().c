/*
 * XREFs of _lambda_e502a9afe934ad15e9a66fb40fe85541_::operator() @ 0x18010723C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___::_Do_call @ 0x1801083C0 (std--_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___--_Do.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_e502a9afe934ad15e9a66fb40fe85541_::operator()(_QWORD *a1, __int64 a2)
{
  bool v4; // si
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v7 = 0LL;
  v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 24LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v7);
  if ( v5(a2, &v7) >= 0 )
    v4 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, v7) == 0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  return v4;
}
