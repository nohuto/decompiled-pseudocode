/*
 * XREFs of sub_140416CB0 @ 0x140416CB0
 * Callers:
 *     sub_1404111A0 @ 0x1404111A0 (sub_1404111A0.c)
 *     sub_1404112A0 @ 0x1404112A0 (sub_1404112A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140416CB0(unsigned __int64 *a1, int a2, unsigned __int64 *a3, int a4, _QWORD *a5)
{
  int v5; // r9d
  int v6; // r11d
  __int64 v7; // r10
  unsigned __int64 *v8; // rsi
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  int v12; // r13d
  unsigned __int128 v13; // rax
  unsigned __int128 v14; // rax
  unsigned __int128 v15; // rax
  int v16; // r11d
  unsigned __int64 v17; // rbx
  unsigned __int64 *v18; // rsi
  unsigned __int64 *v19; // rdi
  unsigned __int64 v20; // r12
  int v21; // r13d
  unsigned __int128 v22; // rax
  unsigned __int128 v23; // rax
  unsigned __int128 v24; // rax

  v5 = a4 + 1;
  v6 = 3 * (a2 + 1);
  v7 = (__int64)a5;
  v8 = a3;
  v9 = a5;
  v10 = *a1;
  v11 = 0LL;
  v12 = v5;
  do
  {
    v13 = v11 + v10 * (unsigned __int128)*v8;
    *v9 = v13;
    v14 = *((unsigned __int64 *)&v13 + 1) + v10 * (unsigned __int128)v8[1];
    v9[1] = v14;
    v15 = *((unsigned __int64 *)&v14 + 1) + v10 * (unsigned __int128)v8[2];
    v9[2] = v15;
    v11 = *((_QWORD *)&v15 + 1);
    v8 += 3;
    v9 += 3;
    --v12;
  }
  while ( v12 );
  *v9 = *((_QWORD *)&v15 + 1);
  v16 = v6 - 1;
  do
  {
    ++a1;
    v7 += 8LL;
    v17 = *a1;
    v18 = a3;
    v19 = (unsigned __int64 *)v7;
    v20 = 0LL;
    v21 = v5;
    do
    {
      v22 = v20 + *v19 + v17 * (unsigned __int128)*v18;
      *v19 = v22;
      v23 = *((unsigned __int64 *)&v22 + 1) + v19[1] + v17 * (unsigned __int128)v18[1];
      v19[1] = v23;
      v24 = *((unsigned __int64 *)&v23 + 1) + v19[2] + v17 * (unsigned __int128)v18[2];
      v19[2] = v24;
      v20 = *((_QWORD *)&v24 + 1);
      v18 += 3;
      v19 += 3;
      --v21;
    }
    while ( v21 );
    *v19 = *((_QWORD *)&v24 + 1);
    --v16;
  }
  while ( v16 );
  return v24;
}
