/*
 * XREFs of sub_140B0728C @ 0x140B0728C
 * Callers:
 *     sub_140B071D0 @ 0x140B071D0 (sub_140B071D0.c)
 * Callees:
 *     sub_14027A0F4 @ 0x14027A0F4 (sub_14027A0F4.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140B0751C @ 0x140B0751C (sub_140B0751C.c)
 *     sub_140B076FC @ 0x140B076FC (sub_140B076FC.c)
 */

__int64 __fastcall sub_140B0728C(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  _DWORD *v14; // rbx
  unsigned __int64 *v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 result; // rax
  int *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  _QWORD v23[42]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v23, 0, sizeof(v23));
  *a2 = 0LL;
  v5 = 0;
  v23[2] = a3;
  LODWORD(v6) = 1;
  do
  {
    v7 = (unsigned int)v6;
    ++v5;
    v6 = (unsigned int)(v6 + 1);
    v8 = 3 * v7;
    LODWORD(v23[v8]) = v5;
    v23[v8 + 2] = 0x100000000000LL;
  }
  while ( v5 < 4 );
  v9 = 3 * v6;
  LODWORD(v23[v9]) = 5;
  v10 = (_DWORD *)&v23[3] + 1;
  v23[v9 + 2] = 0x100000000000LL;
  v11 = 5LL;
  do
  {
    *v10 = sub_140363220(1);
    v10 += 6;
    --v11;
  }
  while ( v11 );
  qsort(&v23[3], 5uLL, 0x18uLL, sub_140B270A0);
  LODWORD(v23[18]) = 6;
  v23[20] = 0x28000000000LL;
  LODWORD(v23[21]) = 7;
  v12 = sub_14027A0F4();
  LODWORD(v23[27]) = 9;
  LODWORD(v23[30]) = 10;
  LODWORD(v23[33]) = 11;
  LODWORD(v23[36]) = 12;
  LODWORD(v23[39]) = 13;
  v23[29] = 0x8000000000LL;
  v23[23] = ((v12 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) + 0x8000000000LL;
  v13 = 8LL;
  LODWORD(v23[24]) = 8;
  v23[26] = 0x10000000000LL;
  v14 = (_DWORD *)&v23[18] + 1;
  v23[32] = 0x8000000000LL;
  v23[35] = 0x8000000000LL;
  v23[38] = 0x8000000000LL;
  v23[41] = 0x8000000000LL;
  do
  {
    *v14 = sub_140363220(1);
    v14 += 6;
    --v13;
  }
  while ( v13 );
  qsort(&v23[21], 7uLL, 0x18uLL, sub_140B270A0);
  v15 = &v23[2];
  v16 = 14LL;
  do
  {
    if ( *((_DWORD *)v15 - 4) == 13 )
    {
      v22 = 3LL;
      result = (__int64)((8 * ((0x140000000uLL >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16;
      do
      {
        result = result << 25 >> 16;
        --v22;
      }
      while ( v22 );
    }
    else
    {
      v17 = (*v15 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL;
      *v15 = v17;
      result = sub_140B0751C(v17 >> 39);
      if ( !result )
        return result;
    }
    *(v15 - 1) = result;
    LODWORD(v13) = v13 + 1;
    v15 += 3;
  }
  while ( (unsigned int)v13 < 0xE );
  v19 = (int *)v23;
  do
  {
    v20 = *((_QWORD *)v19 + 1);
    v21 = *v19;
    v19 += 6;
    v21 *= 2LL;
    qword_140C54050[v21] = v20;
    qword_140C54058[v21] = *((_QWORD *)v19 - 1);
    --v16;
  }
  while ( v16 );
  sub_140B076FC();
  return 1LL;
}
