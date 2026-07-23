/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x1403AD058
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F77DC (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x1402F7548 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x1403D93F0 (_wcsicmp.c)
 *     LdrResGetRCConfig @ 0x1407E1E94 (LdrResGetRCConfig.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, __int64 a3, const wchar_t *a4, int a5)
{
  __int64 v7; // rdx
  _DWORD *RcConfig; // rdi
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  int v12; // eax
  _DWORD *v13; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  if ( (a5 & 0x1000) == 0 )
  {
    RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
    if ( RcConfig )
    {
      v9 = LdrpGetRcConfig(a2, v7, 0, 0);
      if ( !v9 )
        return 0;
      goto LABEL_4;
    }
    return (a5 & 0x1000000) != 0;
  }
  v12 = LdrResGetRCConfig((_DWORD)a1, 0, (unsigned int)&v14, 4096, 1);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741686 )
      return 0;
    return (a5 & 0x1000000) != 0;
  }
  if ( (int)LdrResGetRCConfig((_DWORD)a2, 0, (unsigned int)&v13, 4096, 0) < 0 )
    return 0;
  RcConfig = v14;
  v9 = v13;
LABEL_4:
  v10 = *(_QWORD *)(RcConfig + 11) - *(_QWORD *)(v9 + 11);
  if ( !v10 )
    v10 = *(_QWORD *)(RcConfig + 13) - *(_QWORD *)(v9 + 13);
  if ( !v10 )
  {
    if ( (a5 & 0x1000000) == 0 )
    {
      if ( a4 )
        return wcsicmp(a4, (const wchar_t *)((char *)v9 + (unsigned int)v9[29])) == 0;
      return 0;
    }
    return 1;
  }
  return 0;
}
