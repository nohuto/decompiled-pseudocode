/*
 * XREFs of sub_140960278 @ 0x140960278
 * Callers:
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     <none>
 */

__int64 sub_140960278()
{
  __int64 result; // rax

  result = (unsigned int)-(*(_DWORD *)(qword_140D088C0[0] + 152) * *(_DWORD *)(qword_140D088C0[0] + 156));
  *(_DWORD *)(qword_140D088C0[0] + 220) = result;
  return result;
}
