/*
 * XREFs of ??0?$com_ptr_t@UID3D11Device5@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUID3D11Device5@@@Z @ 0x1800E769C
 * Callers:
 *     ??0CDeviceTextureManager@DirectComposition@@QEAA@PEAVCDevice@1@PEAUID3D11Device5@@@Z @ 0x180098420 (--0CDeviceTextureManager@DirectComposition@@QEAA@PEAVCDevice@1@PEAUID3D11Device5@@@Z.c)
 *     ??0CSynchronizationContext11@@IEAA@PEAUID3D11Device5@@@Z @ 0x1801AE8E0 (--0CSynchronizationContext11@@IEAA@PEAUID3D11Device5@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ID3D11Device5,wil::err_returncode_policy>::com_ptr_t<ID3D11Device5,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
