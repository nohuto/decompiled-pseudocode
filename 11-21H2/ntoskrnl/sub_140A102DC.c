/*
 * XREFs of sub_140A102DC @ 0x140A102DC
 * Callers:
 *     sub_140A101C8 @ 0x140A101C8 (sub_140A101C8.c)
 * Callees:
 *     sub_1406E9DE4 @ 0x1406E9DE4 (sub_1406E9DE4.c)
 *     sub_1407E4008 @ 0x1407E4008 (sub_1407E4008.c)
 *     sub_1407E4280 @ 0x1407E4280 (sub_1407E4280.c)
 *     sub_140A0EE10 @ 0x140A0EE10 (sub_140A0EE10.c)
 */

__int64 __fastcall sub_140A102DC(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r8d
  unsigned int v5; // edx
  _BYTE *v7; // rsi
  int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // r9d
  __int64 v13; // [rsp+38h] [rbp-40h]
  unsigned __int8 v14; // [rsp+80h] [rbp+8h] BYREF
  char *v15; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  v15 = 0LL;
  v7 = (_BYTE *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v8 = sub_1407E4008(v7, v5 & 0xFFFFFFF, (v4 & 2) == 0);
  if ( v8 >= 0 )
  {
    v8 = sub_140A0EE10(v7, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, &Mdl, &v15);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 56);
      v10 = a2[1] & 0xFFFFFFF;
      v11 = a2[2] & 0xFFFFFFF;
      v14 = 0;
      v8 = sub_1407E4280(1, v7, v15, v11, (__int64 *)(v9 + 72), v10, (__int128 *)(v9 + 80), v13, &v14);
      if ( v8 >= 0 )
        *a2 = *a2 & 0xFFFFFC03 | (4 * v14);
    }
  }
  sub_1406E9DE4(Mdl);
  return (unsigned int)v8;
}
