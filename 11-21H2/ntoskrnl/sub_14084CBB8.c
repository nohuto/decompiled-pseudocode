/*
 * XREFs of sub_14084CBB8 @ 0x14084CBB8
 * Callers:
 *     sub_140B22004 @ 0x140B22004 (sub_140B22004.c)
 * Callees:
 *     sub_1406959BC @ 0x1406959BC (sub_1406959BC.c)
 *     sub_1407E5590 @ 0x1407E5590 (sub_1407E5590.c)
 */

NTSTATUS sub_14084CBB8()
{
  NTSTATUS result; // eax

  result = sub_1406959BC(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa", 0x211u, &qword_140D3B098);
  if ( result >= 0 )
  {
    qword_140D00C00 = (__int64)sub_14084CA10;
    qword_140D00C08 = 0LL;
    qword_140D00BF0 = 0LL;
    return sub_1407E5590((int)qword_140D3B098, 0, (__int64)&qword_140D00BF0, 1LL, &unk_140D00BE0, 5, 0, 0LL, 0, 1);
  }
  return result;
}
