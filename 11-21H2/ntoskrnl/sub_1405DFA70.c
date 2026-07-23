/*
 * XREFs of sub_1405DFA70 @ 0x1405DFA70
 * Callers:
 *     sub_1405DDBE0 @ 0x1405DDBE0 (sub_1405DDBE0.c)
 *     sub_1405DDEE4 @ 0x1405DDEE4 (sub_1405DDEE4.c)
 *     sub_1405DDFFC @ 0x1405DDFFC (sub_1405DDFFC.c)
 *     sub_1405DE108 @ 0x1405DE108 (sub_1405DE108.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_1405DFA70(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4)
{
  unsigned int v4; // edi
  __int64 result; // rax

  v4 = BugCheckParameter2;
  result = sub_14042A5E0((unsigned int)BugCheckParameter2, BugCheckParameter4);
  if ( !(_BYTE)result )
    sub_1405CAE6C(0x668uLL, v4, BugCheckParameter3, BugCheckParameter4);
  return result;
}
