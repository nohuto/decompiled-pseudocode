/*
 * XREFs of KePulseEvent @ 0x14026A0D0
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     sub_14034BAE0 @ 0x14034BAE0 (sub_14034BAE0.c)
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 *     sub_1405B3180 @ 0x1405B3180 (sub_1405B3180.c)
 *     sub_1405B8128 @ 0x1405B8128 (sub_1405B8128.c)
 *     sub_140613D60 @ 0x140613D60 (sub_140613D60.c)
 *     sub_1406F2B70 @ 0x1406F2B70 (sub_1406F2B70.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v3; // esi
  BOOL v6; // r14d
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // ebp
  LIST_ENTRY *p_WaitListHead; // rdi
  LIST_ENTRY *Flink; // r14
  __int64 v13; // r9
  LIST_ENTRY *v14; // r10
  char v15; // al
  __int64 v16; // r8
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *v18; // r14
  struct _LIST_ENTRY *v19; // rax
  void **p_Flink; // rcx
  char v21; // al
  bool v22; // zf
  unsigned __int8 v23; // cl
  __int64 v24; // r9
  unsigned __int8 v25; // al
  __int64 v26; // r9
  struct _LIST_ENTRY **v27; // r8
  struct _LIST_ENTRY *v28; // rcx
  char v29; // al
  int v30; // r9d
  struct _LIST_ENTRY *v31; // rdx
  unsigned __int8 v32; // cl
  __int64 v33; // r9
  unsigned __int8 v34; // al
  __int64 v35; // r9
  __int64 v36; // r10
  struct _LIST_ENTRY **p_Blink; // r9
  struct _LIST_ENTRY *v38; // rcx
  char v39; // al
  int Flink_high; // r10d
  struct _LIST_ENTRY *v41; // r8
  struct _KPRCB *v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v44; // [rsp+38h] [rbp-50h]
  LIST_ENTRY *v45; // [rsp+40h] [rbp-48h]
  __int64 v46; // [rsp+40h] [rbp-48h]
  struct _LIST_ENTRY *v47; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *Blink; // [rsp+90h] [rbp+8h]
  LIST_ENTRY *v50; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v6 = (Event->Header.Type & 0x7F) == 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  sub_1402F3290(Event);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    p_WaitListHead = &Event->Header.WaitListHead;
    if ( v6 )
    {
      Flink = p_WaitListHead->Flink;
      if ( p_WaitListHead->Flink == p_WaitListHead )
      {
LABEL_5:
        Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
        p_WaitListHead->Flink = p_WaitListHead;
        goto LABEL_6;
      }
      while ( 1 )
      {
        v14 = Flink;
        v50 = Flink;
        Flink = Flink->Flink;
        v15 = (char)v14[1].Flink;
        switch ( v15 )
        {
          case 1:
            v16 = WORD1(v14[1].Flink);
            break;
          case 2:
            BYTE1(v14[1].Flink) = 5;
            Blink = v14[1].Blink;
            v14->Flink = 0LL;
            v32 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v32 <= 0xFu )
            {
              v33 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v33 + 20) |= (-1 << (v32 + 1)) & 4;
            }
            v44 = KeGetCurrentPrcb();
            v46 = *((_QWORD *)v44 + 1);
            if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
            {
              v34 = sub_14056B1E4(*((_QWORD *)v44 + 1));
              sub_14062DA60(v35, v36, v34);
            }
            sub_1402F3290(Blink);
            p_Blink = &Blink->Blink;
            v38 = Blink;
            if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink
              && LODWORD(Blink[2].Blink) < HIDWORD(Blink[2].Blink)
              && (*(struct _LIST_ENTRY **)(v46 + 232) != Blink || *(_BYTE *)(v46 + 643) != 15) )
            {
              v39 = sub_1402F6A70(v44, Blink, v50);
              v38 = Blink;
              if ( v39 )
              {
                v50->Flink = 0LL;
LABEL_67:
                _InterlockedAnd((volatile signed __int32 *)v38, 0xFFFFFF7F);
                goto LABEL_15;
              }
              p_Blink = &Blink->Blink;
            }
            Flink_high = HIDWORD(v38->Flink);
            HIDWORD(v38->Flink) = Flink_high + 1;
            v41 = v38[2].Flink;
            if ( v41->Flink != (struct _LIST_ENTRY *)&v38[1].Blink )
              goto LABEL_71;
            v50->Flink = (struct _LIST_ENTRY *)((char *)v38 + 24);
            v50->Blink = v41;
            v41->Flink = v50;
            v38[2].Flink = v50;
            if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
            {
              sub_14035B550(v44, v38);
              v38 = Blink;
            }
            goto LABEL_67;
          case 4:
            BYTE1(v14[1].Flink) = 5;
            Event->Header.SignalState = 0;
            KeInsertQueueDpc((PRKDPC)v14[1].Blink, Event, v14);
            goto LABEL_15;
          default:
            v16 = 256LL;
            break;
        }
        sub_1402F6BC0(CurrentPrcb, v14, v16, 0LL);
LABEL_15:
        if ( Flink == p_WaitListHead )
          goto LABEL_5;
      }
    }
    v17 = p_WaitListHead->Flink;
    if ( p_WaitListHead->Flink != p_WaitListHead )
    {
      do
      {
        v18 = v17;
        v19 = v17->Flink;
        v45 = v19;
        p_Flink = (void **)&v18->Blink->Flink;
        if ( v19->Blink != v18 || *p_Flink != v18 )
LABEL_71:
          __fastfail(3u);
        *p_Flink = v19;
        v19->Blink = (struct _LIST_ENTRY *)p_Flink;
        v21 = (char)v18[1].Flink;
        switch ( v21 )
        {
          case 1:
            if ( (unsigned __int8)sub_1402F6BC0(CurrentPrcb, v18, WORD1(v18[1].Flink), 0LL) )
            {
              v22 = Event->Header.SignalState-- == 1;
              if ( v22 )
                goto LABEL_6;
            }
            break;
          case 2:
            BYTE1(v18[1].Flink) = 5;
            v47 = v18[1].Blink;
            v18->Flink = 0LL;
            v23 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v23 <= 0xFu )
            {
              v24 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v24 + 20) |= (-1 << (v23 + 1)) & 4;
            }
            v42 = KeGetCurrentPrcb();
            v43 = *((_QWORD *)v42 + 1);
            if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
            {
              v25 = sub_14056B1E4(*((_QWORD *)v42 + 1));
              sub_14062DA60(v26, v18, v25);
            }
            sub_1402F3290(v47);
            v27 = &v47->Blink;
            v28 = v47;
            if ( *v27 != (struct _LIST_ENTRY *)v27
              && LODWORD(v47[2].Blink) < HIDWORD(v47[2].Blink)
              && (*(struct _LIST_ENTRY **)(v43 + 232) != v47 || *(_BYTE *)(v43 + 643) != 15) )
            {
              v29 = sub_1402F6A70(v42, v47, v18);
              v28 = v47;
              if ( v29 )
              {
                v18->Flink = 0LL;
                goto LABEL_42;
              }
              v27 = &v47->Blink;
            }
            v30 = HIDWORD(v28->Flink);
            HIDWORD(v28->Flink) = v30 + 1;
            v31 = v28[2].Flink;
            if ( v31->Flink != (struct _LIST_ENTRY *)&v28[1].Blink )
              goto LABEL_71;
            v18->Flink = (struct _LIST_ENTRY *)((char *)v28 + 24);
            v18->Blink = v31;
            v31->Flink = v18;
            v28[2].Flink = v18;
            if ( !v30 && *v27 != (struct _LIST_ENTRY *)v27 )
            {
              sub_14035B550(v42, v28);
              v28 = v47;
            }
LABEL_42:
            _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
            v22 = Event->Header.SignalState-- == 1;
            if ( v22 )
              goto LABEL_6;
            break;
          case 4:
            BYTE1(v18[1].Flink) = 5;
            Event->Header.SignalState = 0;
            KeInsertQueueDpc((PRKDPC)v18[1].Blink, Event, v18);
            break;
          default:
            sub_1402F6BC0(CurrentPrcb, v18, 256LL, 0LL);
            break;
        }
        v17 = v45;
      }
      while ( v45 != p_WaitListHead );
    }
  }
LABEL_6:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( Wait )
    v3 = 3;
  sub_1402B0820((_DWORD)CurrentPrcb, v3, 1, Increment, CurrentIrql);
  return SignalState;
}
