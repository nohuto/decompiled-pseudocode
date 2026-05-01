/*
 * XREFs of wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_ @ 0x1806AB6E4
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1806AD064 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 */

void **__fastcall wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_(
        void **a1,
        void **a2)
{
  void *v4; // rbp
  void *v5; // r14
  DWORD LastError; // ebx

  if ( a1 != a2 )
  {
    v4 = *a1;
    v5 = *a2;
    if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      anonymous_namespace_::DeleteAndCloseFileHandle(v4);
      SetLastError(LastError);
    }
    *a1 = v5;
    *a2 = (void *)-1LL;
  }
  return a1;
}
