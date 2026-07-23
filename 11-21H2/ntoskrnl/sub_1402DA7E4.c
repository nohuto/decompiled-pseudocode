/*
 * XREFs of sub_1402DA7E4 @ 0x1402DA7E4
 * Callers:
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140B240EC @ 0x140B240EC (sub_140B240EC.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

char sub_1402DA7E4()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&dword_140C0B22C, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&stru_140C115E0, 0LL, 0LL);
  return v0;
}
