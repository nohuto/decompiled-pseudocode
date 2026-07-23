/*
 * XREFs of sub_14050DFA4 @ 0x14050DFA4
 * Callers:
 *     sub_14050FC30 @ 0x14050FC30 (sub_14050FC30.c)
 * Callees:
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 */

__int64 sub_14050DFA4()
{
  int v0; // edx
  unsigned int LockArray_high; // r8d
  unsigned __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !qword_140C4E380 )
    return 3221225659LL;
  if ( (*(_DWORD *)(qword_140C4E380 + 184) & 0x80u) != 0 )
    return 3221225865LL;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  if ( (*(_DWORD *)(qword_140C4E380 + 224) & 1) == 0 && LockArray_high
    || (v0 = sub_140354420(
               qword_140C4E380,
               2u,
               *(unsigned int *)(32LL * LockArray_high + qword_140C4C728 + 24) + 1LL,
               1,
               &v3),
        v0 >= 0) )
  {
    dword_140D01740 = 1;
  }
  return (unsigned int)v0;
}
