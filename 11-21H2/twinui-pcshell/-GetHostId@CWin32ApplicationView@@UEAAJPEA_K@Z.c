/*
 * XREFs of ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x18002A070
 * Callers:
 *     ?IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z @ 0x18002A010 (-IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z.c)
 * Callees:
 *     ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x18002A150 (-v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002A1A4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::GetHostId(CWin32ApplicationView *this, unsigned __int64 *a2)
{
  int ProcessId; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  HANDLE v6; // rax
  const char *v7; // r9
  int TokenHostIdAsUlong64; // eax
  int LastError; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp+10h] BYREF
  HANDLE v15; // [rsp+50h] [rbp+18h] BYREF

  *a2 = -1LL;
  ProcessId = CWin32ApplicationView::v_GetProcessId((CWin32ApplicationView *)((char *)this - 8), &dwProcessId);
  v4 = ProcessId;
  v5 = 0;
  if ( ProcessId >= 0 )
  {
    v6 = OpenProcess(0x1000u, 0, dwProcessId);
    v15 = v6;
    if ( (((unsigned __int64)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v5 = -2147024894;
      goto LABEL_8;
    }
    TokenHandle = 0LL;
    if ( OpenProcessToken(v6, 8u, &TokenHandle) )
    {
      TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, a2);
      if ( TokenHostIdAsUlong64 >= 0 )
      {
LABEL_7:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
LABEL_8:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v15);
        return v5;
      }
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x40A,
                    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    (const char *)(unsigned int)TokenHostIdAsUlong64,
                    v11);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x409,
                    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    v7);
    }
    v5 = LastError;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x403,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)ProcessId,
    v11);
  return v4;
}
