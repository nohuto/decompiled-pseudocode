/*
 * XREFs of ?GetProcessTypeForClientOfObject@CallerIdentity@@YAJPEAUIUnknown@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1801D4F4C
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x180012A4C (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x180084C44 (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803966F4 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 */

__int64 __fastcall CallerIdentity::GetProcessTypeForClientOfObject(
        CallerIdentity *this,
        struct IUnknown *a2,
        enum PROCESS_UICONTEXT *a3)
{
  int ProcessHandleForClientOfObject_nothrow; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(
                                             (__int64)this,
                                             (__int64)a2,
                                             (__int64)&v8);
  v5 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow >= 0 )
  {
    if ( (unsigned int)GetProcessUIContextInformation(v8, &v9) )
    {
      v5 = 0;
      LODWORD(a2->lpVtbl) = v9;
    }
    else
    {
      v5 = -2147024890;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecore\\internal\\shell\\inc\\CallerIdentityForClient.h",
      (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v8);
  return v5;
}
