/*
 * XREFs of sub_14057A864 @ 0x14057A864
 * Callers:
 *     sub_140A69EB4 @ 0x140A69EB4 (sub_140A69EB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14057A864(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 34192) = a1 + 34184;
  *(_QWORD *)(a1 + 34184) = a1 + 34184;
  *(_DWORD *)(a1 + 216) = 424 * *(_DWORD *)(a1 + 36) + 128;
  result = qword_140C2BD08;
  *(_QWORD *)(a1 + 34520) = qword_140C2BD08;
  return result;
}
