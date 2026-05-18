/*
 * XREFs of ?Stop@CKstBase@@QEAAXXZ @ 0x180009258
 * Callers:
 *     DwmpShutdownWinlogonMouseThread @ 0x180006F70 (DwmpShutdownWinlogonMouseThread.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x180008788 (--1CKstBase@@QEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001348 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x180003FFC (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006670 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x180008714 (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180008B94 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CKstBase::Stop(HANDLE *this)
{
  const struct _tlgProvider_t *v2; // rax
  HANDLE *v3; // rdi
  const char *v4; // r9
  DWORD LastError; // ebx
  HANDLE v6; // [rsp+30h] [rbp-48h] BYREF
  BOOL (__stdcall *v7)(HANDLE); // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && (*((_BYTE *)v2 + 16) & 2) != 0 && (*((_QWORD *)v2 + 3) & 2LL) == *((_QWORD *)v2 + 3) )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1800113A5, 0LL, 0LL, 2u, &v8);
  v3 = this + 2;
  if ( wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(this + 2) )
  {
    if ( !SetEvent(this[4]) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x91F,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v4);
    WaitForSingleObject(*v3, 0xFFFFFFFF);
    if ( (char *)*v3 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v6 = *v3;
      v7 = CloseHandle;
      LastError = GetLastError();
      wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v7, &v6);
      SetLastError(LastError);
    }
    *v3 = 0LL;
  }
}
