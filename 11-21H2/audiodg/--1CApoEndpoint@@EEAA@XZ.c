/*
 * XREFs of ??1CApoEndpoint@@EEAA@XZ @ 0x14004F9D4
 * Callers:
 *     ??_GCApoEndpoint@@EEAAPEAXI@Z @ 0x14004FAF0 (--_GCApoEndpoint@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CApoEndpoint::~CApoEndpoint(CApoEndpoint *this)
{
  *(_QWORD *)this = &CApoEndpoint::`vftable';
  *((_QWORD *)this + 1) = &CApoEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CApoEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioOutputEndpointRT>'};
  if ( *((_DWORD *)this + 18) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 32LL))(*((_QWORD *)this + 7));
    *((_DWORD *)this + 18) = 0;
  }
  if ( *((_QWORD *)this + 6) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 6) = 0LL;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 8);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 7);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 5);
  CoTaskMemFree(*((LPVOID *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 7) = -1073741823;
}
