/*
 * XREFs of sub_180031794 @ 0x180031794
 * Callers:
 *     sub_18002FC2C @ 0x18002FC2C (sub_18002FC2C.c)
 *     sub_18005EE28 @ 0x18005EE28 (sub_18005EE28.c)
 *     sub_18005FBC0 @ 0x18005FBC0 (sub_18005FBC0.c)
 *     sub_1800640AC @ 0x1800640AC (sub_1800640AC.c)
 *     sub_1800C891C @ 0x1800C891C (sub_1800C891C.c)
 *     sub_1800DB070 @ 0x1800DB070 (sub_1800DB070.c)
 *     sub_1800E52B5 @ 0x1800E52B5 (sub_1800E52B5.c)
 *     sub_1800E7B7E @ 0x1800E7B7E (sub_1800E7B7E.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_180031794(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x30uLL);
  return result;
}
