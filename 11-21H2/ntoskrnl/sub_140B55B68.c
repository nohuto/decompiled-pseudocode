/*
 * XREFs of sub_140B55B68 @ 0x140B55B68
 * Callers:
 *     sub_140B53724 @ 0x140B53724 (sub_140B53724.c)
 *     sub_140B53A30 @ 0x140B53A30 (sub_140B53A30.c)
 * Callees:
 *     sub_140B55BE0 @ 0x140B55BE0 (sub_140B55BE0.c)
 */

__int64 __fastcall sub_140B55B68(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax

  if ( !(unsigned __int8)sub_140B55BE0(a1) )
    return 3221225485LL;
  v4 = a1 + (unsigned int)dword_140C0DAE4;
  if ( !v4 )
    return 3221225485LL;
  *a2 = *(_DWORD *)(v4 + 52);
  return 0LL;
}
