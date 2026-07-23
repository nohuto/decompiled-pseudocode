/*
 * XREFs of sub_1407EC7CC @ 0x1407EC7CC
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407EC9DC @ 0x1407EC9DC (sub_1407EC9DC.c)
 *     sub_140856C0C @ 0x140856C0C (sub_140856C0C.c)
 */

__int64 __fastcall sub_1407EC7CC(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  __int64 v12; // rax
  ULONG_PTR v13; // rdi
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF

  v9 = -1073741275;
  memset(v15, 0, 0x44uLL);
  RtlInitUnicodeString((PUNICODE_STRING)&v15[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140C54F38;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = sub_1407EC9DC(qword_140C54F38, v15);
  if ( v12 )
    v9 = sub_140856C0C(v12, a2, a3, a4, a5);
  v13 = qword_140C54F38;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C54F38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  sub_1402AFC00(v13);
  KeLeaveCriticalRegion();
  return v9;
}
