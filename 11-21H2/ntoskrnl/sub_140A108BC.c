/*
 * XREFs of sub_140A108BC @ 0x140A108BC
 * Callers:
 *     sub_140A13764 @ 0x140A13764 (sub_140A13764.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_140797F3C @ 0x140797F3C (sub_140797F3C.c)
 *     sub_1407ED16C @ 0x1407ED16C (sub_1407ED16C.c)
 *     sub_140A14498 @ 0x140A14498 (sub_140A14498.c)
 *     sub_140A15078 @ 0x140A15078 (sub_140A15078.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID **sub_140A108BC(WCHAR *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  PVOID **v5; // rax
  PVOID **v6; // rbx
  char *v7; // rdi
  PVOID *v8; // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]
  PVOID **v12; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, PVOID **);
  v10 = 0LL;
  v11 = 0;
  sub_1406E0C3C(3LL, (__int64)"SdbOpenDatabaseEx");
  v5 = (PVOID **)sub_14075B444(v4, 0x580uLL);
  v12 = v5;
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x580uLL);
    if ( (int)sub_14075E160(v6, a1, 0LL, 0LL, 0LL) >= 0 )
    {
      v7 = (char *)(*v6)[3];
      if ( (unsigned __int64)(v7 - 42) <= 0x7FFFFFD5 && (int)sub_140A15078() >= 0 )
      {
        *((_DWORD *)v6 + 4) = 0;
        *((_DWORD *)v6 + 5) = (_DWORD)v7;
        v8 = *v6;
        if ( *v6 )
          v8 = (PVOID *)v8[4];
        v6[1] = v8;
        if ( (unsigned int)sub_140797F3C((__int64)v6, 0, &v10, 0xCu) )
        {
          if ( v11 == 1717724275 )
          {
            if ( (unsigned int)sub_1407ED16C((__int64)v6, &v10, 0) )
              return v6;
LABEL_18:
            if ( v6 )
            {
              sub_14075E448(*v6);
              ExFreePoolWithTag(v6, 0x74705041u);
            }
            return 0LL;
          }
          if ( v11 == 1717724282 )
          {
            if ( !(unsigned int)sub_140A14498((PVOID ***)va, 0LL, 0LL) )
            {
              sub_1406E0C3C(1LL, (__int64)"SdbOpenDatabaseEx");
              v6 = v12;
              goto LABEL_18;
            }
            return v12;
          }
        }
      }
    }
    sub_1406E0C3C(1LL, (__int64)"SdbOpenDatabaseEx");
    goto LABEL_18;
  }
  sub_1406E0C3C(1LL, (__int64)"SdbOpenDatabaseEx");
  return 0LL;
}
