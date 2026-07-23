/*
 * XREFs of sub_140767538 @ 0x140767538
 * Callers:
 *     sub_140767F88 @ 0x140767F88 (sub_140767F88.c)
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 * Callees:
 *     sub_140767594 @ 0x140767594 (sub_140767594.c)
 *     sub_140767600 @ 0x140767600 (sub_140767600.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 */

_BYTE *__fastcall sub_140767538(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *v2; // rbx
  __int64 v3; // rax

  v1 = a1;
  v2 = (_BYTE *)sub_140767730(a1, 256LL, 16LL, 1416654416LL);
  if ( v2 )
  {
    v3 = sub_140767594(v1, 8LL);
    *(_QWORD *)v2 = v3;
    if ( v3 )
    {
      v2[8] = 0;
    }
    else
    {
      sub_140767600(v2);
      return 0LL;
    }
  }
  return v2;
}
