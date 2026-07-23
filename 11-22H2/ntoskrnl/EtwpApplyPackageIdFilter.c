/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x1409F4FC8
 * Callers:
 *     EtwpApplyScopeFilters @ 0x1406BFD14 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x1409F51C8 (EtwpApplyTransientFilters.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140225FB0 (RtlQueryPackageIdentity.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D9530 (_wcsnicmp.c)
 *     memset @ 0x140435400 (memset.c)
 *     PsQueryProcessAttributesByToken @ 0x14071DEF0 (PsQueryProcessAttributesByToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v6; // bl
  void *v8; // r13
  unsigned __int16 v9; // r12
  unsigned int v10; // r15d
  char v11; // r12
  unsigned __int16 v12; // r15
  unsigned int v13; // esi
  char v14; // al
  bool v15; // [rsp+30h] [rbp-D0h] BYREF
  bool v16; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  ULONG_PTR PackageSize[52]; // [rsp+40h] [rbp-C0h] BYREF

  v17 = a1;
  memset(PackageSize, 0, 0x198uLL);
  v6 = 0;
  v15 = 0;
  if ( !a2 && !a3 )
    return 1;
  v8 = (void *)PsReferencePrimaryTokenWithTag(*(_QWORD *)(a1 + 80), 0x746C6644u);
  PsQueryProcessAttributesByToken((__int64)v8, &v15, &v16);
  if ( v15 )
  {
    PackageSize[0] = 256LL;
    PackageSize[1] = 130LL;
    if ( RtlQueryPackageIdentity(v8, (PWSTR)&PackageSize[2], PackageSize, (PWSTR)&PackageSize[34], &PackageSize[1], 0LL) >= 0 )
    {
      if ( a2 )
      {
        v9 = 0;
        v10 = (PackageSize[0] >> 1) - 1;
        if ( !*a2 )
        {
LABEL_11:
          v11 = 0;
          goto LABEL_13;
        }
        while ( (unsigned __int16)a2[8 * v9 + 4] != v10
             || wcsnicmp(*(const wchar_t **)&a2[8 * v9 + 8], (const wchar_t *)&PackageSize[2], v10) )
        {
          if ( ++v9 >= *a2 )
            goto LABEL_11;
        }
      }
      v11 = 1;
LABEL_13:
      if ( a3 )
      {
        v12 = 0;
        v13 = (PackageSize[1] >> 1) - 1;
        if ( !*a3 )
        {
LABEL_18:
          v14 = 0;
          goto LABEL_20;
        }
        while ( (unsigned __int16)a3[8 * v12 + 4] != v13
             || wcsnicmp(*(const wchar_t **)&a3[8 * v12 + 8], (const wchar_t *)&PackageSize[34], v13) )
        {
          if ( ++v12 >= *a3 )
            goto LABEL_18;
        }
      }
      v14 = 1;
LABEL_20:
      if ( v11 )
      {
        if ( v14 )
          v6 = 1;
      }
    }
  }
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(v17 + 80) + 1208LL), (unsigned __int64)v8, 0x746C6644u);
  return v6;
}
