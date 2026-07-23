/*
 * XREFs of sub_140A540E0 @ 0x140A540E0
 * Callers:
 *     sub_14081BB14 @ 0x14081BB14 (sub_14081BB14.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140399288 @ 0x140399288 (sub_140399288.c)
 *     sub_1405C614C @ 0x1405C614C (sub_1405C614C.c)
 *     sub_140808A98 @ 0x140808A98 (sub_140808A98.c)
 *     sub_140A52C2C @ 0x140A52C2C (sub_140A52C2C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A540E0(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // eax
  KPRIORITY v10; // ebp
  int v11; // eax
  PVOID Object[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)Object = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    sub_140808A98(BugCheckParameter2, (PETHREAD *)Object);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 48);
    v10 = 1;
    if ( v9
      && (sub_140A52C2C(BugCheckParameter2, v9, 0, 1),
          sub_140399288(BugCheckParameter2),
          v11 = *(_DWORD *)(BugCheckParameter2 + 48),
          *(_QWORD *)(BugCheckParameter2 + 40) = 0LL,
          *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3,
          v11)
      || a3 )
    {
      *(_DWORD *)(BugCheckParameter2 + 48) = a3;
      if ( a3 )
      {
        ++*(_DWORD *)(BugCheckParameter2 + 52);
        if ( a3 == 3 )
          *(_QWORD *)(BugCheckParameter2 + 56) = a4;
        if ( Object[0] )
        {
          sub_1405C614C(BugCheckParameter2, (ULONG_PTR *)Object);
          v10 = 0;
        }
        else
        {
          v10 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v10, 0);
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 48) = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  sub_1402AFC00(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( Object[0] )
    ObDereferenceObjectDeferDelete(Object[0]);
  if ( Object[1] )
    ExFreePoolWithTag(Object[1], 0);
}
