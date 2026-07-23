/*
 * XREFs of MiDereferenceSegmentThread @ 0x1403A7E70
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     KeSetPriorityThread @ 0x1402B05D0 (KeSetPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     MiDeleteEmptySubsections @ 0x140361C08 (MiDeleteEmptySubsections.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CcUnmapInactiveViews @ 0x1405387C8 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x140623EA4 (MiDeleteCachedSegment.c)
 *     MiDeleteControlAreaList @ 0x1406249B4 (MiDeleteControlAreaList.c)
 *     MiProcessDeleteOnClose @ 0x14062535C (MiProcessDeleteOnClose.c)
 *     MiProcessDereferenceList @ 0x140625604 (MiProcessDereferenceList.c)
 *     MiRemoveUnusedSegments @ 0x140626074 (MiRemoveUnusedSegments.c)
 *     MiFreeClonePool @ 0x140664C6C (MiFreeClonePool.c)
 */

void *__fastcall MiDereferenceSegmentThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v10; // rdx
  void *result; // rax
  PVOID Object[8]; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1A8h] BYREF

  *(_BYTE *)(a1 + 1745) = 1;
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  Object[0] = (PVOID)(a1 + 104);
  Object[2] = (PVOID)(a1 + 1584);
  Object[1] = (PVOID)(a1 + 1440);
  Object[4] = (PVOID)(a1 + 1680);
  Object[3] = (PVOID)(a1 + 1464);
  Object[5] = (PVOID)(a1 + 1816);
  Object[6] = (PVOID)(a1 + 2040);
  Object[7] = &stru_140C67090;
  while ( 1 )
  {
    v3 = KeWaitForMultipleObjects(
           8 - (&MiSystemPartition != (_UNKNOWN *)a1),
           Object,
           WaitAny,
           WrVirtualMemory,
           0,
           0,
           0LL,
           &WaitBlockArray);
    if ( v3 == 1 )
      goto LABEL_3;
    MiDeleteEmptySubsections(a1);
    if ( !v3 )
      break;
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                if ( v9 == 1 )
                {
                  KeResetEvent(&stru_140C67090);
                  while ( (unsigned int)CcUnmapInactiveViews(0LL, v10, 1LL, 0LL)
                       && (unsigned __int64)qword_140C66D08 <= 0x8000000 )
                    ;
                }
              }
              else
              {
                KeResetEvent((PRKEVENT)(a1 + 2040));
                MiFreeClonePool(a1);
              }
            }
            else
            {
              MiDeleteControlAreaList(a1);
            }
          }
          else
          {
            MiProcessDeleteOnClose(a1);
          }
        }
        else
        {
          KeResetEvent((PRKEVENT)(a1 + 1464));
          MiRemoveUnusedSegments(a1, 0LL);
        }
      }
      else
      {
        MiProcessDereferenceList(a1, 1LL);
      }
    }
    else
    {
LABEL_3:
      KeResetEvent((PRKEVENT)(a1 + 1440));
      MiDeleteEmptySubsections(a1);
    }
  }
  result = &MiSystemPartition;
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    while ( *(_QWORD *)(a1 + 1768) != a1 + 1768 && (unsigned int)MiDeleteCachedSegment(a1) )
      ;
    *(_BYTE *)(a1 + 1744) = 1;
    MiProcessDeleteOnClose(a1);
    return (void *)MiDeleteControlAreaList(a1);
  }
  return result;
}
