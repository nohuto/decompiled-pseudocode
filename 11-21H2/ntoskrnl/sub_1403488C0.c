/*
 * XREFs of sub_1403488C0 @ 0x1403488C0
 * Callers:
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140418160 @ 0x140418160 (sub_140418160.c)
 *     sub_140559FA8 @ 0x140559FA8 (sub_140559FA8.c)
 * Callees:
 *     sub_14022B4B0 @ 0x14022B4B0 (sub_14022B4B0.c)
 *     sub_1402A3680 @ 0x1402A3680 (sub_1402A3680.c)
 *     sub_140348980 @ 0x140348980 (sub_140348980.c)
 */

struct _KTHREAD *__fastcall sub_1403488C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  struct _KTHREAD *result; // rax

  v2 = *(_DWORD *)(a1 + 16);
  if ( (v2 & 0x100) != 0 )
    return sub_14022B4B0(*(_DWORD *)(a1 + 56), a2);
  if ( (v2 & 0x200) != 0 )
    return sub_1402A3680(*(_DWORD *)(a1 + 56), a2);
  result = *(struct _KTHREAD **)(a1 + 56);
  if ( (__int64)result >= 0 )
    return (struct _KTHREAD *)sub_140348980((unsigned int)result);
  return result;
}
