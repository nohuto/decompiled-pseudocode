/*
 * XREFs of sub_14038AA18 @ 0x14038AA18
 * Callers:
 *     sub_14038A914 @ 0x14038A914 (sub_14038A914.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 * Callees:
 *     sub_140389160 @ 0x140389160 (sub_140389160.c)
 */

LONG __fastcall sub_14038AA18(LONG a1, __int64 a2)
{
  LONG result; // eax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return sub_140389160(v3, result);
  return result;
}
