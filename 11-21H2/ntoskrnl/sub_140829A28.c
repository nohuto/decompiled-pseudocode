/*
 * XREFs of sub_140829A28 @ 0x140829A28
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 */

void *__fastcall sub_140829A28(unsigned int a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  void *v3; // rax
  void *v4; // rbx

  v2 = a1;
  if ( (unsigned __int64)qword_140C157C8 >= 0x333333333333332LL )
    return 0LL;
  v3 = (void *)sub_140829CBC(80 * (qword_140C157C8 + 1), a2, 0LL, 0LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 80 * qword_140C157C8);
    *(&qword_140C117A0 + v2) = v4;
  }
  return v4;
}
