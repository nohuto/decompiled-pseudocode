/*
 * XREFs of sub_1800259F4 @ 0x1800259F4
 * Callers:
 *     sub_180025A78 @ 0x180025A78 (sub_180025A78.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_18004EA98 @ 0x18004EA98 (sub_18004EA98.c)
 *     sub_18004EAC8 @ 0x18004EAC8 (sub_18004EAC8.c)
 *     sub_18005ED3C @ 0x18005ED3C (sub_18005ED3C.c)
 *     sub_1800E4BEB @ 0x1800E4BEB (sub_1800E4BEB.c)
 *     sub_1800E7B90 @ 0x1800E7B90 (sub_1800E7B90.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_1800259F4(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x40uLL);
  return result;
}
