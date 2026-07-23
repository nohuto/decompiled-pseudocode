/*
 * XREFs of RtlGetIntegerAtom @ 0x140718310
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140297A20 (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x140718010 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x14079E730 (RtlUnicodeStringToInteger.c)
 */

BOOLEAN __cdecl RtlGetIntegerAtom(PWSTR AtomName, PUSHORT IntegerAtom)
{
  wchar_t *v4; // rdx
  WCHAR v5; // cx
  wchar_t *v6; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  String = 0LL;
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
  v5 = AtomName[1];
  v6 = v4;
  while ( v5 )
  {
    if ( (unsigned __int16)(v5 - 48) > 9u )
      return 0;
    v5 = *++v6;
  }
  String.Buffer = v4;
  String.Length = (_WORD)v6 - (_WORD)v4;
  String.MaximumLength = (_WORD)v6 - (_WORD)v4;
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
