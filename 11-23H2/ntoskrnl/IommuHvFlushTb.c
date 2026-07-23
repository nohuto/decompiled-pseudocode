/*
 * XREFs of IommuHvFlushTb @ 0x140524790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuHvFlushTb(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  if ( qword_140C62598 )
  {
    v4 = 0;
    qword_140C62598(0LL, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), a2, a3, v4);
  }
  return 0LL;
}
