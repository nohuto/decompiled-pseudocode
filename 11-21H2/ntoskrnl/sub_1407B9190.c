/*
 * XREFs of sub_1407B9190 @ 0x1407B9190
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406A2588 @ 0x1406A2588 (sub_1406A2588.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1406C3FB4 @ 0x1406C3FB4 (sub_1406C3FB4.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_14096D6A8 @ 0x14096D6A8 (sub_14096D6A8.c)
 * Callees:
 *     KeGetCurrentNodeNumber @ 0x140221E50 (KeGetCurrentNodeNumber.c)
 *     sub_140246BC8 @ 0x140246BC8 (sub_140246BC8.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     sub_14030B950 @ 0x14030B950 (sub_14030B950.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 */

_DWORD *__fastcall sub_1407B9190(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v9; // eax
  _DWORD *v10; // rax
  _DWORD *v11; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || sub_140246BC8(a1)) )
    return 0LL;
  LOWORD(v9) = KeGetCurrentNodeNumber();
  v10 = sub_14030B860(64LL, 0x48uLL, 0x65536D4Du, v9 | 0x80000000);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v10[16] = 2;
  *((_QWORD *)v10 + 1) = a2;
  *((_QWORD *)v10 + 2) = a3;
  if ( (a4 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 8;
  }
  else if ( (a4 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0xA;
  }
  else
  {
    if ( (a4 & 2) == 0 )
      goto LABEL_7;
    LODWORD(a2) = a2 | 9;
  }
  v10[2] = a2;
LABEL_7:
  if ( (a5 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 0x20;
    v10[2] = a2;
  }
  if ( (a5 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0x40;
    v10[2] = a2;
  }
  if ( (a5 & 8) != 0 )
  {
    LODWORD(a2) = a2 | 0x80;
    v10[2] = a2;
  }
  if ( a4 < 0 )
  {
    LODWORD(a2) = a2 | 4;
    v10[2] = a2;
  }
  if ( (a4 & 0x40000000) != 0 )
  {
    LODWORD(a2) = a2 | 0x10;
    v10[2] = a2;
  }
  if ( (a4 & 0x20000000) != 0 )
    v10[2] = a2 | 0x100;
  sub_14030BA20(a1, (unsigned __int64 *)v10, 1);
  sub_14030B950(a1, 1LL, 1);
  return v11;
}
