/*
 * XREFs of sub_14084DB84 @ 0x14084DB84
 * Callers:
 *     sub_1403D2178 @ 0x1403D2178 (sub_1403D2178.c)
 *     sub_14075C588 @ 0x14075C588 (sub_14075C588.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14084DC30 @ 0x14084DC30 (sub_14084DC30.c)
 */

void sub_14084DB84()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A640, 0LL);
  if ( dword_140C2A6D0 )
  {
    v1 = dword_140C2A648;
    if ( !dword_140C2A648 || (--dword_140C2A648, v1 == 1) )
    {
      sub_14084DC30(&unk_140C2A660);
      sub_14084DC30(&unk_140C2A698);
      qword_140C2A6D8 = 0LL;
      dword_140C2A6D0 = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A640, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A640);
  sub_1402AFC00((ULONG_PTR)&qword_140C2A640);
  KeLeaveCriticalRegion();
}
