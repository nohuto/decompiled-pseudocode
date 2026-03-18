/*
 * XREFs of ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x18029F2A8
 * Callers:
 *     ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x18029F3D4 (--_ECHolographicFrameProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CHolographicFrameProcessor::~CHolographicFrameProcessor(CHolographicFrameProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CHolographicFrameProcessor::`vftable'{for `IHolographicFrameProcessor'};
  *((_QWORD *)this + 1) = &CHolographicFrameProcessor::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 3) = &CHolographicFrameProcessor::`vftable'{for `IFlipPresentCallback'};
  *((_QWORD *)this + 4) = &CHolographicFrameProcessor::`vftable'{for `IFlipContentCallback'};
  *((_QWORD *)this + 5) = &CHolographicFrameProcessor::`vftable'{for `IHolographicWin32kInteropTexture'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 12);
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)(v3 + 8));
  }
}
