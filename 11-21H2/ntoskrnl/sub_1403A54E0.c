/*
 * XREFs of sub_1403A54E0 @ 0x1403A54E0
 * Callers:
 *     sub_1403A2670 @ 0x1403A2670 (sub_1403A2670.c)
 *     sub_140536000 @ 0x140536000 (sub_140536000.c)
 * Callees:
 *     sub_1403D9444 @ 0x1403D9444 (sub_1403D9444.c)
 *     sub_14050BD14 @ 0x14050BD14 (sub_14050BD14.c)
 *     sub_14050BDE0 @ 0x14050BDE0 (sub_14050BDE0.c)
 */

unsigned __int32 __fastcall sub_1403A54E0(unsigned int a1, __int16 a2)
{
  unsigned __int16 v2; // dx
  unsigned __int32 result; // eax

  if ( byte_140C54B60 )
  {
    if ( (unsigned __int16)(a2 - 3320) <= 3u )
      return sub_14050BDE0(a1, (unsigned __int16)(a2 - 3320));
    if ( dword_140C54B64 < 0 && (unsigned __int16)(a2 - 3324) <= 3u )
      return sub_1403D9444(a1, (unsigned __int16)(a2 - 3324));
  }
  if ( (unsigned __int16)(a2 - 112) <= 1u )
    return sub_14050BD14(a1);
  v2 = qword_140C4C810 + a2;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      return __indword(v2);
    }
    else
    {
      LOWORD(result) = __inword(v2);
      return (unsigned __int16)result;
    }
  }
  else
  {
    LOBYTE(result) = __inbyte(v2);
    return (unsigned __int8)result;
  }
}
