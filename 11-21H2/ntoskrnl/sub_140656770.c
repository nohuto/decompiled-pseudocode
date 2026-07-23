/*
 * XREFs of sub_140656770 @ 0x140656770
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

bool __fastcall sub_140656770(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      if ( (unsigned __int8)sub_14042A5E0(v2 + 68, a2) )
        return 1;
    }
  }
  return result;
}
