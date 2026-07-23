/*
 * XREFs of sub_1403A5440 @ 0x1403A5440
 * Callers:
 *     sub_1403A26C0 @ 0x1403A26C0 (sub_1403A26C0.c)
 *     sub_140536090 @ 0x140536090 (sub_140536090.c)
 * Callees:
 *     sub_1403DABCC @ 0x1403DABCC (sub_1403DABCC.c)
 *     sub_14050BE98 @ 0x14050BE98 (sub_14050BE98.c)
 *     sub_14050BF60 @ 0x14050BF60 (sub_14050BF60.c)
 */

char __fastcall sub_1403A5440(__int64 a1, __int16 a2, __int16 a3)
{
  unsigned __int16 v3; // dx
  char result; // al

  if ( !byte_140C54B60 )
    goto LABEL_5;
  if ( (unsigned __int16)(a2 - 3320) <= 3u )
    return sub_1403DABCC(a1, (unsigned __int16)(a2 - 3320));
  if ( dword_140C54B64 < 0 && (unsigned __int16)(a2 - 3324) <= 3u )
    return sub_14050BF60(a1, (unsigned __int16)(a2 - 3324));
LABEL_5:
  if ( (unsigned __int16)(a2 - 112) <= 1u )
    return sub_14050BE98();
  v3 = qword_140C4C810 + a2;
  if ( (_DWORD)a1 )
  {
    result = a3;
    if ( (_DWORD)a1 == 3 )
      __outdword(v3, a3);
    else
      __outword(v3, a3);
  }
  else
  {
    result = a3;
    __outbyte(v3, a3);
  }
  return result;
}
