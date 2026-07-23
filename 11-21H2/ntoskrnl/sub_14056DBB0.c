/*
 * XREFs of sub_14056DBB0 @ 0x14056DBB0
 * Callers:
 *     sub_1403C2638 @ 0x1403C2638 (sub_1403C2638.c)
 *     sub_14056DA54 @ 0x14056DA54 (sub_14056DA54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056DBB0(__int16 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  __int64 result; // rax

  if ( word_140C2B0F0 )
  {
    v1 = (unsigned __int16)word_140C2B0F0;
    v2 = qword_140C2B0F8 + 5;
    do
    {
      if ( (*(_BYTE *)v2 & 1) == 0 && *(_WORD *)(v2 + 1) == a1 )
        *(_BYTE *)v2 &= ~2u;
      v2 += 24LL;
      --v1;
    }
    while ( v1 );
  }
  result = 0xFFFFLL;
  --word_140C54EDC;
  return result;
}
