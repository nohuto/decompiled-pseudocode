/*
 * XREFs of sub_140985C14 @ 0x140985C14
 * Callers:
 *     sub_1409863A0 @ 0x1409863A0 (sub_1409863A0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_140985C14(_SLIST_ENTRY *P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
  if ( (dword_140D05010 & 0x73) != 0 && LOWORD(stru_140D01990.Alignment) < 0x1F4u )
    ExpInterlockedPushEntrySList(&stru_140D01990, P);
  else
    ExFreePoolWithTag(P, 0x7452624Fu);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C252D8);
  sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
  v3 = KeGetCurrentThread();
  if ( (*((_WORD *)v3 + 243))++ == 0xFFFF )
  {
    v3 = (struct _KTHREAD *)((char *)v3 + 152);
    if ( *(struct _KTHREAD **)v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
