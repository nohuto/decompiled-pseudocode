/*
 * XREFs of IoSetGenericIrpExtension @ 0x140387790
 * Callers:
 *     sub_140652638 @ 0x140652638 (sub_140652638.c)
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, __int64 a3, __int64 a4)
{
  size_t v4; // rbx
  int v6; // edx
  _WORD *v7; // rax

  v4 = (unsigned __int16)a3;
  if ( (unsigned __int16)a3 > 4u )
    return 3221225485LL;
  v6 = 2;
  if ( !(_BYTE)a4 && sub_14020C0F0(a1, 2u) )
    return 3221225505LL;
  v7 = sub_14020C420(a1, v6, a3, a4);
  if ( !v7 )
    return 3221225626LL;
  memmove(v7 + 2, a2, v4);
  return 0LL;
}
