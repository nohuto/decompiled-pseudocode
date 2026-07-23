/*
 * XREFs of sub_1406C9C7C @ 0x1406C9C7C
 * Callers:
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C9D2C @ 0x1406C9D2C (sub_1406C9D2C.c)
 */

__int64 __fastcall sub_1406C9C7C(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v5; // al
  int v8; // edi
  char v9; // cl
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_BYTE *)a4;
  memset(v11, 0, sizeof(v11));
  if ( (v5 & 1) != 0 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  sub_14030D5C0(a1, 0LL, (__int64)v11, a4);
  v8 = sub_1406C9D2C(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( v8 >= 0 )
  {
    sub_1402D0930((__int64)v11, 0LL);
    v5 = *(_BYTE *)a4;
    v9 = 4;
LABEL_4:
    *(_BYTE *)a4 = v9 | v5 & 0xFB;
    return 0LL;
  }
  sub_1402D0930((__int64)v11, 0LL);
  return (unsigned int)v8;
}
