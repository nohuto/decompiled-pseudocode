/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x140882870
 * Callers:
 *     <none>
 * Callees:
 *     sub_140239F60 @ 0x140239F60 (sub_140239F60.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  _QWORD *v1; // rax
  unsigned __int16 v2; // dx

  v1 = sub_140347DB0();
  return sub_140239F60(v1[155], v2);
}
