/*
 * XREFs of sub_1402D75FC @ 0x1402D75FC
 * Callers:
 *     sub_1402D7740 @ 0x1402D7740 (sub_1402D7740.c)
 *     sub_1403DA094 @ 0x1403DA094 (sub_1403DA094.c)
 * Callees:
 *     sub_1402D72FC @ 0x1402D72FC (sub_1402D72FC.c)
 *     sub_1403D525C @ 0x1403D525C (sub_1403D525C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 *     sub_140757C9C @ 0x140757C9C (sub_140757C9C.c)
 */

_DWORD *__fastcall sub_1402D75FC(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v10; // eax
  _DWORD *v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-28h] BYREF

  v4 = -1;
  v12 = 0LL;
  v11 = 0LL;
  if ( !a4 )
    goto LABEL_5;
  v7 = sub_1402D72FC((__int64)BaseOfImage, 0, 0LL, 8);
  v11 = v7;
  v8 = v7;
  if ( v7 != (_DWORD *)-1LL )
  {
    if ( v7 )
      return v8;
LABEL_5:
    v13[1] = 1LL;
    v13[0] = L"MUI";
    v13[2] = 0LL;
    v10 = sub_14075717C((_DWORD)BaseOfImage, (unsigned int)v13, 3, 33554480, (__int64)&v12);
    if ( v10 >= 0 )
    {
      v10 = sub_140757C9C(BaseOfImage);
      if ( v10 >= 0 )
      {
        v8 = v11;
        if ( *v11 == -20054323 )
          goto LABEL_8;
        v10 = -1073741701;
      }
    }
    v8 = 0LL;
LABEL_8:
    if ( a3 )
    {
      if ( v8 )
        v4 = (int)v8;
      sub_1403D525C((_DWORD)BaseOfImage, 0, 0, v4, 0, 2, v10, 0LL);
    }
    return v8;
  }
  return 0LL;
}
