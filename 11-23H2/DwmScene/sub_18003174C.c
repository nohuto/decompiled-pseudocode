/*
 * XREFs of sub_18003174C @ 0x18003174C
 * Callers:
 *     sub_1800317B8 @ 0x1800317B8 (sub_1800317B8.c)
 *     sub_18005FAE8 @ 0x18005FAE8 (sub_18005FAE8.c)
 *     sub_1800E526D @ 0x1800E526D (sub_1800E526D.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18003174C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x20uLL);
  return result;
}
