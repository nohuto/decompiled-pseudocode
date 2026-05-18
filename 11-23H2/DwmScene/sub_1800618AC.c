/*
 * XREFs of sub_1800618AC @ 0x1800618AC
 * Callers:
 *     sub_180062C58 @ 0x180062C58 (sub_180062C58.c)
 *     sub_18006E820 @ 0x18006E820 (sub_18006E820.c)
 *     sub_1800DF228 @ 0x1800DF228 (sub_1800DF228.c)
 * Callees:
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 */

char __fastcall sub_1800618AC(__int64 a1, __int64 *a2, __int64 a3)
{
  _WORD *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  char v8; // cl

  v3 = (_WORD *)a3;
  v4 = *(_QWORD *)(a3 + 16);
  v5 = (__int64)a2;
  if ( *(_QWORD *)(a3 + 24) >= 8uLL )
    v3 = *(_WORD **)a3;
  v6 = a2[2];
  if ( (unsigned __int64)a2[3] >= 8 )
    v5 = *a2;
  if ( v6 != v4 )
    return 1;
  v7 = sub_18001F810(v5, v3, v6);
  v8 = 0;
  if ( v7 )
    return 1;
  return v8;
}
