/*
 * XREFs of RtlFindUnicodeSubstring @ 0x140678510
 * Callers:
 *     sub_140678454 @ 0x140678454 (sub_140678454.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_14095BE9C @ 0x14095BE9C (sub_14095BE9C.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  _QWORD *v4; // rax
  unsigned __int16 *v5; // rdx
  char v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned int Length; // eax
  wchar_t *Buffer; // rbx
  size_t v11; // rsi
  wchar_t *v12; // rdi
  unsigned __int16 *v13; // r14
  unsigned __int16 *v14; // rbp
  char *i; // rsi
  unsigned __int16 *j; // r11
  unsigned __int16 v17; // r15
  unsigned __int16 v18; // ax
  __int16 v19; // r10
  const void *v21; // rbp

  v4 = sub_140347DB0();
  v7 = *v5;
  v8 = v4[154];
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
  v14 = (unsigned __int16 *)((char *)v13 + v7);
  if ( Buffer > v12 )
    return 0LL;
  for ( i = (char *)((char *)Buffer - (char *)v13); ; i += 2 )
  {
    for ( j = v13; j < v14; ++j )
    {
      v17 = *(unsigned __int16 *)((char *)j + (_QWORD)i);
      if ( v17 != *j )
      {
        sub_1403477B0(v8, *j);
        v18 = sub_1403477B0(v8, v17);
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
