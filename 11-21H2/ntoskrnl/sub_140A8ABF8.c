/*
 * XREFs of sub_140A8ABF8 @ 0x140A8ABF8
 * Callers:
 *     sub_140602CF4 @ 0x140602CF4 (sub_140602CF4.c)
 *     DifGetPluginPerDriverData @ 0x140604400 (DifGetPluginPerDriverData.c)
 *     sub_140A81CBC @ 0x140A81CBC (sub_140A81CBC.c)
 *     sub_140A81D40 @ 0x140A81D40 (sub_140A81D40.c)
 *     sub_140A81D70 @ 0x140A81D70 (sub_140A81D70.c)
 *     sub_140A81D90 @ 0x140A81D90 (sub_140A81D90.c)
 *     sub_140A8ACE8 @ 0x140A8ACE8 (sub_140A8ACE8.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 * Callees:
 *     sub_1402D86CC @ 0x1402D86CC (sub_1402D86CC.c)
 *     sub_140A89D2C @ 0x140A89D2C (sub_140A89D2C.c)
 */

__int64 __fastcall sub_140A8ABF8(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  _QWORD *v3; // rax

  if ( sub_140A89D2C(a1) )
  {
    if ( !dword_140C1ACA4 )
      return 0LL;
  }
  else if ( dword_140C1ACA4 )
  {
    if ( dword_140C1B248 < 2 )
      return 0LL;
  }
  else if ( !dword_140C1B248 )
  {
    return 0LL;
  }
  v3 = sub_1402D86CC(v1);
  if ( !v3 )
    return 0LL;
  return v3[7];
}
