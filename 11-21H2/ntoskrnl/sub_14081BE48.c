/*
 * XREFs of sub_14081BE48 @ 0x14081BE48
 * Callers:
 *     sub_140808C90 @ 0x140808C90 (sub_140808C90.c)
 *     sub_140B034C0 @ 0x140B034C0 (sub_140B034C0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403B5688 @ 0x1403B5688 (sub_1403B5688.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 */

char __fastcall sub_14081BE48(HANDLE KeyHandle, char a2, _BYTE *a3)
{
  char v3; // bl
  struct _KTHREAD *CurrentThread; // rax
  char v7; // si
  char result; // al
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  IoStatusBlock = 0LL;
  if ( !a2 || ZwNotifyChangeKey(KeyHandle, 0LL, qword_140C1F740, (PVOID)1, &IoStatusBlock, 4u, 0, 0LL, 0, 1u) < 0 )
    v3 = 1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1F730, 0LL);
  sub_1403B5688(KeyHandle, a3);
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1F730, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C1F730);
  sub_1402AFC00((ULONG_PTR)&qword_140C1F730);
  result = sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(KeyHandle);
  return result;
}
