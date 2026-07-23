/*
 * XREFs of sub_1409FBE5C @ 0x1409FBE5C
 * Callers:
 *     sub_1409FBB20 @ 0x1409FBB20 (sub_1409FBB20.c)
 *     sub_1409FEC6C @ 0x1409FEC6C (sub_1409FEC6C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409FC5BC @ 0x1409FC5BC (sub_1409FC5BC.c)
 *     sub_1409FC9E0 @ 0x1409FC9E0 (sub_1409FC9E0.c)
 */

__int64 __fastcall sub_1409FBE5C(
        char *a1,
        unsigned int *a2,
        _OWORD *a3,
        int *a4,
        _QWORD *a5,
        _QWORD *a6,
        _WORD *Src,
        char a8)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rbx
  int *v10; // rax
  int v13; // ebp
  __int64 v15; // rax
  unsigned int v16; // ebp
  int v17; // eax
  __int64 result; // rax
  int *v19; // rax
  unsigned __int64 v20; // rcx
  char v21; // r8
  char *v22; // rdi
  unsigned __int8 v23; // r9
  unsigned __int8 v24; // al
  unsigned int v25; // [rsp+30h] [rbp-68h] BYREF
  int v26; // [rsp+34h] [rbp-64h] BYREF
  int *v27; // [rsp+38h] [rbp-60h]
  __int128 v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h]

  v8 = 0;
  v9 = 0LL;
  v10 = a4;
  v27 = a4;
  v25 = 0;
  v13 = 54;
  if ( Src )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
    v9 = (unsigned int)(2 * v15 + 2);
    v10 = a4;
    v13 = v9 + 58;
  }
  v16 = v13 + 4;
  if ( *a2 < v16 )
  {
    v8 = -1073741789;
LABEL_15:
    *a2 = v16;
    return v8;
  }
  v17 = *v10;
  v29 = 0LL;
  v26 = v17;
  v28 = 0LL;
  result = sub_1409FC5BC((_DWORD)a3, (unsigned int)&v26, (unsigned int)&v25, 0, 0LL, a8);
  if ( (int)result >= 0 )
  {
    result = sub_1409FC9E0(v25, &v28);
    if ( (int)result >= 0 )
    {
      memset(a1, 0, v16);
      v19 = v27;
      v20 = HIDWORD(v29);
      v21 = 1;
      *(_DWORD *)a1 = 1;
      *((_DWORD *)a1 + 1) = v16;
      *((_DWORD *)a1 + 2) = 4;
      v22 = a1 + 12;
      v23 = 42;
      *(_DWORD *)v22 = 2752772;
      *((_DWORD *)v22 + 1) = *v19;
      *((_QWORD *)v22 + 1) = *a5 / v20;
      *((_QWORD *)v22 + 2) = *a6 / v20;
      if ( a8 == 1 )
      {
        v21 = 2;
        *(_OWORD *)(v22 + 24) = *a3;
      }
      else
      {
        *((_DWORD *)v22 + 6) = *(_DWORD *)a3;
      }
      v22[40] = v21;
      v24 = 0;
      v22[41] = v21;
      if ( Src )
      {
        v22 += 42;
        *(_WORD *)v22 = 1028;
        *((_WORD *)v22 + 1) = v9 + 4;
        memmove(v22 + 4, Src, v9 - 2);
        *(_WORD *)&v22[2 * (v9 >> 1) + 2] = 0;
        v24 = v22[3];
        v23 = v22[2];
      }
      *(_DWORD *)&v22[v23 | ((unsigned __int64)v24 << 8)] = 327551;
      goto LABEL_15;
    }
  }
  return result;
}
