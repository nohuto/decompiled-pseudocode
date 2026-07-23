/*
 * XREFs of sub_140998B6C @ 0x140998B6C
 * Callers:
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 */

__int64 sub_140998B6C()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // esi
  unsigned int v2; // ebx
  unsigned int v3; // edi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1F730, 0LL);
  v1 = dword_140C1F760;
  v2 = dword_140C1F764;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C1F730, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C1F730);
  sub_1402AFC00((ULONG_PTR)&qword_140C1F730);
  KeLeaveCriticalRegion();
  if ( v1 == 1 )
    goto LABEL_7;
  if ( v1 != 2 )
  {
    if ( (v2 & 1) == 0 )
      sub_1402D6B0C((__int64)&unk_140D01170, 0x8DF90Eu, 0, 0, (__int64)&qword_14003ABC8, 0);
LABEL_7:
    v3 = 0;
    goto LABEL_8;
  }
  v3 = 1;
LABEL_8:
  LOBYTE(word_140C1F7F8) = v3;
  if ( !v3 )
    sub_1402D6B0C((__int64)&unk_140D01168, 0x1BFD6D2u, 0, 0, (__int64)&qword_14003ABC8, 0);
  if ( (v2 & 1) != 0 && (v2 & 0xF0) - 32 > 0x40 )
  {
    v2 = v2 & 0xFFFFFF0F | 0x50;
    DbgPrintEx(
      0x92u,
      2u,
      "PopQueryPowerButtonBugcheckEnabled: PowerButtonLiveDump Timeout value is invalid or not specified. Set it to default.\n");
  }
  HIDWORD(qword_140C1F804) = v2;
  DbgPrintEx(
    0x92u,
    2u,
    "PopQueryPowerButtonBugcheckEnabled completed with BugcheckEnabled: %d, BugcheckConfig: %08x, LiveDumpConfig: %08x\n",
    v3,
    v1,
    v2);
  return v3;
}
