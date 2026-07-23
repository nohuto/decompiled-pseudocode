/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x1800F1728
 * Callers:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007EC70 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18008A5E0 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 *     RtlUnicodeToUTF8N @ 0x180059C10 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(CHAR *a1, ULONG a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // esi
  int v7; // edi
  _DWORD *v9; // r13
  unsigned int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r11
  __int64 v15; // r13
  WCHAR *v16; // r10
  __int16 v17; // ax
  _WORD *v18; // r10
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-F4h]
  PCHAR UTF8StringDestination; // [rsp+38h] [rbp-F0h]
  __int64 v23; // [rsp+40h] [rbp-E8h]
  _DWORD *v24; // [rsp+48h] [rbp-E0h]
  WCHAR UnicodeStringSource[64]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = 0;
  v6 = a5;
  v7 = 0;
  v24 = a3;
  UTF8StringDestination = a1;
  v9 = a3;
  v21 = 0;
  v23 = qword_180184808;
  while ( v6 )
  {
    if ( !a2 )
      break;
    if ( v6 >= 0x40 )
    {
      v11 = 64;
      if ( v6 != 64 )
      {
        if ( (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
          v11 = 63;
        goto LABEL_6;
      }
    }
    else
    {
      v11 = v6;
    }
    if ( !v11 )
    {
      v13 = 0LL;
      goto LABEL_13;
    }
LABEL_6:
    v12 = v23;
    v13 = v11;
    v14 = a4 - (_QWORD)UnicodeStringSource;
    v15 = v11;
    v16 = UnicodeStringSource;
    do
    {
      v17 = NLS_UPCASE(v12, *(WCHAR *)((char *)v16 + v14));
      *v18 = v17;
      v16 = v18 + 1;
      --v15;
    }
    while ( v15 );
    v5 = v21;
    v9 = v24;
LABEL_13:
    if ( RtlUnicodeToUTF8N(UTF8StringDestination, a2, &UTF8StringActualByteCount, UnicodeStringSource, 2 * v11) < 0 )
    {
      v7 += UTF8StringActualByteCount;
      v5 = -2147483643;
      break;
    }
    a4 += 2 * v13;
    UTF8StringDestination += UTF8StringActualByteCount;
    a2 -= UTF8StringActualByteCount;
    v7 += UTF8StringActualByteCount;
    v6 -= v11;
  }
  if ( v9 )
    *v9 = v7;
  return v5;
}
