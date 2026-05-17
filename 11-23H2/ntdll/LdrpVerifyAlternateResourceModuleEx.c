/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x180008020
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x18002E7F0 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x180007BB0 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x180008148 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800DBEC8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        int a5,
        int a6)
{
  const wchar_t *v6; // r15
  __int64 v9; // rdx
  __int64 RcConfig; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rax
  bool v16; // al
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h] BYREF

  v6 = a4;
  if ( !a6 )
    return 1;
  if ( (a5 & 0x1000) == 0 )
  {
    LOBYTE(a4) = 1;
    RcConfig = LdrpGetRcConfig(a1, a2, 0LL, a4);
    if ( RcConfig )
    {
      v11 = LdrpGetRcConfig(a2, v9, 0LL, 0LL);
      if ( !v11 )
        return 0;
      goto LABEL_5;
    }
    return (a5 & 0x1000000) != 0;
  }
  v14 = LdrResGetRCConfig(a1, 0LL, &v17, 4096LL, 1);
  if ( v14 < 0 )
  {
    if ( v14 != -1073741686 )
      return 0;
    return (a5 & 0x1000000) != 0;
  }
  if ( (int)LdrResGetRCConfig(a2, 0LL, &v18, 4096LL, 0) < 0 )
    return 0;
  RcConfig = v17;
  v11 = v18;
LABEL_5:
  if ( a6 == 2 )
  {
    v15 = *(_QWORD *)(RcConfig + 28) - *(_QWORD *)(v11 + 28);
    if ( !v15 )
      v15 = *(_QWORD *)(RcConfig + 36) - *(_QWORD *)(v11 + 36);
    v16 = v15 == 0;
    if ( a3 )
    {
      if ( v16 )
        goto LABEL_9;
      LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(a3);
    }
    else if ( v16 )
    {
      goto LABEL_9;
    }
  }
  else
  {
    v12 = *(_QWORD *)(RcConfig + 44) - *(_QWORD *)(v11 + 44);
    if ( !v12 )
      v12 = *(_QWORD *)(RcConfig + 52) - *(_QWORD *)(v11 + 52);
    if ( !v12 )
    {
LABEL_9:
      if ( (a5 & 0x1000000) == 0 )
      {
        if ( v6 )
          return wcsicmp(v6, (const wchar_t *)(v11 + *(unsigned int *)(v11 + 116))) == 0;
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
