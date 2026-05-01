/*
 * XREFs of sub_180003CB0 @ 0x180003CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003CE8 @ 0x180003CE8 (sub_180003CE8.c)
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 */

__int64 __fastcall sub_180003CB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = sub_180004DB0();
  if ( (int)result >= 0 )
    return sub_180003CE8(v6, a2, a3);
  return result;
}
