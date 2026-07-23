/*
 * XREFs of sub_1406931E4 @ 0x1406931E4
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140690150 @ 0x140690150 (sub_140690150.c)
 */

__int64 sub_1406931E4()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  __int64 v2; // rcx
  char v3; // bl
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48D20, 0LL);
  if ( dword_140C4EFCC || (v5[0] = 917516LL, v5[1] = L"189900", v1 = sub_140690150(v2, (int)v5), v1 >= 0) )
    ++dword_140C4EFCC;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48D20, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C48D20);
  sub_1402AFC00((ULONG_PTR)&qword_140C48D20);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
