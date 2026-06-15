/*
 * XREFs of ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14001C688
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001C7D0 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001C8E0 (-GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU-$IVector@PEAV.c)
 *     ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14008BE40 (-SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14001C758 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1400584F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
        RTL_SRWLOCK *this,
        struct KSIDENTIFIER *a2,
        __int64 a3,
        void *a4,
        DWORD nOutBufferSize,
        unsigned int *lpBytesReturned)
{
  PVOID Ptr; // rcx
  DWORD v9; // ebp
  RTL_SRWLOCK *v11; // rbx
  bool v12; // zf
  wil::details *v13; // rcx
  unsigned int LastErrorFailHr; // edi
  __int64 result; // rax
  RTL_SRWLOCK *v16; // [rsp+60h] [rbp+8h] BYREF

  Ptr = this[12].Ptr;
  v9 = a3;
  if ( Ptr )
  {
    result = (*(__int64 (__fastcall **)(PVOID, struct KSIDENTIFIER *, __int64, void *, DWORD, unsigned int *))(*(_QWORD *)Ptr + 24LL))(
               Ptr,
               a2,
               a3,
               a4,
               nOutBufferSize,
               lpBytesReturned);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  v11 = this + 25;
  AcquireSRWLockExclusive(this + 25);
  v12 = LOBYTE(this[26].Ptr) == 0;
  v16 = this + 25;
  if ( !v12 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
    return 2147944017LL;
  }
  if ( DeviceIoControl(this[14].Ptr, 0x2F0003u, a2, v9, a4, nOutBufferSize, lpBytesReturned, 0LL) )
  {
    if ( this != (RTL_SRWLOCK *)-200LL )
      ReleaseSRWLockExclusive(this + 25);
    return 0LL;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v13);
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  return LastErrorFailHr;
}
