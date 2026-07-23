/*
 * XREFs of sub_140371654 @ 0x140371654
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_140364794 @ 0x140364794 (sub_140364794.c)
 *     sub_1403715C4 @ 0x1403715C4 (sub_1403715C4.c)
 * Callees:
 *     sub_1403716E8 @ 0x1403716E8 (sub_1403716E8.c)
 *     sub_1403719B4 @ 0x1403719B4 (sub_1403719B4.c)
 */

_BOOL8 __fastcall sub_140371654(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v6 = *((unsigned __int8 *)qword_140016470 + v3);
  if ( (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) != 0 )
  {
    v7 = sub_1403716E8(a1, *((unsigned __int8 *)qword_140016470 + v3));
    if ( a3 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
        sub_1403719B4(a1, (unsigned int)v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 128) & 1) == 0;
}
