/*
 * XREFs of sub_140A483FC @ 0x140A483FC
 * Callers:
 *     sub_1407DBAC0 @ 0x1407DBAC0 (sub_1407DBAC0.c)
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 *     sub_140A6AA08 @ 0x140A6AA08 (sub_140A6AA08.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035FA80 @ 0x14035FA80 (sub_14035FA80.c)
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     sub_140376830 @ 0x140376830 (sub_140376830.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_140A485A0 @ 0x140A485A0 (sub_140A485A0.c)
 *     sub_140A485D4 @ 0x140A485D4 (sub_140A485D4.c)
 */

void __fastcall sub_140A483FC(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r14
  volatile signed __int64 *v7; // rsi
  int v8; // eax
  PSLIST_ENTRY v9; // rdi
  _QWORD *p_Next; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3 == 4;
  --*((_WORD *)CurrentThread + 242);
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  v8 = std::codecvt<wchar_t,char,int>::do_max_length();
  sub_140376830(0, v8);
  dword_140CF5E28 = 0;
  ExWaitForRundownProtectionRelease(&stru_140CF5E08);
  v9 = ExpInterlockedFlushSList(&ListHead);
  while ( v9 )
  {
    p_Next = &v9->Next;
    v9 = v9->Next;
    sub_14035FA80(p_Next, v6);
  }
  sub_140A485A0(0LL);
  sub_140A485D4(a1, &qword_140CF5E00, 1LL);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}
