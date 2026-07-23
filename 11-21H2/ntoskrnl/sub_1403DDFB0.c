/*
 * XREFs of sub_1403DDFB0 @ 0x1403DDFB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

ULONG_PTR *__fastcall sub_1403DDFB0(_QWORD *a1)
{
  ULONG_PTR *result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx

  result = sub_1403ACEFC(5, 0, 0, 0, 1);
  if ( result )
  {
    if ( a1 )
      *a1 = result[24];
    v3 = sub_140303720((__int64)result);
    return (ULONG_PTR *)sub_14042A5E0(v3, v4);
  }
  return result;
}
