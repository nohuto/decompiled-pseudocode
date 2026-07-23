/*
 * XREFs of sub_140781DE0 @ 0x140781DE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140781748 @ 0x140781748 (sub_140781748.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140781DE0(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  void *v7; // rdi
  char v8; // si
  _WORD *v9; // rax
  __int64 v11; // rax
  __int64 Pool2; // rax
  _BYTE v13[4]; // [rsp+60h] [rbp-19h] BYREF
  int v14; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v15; // [rsp+68h] [rbp-11h] BYREF
  __int128 v16; // [rsp+70h] [rbp-9h] BYREF

  v7 = 0LL;
  v13[0] = 0;
  v8 = 0;
  v14 = 0;
  v16 = 0LL;
  v15 = 0;
  if ( !*(_QWORD *)a4 )
    goto LABEL_2;
  if ( (int)sub_14077DA5C(
              *(__int64 *)&qword_140D00AC0,
              (__int64)a2,
              3,
              0,
              0LL,
              (__int64)&qword_140010B68,
              (__int64)&v14,
              (__int64)&v16,
              16,
              (__int64)&v15,
              0) >= 0
    && v14 == 13
    && v15 >= 0x10 )
  {
    v11 = **(_QWORD **)a4 - v16;
    if ( !v11 )
      v11 = *(_QWORD *)(*(_QWORD *)a4 + 8LL) - *((_QWORD *)&v16 + 1);
    if ( !v11 )
    {
LABEL_2:
      v9 = *(_WORD **)(a4 + 8);
      if ( v9 && *v9 )
      {
        Pool2 = ExAllocatePool2(256LL, 400LL, 1198550608LL);
        v7 = (void *)Pool2;
        if ( !Pool2 )
          return v8;
        if ( (int)sub_14077DA5C(
                    *(__int64 *)&qword_140D00AC0,
                    (__int64)a2,
                    3,
                    0,
                    0LL,
                    (__int64)&qword_140010AD8,
                    (__int64)&v14,
                    Pool2,
                    400,
                    (__int64)&v15,
                    0) < 0
          || v14 != 18
          || wcsicmp(*(const wchar_t **)(a4 + 8), (const wchar_t *)v7) )
        {
LABEL_23:
          ExFreePoolWithTag(v7, 0x47706E50u);
          return v8;
        }
      }
      if ( !*(_BYTE *)(a4 + 16) || sub_140781748(a1, a2, a3, (__int64)v13) >= 0 && v13[0] )
      {
        v8 = 1;
        if ( *(_QWORD *)(a4 + 24) )
          v8 = sub_14042A5E0(a1, a2);
      }
      if ( v7 )
        goto LABEL_23;
    }
  }
  return v8;
}
