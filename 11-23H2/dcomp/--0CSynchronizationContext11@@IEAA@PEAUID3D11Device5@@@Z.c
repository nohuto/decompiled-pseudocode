/*
 * XREFs of ??0CSynchronizationContext11@@IEAA@PEAUID3D11Device5@@@Z @ 0x1801AE8E0
 * Callers:
 *     ?Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AEB84 (-Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UID3D11Device5@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUID3D11Device5@@@Z @ 0x1800E769C (--0-$com_ptr_t@UID3D11Device5@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUID3D11Device5@@@Z.c)
 */

CSynchronizationContext11 *__fastcall CSynchronizationContext11::CSynchronizationContext11(
        CSynchronizationContext11 *this,
        struct ID3D11Device5 *a2)
{
  *(_QWORD *)this = &CSynchronizationContext11::`vftable';
  wil::com_ptr_t<ID3D11Device5,wil::err_returncode_policy>::com_ptr_t<ID3D11Device5,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    (__int64)a2);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
