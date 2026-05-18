/*
 * XREFs of sub_18003EF8C @ 0x18003EF8C
 * Callers:
 *     sub_18003E0C4 @ 0x18003E0C4 (sub_18003E0C4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_18003EF8C(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 *v4; // rdi
  __int64 v5; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = a2 + 1;
  v5 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  if ( a2 != a1 )
  {
    v7 = a3 - (_QWORD)a2;
    do
    {
      v4 -= 2;
      v8 = *v4;
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v12 = *(__int64 *)((char *)v4 + v7 - 8);
      v10 = *(__int64 *)((char *)v4 + v7);
      *(__int64 *)((char *)v4 + v7 - 8) = v9;
      v13 = v10;
      *(__int64 *)((char *)v4 + v7) = v8;
      sub_180010910((__int64)&v12);
    }
    while ( v4 - 1 != a1 );
  }
  v12 = *a1;
  v13 = a1[1];
  v14 = 0LL;
  *a1 = v3;
  a1[1] = v5;
  sub_180010910((__int64)&v12);
  return sub_180010910((__int64)&v14);
}
