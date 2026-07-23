/*
 * XREFs of MiWakeZeroingThreads @ 0x1402224D4
 * Callers:
 *     MiWakePageZeroing @ 0x14021E7A4 (MiWakePageZeroing.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiZeroNodeExiting @ 0x140655C88 (MiZeroNodeExiting.c)
 * Callees:
 *     MiUnparkedCoreCount @ 0x140220E6C (MiUnparkedCoreCount.c)
 *     MiAddZeroingThreads @ 0x140222574 (MiAddZeroingThreads.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C38E0 (ObReferenceObjectSafeWithTag.c)
 */

int __fastcall MiWakeZeroingThreads(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v5; // r14
  int v6; // r15d
  unsigned int v7; // ebx
  struct _KEVENT *i; // rbx
  struct _LIST_ENTRY *Flink; // rbp

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a1 + 108;
  v5 = 3LL;
  v6 = *(_DWORD *)(v2 + 108);
  do
  {
    if ( *(_BYTE *)(v3 + 15) )
    {
      if ( v6 )
      {
        for ( i = *(struct _KEVENT **)(v3 + 172); i != (struct _KEVENT *)(v3 + 172); i = *(struct _KEVENT **)&i->Header.Lock )
        {
          LODWORD(v2) = i[-2].Header.WaitListHead.Blink;
          if ( (v2 & 1) != 0 )
          {
            if ( ((__int64)i[-2].Header.WaitListHead.Blink & 4) == 0 )
            {
              Flink = i[-4].Header.WaitListHead.Flink;
              if ( (unsigned __int8)ObReferenceObjectSafeWithTag(Flink, 1953261124LL) )
              {
                LODWORD(i[-2].Header.WaitListHead.Blink) |= 8u;
                KeSetActualBasePriorityThread((ULONG_PTR)Flink);
                ObfDereferenceObject(Flink);
              }
            }
            LODWORD(v2) = i[-2].Header.WaitListHead.Blink;
            if ( (v2 & 2) != 0 )
            {
              LODWORD(i[-2].Header.WaitListHead.Blink) &= ~2u;
              ++*(_DWORD *)v3;
              LODWORD(v2) = KeSetEvent(i - 1, 0, 0);
            }
          }
        }
      }
      else
      {
        v7 = *(_DWORD *)(v3 - 4);
        if ( (a2 & 2) != 0 )
        {
          LODWORD(v2) = MiUnparkedCoreCount(v3 - 12, v7);
          v7 = v2;
        }
        do
        {
          if ( *(_DWORD *)v3 >= v7 )
            break;
          LODWORD(v2) = MiAddZeroingThreads(v3 - 12);
        }
        while ( !(_DWORD)v2 );
      }
    }
    v3 += 296LL;
    --v5;
  }
  while ( v5 );
  return v2;
}
