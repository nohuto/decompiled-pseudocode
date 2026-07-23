/*
 * XREFs of sub_140B125BC @ 0x140B125BC
 * Callers:
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B12560 @ 0x140B12560 (sub_140B12560.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140B126B8 @ 0x140B126B8 (sub_140B126B8.c)
 */

__int64 __fastcall sub_140B125BC(PCUNICODE_STRING String1, int a2)
{
  __int64 v2; // rbx
  unsigned __int16 Length; // cx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 i; // rsi

  v2 = qword_140C46B48;
  if ( qword_140C46B48 )
  {
    Length = String1->Length;
    while ( 1 )
    {
      if ( Length >= *(_WORD *)(v2 + 32) )
      {
        if ( Length <= *(_WORD *)(v2 + 32) )
        {
          if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v2 + 32), 1u) )
            return v2;
          for ( i = *(_QWORD *)(v2 + 16); i; i = *(_QWORD *)(i + 16) )
          {
            if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 32), 1u) )
              return i;
            v2 = *(_QWORD *)(v2 + 16);
          }
          if ( !a2 )
            return 0LL;
          result = sub_140B126B8(String1);
          *(_QWORD *)(v2 + 16) = result;
          return result;
        }
        v6 = *(_QWORD *)(v2 + 8);
        if ( !v6 )
        {
          if ( !a2 )
            return 0LL;
          result = sub_140B126B8(String1);
          *(_QWORD *)(v2 + 8) = result;
          return result;
        }
      }
      else
      {
        v6 = *(_QWORD *)v2;
        if ( !*(_QWORD *)v2 )
        {
          if ( !a2 )
            return 0LL;
          result = sub_140B126B8(String1);
          *(_QWORD *)v2 = result;
          return result;
        }
      }
      v2 = v6;
    }
  }
  if ( !a2 )
    return 0LL;
  result = ((__int64 (*)(void))sub_140B126B8)();
  qword_140C46B48 = result;
  return result;
}
