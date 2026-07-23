/*
 * XREFs of sub_140970D2C @ 0x140970D2C
 * Callers:
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_14080C400 @ 0x14080C400 (sub_14080C400.c)
 */

void __fastcall sub_140970D2C(_RTL_BITMAP_EX *a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // r8d

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      v4 = (_QWORD *)sub_140313C70(*(_QWORD *)(a2 + 24));
      sub_1402BB6D0((__int64)&qword_140C534C0, v4, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  sub_14080C400(a1);
}
