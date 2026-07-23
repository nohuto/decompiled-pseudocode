/*
 * XREFs of sub_140B2A068 @ 0x140B2A068
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     sub_140B2A164 @ 0x140B2A164 (sub_140B2A164.c)
 */

__int64 sub_140B2A068()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  char *v2; // rsi
  __int64 v3; // rbp
  _SLIST_HEADER *v4; // rdi

  v0 = qword_140C540A0;
  v1 = 0;
  if ( !(unsigned int)sub_14026DC5C(
                        (((unsigned __int64)qword_140C540A0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        (((unsigned __int64)qword_140C540A0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 0x7FFFFFFF8LL,
                        6,
                        9,
                        0) )
    return 0LL;
  if ( !(unsigned int)sub_140B2A164(&qword_140C53080, v0) )
    return 0LL;
  v2 = (char *)sub_1402828F0(72, (unsigned __int64)(unsigned __int16)word_140D05000 << 9, 0x20206D4Du);
  if ( !v2 )
    return 0LL;
  if ( word_140D05000 )
  {
    do
    {
      v3 = 8LL;
      v4 = (_SLIST_HEADER *)&v2[512 * (unsigned __int64)v1];
      do
      {
        InitializeSListHead(v4);
        v4 += 4;
        --v3;
      }
      while ( v3 );
      ++v1;
    }
    while ( v1 < (unsigned __int16)word_140D05000 );
  }
  qword_140C530C8 = (__int64)v2;
  return 1LL;
}
