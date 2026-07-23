/*
 * XREFs of sub_140B102C0 @ 0x140B102C0
 * Callers:
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 * Callees:
 *     strchr @ 0x1403E2AA0 (strchr.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall sub_140B102C0(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        int a4,
        UNICODE_STRING *DestinationString)
{
  char *v5; // rcx
  unsigned __int64 v6; // r9
  int v7; // r8d
  char v8; // al
  unsigned __int16 v9; // bx
  char *v10; // rdi
  char v11; // al
  bool v13; // zf
  ANSI_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  SourceString = 0LL;
  if ( !a2 )
    return -1073741275;
  v5 = (char *)(*(unsigned __int8 *)(a1 + 1) + a1);
  v6 = a3 + (unsigned int)(a4 - 1);
  v7 = 1;
  if ( a2 > 1u )
  {
    v8 = *v5;
    while ( !v8 )
    {
LABEL_7:
      if ( !++v5 )
        return -1073741275;
      v8 = *v5;
      if ( !*v5 )
        return -1073741275;
      if ( ++v7 >= (unsigned int)a2 )
        goto LABEL_12;
    }
    while ( (unsigned __int64)++v5 < v6 )
    {
      if ( !*v5 )
        goto LABEL_7;
    }
    return -1073741275;
  }
  if ( !v5 )
    return -1073741275;
LABEL_12:
  v9 = 0;
  SourceString.Buffer = v5;
  SourceString.Length = 0;
  v10 = v5;
  while ( *v5 )
  {
    ++v9;
    ++v5;
    SourceString.Length = v9;
    if ( (unsigned __int64)v5 >= v6 || v9 > 0x40u )
      return -1073741275;
  }
  if ( v5 == (char *)-1LL )
    return -1073741275;
  v11 = *v10;
  if ( *v10 )
  {
    do
    {
      if ( !strchr(" \t\r", v11) )
        break;
      ++v10;
      SourceString.Length = --v9;
      v11 = *v10;
    }
    while ( *v10 );
    SourceString.Buffer = v10;
  }
  if ( v9 )
  {
    do
    {
      if ( !strchr(" \t\r", v10[v9 - 1]) )
        break;
      v13 = v9-- == 1;
      SourceString.Length = v9;
    }
    while ( !v13 );
  }
  SourceString.MaximumLength = v9 + 1;
  return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
}
