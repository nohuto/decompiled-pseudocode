/*
 * XREFs of sub_14045693C @ 0x14045693C
 * Callers:
 *     sub_140200750 @ 0x140200750 (sub_140200750.c)
 *     sub_140230618 @ 0x140230618 (sub_140230618.c)
 *     sub_140458C22 @ 0x140458C22 (sub_140458C22.c)
 *     sub_140458D38 @ 0x140458D38 (sub_140458D38.c)
 *     sub_140458E94 @ 0x140458E94 (sub_140458E94.c)
 *     sub_140458FD4 @ 0x140458FD4 (sub_140458FD4.c)
 *     sub_140459160 @ 0x140459160 (sub_140459160.c)
 *     sub_140503D4C @ 0x140503D4C (sub_140503D4C.c)
 *     sub_140504198 @ 0x140504198 (sub_140504198.c)
 *     sub_140504644 @ 0x140504644 (sub_140504644.c)
 *     sub_1405047F4 @ 0x1405047F4 (sub_1405047F4.c)
 *     sub_140513C1C @ 0x140513C1C (sub_140513C1C.c)
 *     sub_14051416C @ 0x14051416C (sub_14051416C.c)
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 */

__int64 __fastcall sub_14045693C(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( (unsigned int)sub_14023A8D0(a1) == 2 )
    return 1LL;
  result = (unsigned int)dword_140C09788;
  if ( *(_BYTE *)(v1 + 437) )
    return 1LL;
  return result;
}
