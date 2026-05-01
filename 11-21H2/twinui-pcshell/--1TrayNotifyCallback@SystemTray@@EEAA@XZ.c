/*
 * XREFs of ??1TrayNotifyCallback@SystemTray@@EEAA@XZ @ 0x180492420
 * Callers:
 *     ??_GTrayNotifyCallback@SystemTray@@EEAAPEAXI@Z @ 0x1804924A0 (--_GTrayNotifyCallback@SystemTray@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18001D7C8 (--1-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$integra.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall SystemTray::TrayNotifyCallback::~TrayNotifyCallback(SystemTray::TrayNotifyCallback *this)
{
  unsigned __int64 v2; // rdx

  wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)this + 7);
  v2 = *((_QWORD *)this + 6);
  if ( v2 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 3), 2 * v2 + 2);
  *((_QWORD *)this + 6) = 7LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_WORD *)this + 12) = 0;
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
}
