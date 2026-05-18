/*
 * XREFs of sub_180084204 @ 0x180084204
 * Callers:
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_180029304 @ 0x180029304 (sub_180029304.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180084204(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  *(_QWORD *)&v14 = v7;
  DWORD2(v14) = 0;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v14 = v7;
      if ( *((_DWORD *)v7 + 7) >= v9 )
      {
        DWORD2(v14) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v14) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 7) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001DDFC();
    v13 = (unsigned __int64)a1;
    v10 = sub_180029054(1uLL);
    v11 = sub_18001090C(v10);
    *(_QWORD *)(v11 + 28) = *a3;
    *(_QWORD *)v11 = v6;
    *(_QWORD *)(v11 + 8) = v6;
    *(_QWORD *)(v11 + 16) = v6;
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_180029304((__int64)&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v13, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
