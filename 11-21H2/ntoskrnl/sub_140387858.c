/*
 * XREFs of sub_140387858 @ 0x140387858
 * Callers:
 *     sub_1402541A8 @ 0x1402541A8 (sub_1402541A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140387858(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 result; // rax

  v1 = a1[150];
  a1[149] += a1[2];
  if ( v1 <= a1[3] )
    v1 = a1[3];
  a1[151] += a1[4];
  a1[152] += a1[5];
  v3 = a1[6];
  a1[150] = v1;
  v4 = 10LL;
  v5 = a1[153];
  if ( v5 <= v3 )
    v5 = v3;
  a1[154] += a1[7];
  a1[155] += a1[8];
  v6 = a1[9];
  a1[153] = v5;
  v7 = a1[156];
  if ( v7 <= v6 )
    v7 = v6;
  a1[156] = v7;
  v8 = a1 + 157;
  do
  {
    *v8 += *(v8 - 147);
    ++v8;
    --v4;
  }
  while ( v4 );
  v9 = a1[167];
  v10 = 12LL;
  if ( v9 <= a1[20] )
    v9 = a1[20];
  v11 = a1[21];
  a1[167] = v9;
  v12 = a1[168];
  if ( v12 <= v11 )
    v12 = v11;
  a1[217] += a1[70];
  a1[218] += a1[71];
  a1[219] += a1[72];
  v13 = a1[73];
  a1[168] = v12;
  v14 = a1[220];
  if ( v14 <= v13 )
    v14 = v13;
  v15 = a1[74];
  a1[220] = v14;
  v16 = a1[221];
  if ( v16 <= v15 )
    v16 = v15;
  a1[270] += a1[123];
  v17 = a1[124];
  a1[221] = v16;
  v18 = a1[271];
  if ( v18 <= v17 )
    v18 = v17;
  a1[271] = v18;
  v19 = a1 + 169;
  do
  {
    *v19 += *(v19 - 147);
    v19[12] += *(v19 - 135);
    v19[24] += *(v19 - 123);
    v19[36] += *(v19 - 111);
    v19[53] += *(v19 - 94);
    v19[65] += *(v19 - 82);
    v19[77] += *(v19 - 70);
    v19[89] += *(v19 - 58);
    v19[103] += *(v19 - 44);
    result = *(v19 - 32);
    v19[115] += result;
    ++v19;
    --v10;
  }
  while ( v10 );
  return result;
}
