/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHICON__@@@Z @ 0x18006DEA8
 * Callers:
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180035BE0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180071F28 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1802E87D0 (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIco.c)
 *     ?Notify@TrayNotifyCallback@SystemTray@@UEAAJKPEAUtagNOTIFYITEM@@@Z @ 0x180548F70 (-Notify@TrayNotifyCallback@SystemTray@@UEAAJKPEAUtagNOTIFYITEM@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::reset(
        HICON *a1,
        HICON a2)
{
  HICON v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    DestroyIcon(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
