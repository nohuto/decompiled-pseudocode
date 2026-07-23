/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x1800F084C
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x18000C510 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18000DBB0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 *     RtlUnicodeToUTF8N @ 0x18005E6B0 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // esi
  int v7; // edi
  _DWORD *v9; // r15
  unsigned int v12; // ebx
  __int64 v13; // r15
  __int64 v14; // r10
  WCHAR *v15; // r9
  unsigned __int16 v16; // ax
  unsigned __int16 *v17; // r9
  __int64 v18; // r11
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-F0h]
  _DWORD *v22; // [rsp+40h] [rbp-E8h]
  WCHAR UnicodeStringSource[64]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = 0;
  v6 = a5;
  v7 = 0;
  v22 = a3;
  v21 = qword_1801776F8;
  v9 = a3;
  while ( v6 )
  {
    if ( !UTF8StringMaxByteCount )
      break;
    if ( v6 >= 0x40 )
    {
      v12 = 64;
      if ( v6 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
        v12 = 63;
    }
    else
    {
      v12 = v6;
      if ( !v6 )
        goto LABEL_12;
    }
    v13 = v21;
    v14 = a4 - (_QWORD)UnicodeStringSource;
    v15 = UnicodeStringSource;
    do
    {
      v16 = NLS_UPCASE(v13, *(WCHAR *)((char *)v15 + v14));
      *v17 = v16;
      v15 = v17 + 1;
    }
    while ( v18 != 1 );
    v9 = v22;
LABEL_12:
    if ( RtlUnicodeToUTF8N(
           UTF8StringDestination,
           UTF8StringMaxByteCount,
           &UTF8StringActualByteCount,
           UnicodeStringSource,
           2 * v12) < 0 )
    {
      v7 += UTF8StringActualByteCount;
      v5 = -2147483643;
      break;
    }
    UTF8StringDestination += UTF8StringActualByteCount;
    UTF8StringMaxByteCount -= UTF8StringActualByteCount;
    v7 += UTF8StringActualByteCount;
    a4 += 2LL * v12;
    v6 -= v12;
  }
  if ( v9 )
    *v9 = v7;
  return v5;
}
