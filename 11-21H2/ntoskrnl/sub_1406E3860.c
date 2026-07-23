/*
 * XREFs of sub_1406E3860 @ 0x1406E3860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DE7E4 @ 0x1402DE7E4 (sub_1402DE7E4.c)
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_1406E397C @ 0x1406E397C (sub_1406E397C.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 */

__int64 __fastcall sub_1406E3860(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  __int64 *v7; // rdi
  int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // edx
  int v11; // esi
  int v13; // eax
  char v14; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+20h] [rbp-30h]
  void *v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v17 = 0LL;
  WORD1(v17) = v4;
  LOWORD(v17) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  v16 = 0LL;
  v7 = (__int64 *)(a2 + 12);
  *((_QWORD *)&v17 + 1) = 0LL;
  v8 = *((_DWORD *)a2 + 5);
  if ( v8 && (v9 = *v7) != 0 )
  {
    v10 = 2 * v8;
  }
  else
  {
    v9 = *v7;
    v10 = 0;
  }
  v18 = v10;
  v11 = sub_1402DE7E4((__int64 *)&v16, v10, a4, v9);
  if ( v11 >= 0 )
  {
    v14 = a4;
    v11 = sub_14077C610((char *)&v17 + 8, *((_QWORD *)a2 + 1), (unsigned __int16)v17, 2LL, v14, 1);
    if ( v11 >= 0 )
    {
      v11 = sub_1406E397C(&v17, *((unsigned int *)a2 + 4), &v18, v16);
      if ( v16 )
      {
        LOBYTE(v15) = a4;
        v13 = sub_14077C610(a2 + 12, v16, (unsigned int)(2 * *((_DWORD *)a2 + 5)), 2LL, v15, 0);
        if ( v13 < 0 )
          v11 = v13;
      }
      *((_DWORD *)a2 + 5) = v18 >> 1;
    }
  }
  sub_1402DF554(a4, v16);
  sub_1402DF554(a4, *((void **)&v17 + 1));
  return (unsigned int)v11;
}
