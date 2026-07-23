/*
 * XREFs of SeDeleteClientSecurity @ 0x1407A8070
 * Callers:
 *     sub_14066B464 @ 0x14066B464 (sub_14066B464.c)
 *     sub_1406BFD10 @ 0x1406BFD10 (sub_1406BFD10.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_14074D800 @ 0x14074D800 (sub_14074D800.c)
 *     sub_1407A7300 @ 0x1407A7300 (sub_1407A7300.c)
 *     sub_1407A9720 @ 0x1407A9720 (sub_1407A9720.c)
 *     sub_1407B0C70 @ 0x1407B0C70 (sub_1407B0C70.c)
 *     sub_14080C0F4 @ 0x14080C0F4 (sub_14080C0F4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall SeDeleteClientSecurity(__int64 a1)
{
  _DWORD *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(_DWORD **)(a1 + 16);
  if ( v1[48] == 1 || v1 )
    return ObfDereferenceObjectWithTag(v1, 0x63436553u);
  return result;
}
