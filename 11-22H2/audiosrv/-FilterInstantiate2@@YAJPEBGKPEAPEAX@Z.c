/*
 * XREFs of ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x180148220
 * Callers:
 *     s_midiOpenPort @ 0x180110330 (s_midiOpenPort.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801481F4 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 */

__int64 __fastcall FilterInstantiate2(const unsigned __int16 *a1, __int64 a2, void **a3)
{
  HANDLE FileW; // rax
  const char *v5; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v9; // [rsp+68h] [rbp+20h] BYREF

  FileW = CreateFileW(a1, 0xC0000000, 0, 0LL, 3u, 0x40800080u, 0LL);
  v9 = FileW;
  if ( (((unsigned __int64)FileW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    *a3 = FileW;
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x465,
                  (unsigned int)"avcore\\audiocore\\lib\\kslib\\kslib.cpp",
                  v5);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v9);
    return LastError;
  }
}
