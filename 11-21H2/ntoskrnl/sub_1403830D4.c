/*
 * XREFs of sub_1403830D4 @ 0x1403830D4
 * Callers:
 *     sub_1403803F8 @ 0x1403803F8 (sub_1403803F8.c)
 *     sub_140380950 @ 0x140380950 (sub_140380950.c)
 *     sub_140380E44 @ 0x140380E44 (sub_140380E44.c)
 *     sub_140382E98 @ 0x140382E98 (sub_140382E98.c)
 *     sub_1403831B8 @ 0x1403831B8 (sub_1403831B8.c)
 *     sub_1403833EC @ 0x1403833EC (sub_1403833EC.c)
 * Callees:
 *     sub_140383138 @ 0x140383138 (sub_140383138.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_BYTE *__fastcall sub_1403830D4(__int64 a1, __int64 a2, char a3)
{
  char v4; // di
  _BYTE *v5; // rax
  _BYTE *v6; // rbx

  v4 = a2;
  v5 = (_BYTE *)sub_140383138((a1 + 16) & -(__int64)(a1 != 0), a2, (unsigned int)a2);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x1000uLL);
    v6[2] = a3;
    v6[3] = v4;
  }
  return v6;
}
