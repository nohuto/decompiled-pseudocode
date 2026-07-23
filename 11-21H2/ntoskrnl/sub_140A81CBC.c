/*
 * XREFs of sub_140A81CBC @ 0x140A81CBC
 * Callers:
 *     sub_140AA44E0 @ 0x140AA44E0 (sub_140AA44E0.c)
 *     sub_140AA4550 @ 0x140AA4550 (sub_140AA4550.c)
 * Callees:
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 */

_BOOL8 __fastcall sub_140A81CBC(__int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( dword_140C1AA84 == 1 )
  {
    v1 = sub_140A8ABF8(a1);
    if ( !v1 || ((*(_BYTE *)(v1 + 48) - 8) & 0xFB) == 0 )
      return 0;
  }
  return result;
}
