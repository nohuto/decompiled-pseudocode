/*
 * XREFs of PsCreateSiloContext @ 0x140692CD0
 * Callers:
 *     sub_140692C60 @ 0x140692C60 (sub_140692C60.c)
 *     sub_1409ABAC0 @ 0x1409ABAC0 (sub_1409ABAC0.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 * Callees:
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall PsCreateSiloContext(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  int v8; // edx
  int v9; // r9d

  v5 = 0LL;
  if ( a3 == 1 )
  {
    v8 = (int)PsSiloContextPagedType;
  }
  else
  {
    if ( a3 != 512 )
      return 3221225485LL;
    v8 = (int)PsSiloContextNonPagedType;
  }
  v9 = sub_14072B3B0(0, v8, 0, 0);
  if ( v9 >= 0 )
  {
    if ( (MEMORY[0xFFFFFFFFFFFFFFEA] & 0x40) != 0 )
      v5 = (_QWORD *)(*(_QWORD *)(-48LL - byte_140C25440[MEMORY[0xFFFFFFFFFFFFFFEA] & 0x7F]) + 32LL);
    *v5 = a1;
    v5[1] = a4;
    *a5 = 0LL;
  }
  return (unsigned int)v9;
}
