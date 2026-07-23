/*
 * XREFs of sub_14085E788 @ 0x14085E788
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407EC9DC @ 0x1407EC9DC (sub_1407EC9DC.c)
 *     sub_1407ECAC8 @ 0x1407ECAC8 (sub_1407ECAC8.c)
 */

__int64 __fastcall sub_14085E788(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rdi
  _QWORD v9[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741811;
  memset(v9, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v6 = qword_140C54F38;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v9[5], SourceString);
  if ( !sub_1407EC9DC(qword_140C54F38, (__int64)v9) )
  {
    sub_1407ECAC8(qword_140C54F38, a2);
    v4 = 0;
  }
  v7 = qword_140C54F38;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C54F38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00(v7);
  KeLeaveCriticalRegion();
  return v4;
}
