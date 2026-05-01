/*
 * XREFs of ?Show@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18006C9E0
 * Callers:
 *     ?OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18053C920 (-OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessibilityExperienceManager::Show(AccessibilityExperienceManager *this, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v7 = 0;
  if ( !SystemParametersInfoW(0xAAu, 0, &v7, 0) || v7 )
    a2 = 0;
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
  {
    LOBYTE(v4) = a2 == 0;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, v4);
  }
  return 0LL;
}
