/*
 * XREFs of sub_140604D38 @ 0x140604D38
 * Callers:
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407DE98C @ 0x1407DE98C (sub_1407DE98C.c)
 */

unsigned __int64 sub_140604D38()
{
  unsigned __int64 result; // rax

  result = HIDWORD(qword_140D01450);
  if ( (qword_140D01450 & 0x8000000000LL) != 0 && qword_140C1A820 )
  {
    memset(&unk_140D019A8, 0, 0xF0uLL);
    dword_140D019AC = -1;
    dword_140D019B0 = -1;
    result = sub_1407DE98C(&qword_140C1A820, &unk_140D019A8);
    if ( (result & 0x80000000) == 0LL )
    {
      qword_140C1A800 = qword_140D019E0;
      result = (unsigned int)dword_140C1A7E8 * (qword_140D019E0 / (unsigned __int64)(unsigned int)dword_140C1A7EC);
      qword_140C1A7F8 = result;
    }
  }
  return result;
}
