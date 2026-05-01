/*
 * XREFs of ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035370
 * Callers:
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035070 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x1800353F4 (_anonymous_namespace_--GetDefaultVirtualDesktopName.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 */

__int64 __fastcall VirtualDesktop::get_DefaultName(RTL_SRWLOCK *this, HSTRING *a2)
{
  RTL_SRWLOCK *v3; // rdi
  HSTRING v4; // rax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 34;
  AcquireSRWLockShared(this + 34);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  anonymous_namespace_::GetDefaultVirtualDesktopName(&string);
  v4 = string;
  string = 0LL;
  *a2 = v4;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  return 0LL;
}
