/*
 * XREFs of RtlHashUnicodeString @ 0x18005CF40
 * Callers:
 *     RtlpFindUnicodeStringInSection @ 0x18001D930 (RtlpFindUnicodeStringInSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlHashUnicodeString(
        PUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  __int64 v4; // rsi
  NTSTATUS v5; // r10d
  ULONG v7; // r11d
  wchar_t *Buffer; // rbx
  int v9; // r9d
  unsigned __int64 v10; // r8
  int v12; // eax

  v4 = qword_1801817B8;
  v5 = 0;
  v7 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v9 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( v9 )
  {
    if ( CaseInSensitive )
    {
      do
      {
        v10 = *Buffer;
        --v9;
        ++Buffer;
        if ( (unsigned int)v10 >= 0x61 )
        {
          if ( (unsigned int)v10 > 0x7A )
          {
            if ( v4 && (unsigned __int16)v10 >= 0xC0u )
              LOWORD(v10) = *(_WORD *)(v4
                                     + 2
                                     * ((v10 & 0xF)
                                      + *(unsigned __int16 *)(v4
                                                            + 2LL
                                                            * (((unsigned __int8)v10 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v4 + 2 * (v10 >> 8))))))
                          + v10;
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
        }
        v7 = (unsigned __int16)v10 + 65599 * v7;
      }
      while ( v9 );
    }
    else
    {
      do
      {
        v12 = *Buffer++;
        v7 = v12 + 65599 * v7;
        --v9;
      }
      while ( v9 );
    }
  }
  *HashValue = v7;
  return v5;
}
