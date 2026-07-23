/*
 * XREFs of sub_1403C77D4 @ 0x1403C77D4
 * Callers:
 *     sub_140922DB4 @ 0x140922DB4 (sub_140922DB4.c)
 *     sub_14092317C @ 0x14092317C (sub_14092317C.c)
 *     sub_140B154A4 @ 0x140B154A4 (sub_140B154A4.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403C77D4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+0h] [rbp-8h]

  _disable();
  *(_DWORD *)(a1 + 8) = HIDWORD(a2);
  result = v3 >> 9;
  *(_QWORD *)a1 = a2;
  if ( (v3 & 0x200) != 0 )
    _enable();
  return result;
}
