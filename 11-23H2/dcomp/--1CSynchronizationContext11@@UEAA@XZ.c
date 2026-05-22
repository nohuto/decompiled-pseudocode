/*
 * XREFs of ??1CSynchronizationContext11@@UEAA@XZ @ 0x1801AE920
 * Callers:
 *     ??1CSynchronizationContext11Driver@@UEAA@XZ @ 0x1801AE988 (--1CSynchronizationContext11Driver@@UEAA@XZ.c)
 *     ??1CSynchronizationContext11Driverless@@UEAA@XZ @ 0x1801AE9C0 (--1CSynchronizationContext11Driverless@@UEAA@XZ.c)
 *     ??_ECSynchronizationContext11@@UEAAPEAXI@Z @ 0x1801AEA00 (--_ECSynchronizationContext11@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSynchronizationContext11::~CSynchronizationContext11(CSynchronizationContext11 *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &CSynchronizationContext11::`vftable';
  v2 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 1);
  *(_QWORD *)this = &CSynchronizationContext::`vftable';
}
