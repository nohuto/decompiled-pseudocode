/*
 * XREFs of sub_140B51A8C @ 0x140B51A8C
 * Callers:
 *     sub_140AF5478 @ 0x140AF5478 (sub_140AF5478.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403CC0F0 @ 0x1403CC0F0 (sub_1403CC0F0.c)
 */

__int64 __fastcall sub_140B51A8C(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 result; // rax
  BOOL v4; // ebp

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = 0LL;
  if ( (__int64)(v1 << 25) >> 16 << 25 >> 16 < (unsigned __int64)qword_140D686D0 )
  {
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(a1 + 32) = 0;
    v4 = 0;
    if ( sub_140317A80(v1) )
      v4 = sub_140229550() != 0;
    *(_QWORD *)v1 = 0LL;
    if ( v4 )
      sub_1402294F0(v1, 0LL);
    return sub_1403CC0F0(a1);
  }
  return result;
}
