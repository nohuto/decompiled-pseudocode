/*
 * XREFs of sub_140767594 @ 0x140767594
 * Callers:
 *     sub_140767538 @ 0x140767538 (sub_140767538.c)
 *     sub_14095846C @ 0x14095846C (sub_14095846C.c)
 * Callees:
 *     sub_140767650 @ 0x140767650 (sub_140767650.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 */

_DWORD *__fastcall sub_140767594(__int64 a1, int a2)
{
  int v3; // esi
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v3 = a1;
  v4 = (_DWORD *)sub_140767730(a1, 256LL, 24 * a2 - 8 + 24LL, 1416654416LL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0;
    v4[2] = 0;
    v4[3] = v3;
    v4[1] = a2;
    sub_140767650(v4);
  }
  return v5;
}
