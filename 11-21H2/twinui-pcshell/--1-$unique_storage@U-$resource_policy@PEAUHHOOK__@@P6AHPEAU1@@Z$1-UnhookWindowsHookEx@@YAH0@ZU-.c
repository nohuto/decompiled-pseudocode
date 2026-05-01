/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHHOOK__@@P6AHPEAU1@@Z$1?UnhookWindowsHookEx@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180607EA0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@EEAAXXZ @ 0x18060C9C0 (-_Destroy@-$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@EEAAXXZ.c)
 *     ??1AltTabWindowHookData@@QEAA@XZ @ 0x18060E3F4 (--1AltTabWindowHookData@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::resource_policy<HHOOK__ *,int (*)(HHOOK__ *),&int UnhookWindowsHookEx(HHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HHOOK__ *,HHOOK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HHOOK__ *,int (*)(HHOOK__ *),&int UnhookWindowsHookEx(HHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HHOOK__ *,HHOOK__ *,0,std::nullptr_t>>(
        HHOOK *a1)
{
  HHOOK v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return UnhookWindowsHookEx(v1);
  return result;
}
