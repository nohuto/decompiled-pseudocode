/*
 * XREFs of ??1MPCTarget@@UEAA@XZ @ 0x18011B104
 * Callers:
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$0 @ 0x18011A241 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$0.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x18011A274 (--1MPCFocusTarget@@UEAA@XZ.c)
 *     ??_EMPCTarget@@UEAAPEAXI@Z @ 0x18011B168 (--_EMPCTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x18011BD20 (-RemoveFromRouter@MPCTarget@@MEAAXXZ.c)
 *     ?StopWindowWatcher@MPCTarget@@AEAAXXZ @ 0x18011BD5C (-StopWindowWatcher@MPCTarget@@AEAAXXZ.c)
 */

void __fastcall MPCTarget::~MPCTarget(MPCTarget *this)
{
  *(_QWORD *)this = &MPCTarget::`vftable'{for `IMPCTarget'};
  *((_QWORD *)this + 1) = &MPCTarget::`vftable'{for `RefCountedObject'};
  MPCTarget::RemoveFromRouter(this);
  MPCTarget::StopWindowWatcher(this);
  if ( *((_QWORD *)this + 8) )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)this + 8);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
