/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800A686C
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
        wil::details **a1,
        char a2,
        const WCHAR *a3)
{
  unsigned int v4; // edi
  wil::details *v5; // rcx
  wil::details *Event; // rbp
  wil::details *v7; // rsi
  DWORD LastError; // ebx
  void *v10; // rdx

  v4 = 0;
  Event = (wil::details *)CreateEventExW(0LL, a3, a2 & 3, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v7 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v7, v10);
      SetLastError(LastError);
    }
    *a1 = Event;
  }
  else
  {
    return (unsigned int)wil::details::GetLastErrorFailHr(v5);
  }
  return v4;
}
