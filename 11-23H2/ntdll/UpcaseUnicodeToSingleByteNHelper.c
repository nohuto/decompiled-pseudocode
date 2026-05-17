/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x18007ECD0
 * Callers:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007EC70 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18008A5E0 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 */

__int64 __fastcall UpcaseUnicodeToSingleByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // eax
  __int64 v9; // r12
  unsigned int v10; // r11d
  __int64 v12; // rdi
  unsigned __int16 v13; // ax

  v7 = a5;
  v9 = qword_180184808;
  v10 = a2;
  if ( a5 >= a2 )
    v7 = a2;
  if ( a3 )
    *a3 = v7;
  if ( v7 )
  {
    v12 = v7;
    do
    {
      v13 = NLS_UPCASE(v9, *(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4++ + a6)));
      *a1++ = *(_BYTE *)(v13 + a6);
      --v12;
    }
    while ( v12 );
  }
  return v10 < a5 ? 0x80000005 : 0;
}
