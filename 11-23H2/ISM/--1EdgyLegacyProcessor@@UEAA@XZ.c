/*
 * XREFs of ??1EdgyLegacyProcessor@@UEAA@XZ @ 0x1801C8268
 * Callers:
 *     ??_EEdgyLegacyProcessor@@UEAAPEAXI@Z @ 0x1801C829C (--_EEdgyLegacyProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1EdgyImpl@@QEAA@XZ @ 0x1801CC41C (--1EdgyImpl@@QEAA@XZ.c)
 */

void __fastcall EdgyLegacyProcessor::~EdgyLegacyProcessor(EdgyLegacyProcessor *this)
{
  EdgyImpl::~EdgyImpl((EdgyLegacyProcessor *)((char *)this + 80));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
