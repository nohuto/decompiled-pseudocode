/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x180109350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800F62F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  char v4; // bp
  BOOLEAN v5; // si
  bool v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  _UNICODE_STRING *v10; // rcx
  unsigned int Length; // r9d
  unsigned int v12; // edx
  char *v13; // r11
  unsigned __int64 v14; // r8
  char *Buffer; // rcx
  int v17; // eax
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  int v19; // [rsp+20h] [rbp-68h] BYREF
  char *v20; // [rsp+28h] [rbp-60h]
  char v21; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v18, 0);
    v7 = qword_1801776E8;
    v6 = CodePageTable.DBCSCodePage != 0;
  }
  if ( v10->Length > 0x18u )
    return 0;
  if ( !v9 )
  {
    v19 = 786432;
    v20 = &v21;
    OemName = (POEM_STRING)&v19;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(OemName, v10, 0) < 0 )
    return 0;
  if ( OemName->Length != 1 )
  {
    if ( OemName->Length != 2 )
      goto LABEL_9;
    Buffer = OemName->Buffer;
    if ( *Buffer != 46 || Buffer[1] != 46 )
      goto LABEL_9;
LABEL_20:
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  if ( *OemName->Buffer == 46 )
    goto LABEL_20;
LABEL_9:
  Length = OemName->Length;
  v12 = 0;
  if ( !OemName->Length )
    goto LABEL_38;
  v13 = OemName->Buffer;
  do
  {
    v14 = (unsigned __int8)v13[v12];
    if ( v6 && *(_WORD *)(v7 + 2 * v14) )
    {
      if ( !v4 && v12 >= 7 || v12 == Length - 1 )
        return 0;
      ++v12;
    }
    else
    {
      if ( (unsigned __int8)v14 < 0x80u )
      {
        v17 = RtlFatIllegalTable[v14 >> 5];
        if ( _bittest(&v17, v14 & 0x1F) )
          return 0;
      }
      if ( (_BYTE)v14 == 32 )
      {
        v5 = 1;
      }
      else if ( (_BYTE)v14 == 46 )
      {
        if ( v4 || !v12 || v13[v12 - 1] == 32 || Length - v12 - 1 > 3 )
          return 0;
        v4 = 1;
      }
      if ( v12 >= 8 && !v4 )
        return 0;
    }
    ++v12;
  }
  while ( v12 < Length );
  if ( (_BYTE)v14 != 32 && (_BYTE)v14 != 46 )
  {
LABEL_38:
    if ( NameContainsSpaces )
      *NameContainsSpaces = v5;
    return 1;
  }
  return 0;
}
