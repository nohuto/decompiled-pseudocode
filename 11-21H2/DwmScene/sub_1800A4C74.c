/*
 * XREFs of sub_1800A4C74 @ 0x1800A4C74
 * Callers:
 *     sub_1800A5DE0 @ 0x1800A5DE0 (sub_1800A5DE0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800A56E4 @ 0x1800A56E4 (sub_1800A56E4.c)
 */

unsigned __int64 __fastcall sub_1800A4C74(__int64 *a1, char *a2, _DWORD *a3, __int64 *a4)
{
  char *v5; // r15
  __int64 v6; // rdi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // r8
  char *v20; // rdx
  char *v21; // rcx
  unsigned __int64 result; // rax

  v5 = &a2[-*a1];
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012170();
  v10 = v6 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v10;
    if ( v12 + v11 >= v10 )
      v13 = v12 + v11;
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v13 = 0xFFFFFFFFFFFFFFFLL;
  }
  v14 = 16 * v13;
  v15 = sub_180011088(v14);
  v16 = *a4;
  v17 = v15 + ((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v18 = v15;
  v19 = v15;
  *(_DWORD *)v17 = *a3;
  *(_QWORD *)(v17 + 8) = v16;
  v20 = (char *)a1[1];
  v21 = (char *)*a1;
  if ( a2 != v20 )
  {
    sub_1800A56E4(v21, a2, v15);
    v20 = (char *)a1[1];
    v19 = v17 + 16;
    v21 = a2;
  }
  sub_1800A56E4(v21, v20, v19);
  if ( *a1 )
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = v18;
  result = v17;
  a1[1] = v18 + 16 * v10;
  a1[2] = v14 + v18;
  return result;
}
