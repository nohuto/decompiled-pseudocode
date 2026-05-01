/*
 * XREFs of ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x180050660
 * Callers:
 *     ?IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z @ 0x180050600 (-IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z.c)
 * Callees:
 *     ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x180050770 (-v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CWin32ApplicationView::GetHostId(CWin32ApplicationView *this, unsigned __int64 *a2)
{
  int ProcessId; // eax
  unsigned int v4; // ebx
  char *v5; // rbx
  const char *v6; // r9
  int TokenHostIdAsUlong64; // eax
  int LastError; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp+18h] BYREF

  *a2 = -1LL;
  ProcessId = CWin32ApplicationView::v_GetProcessId((CWin32ApplicationView *)((char *)this - 8), &dwProcessId);
  v4 = ProcessId;
  if ( ProcessId >= 0 )
  {
    v5 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
    if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = -2147024894;
      if ( !v5 || v5 == (char *)-1LL )
        return v9;
      goto LABEL_9;
    }
    TokenHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    if ( OpenProcessToken(v5, 8u, &TokenHandle) )
    {
      TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, a2);
      if ( TokenHostIdAsUlong64 >= 0 )
      {
        v9 = 0;
LABEL_7:
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
LABEL_9:
        CloseHandle(v5);
        return v9;
      }
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x405,
                    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    (const char *)(unsigned int)TokenHostIdAsUlong64,
                    v11);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x404,
                    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    v6);
    }
    v9 = LastError;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3FE,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)ProcessId,
    v11);
  return v4;
}
