/*
 * XREFs of ??1DeviceClient@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x1800A5030
 * Callers:
 *     ??_EDeviceClient@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800A5400 (--_EDeviceClient@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1FE0 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::UI::Composition::Internal::DeviceClient::~DeviceClient(
        Windows::UI::Composition::Internal::DeviceClient *this,
        volatile int *a2)
{
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
    (__int64 *)this + 4,
    a2);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
