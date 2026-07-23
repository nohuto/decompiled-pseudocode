/*
 * XREFs of sub_14059AA94 @ 0x14059AA94
 * Callers:
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

_BOOL8 __fastcall sub_14059AA94(unsigned __int64 a1)
{
  __int64 v2; // rax

  v2 = sub_140317A10(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  if ( (v2 & 0x80u) == 0LL )
    v2 = sub_140317A10(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return v2 < 0;
}
