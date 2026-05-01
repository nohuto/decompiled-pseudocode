/*
 * XREFs of __EH_prolog3_GS @ 0x10007401
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 *     _MsixvcAddGameToGCS@4 @ 0x100054C0 (_MsixvcAddGameToGCS@4.c)
 * Callees:
 *     <none>
 */

_DWORD *__usercall _EH_prolog3_GS@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}
