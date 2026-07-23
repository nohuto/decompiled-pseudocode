/*
 * XREFs of sub_1406D7D20 @ 0x1406D7D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406D7D74 @ 0x1406D7D74 (sub_1406D7D74.c)
 */

char sub_1406D7D20()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  do
  {
    _InterlockedAnd((volatile signed __int32 *)(qword_140CE1A80 + 40), 0xFFFFFFFD);
    sub_1406D7D74();
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(qword_140CE1A80 + 40), 0, 1) != 1 );
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
