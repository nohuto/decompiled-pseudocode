/*
 * XREFs of sub_140B3023C @ 0x140B3023C
 * Callers:
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A58F00 @ 0x140A58F00 (sub_140A58F00.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140B3023C(unsigned int a1)
{
  __int64 result; // rax
  char *v3; // rdi
  __int64 v4; // rcx

  if ( word_140D05018 != 1 )
    a1 = (unsigned __int16)word_140D05018 << 6;
  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 32 * a1, 0x2020654Bu);
  v3 = (char *)result;
  if ( result )
  {
    memset((void *)result, 0, 32 * a1);
    qword_140D06BD8 = v3;
    v4 = 8LL * a1;
    Src = &v3[v4];
    qword_140D06FE8 = (__int64)&v3[v4 + v4];
    LODWORD(Size) = 8 * a1;
    sub_140A58F00(qword_140D088C0[0]);
    return 1LL;
  }
  return result;
}
