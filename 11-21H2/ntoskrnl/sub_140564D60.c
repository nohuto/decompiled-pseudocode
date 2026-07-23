/*
 * XREFs of sub_140564D60 @ 0x140564D60
 * Callers:
 *     sub_14095C12C @ 0x14095C12C (sub_14095C12C.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 *     sub_14095DAF0 @ 0x14095DAF0 (sub_14095DAF0.c)
 *     sub_14095DFB0 @ 0x14095DFB0 (sub_14095DFB0.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_140564D60(PCUNICODE_STRING String2, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v6; // rsi

  v2 = qword_140C445B0;
  v3 = 0;
  if ( (__int64 *)qword_140C445B0 == &qword_140C445B0 )
    return (unsigned int)-1073741275;
  do
  {
    v6 = v2;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v2 + 16), String2, 1u) )
      break;
    v2 = *(_QWORD *)v2;
    v6 = 0LL;
  }
  while ( (__int64 *)v2 != &qword_140C445B0 );
  if ( !v6 )
    return (unsigned int)-1073741275;
  else
    *a2 = v6;
  return v3;
}
