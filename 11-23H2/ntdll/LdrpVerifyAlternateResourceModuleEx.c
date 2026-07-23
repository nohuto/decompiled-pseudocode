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

char __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, __int64 a3, const wchar_t *a4, int a5, int a6)
{
  __int64 RcConfig; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13; // eax
  __int64 v14; // rax
  bool v15; // al
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h] BYREF

  if ( !a6 )
    return 1;
  if ( (a5 & 0x1000) == 0 )
  {
    RcConfig = LdrpGetRcConfig(a1);
    if ( RcConfig )
    {
      v10 = LdrpGetRcConfig(a2);
      if ( !v10 )
        return 0;
      goto LABEL_5;
    }
    return (a5 & 0x1000000) != 0;
  }
  v13 = LdrResGetRCConfig(a1, 0LL, &v16, 0x1000u, 1);
  if ( v13 < 0 )
  {
    if ( v13 != -1073741686 )
      return 0;
    return (a5 & 0x1000000) != 0;
  }
  if ( (int)LdrResGetRCConfig(a2, 0LL, &v17, 0x1000u, 0) < 0 )
    return 0;
  RcConfig = v16;
  v10 = v17;
LABEL_5:
  if ( a6 == 2 )
  {
    v14 = *(_QWORD *)(RcConfig + 28) - *(_QWORD *)(v10 + 28);
    if ( !v14 )
      v14 = *(_QWORD *)(RcConfig + 36) - *(_QWORD *)(v10 + 36);
    v15 = v14 == 0;
    if ( a3 )
    {
      if ( v15 )
        goto LABEL_9;
      LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(a3);
    }
    else if ( v15 )
    {
      goto LABEL_9;
    }
  }
  else
  {
    v11 = *(_QWORD *)(RcConfig + 44) - *(_QWORD *)(v10 + 44);
    if ( !v11 )
      v11 = *(_QWORD *)(RcConfig + 52) - *(_QWORD *)(v10 + 52);
    if ( !v11 )
    {
LABEL_9:
      if ( (a5 & 0x1000000) == 0 )
      {
        if ( a4 )
          return wcsicmp(a4, (const wchar_t *)(v10 + *(unsigned int *)(v10 + 116))) == 0;
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
