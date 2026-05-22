/*
 * XREFs of ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800B7988
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800B5DD8 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800B6790 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800B74E0 (--1SpectrumListener@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180003B74 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800B6B44 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800B92E8 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x1800B98B8 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x1800BA0CC (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall SpectrumListener::Unregister(SpectrumListener *this)
{
  __int64 v2; // rcx
  SpeechRuntimeListener *v3; // rbx
  unsigned int v4; // edx
  MPCHeadUpdateListener *Instance; // rax
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 72) )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, *((_QWORD *)this + 6));
    v3 = (SpeechRuntimeListener *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    if ( v3 )
    {
      SpeechRuntimeListener::~SpeechRuntimeListener(v3);
      operator delete(v3);
    }
    v4 = *((_DWORD *)this + 19);
    if ( v4 )
      MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), v4);
    MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *((_DWORD *)this + 20));
    MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *((_DWORD *)this + 21));
    AcquireSRWLockExclusive((PSRWLOCK)this + 8);
    *((_QWORD *)this + 2) = 0LL;
    v6 = (RTL_SRWLOCK *)((char *)this + 64);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
    if ( *((_QWORD *)this + 5) )
    {
      Instance = MPCHeadUpdateListener::GetInstance();
      MPCHeadUpdateListener::RemoveHeadEventOccurred(Instance, *((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    *((_BYTE *)this + 72) = 0;
  }
}
