/*
 * XREFs of sub_1409F4DA0 @ 0x1409F4DA0
 * Callers:
 *     sub_140796D80 @ 0x140796D80 (sub_140796D80.c)
 *     sub_14080855C @ 0x14080855C (sub_14080855C.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140204280 (RtlQueryPackageIdentity.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsQueryProcessAttributesByToken @ 0x14070BA70 (PsQueryProcessAttributesByToken.c)
 */

char __fastcall sub_1409F4DA0(__int64 a1, _WORD *a2, _WORD *a3)
{
  __int64 v6; // rcx
  char v7; // bl
  bool v8; // r12
  void *v9; // r13
  bool v10; // r14
  unsigned __int16 v11; // r14
  unsigned int v12; // edi
  unsigned __int16 v13; // si
  unsigned int v14; // edi
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h]
  ULONG_PTR PackageSize[52]; // [rsp+40h] [rbp-C0h] BYREF

  v18 = a1;
  memset(PackageSize, 0, 0x198uLL);
  v6 = *(_QWORD *)(a1 + 80);
  v7 = 0;
  v16 = 0;
  v8 = a3 == 0LL;
  v9 = (void *)sub_140347920(v6, 0x746C6644u);
  PsQueryProcessAttributesByToken((__int64)v9, &v16, v17);
  if ( v16 )
  {
    PackageSize[0] = 256LL;
    PackageSize[1] = 130LL;
    if ( RtlQueryPackageIdentity(v9, (PWSTR)&PackageSize[2], PackageSize, (PWSTR)&PackageSize[34], &PackageSize[1], 0LL) >= 0 )
    {
      v10 = a2 == 0LL;
      if ( a2 )
      {
        v11 = 0;
        v12 = (PackageSize[0] >> 1) - 1;
        if ( *a2 )
        {
          while ( (unsigned __int16)a2[8 * v11 + 4] != v12
               || wcsnicmp(*(const wchar_t **)&a2[8 * v11 + 8], (const wchar_t *)&PackageSize[2], v12) )
          {
            if ( ++v11 >= *a2 )
              goto LABEL_8;
          }
          v10 = 1;
        }
        else
        {
LABEL_8:
          v10 = 0;
        }
      }
      if ( a3 )
      {
        v13 = 0;
        v14 = (PackageSize[1] >> 1) - 1;
        if ( *a3 )
        {
          while ( (unsigned __int16)a3[8 * v13 + 4] != v14
               || wcsnicmp(*(const wchar_t **)&a3[8 * v13 + 8], (const wchar_t *)&PackageSize[34], v14) )
          {
            if ( ++v13 >= *a3 )
              goto LABEL_14;
          }
          v8 = 1;
        }
        else
        {
LABEL_14:
          v8 = 0;
        }
      }
      if ( v10 && v8 )
        v7 = 1;
    }
  }
  sub_1402F89B0((signed __int64 *)(*(_QWORD *)(v18 + 80) + 1208LL), (unsigned __int64)v9, 0x746C6644u);
  return v7;
}
