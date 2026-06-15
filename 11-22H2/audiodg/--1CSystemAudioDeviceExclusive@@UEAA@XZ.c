/*
 * XREFs of ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x1400571B8
 * Callers:
 *     ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140056FF4 (--1-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140057040 (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x140057300 (--_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x1400570B0 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140057420 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(CSystemAudioDeviceExclusive *this)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceExclusive::`vftable'{for `ISubmix'};
  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  if ( !*((_DWORD *)this + 96) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    CSystemAudioDeviceExclusive::Cleanup(this);
    if ( this != (CSystemAudioDeviceExclusive *)-184LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  }
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 344) )
  {
    *((_BYTE *)this + 344) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  }
}
