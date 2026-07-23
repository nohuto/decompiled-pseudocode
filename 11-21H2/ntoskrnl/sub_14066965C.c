/*
 * XREFs of sub_14066965C @ 0x14066965C
 * Callers:
 *     sub_140668CE0 @ 0x140668CE0 (sub_140668CE0.c)
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_14066965C(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 21) = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  return ExAcquirePushLockSharedEx(a2 + 296, 0LL);
}
