/*
 * XREFs of RtlGetIntegerAtom @ 0x180003C30
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x18000375C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180003980 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x180077500 (RtlUnicodeStringToInteger.c)
 */

char __fastcall RtlGetIntegerAtom(unsigned __int64 a1, _WORD *a2)
{
  _WORD *v4; // rdx
  __int16 v5; // cx
  _WORD *v6; // rax
  _WORD v7[4]; // [rsp+20h] [rbp-18h] BYREF
  _WORD *v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)a1 < 0xC000u )
    {
      if ( !(_WORD)a1 )
        LOWORD(a1) = -16384;
      if ( a2 )
        *a2 = a1;
      return 1;
    }
    return 0;
  }
  if ( *(_WORD *)a1 != 35 )
    return 0;
  v4 = (_WORD *)(a1 + 2);
  v5 = *(_WORD *)(a1 + 2);
  v6 = v4;
  while ( v5 )
  {
    if ( (unsigned __int16)(v5 - 48) > 9u )
      return 0;
    v5 = *++v6;
  }
  v8 = v4;
  v7[0] = (_WORD)v6 - (_WORD)v4;
  v7[1] = (_WORD)v6 - (_WORD)v4;
  v9 = 0;
  if ( (int)RtlUnicodeStringToInteger(v7, 10LL, &v9) < 0 )
    return 0;
  if ( a2 )
  {
    if ( (unsigned int)(v9 - 1) > 0xBFFF )
      *a2 = -16384;
    else
      *a2 = v9;
  }
  return 1;
}
