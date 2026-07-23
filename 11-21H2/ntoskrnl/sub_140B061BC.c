/*
 * XREFs of sub_140B061BC @ 0x140B061BC
 * Callers:
 *     sub_140B0610C @ 0x140B0610C (sub_140B0610C.c)
 * Callees:
 *     <none>
 */

void sub_140B061BC()
{
  __int64 v0; // rdx
  __int64 v1; // rax

  word_140D05018 = 1;
  if ( word_140C2B0F0 )
  {
    v0 = (unsigned __int16)word_140C2B0F0;
    v1 = qword_140C2B0F8 + 5;
    do
    {
      *(_BYTE *)v1 |= 1u;
      *(_WORD *)(v1 + 1) = 0;
      v1 += 24LL;
      --v0;
    }
    while ( v0 );
  }
}
