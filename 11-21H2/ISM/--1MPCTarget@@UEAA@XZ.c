/*
 * XREFs of ??1MPCTarget@@UEAA@XZ @ 0x1800F32F4
 * Callers:
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$0 @ 0x1800F28F9 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$0.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x1800F292C (--1MPCFocusTarget@@UEAA@XZ.c)
 *     ??_EMPCTarget@@UEAAPEAXI@Z @ 0x1800F3344 (--_EMPCTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x1800F3D00 (-RemoveFromRouter@MPCTarget@@MEAAXXZ.c)
 */

void __fastcall MPCTarget::~MPCTarget(MPCTarget *this)
{
  *(_QWORD *)this = &MPCTarget::`vftable'{for `IMPCTarget'};
  *((_QWORD *)this + 1) = &MPCTarget::`vftable'{for `RefCountedObject'};
  MPCTarget::RemoveFromRouter(this);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
