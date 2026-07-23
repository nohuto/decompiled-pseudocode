/*
 * XREFs of sub_140973FF0 @ 0x140973FF0
 * Callers:
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 *     sub_14097723C @ 0x14097723C (sub_14097723C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140973FF0(__int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 280);
    if ( v1 )
    {
      if ( *(_QWORD *)(v1 + 280) == a1 )
        return 1;
    }
  }
  return result;
}
