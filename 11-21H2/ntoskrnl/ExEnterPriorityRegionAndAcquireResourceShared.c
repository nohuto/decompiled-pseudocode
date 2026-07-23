/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x140220460
 * Callers:
 *     sub_1406084B0 @ 0x1406084B0 (sub_1406084B0.c)
 * Callees:
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     sub_14039C618 @ 0x14039C618 (sub_14039C618.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v6; // rdx
  void *v7; // rsi

  CurrentThread = KeGetCurrentThread();
  sub_1402ACD80(CurrentThread, 0LL, 0LL, 0LL);
  --*((_WORD *)CurrentThread + 242);
  v3 = *(unsigned __int16 *)(BugCheckParameter2 + 26);
  if ( (v3 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  if ( (v3 & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v6 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (*((_BYTE *)v6 + 192) & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (*((_DWORD *)v6 + 29) & 0x400) == 0 && !*((_DWORD *)v6 + 121) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    v7 = (void *)sub_14039C618();
    if ( !(unsigned __int8)ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)v7) )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    LOBYTE(v3) = 1;
    sub_1402B1170(BugCheckParameter2, v3);
  }
  return *((_QWORD *)CurrentThread + 57);
}
