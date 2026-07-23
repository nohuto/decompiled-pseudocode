/*
 * XREFs of sub_14024C7A0 @ 0x14024C7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_14024C7A0(__int64 a1)
{
  __int64 result; // rax

  result = sub_140348800(a1);
  if ( result )
    return *(_QWORD *)(result + 33152);
  return result;
}
