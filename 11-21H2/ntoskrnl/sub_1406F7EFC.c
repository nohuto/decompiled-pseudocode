/*
 * XREFs of sub_1406F7EFC @ 0x1406F7EFC
 * Callers:
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1407FAEE0 @ 0x1407FAEE0 (sub_1407FAEE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406F7EFC(__int64 a1)
{
  int v1; // r8d
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 440LL); *i != a1; i += 4 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
