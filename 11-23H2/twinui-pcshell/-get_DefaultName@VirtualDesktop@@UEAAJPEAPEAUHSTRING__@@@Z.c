/*
 * XREFs of ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800612B0
 * Callers:
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800611E0 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x180061324 (_anonymous_namespace_--GetDefaultVirtualDesktopName.c)
 */

__int64 __fastcall VirtualDesktop::get_DefaultName(RTL_SRWLOCK *this, HSTRING *a2)
{
  RTL_SRWLOCK *v3; // rdi
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 35;
  AcquireSRWLockShared(this + 35);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  anonymous_namespace_::GetDefaultVirtualDesktopName(&string);
  *a2 = string;
  return 0LL;
}
