/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x1407594E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407596C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  PCUNICODE_STRING v3; // rsi
  char v4; // r14
  BOOLEAN v5; // bp
  bool v6; // r15
  __int64 v7; // r12
  _QWORD *v10; // rax
  unsigned int Length; // ecx
  unsigned int v12; // edx
  char *v13; // r11
  unsigned __int64 v14; // r8
  char *Buffer; // rdx
  int v17; // eax
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v19; // [rsp+20h] [rbp-68h] BYREF
  char v20; // [rsp+30h] [rbp-58h] BYREF

  v3 = Name;
  LOBYTE(Name) = 1;
  v4 = 0;
  v5 = 0;
  v19 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( !(unsigned __int8)sub_1407CDA20(Name) )
  {
    _InterlockedOr(v18, 0);
    v10 = sub_140347DB0();
    v7 = v10[152];
    v6 = *((_WORD *)v10 + 570) != 0;
  }
  if ( v3->Length > 0x18u )
    return 0;
  if ( !OemName )
  {
    LODWORD(v19) = 786432;
    *((_QWORD *)&v19 + 1) = &v20;
    OemName = (POEM_STRING)&v19;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(OemName, v3, 0) < 0 )
    return 0;
  Length = OemName->Length;
  if ( (_WORD)Length != 1 )
  {
    if ( Length != 2 )
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
        v17 = *((_DWORD *)qword_140A38378 + (v14 >> 5));
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
