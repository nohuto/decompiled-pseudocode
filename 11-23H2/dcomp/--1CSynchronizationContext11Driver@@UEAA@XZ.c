/*
 * XREFs of ??1CSynchronizationContext11Driver@@UEAA@XZ @ 0x1801AE988
 * Callers:
 *     ??_GCSynchronizationContext11Driver@@UEAAPEAXI@Z @ 0x1801AEA40 (--_GCSynchronizationContext11Driver@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSynchronizationContext11Driver::~CSynchronizationContext11Driver(
        CSynchronizationContext11Driver *this)
{
  *(_QWORD *)this = &CSynchronizationContext11Driver::`vftable';
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
  CSynchronizationContext11::~CSynchronizationContext11(this);
}
