/*
 * XREFs of sub_1407F7E04 @ 0x1407F7E04
 * Callers:
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407F7E04(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 result; // rax

  v4 = *a1 - *a2;
  if ( *a2 > *a1 )
    v4 = 0LL;
  *a1 = v4;
  v5 = a1[1];
  v6 = a2[1];
  v7 = v5 - v6;
  if ( v6 > v5 )
    v7 = 0LL;
  a1[1] = v7;
  v8 = a2[3];
  v9 = a1[3] - v8;
  if ( v8 > a1[3] )
    v9 = 0LL;
  a1[3] = v9;
  v10 = a2[5];
  v11 = a1[5] - v10;
  if ( v10 > a1[5] )
    v11 = 0LL;
  a1[5] = v11;
  v12 = a2[6];
  v13 = a1[6] - v12;
  if ( v12 > a1[6] )
    v13 = 0LL;
  a1[6] = v13;
  v14 = a2[7];
  v15 = a1[7] - v14;
  if ( v14 > a1[7] )
    v15 = 0LL;
  a1[7] = v15;
  v16 = a2[8];
  v17 = a1[8] - v16;
  if ( v16 > a1[8] )
    v17 = 0LL;
  a1[8] = v17;
  v18 = a2[9];
  v19 = a1[9] - v18;
  if ( v18 > a1[9] )
    v19 = 0LL;
  a1[9] = v19;
  v20 = a2[10];
  result = a1[10] - v20;
  if ( v20 > a1[10] )
    result = 0LL;
  a1[10] = result;
  return result;
}
