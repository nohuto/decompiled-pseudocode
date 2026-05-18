/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180009438
 * Callers:
 *     ?Initialize@CKstBase@@MEAAJXZ @ 0x180008A90 (-Initialize@CKstBase@@MEAAJXZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x18000401C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180008A30 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
        __int64 *a1,
        __int64 a2,
        ...)
{
  unsigned int v3; // edi
  wil::details *v4; // rcx
  HANDLE Event; // rbp
  DWORD LastError; // ebx
  void (__fastcall *v8)(wil::details *, void *); // [rsp+50h] [rbp+18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va1; // [rsp+58h] [rbp+20h]
  va_list va2; // [rsp+60h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, void (__fastcall *)(wil::details *this, void *a2));
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v3 = 0;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    if ( *a1 )
    {
      v10 = *a1;
      LastError = GetLastError();
      v8 = wil::details::CloseHandle;
      ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(
        (__int64 (__fastcall **)(_QWORD))va,
        (__int64 *)va1);
      SetLastError(LastError);
    }
    *a1 = (__int64)Event;
  }
  else
  {
    return (unsigned int)wil::details::GetLastErrorFailHr(v4);
  }
  return v3;
}
