/*
 * XREFs of ??1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ @ 0x1800A275C
 * Callers:
 *     ??_GSharedD3DDevice@Internal@Composition@UI@Windows@@EEAAPEAXI@Z @ 0x1800A1320 (--_GSharedD3DDevice@Internal@Composition@UI@Windows@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 *     ?RemoveClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXPEAUIUnknown@@@Z @ 0x1800A6508 (-RemoveClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXPEAUIUnknown@@@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::~SharedD3DDevice(
        Windows::UI::Composition::Internal::SharedD3DDevice *this)
{
  Windows::UI::Composition::Internal::SharedD3DDevicePool *v2; // rax
  volatile int *v3; // rdx

  *(_QWORD *)this = &Windows::UI::Composition::Internal::SharedD3DDevice::`vftable';
  *((_QWORD *)this + 1) = &Windows::UI::Composition::Internal::SharedD3DDevice::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>>'};
  *((_QWORD *)this + 5) = &Windows::UI::Composition::Internal::SharedD3DDevice::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>>'};
  *((_QWORD *)this + 6) = &Windows::UI::Composition::Internal::SharedD3DDevice::`vftable'{for `Windows::UI::Composition::Internal::ISharedD3DDevice'};
  *((_QWORD *)this + 7) = &Windows::UI::Composition::Internal::SharedD3DDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>'};
  v2 = Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance();
  Windows::UI::Composition::Internal::SharedD3DDevicePool::RemoveClient(v2, *((struct IUnknown **)this + 10));
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 10);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>(
    (__int64)this,
    v3);
}
