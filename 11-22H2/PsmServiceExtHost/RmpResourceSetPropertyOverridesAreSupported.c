/*
 * XREFs of RmpResourceSetPropertyOverridesAreSupported @ 0x1800307EC
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180030590 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x1800308DC (RmpResourceLimitsAreLegal.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall RmpResourceSetPropertyOverridesAreSupported(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  unsigned int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v7[96]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v8; // [rsp+90h] [rbp-28h]
  char v9; // [rsp+92h] [rbp-26h]

  v6 = 255LL;
  v2 = 0;
  if ( !(unsigned int)RmpResourceLimitsAreLegal(a1 + 40, &v6) )
    return 0LL;
  memset_0(v7, 0, 0x68uLL);
  v3 = *(_DWORD *)(a1 + 32);
  if ( (v3 & 0xF000) != 0 )
    return 0LL;
  if ( (v3 & 1) != 0 )
  {
    v5 = HIBYTE(v3);
    if ( (_BYTE)v5 && (unsigned __int8)v5 > *(_BYTE *)(a1 + 36) )
      return 0LL;
  }
  else if ( v3 || *(_BYTE *)(a1 + 36) != v7[36] )
  {
    return 0LL;
  }
  if ( *(_WORD *)(a1 + 96) != v8
    || *(_BYTE *)(a1 + 98) != v9
    || *(_DWORD *)(a1 + 100)
    || (*(_BYTE *)(a1 + 16) & 2) == 0 && *(_QWORD *)a1 )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 16) & 4) != 0 )
    return 1LL;
  LOBYTE(v2) = *(_QWORD *)(a1 + 8) == 0LL;
  return v2;
}
