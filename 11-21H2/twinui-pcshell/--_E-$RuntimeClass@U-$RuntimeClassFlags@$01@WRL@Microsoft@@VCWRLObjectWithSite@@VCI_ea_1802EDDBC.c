/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802EDDBC
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@WRL@Microsoft@@WBI@EAAPEAXI@Z @ 0x1801EC850 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x1800D452C (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

char *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,CIAMSpecialWindowBase,IFallbackWindow,IImmersiveMonitorNotification,IRawElementProviderSimple,IInvokeProvider>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  *((_DWORD *)a1 + 27) = -1073741823;
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase((CIAMSpecialWindowBase *)(a1 + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 2);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
