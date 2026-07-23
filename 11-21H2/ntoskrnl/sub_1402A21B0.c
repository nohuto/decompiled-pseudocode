/*
 * XREFs of sub_1402A21B0 @ 0x1402A21B0
 * Callers:
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 * Callees:
 *     sub_14071B250 @ 0x14071B250 (sub_14071B250.c)
 */

__int64 __fastcall sub_1402A21B0(_QWORD *a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r8
  ULONG_PTR **v4; // rdx
  ULONG_PTR *v5; // rax
  __int64 result; // rax

  v2 = a2 + 208;
  v4 = *(ULONG_PTR ***)(a2 + 216);
  v5 = a1 + 4;
  if ( *v4 != (ULONG_PTR *)v2 )
    __fastfail(3u);
  *v5 = v2;
  a1[5] = v4;
  *v4 = v5;
  *(_QWORD *)(v2 + 8) = v5;
  result = sub_14071B250(a2);
  a1[6] = a2;
  return result;
}
