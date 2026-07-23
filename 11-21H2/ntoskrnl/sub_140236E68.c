/*
 * XREFs of sub_140236E68 @ 0x140236E68
 * Callers:
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140236E68(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0x7FFFFFFEFFFFLL )
  {
    v2 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( a1 >= 0 && (*(_DWORD *)(v2 + 1124) & 0x10) != 0 )
      return 0;
    v3 = *(_QWORD *)(v2 + 2552);
    if ( v3 )
    {
      if ( *(_QWORD *)(v3 + 24) != v3 + 24 )
        return 0;
    }
  }
  return result;
}
