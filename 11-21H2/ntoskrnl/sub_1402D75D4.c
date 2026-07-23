/*
 * XREFs of sub_1402D75D4 @ 0x1402D75D4
 * Callers:
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_140755920 @ 0x140755920 (sub_140755920.c)
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1402D75D4(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 2008);
  if ( !v1 )
    return 0LL;
  do
  {
    result = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v1 );
  return result;
}
