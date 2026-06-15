/*
 * XREFs of ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14005853C
 * Callers:
 *     ??_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z @ 0x140058740 (--_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14005A34C (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14005AB00 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140057070 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140058940 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(CSystemAudioDeviceSharedBase *this)
{
  DWORD v2; // ecx
  DWORD v3; // ecx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 37) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 38) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmixInternal'};
  v4 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v4);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  CSystemAudioDeviceSharedBase::Cleanup(this);
  v2 = *((_DWORD *)this + 90);
  if ( v2 != -1 )
  {
    FlsSetValue(v2, 0LL);
    FlsFree(*((_DWORD *)this + 90));
  }
  v3 = *((_DWORD *)this + 89);
  if ( v3 != -1 )
    TlsFree(v3);
  if ( this != (CSystemAudioDeviceSharedBase *)-184LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  EtwEventActivityIdControl(4LL, &v4);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 41);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 40);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
}
