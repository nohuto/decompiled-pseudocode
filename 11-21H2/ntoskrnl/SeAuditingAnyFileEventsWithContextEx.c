/*
 * XREFs of SeAuditingAnyFileEventsWithContextEx @ 0x1402A4690
 * Callers:
 *     SeAuditingAnyFileEventsWithContext @ 0x1409CA200 (SeAuditingAnyFileEventsWithContext.c)
 * Callees:
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_1407243A0 @ 0x1407243A0 (sub_1407243A0.c)
 */

char __fastcall SeAuditingAnyFileEventsWithContextEx(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // rdi
  char result; // al

  v3 = a3;
  if ( a3 )
  {
    LOBYTE(a3) = 1;
    *v3 = sub_140724320(129LL, 1LL, a3, a2);
  }
  LOBYTE(a3) = 1;
  if ( (unsigned __int8)sub_140724320(116LL, 1LL, a3, a2) )
    return 1;
  result = sub_1407243A0(3LL, 51LL, a2);
  if ( result )
    return 1;
  return result;
}
