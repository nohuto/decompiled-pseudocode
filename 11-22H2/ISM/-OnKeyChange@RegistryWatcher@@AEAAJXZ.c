/*
 * XREFs of ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x180041238
 * Callers:
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x18003FD40 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z @ 0x180124060 (-OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

LSTATUS __fastcall RegistryWatcher::OnKeyChange(RegistryWatcher *this)
{
  LSTATUS result; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*((void (__fastcall **)(_QWORD, _QWORD))this + 6))(*((_QWORD *)this + 5), *((_QWORD *)this + 3));
  result = RegNotifyChangeKeyValue(*((HKEY *)this + 3), 0, 0x10000004u, *((HANDLE *)this + 4), 1);
  if ( result )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)0x8000FFFFLL);
    return -2147418113;
  }
  return result;
}
