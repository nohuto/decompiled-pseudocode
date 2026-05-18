/*
 * XREFs of sub_18001D2A8 @ 0x18001D2A8
 * Callers:
 *     sub_18001D32C @ 0x18001D32C (sub_18001D32C.c)
 *     sub_18002B8B4 @ 0x18002B8B4 (sub_18002B8B4.c)
 *     sub_1800319AC @ 0x1800319AC (sub_1800319AC.c)
 *     sub_1800572E0 @ 0x1800572E0 (sub_1800572E0.c)
 *     sub_18005FB90 @ 0x18005FB90 (sub_18005FB90.c)
 *     sub_1800C8A10 @ 0x1800C8A10 (sub_1800C8A10.c)
 *     sub_1800E47CF @ 0x1800E47CF (sub_1800E47CF.c)
 *     sub_1800E7164 @ 0x1800E7164 (sub_1800E7164.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18001D2A8(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x48uLL);
  return result;
}
