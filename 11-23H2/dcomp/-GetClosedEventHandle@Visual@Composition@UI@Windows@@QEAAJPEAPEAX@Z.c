/*
 * XREFs of ?GetClosedEventHandle@Visual@Composition@UI@Windows@@QEAAJPEAPEAX@Z @ 0x18010B3EC
 * Callers:
 *     ?GetClosedEventHandle@Partner@Visual@Composition@UI@Windows@@UEAAJPEA_J@Z @ 0x18010B350 (-GetClosedEventHandle@Partner@Visual@Composition@UI@Windows@@UEAAJPEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::GetClosedEventHandle(
        Windows::UI::Composition::Visual *this,
        void **a2)
{
  void **v2; // rdi
  HANDLE EventW; // rax
  const char *v5; // r9
  HANDLE CurrentProcess; // rax
  void *v8; // rdi
  void *v9; // rbx
  HANDLE v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (void **)((char *)this + 288);
  if ( !*((_QWORD *)this + 36) )
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v2,
      EventW);
    if ( !*v2 )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xD3B,
               (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
               v5);
  }
  CurrentProcess = GetCurrentProcess();
  v8 = *v2;
  v9 = CurrentProcess;
  v10 = GetCurrentProcess();
  if ( DuplicateHandle(v10, v8, v9, a2, 0, 0, 2u) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD47,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
