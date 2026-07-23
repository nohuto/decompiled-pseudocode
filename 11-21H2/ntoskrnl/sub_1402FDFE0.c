/*
 * XREFs of sub_1402FDFE0 @ 0x1402FDFE0
 * Callers:
 *     sub_1402FF310 @ 0x1402FF310 (sub_1402FF310.c)
 * Callees:
 *     sub_1402FE1C4 @ 0x1402FE1C4 (sub_1402FE1C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1402FDFE0(_DWORD *a1, _QWORD **a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int16 v5; // ax
  __int64 v6; // r15
  __int64 v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // r13
  __int16 v12; // ax
  __int64 result; // rax
  __int128 *v14; // rdi
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int16 v17; // ax
  unsigned __int64 v18; // r8
  unsigned int v19; // ecx
  __int64 v20; // rcx
  int v21; // eax
  __int128 v22; // [rsp+20h] [rbp-88h] BYREF
  __int128 v23; // [rsp+30h] [rbp-78h] BYREF
  __int128 v24; // [rsp+40h] [rbp-68h]
  __int128 v25; // [rsp+50h] [rbp-58h]

  v5 = *((_WORD *)a3 + 4);
  v6 = *a3;
  v9 = *a4;
  v10 = *a2;
  v23 = 0LL;
  v11 = *a5;
  WORD4(v23) = v5;
  v12 = *((_WORD *)a4 + 4);
  v24 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&v23 = v6;
  WORD4(v24) = v12;
  result = *((unsigned __int16 *)a5 + 4);
  *(_QWORD *)&v24 = v9;
  WORD4(v25) = result;
  *(_QWORD *)&v25 = v11;
  if ( v10 == a2 )
    return result;
  do
  {
    result = 0xFFFFFFFFLL;
    v14 = &v23;
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_QWORD *)v14;
      if ( *(_QWORD *)v14 )
      {
        v17 = *((_WORD *)v14 + 4);
        v22 = 0LL;
        WORD4(v22) = v17;
        *(_QWORD *)&v22 = v16 & *(v10 - 18);
        if ( !(_QWORD)v22 )
        {
          result = 0xFFFFFFFFLL;
          goto LABEL_13;
        }
        result = sub_1402FE1C4(&v22);
        if ( (_DWORD)result != -1 )
          break;
      }
LABEL_13:
      ++v15;
      ++v14;
      if ( v15 >= 3 )
        goto LABEL_11;
    }
    v18 = 4LL * (unsigned int)result;
    a1[v18 / 4 + 1] += 10000LL
                     * *(v10 - 2)
                     / ((unsigned __int64)*(unsigned int *)(qword_140D088C0[(unsigned int)result] + 68)
                      * qword_140C2AC10);
    if ( *a1 <= a1[v18 / 4 + 1] )
    {
      v21 = *(_DWORD *)&dword_140D0E5E0[v18] & 0x3F;
      v6 &= ~(1LL << (dword_140D0E5E0[v18] & 0x3F));
      v9 &= ~(1LL << (dword_140D0E5E0[v18] & 0x3F));
      *(_QWORD *)&v23 = v6;
      v11 &= ~(1LL << v21);
      *(_QWORD *)&v24 = v9;
      *(_QWORD *)&v25 = v11;
    }
    v19 = *(_DWORD *)&dword_140D0E5E0[v18];
    *(_DWORD *)((char *)v10 - 22) = 0;
    *((_WORD *)v10 - 9) = 0;
    *((_WORD *)v10 - 12) = v19 >> 6;
    *(v10 - 4) = 1LL << (v19 & 0x3F);
    v20 = *v10;
    result = v10[1];
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || *(_QWORD **)result != v10 )
      __fastfail(3u);
    *(_QWORD *)result = v20;
    *(_QWORD *)(v20 + 8) = result;
LABEL_11:
    v10 = (_QWORD *)*v10;
  }
  while ( v10 != a2 );
  return result;
}
