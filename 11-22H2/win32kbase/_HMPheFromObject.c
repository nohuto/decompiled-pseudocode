/*
 * XREFs of _HMPheFromObject @ 0x1C00481A0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     UserDeleteBaseWindowHandle @ 0x1C014F2C0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

char *__fastcall HMPheFromObject(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v6, v5, v7, v8)
     || ExIsResourceAcquiredExclusiveLite(gDomainHandleManagerLock) != 1
     && !ExIsResourceAcquiredSharedLite(gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  return (char *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*a1;
}
