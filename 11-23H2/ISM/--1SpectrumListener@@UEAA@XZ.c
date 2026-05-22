/*
 * XREFs of ??1SpectrumListener@@UEAA@XZ @ 0x1800D0340
 * Callers:
 *     ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x1800D03E0 (--_GSpectrumListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D07E8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x1800D31A0 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall SpectrumListener::~SpectrumListener(SpectrumListener *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &SpectrumListener::`vftable';
  SpectrumListener::Unregister(this);
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(*((SpeechRuntimeListener **)this + 4));
    operator delete(v2);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
