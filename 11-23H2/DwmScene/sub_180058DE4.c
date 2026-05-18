/*
 * XREFs of sub_180058DE4 @ 0x180058DE4
 * Callers:
 *     sub_18005D470 @ 0x18005D470 (sub_18005D470.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001C7B4 @ 0x18001C7B4 (sub_18001C7B4.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_180059360 @ 0x180059360 (sub_180059360.c)
 *     sub_1800598E0 @ 0x1800598E0 (sub_1800598E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180058DE4(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  int v9; // r12d
  int v10; // eax
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h]

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
      if ( *((_DWORD *)v7 + 8) < v9
        || *((_DWORD *)v7 + 8) <= v9 && (unsigned __int8)sub_18001C7B4(v7 + 5, (_QWORD *)a3 + 1) )
      {
        DWORD2(v14) = 0;
        v7 = (__int64 *)v7[2];
      }
      else
      {
        DWORD2(v14) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25)
    || (v10 = *((_DWORD *)v8 + 8), *a3 < v10)
    || *a3 <= v10 && (unsigned __int8)sub_18001C7B4((_QWORD *)a3 + 1, v8 + 5) )
  {
    if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
      sub_18001DDFC();
    *(_QWORD *)&v13 = a1;
    v11 = sub_18001090C(0x58uLL);
    sub_180059360(v11 + 32, a3);
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_QWORD *)(v11 + 80) = 0LL;
    *(_QWORD *)v11 = v6;
    *(_QWORD *)(v11 + 8) = v6;
    *(_QWORD *)(v11 + 16) = v6;
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_1800598E0(&v13);
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
