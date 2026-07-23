/*
 * XREFs of InbvEnableBootDriver @ 0x140550BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall InbvEnableBootDriver(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(_QWORD *)(qword_140C54D10 + 48);
    if ( result )
      return sub_14042A5E0(a1, a2);
  }
  return result;
}
