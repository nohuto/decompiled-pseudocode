/*
 * XREFs of sub_1409A4BF0 @ 0x1409A4BF0
 * Callers:
 *     sub_1409A3B80 @ 0x1409A3B80 (sub_1409A3B80.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall sub_1409A4BF0(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  result = *(_QWORD *)(a2 + 16);
  *a1 = result;
  return result;
}
