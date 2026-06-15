/*
 * XREFs of ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14005518C
 * Callers:
 *     ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x1400550D0 (--1-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x14005511C (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x140055310 (--_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140008408 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140055430 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(CSystemAudioDeviceExclusive *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+28h] [rbp-30h]
  __int128 v4; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceExclusive::`vftable'{for `ISubmix'};
  v3 = *(_OWORD *)((char *)this + 248);
  v4 = v3;
  EtwEventActivityIdControl(4LL, &v4);
  if ( !*((_DWORD *)this + 96) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
    CSystemAudioDeviceExclusive::Cleanup(this);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v2);
  }
  EtwEventActivityIdControl(4LL, &v4);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 344) )
  {
    *((_BYTE *)this + 344) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  }
}
