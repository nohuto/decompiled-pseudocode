/*
 * XREFs of sub_1402A2204 @ 0x1402A2204
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
 *     sub_14071C238 @ 0x14071C238 (sub_14071C238.c)
 *     sub_14071C25C @ 0x14071C25C (sub_14071C25C.c)
 */

__int64 __fastcall sub_1402A2204(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  sub_14071C25C();
  if ( (*(_DWORD *)(a2 + 48) & 7) != 0 )
  {
    sub_14071C238();
    return 3222863874LL;
  }
  else
  {
    v4 = *(_QWORD **)(a2 + 24);
    if ( *v4 != a2 + 16 )
      __fastfail(3u);
    *a1 = a2 + 16;
    a1[1] = v4;
    *v4 = a1;
    *(_QWORD *)(a2 + 24) = a1;
    sub_14071C238();
    result = 0LL;
    a1[7] = a2;
  }
  return result;
}
