/*
 * XREFs of sub_14045CC5A @ 0x14045CC5A
 * Callers:
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 * Callees:
 *     sub_1402783C0 @ 0x1402783C0 (sub_1402783C0.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14045CC5A(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int *a6, int a7)
{
  int v8; // esi
  unsigned int *v10; // rdx
  int v11; // eax
  __int64 v12; // r14
  unsigned int *v13; // r15
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  _QWORD v21[8]; // [rsp+30h] [rbp-40h] BYREF
  int v24; // [rsp+C8h] [rbp+58h] BYREF

  v24 = 0;
  v8 = a3;
  memset(v21, 0, sizeof(v21));
  v10 = a6;
  v21[6] = 0LL;
  v21[3] = a5;
  v11 = 0x800000;
  v12 = *a6;
  v21[4] = a4;
  v21[5] = a4;
  LOBYTE(v21[7]) = 0;
  v13 = &a6[4 * v12 + 4];
  if ( a4 == 512 )
  {
    v11 = 41943040;
  }
  else if ( a4 == 16 )
  {
    v11 = 25165824;
  }
  v14 = v11 | 0x8000000;
  if ( !a7 )
    v14 = v11;
  do
  {
LABEL_19:
    if ( !(_DWORD)v12 )
      return -1LL;
    v12 = (unsigned int)(v12 - 1);
  }
  while ( v13[2 * v12] != a2 || v13[2 * v12 + 1] != v8 );
  v15 = *(_QWORD *)&v10[4 * (unsigned int)v12 + 6];
  v21[0] = *(_QWORD *)&v10[4 * (unsigned int)v12 + 4];
  for ( v21[1] = v15 + v21[0]; ; v21[1] = v16 - v17 )
  {
    if ( !(unsigned int)sub_1402783C0((__int64)v21) )
      goto LABEL_18;
    v16 = v21[1];
    v17 = v21[5];
    v24 = 0;
    v18 = v21[1] - v21[5];
    v19 = sub_140278460(a1, 48LL * (v21[1] - v21[5]) - 0x220000000000LL, v21[5], v14, &v24);
    if ( !v19 )
      break;
    if ( v19 > v18 - v21[0] )
    {
      v21[3] = v16 - v19 - 1;
LABEL_18:
      v8 = a3;
      v10 = a6;
      goto LABEL_19;
    }
    if ( v19 > v17 )
      v17 = v19;
  }
  return v18;
}
