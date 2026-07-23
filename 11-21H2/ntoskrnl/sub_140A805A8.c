/*
 * XREFs of sub_140A805A8 @ 0x140A805A8
 * Callers:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 * Callees:
 *     sub_140A80FC8 @ 0x140A80FC8 (sub_140A80FC8.c)
 *     sub_140A9D190 @ 0x140A9D190 (sub_140A9D190.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A805A8(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  sub_140A80FC8(a1);
  result = sub_140AA5A48(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      sub_140A9D190();
    return sub_140AA5BCC(v3);
  }
  return result;
}
