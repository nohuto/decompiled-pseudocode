/*
 * XREFs of ?Stop@CKstBase@@QEAAXXZ @ 0x18000F600
 * Callers:
 *     DwmpShutdownWinlogonMouseThread @ 0x18000C750 (DwmpShutdownWinlogonMouseThread.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x18000EB5C (--1CKstBase@@QEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001348 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180001CB0 (__security_check_cookie.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180009A20 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x18000EB44 (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000EF4C (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CKstBase::Stop(HANDLE *this)
{
  const struct _tlgProvider_t *v2; // rax
  HANDLE *v3; // rdi
  const char *v4; // r9
  HANDLE v5; // rsi
  DWORD LastError; // ebx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && (*((_BYTE *)v2 + 16) & 2) != 0 && (*((_QWORD *)v2 + 3) & 2LL) == *((_QWORD *)v2 + 3) )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_18001263D, 0LL, 0LL, 2u, &v7);
  v3 = this + 2;
  if ( wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(this + 2) )
  {
    if ( !SetEvent(this[4]) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x92D,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v4);
    WaitForSingleObject(*v3, 0xFFFFFFFF);
    v5 = *v3;
    if ( (char *)*v3 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      CloseHandle(v5);
      SetLastError(LastError);
    }
    *v3 = 0LL;
  }
}
