/*
 * XREFs of ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180009308
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x180008570 (HamRpcSrvFindOrCreateHostId.c)
 *     ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18006FB74 (-HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreCheckAndSanitizeKey(const wchar_t *a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)PsmIsValidKey(a1) && wcsnlen(a1 + 268, 0x100uLL) != 256 && RtlValidSid((PSID)(a1 + 232)) )
    return 1LL;
  *((_WORD *)a1 + 231) = 0;
  result = 0LL;
  *((_WORD *)a1 + 523) = 0;
  return result;
}
