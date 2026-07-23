/*
 * XREFs of sub_1403C2DB8 @ 0x1403C2DB8
 * Callers:
 *     sub_1403C2638 @ 0x1403C2638 (sub_1403C2638.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1403C2DB8(__int16 a1)
{
  __int16 v1; // dx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r10
  __int16 *v6; // rcx

  v1 = word_140C54EDC;
  if ( a1 != word_140C54EDC )
  {
    if ( !word_140C2B0F0 )
      goto LABEL_8;
    v5 = (unsigned __int16)word_140C2B0F0;
    v6 = (__int16 *)(qword_140C2B0F8 + 6);
    do
    {
      if ( (*((_BYTE *)v6 - 1) & 1) != 0 )
      {
        if ( *v6 == a1 )
        {
          *v6 = v1;
        }
        else if ( *v6 == v1 )
        {
          *v6 = a1;
        }
      }
      v6 += 12;
      --v5;
    }
    while ( v5 );
  }
  if ( word_140C2B0F0 )
  {
    v3 = (unsigned __int16)word_140C2B0F0;
    v4 = qword_140C2B0F8 + 5;
    do
    {
      if ( (*(_BYTE *)v4 & 1) != 0 && *(_WORD *)(v4 + 1) == v1 )
        *(_BYTE *)v4 |= 2u;
      v4 += 24LL;
      --v3;
    }
    while ( v3 );
  }
LABEL_8:
  word_140C54EDC = v1 + 1;
}
