/*
 * XREFs of ??0?$com_ptr_t@VCPresentationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCPresentationManager@@@Z @ 0x1801AEFF8
 * Callers:
 *     ?Create@CPresentationBuffer@@SAJPEAVCPresentationManager@@PEAUIUnknown@@_KPEAPEAV1@@Z @ 0x1801AF19C (-Create@CPresentationBuffer@@SAJPEAVCPresentationManager@@PEAUIUnknown@@_KPEAPEAV1@@Z.c)
 *     ??0CPresentationResource@@IEAA@PEAVCPresentationManager@@@Z @ 0x1801AFAE8 (--0CPresentationResource@@IEAA@PEAVCPresentationManager@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CPresentationManager,wil::err_returncode_policy>::com_ptr_t<CPresentationManager,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
