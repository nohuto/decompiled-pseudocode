/*
 * XREFs of RtlGetIntegerAtom @ 0x180062B10
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x18006267C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180062890 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 */

BOOLEAN __cdecl RtlGetIntegerAtom(PWSTR AtomName, PUSHORT IntegerAtom)
{
  PWSTR v4; // rdx
  PWSTR v5; // rax
  wchar_t v6; // cx
  _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)AtomName < 0xC000u )
    {
      if ( !(_WORD)AtomName )
        LOWORD(AtomName) = -16384;
      if ( IntegerAtom )
        *IntegerAtom = (unsigned __int16)AtomName;
      return 1;
    }
    return 0;
  }
  if ( *AtomName != 35 )
    return 0;
  v4 = AtomName + 1;
  v5 = AtomName + 1;
  if ( AtomName[1] )
  {
    v6 = *v4;
    while ( (unsigned __int16)(v6 - 48) <= 9u )
    {
      v6 = *++v5;
      if ( !*v5 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  String.Buffer = v4;
  String.Length = (_WORD)v5 - (_WORD)v4;
  String.MaximumLength = (_WORD)v5 - (_WORD)v4;
  Value = 0;
  if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) < 0 )
    return 0;
  if ( IntegerAtom )
  {
    if ( Value - 1 > 0xBFFF )
      *IntegerAtom = -16384;
    else
      *IntegerAtom = Value;
  }
  return 1;
}
