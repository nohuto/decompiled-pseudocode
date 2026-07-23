/*
 * XREFs of sub_140989028 @ 0x140989028
 * Callers:
 *     sub_140989150 @ 0x140989150 (sub_140989150.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14084F9EC @ 0x14084F9EC (sub_14084F9EC.c)
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 *     sub_140988CC0 @ 0x140988CC0 (sub_140988CC0.c)
 */

void __fastcall sub_140989028(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E960, 0LL);
  if ( (dword_140C4E968 & 1) != 0 )
    v3 = a1[20] != dword_140C4EB7C;
  if ( (dword_140C4E968 & 2) != 0 && a1[19] != dword_140C4EB84 )
    v3 |= 2u;
  if ( (dword_140C4E968 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    sub_1409882B4((__int64)&qword_140C4E960, v4);
    sub_14084F9EC(&qword_140C4E960, v5, 1);
    sub_1409884F4((__int64)&qword_140C4E960, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C54630 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C54620, 0LL);
      dword_140C54630 |= 1u;
    }
    else
    {
      sub_140988CC0((__int64)&unk_140C54598);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E960, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E960);
  sub_1402AFC00((ULONG_PTR)&qword_140C4E960);
  KeLeaveCriticalRegion();
}
