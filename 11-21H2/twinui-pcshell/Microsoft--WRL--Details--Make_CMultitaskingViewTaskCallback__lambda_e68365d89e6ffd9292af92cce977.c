/*
 * XREFs of Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const_&_ @ 0x180494644
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf___ @ 0x18049479C (MakeMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf___.c)
 * Callees:
 *     ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x18000FCC8 (--0-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18002F254 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rsi

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>((__int64)v4);
    *v5 = off_1806596C8;
    v5[4] = off_180659718;
    wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
      v5 + 6,
      *(_QWORD *)a2);
    *((_DWORD *)v5 + 14) = *(_DWORD *)(a2 + 8);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
