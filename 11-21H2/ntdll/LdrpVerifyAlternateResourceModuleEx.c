/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x180050DFC
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x180050748 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x1800385FC (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x180067050 (LdrResGetRCConfig.c)
 *     _wcsicmp @ 0x1800956E0 (_wcsicmp.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800DBFF8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, __int64 a3, const wchar_t *a4, int a5, int a6)
{
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  _DWORD *v11; // rbx
  __int64 v12; // rax
  int RCConfig; // eax
  __int64 v15; // rax
  bool v16; // di
  _DWORD *v17; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v18; // [rsp+38h] [rbp-10h] BYREF

  if ( !a6 )
    return 1;
  if ( (a5 & 0x1000) != 0 )
  {
    RCConfig = LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v17, 4096, 1);
    if ( RCConfig >= 0 )
    {
      if ( (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v18, 4096, 0) < 0 )
        return 0;
      v10 = v17;
      v11 = v18;
      goto LABEL_5;
    }
    if ( RCConfig != -1073741686 )
      return 0;
  }
  else
  {
    v10 = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( v10 )
    {
      v11 = LdrpGetRcConfig(a2, v9, 0, 0);
      if ( !v11 )
        return 0;
LABEL_5:
      if ( a6 != 2 )
      {
        v12 = *(_QWORD *)(v10 + 11) - *(_QWORD *)(v11 + 11);
        if ( !v12 )
          v12 = *(_QWORD *)(v10 + 13) - *(_QWORD *)(v11 + 13);
        if ( v12 )
          return 0;
        return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v11 + (unsigned int)v11[29]));
      }
      v15 = *(_QWORD *)(v10 + 7) - *(_QWORD *)(v11 + 7);
      if ( !v15 )
        v15 = *(_QWORD *)(v10 + 9) - *(_QWORD *)(v11 + 9);
      v16 = v15 == 0;
      if ( a3 )
      {
        if ( !v15 )
          return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v11 + (unsigned int)v11[29]));
        LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(a3);
      }
      if ( !v16 )
        return 0;
      return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v11 + (unsigned int)v11[29]));
    }
  }
  return (a5 & 0x1000000) != 0;
}
