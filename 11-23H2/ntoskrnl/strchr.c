/*
 * XREFs of strchr @ 0x1403DB280
 * Callers:
 *     MiSnapThunk @ 0x1406AE510 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x1409E0288 (WmipSMBiosFindStringAndZero.c)
 *     PipSmBiosGetString @ 0x140B3BAE0 (PipSmBiosGetString.c)
 *     EmpParseRuleTerm @ 0x140B55ED8 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140B56C6C (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x140B5B3EC (CmpGetToken.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  char v2; // al
  char *v3; // r8
  char v4; // r9

  v2 = *Str;
  v3 = 0LL;
  if ( *Str )
  {
    v4 = *Str;
    do
    {
      v2 = v4;
      if ( v4 == (_BYTE)Val )
        break;
      v2 = *++Str;
      v4 = *Str;
    }
    while ( *Str );
  }
  if ( v2 == (_BYTE)Val )
    return (char *)Str;
  return v3;
}
