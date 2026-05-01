/*
 * XREFs of ??1AltTabWindowHookData@@QEAA@XZ @ 0x18060E3F4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VAltTabWindowHookData@@@std@@EEAAXXZ @ 0x18060F920 (-_Destroy@-$_Ref_count_obj2@VAltTabWindowHookData@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHHOOK__@@P6AHPEAU1@@Z$1?UnhookWindowsHookEx@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180607EA0 (--1-$unique_storage@U-$resource_policy@PEAUHHOOK__@@P6AHPEAU1@@Z$1-UnhookWindowsHookEx@@YAH0@ZU-.c)
 */

void __fastcall AltTabWindowHookData::~AltTabWindowHookData(HHOOK *this)
{
  wil::details::unique_storage<wil::details::resource_policy<HHOOK__ *,int (*)(HHOOK__ *),&int UnhookWindowsHookEx(HHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HHOOK__ *,HHOOK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HHOOK__ *,int (*)(HHOOK__ *),&int UnhookWindowsHookEx(HHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HHOOK__ *,HHOOK__ *,0,std::nullptr_t>>(this + 2);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(this + 1));
}
