/*
 * XREFs of ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800DF9A8
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800DDEC4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800DE830 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800DF500 (--1SpectrumListener@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800DEBE4 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800E1318 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x1800E18E8 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x1800E210C (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall SpectrumListener::Unregister(SpectrumListener *this)
{
  __int64 v2; // rcx
  SpeechRuntimeListener *v3; // rdi
  unsigned int v4; // edx
  MPCHeadUpdateListener *Instance; // rax

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
    if ( this != (SpectrumListener *)-64LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
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
