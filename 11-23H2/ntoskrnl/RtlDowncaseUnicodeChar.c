/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1408A6180
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_DOWNCASE @ 0x14034E568 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  int v2; // edx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return NLS_DOWNCASE(CurrentServerSiloGlobals[155], v2);
}
