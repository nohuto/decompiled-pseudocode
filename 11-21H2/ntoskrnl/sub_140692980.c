/*
 * XREFs of sub_140692980 @ 0x140692980
 * Callers:
 *     sub_140690C50 @ 0x140690C50 (sub_140690C50.c)
 *     PsInsertPermanentSiloContext @ 0x1408643E0 (PsInsertPermanentSiloContext.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 * Callees:
 *     sub_140692ACC @ 0x140692ACC (sub_140692ACC.c)
 *     sub_140692C18 @ 0x140692C18 (sub_140692C18.c)
 *     sub_1406E5090 @ 0x1406E5090 (sub_1406E5090.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFEFC @ 0x1406FFEFC (sub_1406FFEFC.c)
 */

__int64 __fastcall sub_140692980(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v7; // rbp
  __int64 v8; // r8
  char v9; // r9
  _QWORD *v10; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v12; // esi

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v7 = qword_140D32A90;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 1496);
  if ( (unsigned __int8)sub_140692C18(a3) )
  {
    v10 = (*(_BYTE *)(v8 - 48 + 26) & 0x40) != 0
        ? (_QWORD *)(*(_QWORD *)(v8 - 48 - byte_140C25440[*(_BYTE *)(v8 - 48 + 26) & 0x7F]) + 32LL)
        : 0LL;
    if ( *v10 != a1 )
      return 3221225485LL;
  }
  if ( (v9 & 1) != 0 )
  {
    if ( !a1 )
      return 3221225520LL;
    CurrentThread = KeGetCurrentThread();
    sub_1406FFEFC(a1, CurrentThread);
    if ( (unsigned __int8)sub_1406E5090(a1) )
    {
      v12 = -1073740529;
      goto LABEL_11;
    }
  }
  else
  {
    CurrentThread = 0LL;
  }
  LOBYTE(v8) = 1;
  v12 = sub_140692ACC(v7, a2, v8, a3);
LABEL_11:
  if ( CurrentThread )
    sub_1406FFE90(a1, CurrentThread);
  return v12;
}
