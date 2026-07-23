/*
 * XREFs of sub_140A6FA44 @ 0x140A6FA44
 * Callers:
 *     sub_140A6F61C @ 0x140A6F61C (sub_140A6F61C.c)
 * Callees:
 *     sub_1402DAB78 @ 0x1402DAB78 (sub_1402DAB78.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A6FF8C @ 0x140A6FF8C (sub_140A6FF8C.c)
 */

__int64 __fastcall sub_140A6FA44(char **a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int128 *v9; // r8
  __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[30]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  do
  {
    sub_1402DAB78(12337, a4, (__int64)v13);
    sub_140A6FF8C(v13, a4);
    v13[5] = *(_QWORD *)a2;
    v13[6] = *(unsigned int *)(a2 + 8);
    v13[7] = *(_QWORD *)(a2 + 16);
    LOBYTE(v13[8]) = a3;
    if ( a1 )
    {
      sub_140A6F124(a1[1], (__int64)byte_140C32EA0, *(unsigned __int16 *)a1, 0, 4, &v13[4]);
      ++LODWORD(v13[4]);
      v9 = &v11;
      *((_QWORD *)&v11 + 1) = byte_140C32EA0;
      LOWORD(v11) = v13[4];
      byte_140C32EA0[LOWORD(v13[4]) - 1] = 0;
    }
    else
    {
      LODWORD(v13[4]) = 0;
      v9 = 0LL;
    }
    LOWORD(v12) = 240;
    *((_QWORD *)&v12 + 1) = v13;
    result = sub_140A6FB80(v8, &v12, v9, a4);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
