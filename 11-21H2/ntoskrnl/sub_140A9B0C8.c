/*
 * XREFs of sub_140A9B0C8 @ 0x140A9B0C8
 * Callers:
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140B27E30 @ 0x140B27E30 (sub_140B27E30.c)
 * Callees:
 *     sub_140A9B0FC @ 0x140A9B0FC (sub_140A9B0FC.c)
 */

__int64 __fastcall sub_140A9B0C8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (dword_140C29FC0 & 0x800) != 0 && (qword_140D01450 & 0x400000) == 0 )
    return sub_140A9B0FC(1LL, a2);
  return result;
}
