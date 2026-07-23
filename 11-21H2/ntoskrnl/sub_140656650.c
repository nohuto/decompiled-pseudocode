/*
 * XREFs of sub_140656650 @ 0x140656650
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140656650(__int64 *a1, _BYTE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  if ( !a1 )
    return 3LL;
  v4 = *a1;
  if ( !v4 )
    return 3LL;
  if ( !(unsigned __int8)sub_14042A5E0(v4 + 68, a2) )
    return 1LL;
  *a2 = sub_14042A5E0(*a1 + 0x80000, v5);
  return 0LL;
}
