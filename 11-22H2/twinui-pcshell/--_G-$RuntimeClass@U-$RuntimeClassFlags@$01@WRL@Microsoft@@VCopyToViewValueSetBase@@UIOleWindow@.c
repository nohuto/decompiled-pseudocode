/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18059F780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CopyToViewValueSetBase@@QEAA@XZ @ 0x1802E5CBE (--1CopyToViewValueSetBase@@QEAA@XZ.c)
 */

CopyToViewValueSetBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::`scalar deleting destructor'(
        CopyToViewValueSetBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 27) = -1073741823;
  CopyToViewValueSetBase::~CopyToViewValueSetBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
