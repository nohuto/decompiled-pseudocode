/*
 * XREFs of sub_140AA4820 @ 0x140AA4820
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA4820(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) == 1LL )
    return sub_140A8C924(0xC4u, 0x3FuLL, *(_QWORD *)(a1 + 8), 1uLL, 0LL);
  return result;
}
