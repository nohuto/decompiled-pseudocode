/*
 * XREFs of MiCheckReservePageFileSpace @ 0x140283270
 * Callers:
 *     MiWsleFlush @ 0x1402810A0 (MiWsleFlush.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x140284C30 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x1402855C0 (MI_IS_RESET_PTE.c)
 *     MiGetWorkingSetSwapSupport @ 0x140342C08 (MiGetWorkingSetSwapSupport.c)
 */

char __fastcall MiCheckReservePageFileSpace(__int64 a1, _BYTE *a2, __int64 a3)
{
  struct _LIST_ENTRY *CurrentThread; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rdx

  LOBYTE(CurrentThread) = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( (_BYTE)CurrentThread == 4 )
    return (char)CurrentThread;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a1 + 16;
  LOBYTE(CurrentThread) = 0;
  if ( (unsigned __int64)(a1 + 16) < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_3;
  LOBYTE(CurrentThread) = -8;
  if ( v7 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_3;
  if ( (MiFlags & 0x600000) == 0 )
    goto LABEL_3;
  CurrentThread = (struct _LIST_ENTRY *)KeGetCurrentThread();
  if ( LOBYTE(CurrentThread[11].Blink[57].Flink) == 1 )
    goto LABEL_3;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 0x20) == 0 || (v6 & 0x42) == 0 )
    {
      CurrentThread = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( CurrentThread )
      {
        v11 = v6 | 0x20;
        CurrentThread = (struct _LIST_ENTRY *)*((_QWORD *)&CurrentThread->Flink + ((v7 >> 3) & 0x1FF));
        if ( ((unsigned __int8)CurrentThread & 0x20) == 0 )
          v11 = *(_QWORD *)(a1 + 16);
        v6 = v11;
        if ( ((unsigned __int8)CurrentThread & 0x42) != 0 )
          v6 = v11 | 0x42;
      }
    }
LABEL_3:
    if ( (v6 & 1) != 0 )
      return (char)CurrentThread;
  }
  if ( !v6 || (LOBYTE(CurrentThread) = qword_140C65B40, !qword_140C65B40) || (qword_140C65B40 & v6) != 0 )
  {
    LODWORD(CurrentThread) = *(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                                       + 1076LL);
    if ( (_DWORD)CurrentThread )
    {
      LOBYTE(CurrentThread) = (unsigned __int8)v6 >> 1;
      if ( (v6 & 2) == 0 )
      {
        CurrentThread = (struct _LIST_ENTRY *)MiGetWorkingSetSwapSupport(a3);
        if ( !CurrentThread )
        {
          LODWORD(CurrentThread) = MI_IS_RESET_PTE(v9, v8);
          if ( !(_DWORD)CurrentThread || (*(_BYTE *)(a1 + 34) & 0x10) != 0 || (*a2 & 0x42) != 0 )
          {
            LOBYTE(CurrentThread) = 120;
            if ( (unsigned __int64)a2 <= 0xFFFFF6BFFFFFFF78uLL )
            {
              LOBYTE(CurrentThread) = 0;
              if ( (unsigned __int64)a2 >= 0xFFFFF68000000000uLL )
                LOBYTE(CurrentThread) = MiReservePageFileSpace(v10, a2);
            }
          }
        }
      }
    }
  }
  return (char)CurrentThread;
}
