/*
 * XREFs of ??1CSynchronizationContext11Driverless@@UEAA@XZ @ 0x1801AE9C0
 * Callers:
 *     ??_GCSynchronizationContext11Driverless@@UEAAPEAXI@Z @ 0x1801AEA80 (--_GCSynchronizationContext11Driverless@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSynchronizationContext11Driverless::~CSynchronizationContext11Driverless(
        CSynchronizationContext11Driverless *this)
{
  *(_QWORD *)this = &CSynchronizationContext11Driverless::`vftable';
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
  CSynchronizationContext11::~CSynchronizationContext11(this);
}
