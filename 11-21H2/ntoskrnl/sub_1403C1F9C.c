/*
 * XREFs of sub_1403C1F9C @ 0x1403C1F9C
 * Callers:
 *     sub_1403C1A84 @ 0x1403C1A84 (sub_1403C1A84.c)
 *     sub_1403C1F24 @ 0x1403C1F24 (sub_1403C1F24.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1403C1F9C(_WORD *a1)
{
  unsigned __int16 v1; // dx
  unsigned __int64 v2; // rax

  v1 = 0;
  if ( !word_140C2B0F0 )
    return 1;
  while ( 1 )
  {
    if ( *(_WORD *)(qword_140C2B0F8 + 24LL * v1 + 2) == *a1 )
    {
      v2 = *(_QWORD *)(qword_140C2B0F8 + 24LL * v1 + 16)
         - ((*(_QWORD *)(qword_140C2B0F8 + 24LL * v1 + 16) >> 1) & 0x5555555555555555LL);
      if ( (unsigned int)((0x101010101010101LL
                         * (((v2 & 0x3333333333333333LL)
                           + ((v2 >> 2) & 0x3333333333333333LL)
                           + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < *(unsigned __int8 *)(qword_140C2B0F8 + 24LL * v1 + 4) )
        break;
    }
    if ( ++v1 >= (unsigned __int16)word_140C2B0F0 )
      return 1;
  }
  return 0;
}
