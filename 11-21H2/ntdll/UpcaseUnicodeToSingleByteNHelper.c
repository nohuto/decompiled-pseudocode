/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x18000DC24
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x18000C510 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18000DBB0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
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
  unsigned int v7; // r11d
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // r10d
  __int64 v13; // rbx
  __int64 v14; // r9

  v7 = a5;
  v9 = qword_1801776F8;
  v10 = a5;
  v11 = a2;
  if ( a5 >= a2 )
    v10 = a2;
  if ( a3 )
    *a3 = v10;
  if ( v10 )
  {
    v13 = v10;
    do
    {
      v14 = (unsigned __int16)NLS_UPCASE(v9, *(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4++ + a6)));
      *a1++ = *(_BYTE *)(v14 + a6);
      --v13;
    }
    while ( v13 );
  }
  return v11 < v7 ? 0x80000005 : 0;
}
