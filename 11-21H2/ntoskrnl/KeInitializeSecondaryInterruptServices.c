/*
 * XREFs of KeInitializeSecondaryInterruptServices @ 0x1409618C0
 * Callers:
 *     sub_14051CF20 @ 0x14051CF20 (sub_14051CF20.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 KeInitializeSecondaryInterruptServices()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  struct _KEVENT *v3; // rsi
  __int64 v4; // rbp

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3000uLL, 0x6953654Bu);
  v1 = 0;
  qword_140C2B0D8 = (__int64)PoolWithTag;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3000uLL);
    v3 = (struct _KEVENT *)(v2 + 1);
    v4 = 256LL;
    do
    {
      *v2 = 0LL;
      KeInitializeEvent(v3, SynchronizationEvent, 1u);
      v3 += 2;
      v2 += 6;
      --v4;
    }
    while ( v4 );
    qword_140C2B0C8 = (__int64)&qword_140C2B0C0;
    qword_140C2B0C0 = (__int64)&qword_140C2B0C0;
    KeInitializeDpc((PRKDPC)&stru_140C2B080, (PKDEFERRED_ROUTINE)sub_14056F330, 0LL);
    qword_140C2B0D0 = 0LL;
    byte_140C2B0E0 = 0;
    byte_140C2B068 = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
