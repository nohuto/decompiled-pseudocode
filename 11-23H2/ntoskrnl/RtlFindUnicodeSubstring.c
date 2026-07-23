/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1406D9360
 * Callers:
 *     CmpTraceSecurityChanging @ 0x14070DEBC (CmpTraceSecurityChanging.c)
 *     PiDrvDbRegisterNode @ 0x140811A0C (PiDrvDbRegisterNode.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x14097011C (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v5; // rdx
  char v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned int Length; // eax
  wchar_t *Buffer; // rbx
  size_t v11; // rsi
  wchar_t *v12; // rdi
  unsigned __int16 *v13; // r14
  unsigned __int16 *v14; // rsi
  char *i; // r11
  unsigned __int16 *j; // r10
  unsigned __int16 v17; // bp
  unsigned __int16 v18; // ax
  __int16 v19; // r9
  const void *v21; // rbp

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v5;
  v8 = CurrentServerSiloGlobals[154];
  Length = FullString->Length;
  if ( (unsigned __int16)Length < (unsigned __int16)v7 )
    return 0LL;
  Buffer = FullString->Buffer;
  v11 = *v5;
  v12 = (wchar_t *)((char *)Buffer + Length - v7);
  if ( !v6 )
  {
    if ( Buffer <= v12 )
    {
      v21 = (const void *)*((_QWORD *)v5 + 1);
      while ( memcmp(Buffer, v21, v11) )
      {
        if ( ++Buffer > v12 )
          return 0LL;
      }
      return Buffer;
    }
    return 0LL;
  }
  v13 = (unsigned __int16 *)*((_QWORD *)v5 + 1);
  v14 = (unsigned __int16 *)((char *)v13 + *v5);
  if ( Buffer > v12 )
    return 0LL;
  for ( i = (char *)((char *)Buffer - (char *)v13); ; i += 2 )
  {
    for ( j = v13; j < v14; ++j )
    {
      v17 = *(unsigned __int16 *)((char *)j + (_QWORD)i);
      if ( v17 != *j )
      {
        NLS_UPCASE(v8, *j);
        v18 = NLS_UPCASE(v8, v17);
        if ( v18 != v19 )
          break;
      }
    }
    if ( j == v14 )
      break;
    if ( ++Buffer > v12 )
      return 0LL;
  }
  return Buffer;
}
