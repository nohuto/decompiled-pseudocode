/*
 * XREFs of ??1MPCFocusTarget@@UEAA@XZ @ 0x18010BE74
 * Callers:
 *     ??_GMPCFocusTarget@@UEAAPEAXI@Z @ 0x18010BEB4 (--_GMPCFocusTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall MPCFocusTarget::~MPCFocusTarget(MPCFocusTarget *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 11);
  MPCTarget::~MPCTarget(this);
}
