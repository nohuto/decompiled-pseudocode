/*
 * XREFs of KeRemoveQueueEx @ 0x1402B7FA0
 * Callers:
 *     KeRemoveQueue @ 0x14023FFE0 (KeRemoveQueue.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140241638 @ 0x140241638 (sub_140241638.c)
 *     sub_140242498 @ 0x140242498 (sub_140242498.c)
 *     sub_1402946B8 @ 0x1402946B8 (sub_1402946B8.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14062D7B4 @ 0x14062D7B4 (sub_14062D7B4.c)
 */

ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rbx
  LONGLONG QuadPart; // rsi
  unsigned __int8 CurrentIrql; // r11
  ULONG v12; // r12d
  unsigned __int8 i; // r15
  struct _KPRCB *v14; // rbp
  __int64 v15; // r9
  struct _LIST_ENTRY *v16; // r14
  struct _KPRCB *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbp
  struct _KQUEUE *v20; // r8
  unsigned int v21; // ebp
  int v22; // edx
  unsigned __int64 v23; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v25; // rcx
  _LIST_ENTRY *v26; // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  PLIST_ENTRY *v33; // r9
  __int64 v34; // rbp
  struct _LIST_ENTRY *v35; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rax
  PLIST_ENTRY *v41; // r15
  struct _KPRCB *v42; // rsi
  unsigned __int64 v43; // rdi
  __int64 v44; // rbp
  PLIST_ENTRY *v45; // rsi
  struct _KPRCB *v46; // rdi
  __int64 v47; // r9
  struct _KPRCB *v48; // r15
  __int64 v49; // rcx
  __int64 v50; // r15
  unsigned __int8 v51; // si
  __int64 v52; // r9
  struct _KPRCB *v53; // r14
  __int64 v54; // rcx
  __int64 v55; // r14
  __int64 v56; // rcx
  __int64 v57; // rcx
  unsigned __int8 v58; // cl
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  struct _KPRCB *v65; // rcx
  __int64 v66; // rdx
  bool v67; // zf
  struct _KPRCB *v68; // rcx
  __int64 v69; // rdx
  struct _KPRCB *v70; // r9
  int v71; // eax
  __int64 v72; // r8
  struct _KPRCB *v73; // rdi
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  struct _KPRCB *v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rdx
  struct _KPRCB *v86; // r9
  __int64 v87; // r8
  int v88; // eax
  PLIST_ENTRY *v89; // rdx
  struct _KPRCB *v90; // rcx
  __int64 v91; // rdx
  int v92; // eax
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r9
  __int64 v95; // r8
  int v96; // eax
  __int64 v97; // rdx
  struct _KTHREAD **v98; // rcx
  PLIST_ENTRY *v99; // rdx
  int v100; // [rsp+30h] [rbp-78h] BYREF
  int v101; // [rsp+34h] [rbp-74h] BYREF
  int v102; // [rsp+38h] [rbp-70h] BYREF
  int v103; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v104; // [rsp+40h] [rbp-68h] BYREF
  int v105[24]; // [rsp+48h] [rbp-60h] BYREF
  int v109; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  QuadPart = 0LL;
  if ( !_bittestandreset((signed __int32 *)CurrentThread + 29, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v28 + 20) |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    *((_BYTE *)CurrentThread + 390) = CurrentIrql;
  }
  v12 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v109 = 1;
    }
    else
    {
      v109 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + *((_QWORD *)CurrentThread + 31));
    }
  }
  else
  {
    v109 = 0;
  }
  if ( *((PKQUEUE *)CurrentThread + 29) == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v100 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          sub_1402F32E0(&v100);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        p_EntryListHead = &Queue->EntryListHead;
        v33 = EntryArray;
        v34 = 0LL;
        do
        {
          --Queue->Header.SignalState;
          v35 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, qword_140C11650, (ULONG_PTR)Flink[1].Flink);
          Blink = Flink->Blink;
          if ( v35->Blink != Flink || Blink->Flink != Flink )
            goto LABEL_271;
          Blink->Flink = v35;
          v35->Blink = Blink;
          Flink->Flink = 0LL;
          EntryArray[v34] = Flink;
          v34 = (unsigned int)(v34 + 1);
          Flink = p_EntryListHead->Flink;
        }
        while ( p_EntryListHead->Flink != p_EntryListHead && (unsigned int)v34 < Count );
        if ( (_DWORD)v34 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          CurrentPrcb = KeGetCurrentPrcb();
          v38 = *((unsigned __int8 *)CurrentThread + 390);
          if ( (unsigned __int8)v38 >= 2u )
          {
            if ( *((_QWORD *)CurrentPrcb + 2) && !*((_BYTE *)CurrentPrcb + 13242) )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) )
              {
                *((_BYTE *)CurrentPrcb + 6) = 1;
              }
              else
              {
                v105[0] = 5;
                *(_OWORD *)&v105[1] = 0LL;
                sub_1402ADD00(v105, 0x2Fu);
                v33 = EntryArray;
              }
            }
            goto LABEL_78;
          }
          v39 = *((_QWORD *)CurrentPrcb + 1);
          if ( *((_QWORD *)CurrentPrcb + 2) )
          {
            sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0);
            v48 = KeGetCurrentPrcb();
            v101 = 0;
            v49 = *((_QWORD *)v48 + 4375);
            if ( v49 )
            {
              if ( *((_BYTE *)v48 + 32) <= 1u )
              {
                v62 = *(_DWORD *)(v49 + 24);
                *(_DWORD *)(v49 + 24) = v62 + 1;
                if ( v62 == -1 )
LABEL_165:
                  sub_140418E4C(v48);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
            {
              v56 = *((_QWORD *)v48 + 4375);
              if ( v56 )
              {
                if ( *((_BYTE *)v48 + 32) <= 1u )
                {
                  v63 = *(_DWORD *)(v56 + 24) - 1;
                  *(_DWORD *)(v56 + 24) = v63;
                  if ( !v63 )
                    sub_140418E4C(v48);
                }
              }
              do
                sub_1402F32E0(&v101);
              while ( *((_QWORD *)CurrentPrcb + 6) );
              v57 = *((_QWORD *)v48 + 4375);
              if ( v57 )
              {
                if ( *((_BYTE *)v48 + 32) <= 1u )
                {
                  v64 = *(_DWORD *)(v57 + 24);
                  *(_DWORD *)(v57 + 24) = v64 + 1;
                  if ( v64 == -1 )
                    goto LABEL_165;
                }
              }
            }
            v50 = *((_QWORD *)CurrentPrcb + 2);
            *((_QWORD *)CurrentPrcb + 2) = 0LL;
            _disable();
            sub_140345C80(CurrentPrcb, v39, 0LL, 1LL);
            _enable();
            *((_QWORD *)CurrentPrcb + 1) = v50;
            if ( *(_BYTE *)(v50 + 388) == 1 )
              *(_DWORD *)(v50 + 132) = *(_DWORD *)(v50 + 132) - *(_DWORD *)(v50 + 436) + MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v50 + 388) = 2;
            *(_BYTE *)(v39 + 643) = 32;
            *(_BYTE *)(v39 + 390) = v38;
            sub_1402B9970(CurrentPrcb, v39);
            if ( (unsigned __int8)sub_140428A30(v39, v50, (unsigned __int8)v38) )
            {
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                {
                  v65 = KeGetCurrentPrcb();
                  v66 = *((_QWORD *)v65 + 4375);
                  v67 = (*(_DWORD *)(v66 + 20) & 0xFFFF0003) == 0;
                  *(_DWORD *)(v66 + 20) &= 0xFFFF0003;
                  if ( v67 )
                    sub_140418E4C(v65);
                }
              }
              __writecr8(1uLL);
              *(_DWORD *)(v39 + 116) &= ~0x40u;
              sub_1402F1DC0(0LL, 0LL, 0LL);
              v33 = EntryArray;
              goto LABEL_76;
            }
          }
          else
          {
            if ( (*(_DWORD *)(v39 + 116) & 0x40) == 0 )
              goto LABEL_76;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                v68 = KeGetCurrentPrcb();
                v69 = *((_QWORD *)v68 + 4375);
                v67 = (*(_DWORD *)(v69 + 20) & 0xFFFF0003) == 0;
                *(_DWORD *)(v69 + 20) &= 0xFFFF0003;
                if ( v67 )
                  sub_140418E4C(v68);
              }
            }
            __writecr8(1uLL);
            *(_DWORD *)(v39 + 116) &= ~0x40u;
            sub_1402F1DC0(0LL, 0LL, 0LL);
          }
          v33 = EntryArray;
LABEL_76:
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v70 = KeGetCurrentPrcb();
            v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
            v72 = *((_QWORD *)v70 + 4375);
            v67 = (v71 & *(_DWORD *)(v72 + 20)) == 0;
            *(_DWORD *)(v72 + 20) &= v71;
            if ( v67 )
              sub_140418E4C(v70);
            v33 = EntryArray;
          }
          __writecr8(v38);
LABEL_78:
          if ( (DWORD1(xmmword_140D06900) & 0x1000000) == 0 )
            return v34;
          v99 = v33;
LABEL_272:
          sub_14062D7B4(CurrentThread, v99, (unsigned int)v34);
          return v34;
        }
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      goto LABEL_11;
    }
    if ( Timeout && !Timeout->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        v41 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
        goto LABEL_87;
      }
      if ( Alertable )
      {
        v73 = KeGetCurrentPrcb();
        v102 = 0;
        v74 = *((_QWORD *)v73 + 4375);
        if ( v74 )
        {
          if ( *((_BYTE *)v73 + 32) <= 1u )
          {
            v75 = *(_DWORD *)(v74 + 24);
            *(_DWORD *)(v74 + 24) = v75 + 1;
            if ( v75 == -1 )
LABEL_198:
              sub_140418E4C(v73);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
        {
          v76 = *((_QWORD *)v73 + 4375);
          if ( v76 )
          {
            if ( *((_BYTE *)v73 + 32) <= 1u )
            {
              v77 = *(_DWORD *)(v76 + 24) - 1;
              *(_DWORD *)(v76 + 24) = v77;
              if ( !v77 )
                sub_140418E4C(v73);
            }
          }
          do
            sub_1402F32E0(&v102);
          while ( *((_QWORD *)CurrentThread + 8) );
          v78 = *((_QWORD *)v73 + 4375);
          if ( v78 )
          {
            if ( *((_BYTE *)v73 + 32) <= 1u )
            {
              v79 = *(_DWORD *)(v78 + 24);
              *(_DWORD *)(v78 + 24) = v79 + 1;
              if ( v79 == -1 )
                goto LABEL_198;
            }
          }
        }
        if ( *((_BYTE *)CurrentThread + WaitMode + 114) )
        {
          *((_BYTE *)CurrentThread + WaitMode + 114) = 0;
          v40 = 257LL;
        }
        else if ( !WaitMode
               || *((struct _KTHREAD **)CurrentThread + 21) == (struct _KTHREAD *)((char *)CurrentThread + 168) )
        {
          if ( *((_BYTE *)CurrentThread + 114) )
          {
            *((_BYTE *)CurrentThread + 114) = 0;
            v40 = 257LL;
          }
          else
          {
            v40 = 0LL;
          }
        }
        else
        {
          *((_BYTE *)CurrentThread + 194) |= 2u;
          v40 = 192LL;
        }
        if ( v40 )
          goto LABEL_85;
      }
      else if ( (*((_BYTE *)CurrentThread + 194) & 2) != 0 && WaitMode )
      {
        v41 = EntryArray;
        *EntryArray = (PLIST_ENTRY)192;
        goto LABEL_87;
      }
      v40 = 258LL;
LABEL_85:
      v41 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v40;
      if ( Alertable )
        sub_140224100((__int64)CurrentThread);
LABEL_87:
      v42 = KeGetCurrentPrcb();
      v43 = *((unsigned __int8 *)CurrentThread + 390);
      if ( (unsigned __int8)v43 >= 2u )
      {
        if ( *((_QWORD *)v42 + 2) && !*((_BYTE *)v42 + 13242) )
        {
          if ( *((_BYTE *)v42 + 32) )
          {
            *((_BYTE *)v42 + 6) = 1;
          }
          else
          {
            v105[0] = 5;
            *(_OWORD *)&v105[1] = 0LL;
            sub_1402ADD00(v105, 0x2Fu);
          }
        }
        goto LABEL_92;
      }
      v44 = *((_QWORD *)v42 + 1);
      if ( *((_QWORD *)v42 + 2) )
      {
        sub_1402B4EC0(*((_QWORD *)v42 + 1), 0);
        v53 = KeGetCurrentPrcb();
        v103 = 0;
        v54 = *((_QWORD *)v53 + 4375);
        if ( v54 )
        {
          if ( *((_BYTE *)v53 + 32) <= 1u )
          {
            v80 = *(_DWORD *)(v54 + 24);
            *(_DWORD *)(v54 + 24) = v80 + 1;
            if ( v80 == -1 )
LABEL_221:
              sub_140418E4C(v53);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v42 + 12, 0LL) )
        {
          v60 = *((_QWORD *)v53 + 4375);
          if ( v60 )
          {
            if ( *((_BYTE *)v53 + 32) <= 1u )
            {
              v81 = *(_DWORD *)(v60 + 24) - 1;
              *(_DWORD *)(v60 + 24) = v81;
              if ( !v81 )
                sub_140418E4C(v53);
            }
          }
          do
            sub_1402F32E0(&v103);
          while ( *((_QWORD *)v42 + 6) );
          v61 = *((_QWORD *)v53 + 4375);
          if ( v61 )
          {
            if ( *((_BYTE *)v53 + 32) <= 1u )
            {
              v82 = *(_DWORD *)(v61 + 24);
              *(_DWORD *)(v61 + 24) = v82 + 1;
              if ( v82 == -1 )
                goto LABEL_221;
            }
          }
        }
        v55 = *((_QWORD *)v42 + 2);
        *((_QWORD *)v42 + 2) = 0LL;
        _disable();
        sub_140345C80(v42, v44, 0LL, 1LL);
        _enable();
        *((_QWORD *)v42 + 1) = v55;
        if ( *(_BYTE *)(v55 + 388) == 1 )
          *(_DWORD *)(v55 + 132) = *(_DWORD *)(v55 + 132) - *(_DWORD *)(v55 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v55 + 388) = 2;
        *(_BYTE *)(v44 + 643) = 32;
        *(_BYTE *)(v44 + 390) = v43;
        sub_1402B9970(v42, v44);
        if ( !(unsigned __int8)sub_140428A30(v44, v55, (unsigned __int8)v43) )
          goto LABEL_90;
        if ( !dword_140D06B08 )
          goto LABEL_140;
        if ( (dword_140D06B08 & 1) == 0 )
          goto LABEL_140;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
          goto LABEL_140;
        v83 = KeGetCurrentPrcb();
        v84 = *((_QWORD *)v83 + 4375);
        v67 = (*(_DWORD *)(v84 + 20) & 0xFFFF0003) == 0;
        *(_DWORD *)(v84 + 20) &= 0xFFFF0003;
        if ( !v67 )
          goto LABEL_140;
      }
      else
      {
        if ( (*(_DWORD *)(v44 + 116) & 0x40) == 0 )
          goto LABEL_90;
        if ( !dword_140D06B08
          || (dword_140D06B08 & 1) == 0
          || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
          || (v83 = KeGetCurrentPrcb(),
              v85 = *((_QWORD *)v83 + 4375),
              v67 = (*(_DWORD *)(v85 + 20) & 0xFFFF0003) == 0,
              *(_DWORD *)(v85 + 20) &= 0xFFFF0003,
              !v67) )
        {
LABEL_140:
          __writecr8(1uLL);
          *(_DWORD *)(v44 + 116) &= ~0x40u;
          sub_1402F1DC0(0LL, 0LL, 0LL);
LABEL_90:
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v86 = KeGetCurrentPrcb();
              v87 = *((_QWORD *)v86 + 4375);
              v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
              v67 = (v88 & *(_DWORD *)(v87 + 20)) == 0;
              *(_DWORD *)(v87 + 20) &= v88;
              if ( v67 )
                sub_140418E4C(v86);
            }
          }
          __writecr8(v43);
LABEL_92:
          if ( (DWORD1(xmmword_140D06900) & 0x1000000) == 0 )
            return v12;
          v89 = v41;
          goto LABEL_258;
        }
      }
      sub_140418E4C(v83);
      goto LABEL_140;
    }
  }
LABEL_11:
  for ( i = *((_BYTE *)CurrentThread + 390); ; *((_BYTE *)CurrentThread + 390) = i )
  {
    while ( 1 )
    {
      *((_DWORD *)CurrentThread + 29) &= ~0x10u;
      *((_BYTE *)CurrentThread + 112) = 0;
      *((_BYTE *)CurrentThread + 391) = WaitMode;
      if ( Alertable )
        *((_DWORD *)CurrentThread + 29) |= 0x10u;
      v14 = KeGetCurrentPrcb();
      v104 = 0;
      while ( 1 )
      {
        sub_1402B1050((__int64)v14, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
          break;
        sub_1402B1050((__int64)v14, 0);
        do
          sub_1402F32E0(&v104);
        while ( *((_QWORD *)CurrentThread + 8) );
      }
      if ( !*((_BYTE *)CurrentThread + 193) || *((_WORD *)CurrentThread + 243) || i )
        break;
      sub_140224100((__int64)CurrentThread);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v90 = KeGetCurrentPrcb();
          v91 = *((_QWORD *)v90 + 4375);
          v67 = (*(_DWORD *)(v91 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v91 + 20) &= 0xFFFF0003;
          if ( v67 )
            sub_140418E4C(v90);
        }
      }
      __writecr8(1uLL);
      sub_1402F1DC0(0LL, 0LL, 0LL);
      v58 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v58 <= 0xFu )
      {
        v59 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v59 + 20) |= ~((unsigned __int8)(1LL << (v58 + 1)) - 1) & 4;
      }
      *((_BYTE *)CurrentThread + 390) = 0;
    }
    v16 = (struct _LIST_ENTRY *)((char *)CurrentThread + 320);
    if ( Alertable )
    {
      if ( *((_BYTE *)CurrentThread + WaitMode + 114) )
      {
        *((_BYTE *)CurrentThread + WaitMode + 114) = 0;
        v19 = 257LL;
      }
      else if ( WaitMode
             && *((struct _KTHREAD **)CurrentThread + 21) != (struct _KTHREAD *)((char *)CurrentThread + 168) )
      {
        *((_BYTE *)CurrentThread + 194) |= 2u;
LABEL_25:
        v19 = 192LL;
      }
      else
      {
        if ( !*((_BYTE *)CurrentThread + 114) )
          goto LABEL_22;
        *((_BYTE *)CurrentThread + 114) = 0;
        v19 = 257LL;
      }
      sub_140224100((__int64)CurrentThread);
      sub_140294824((__int64)KeGetCurrentPrcb(), i);
      *EntryArray = (PLIST_ENTRY)v19;
      if ( (DWORD1(xmmword_140D06900) & 0x1000000) == 0 )
        return v12;
      v89 = EntryArray;
LABEL_258:
      sub_14062D7B4(CurrentThread, v89, 1LL);
      return v12;
    }
    if ( (*((_BYTE *)CurrentThread + 194) & 2) != 0 && WaitMode )
      goto LABEL_25;
LABEL_22:
    *((_BYTE *)CurrentThread + 388) = 5;
    *((_BYTE *)CurrentThread + 643) = 15;
    *((_DWORD *)CurrentThread + 109) = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)CurrentThread + 8) = 0LL;
    v17 = KeGetCurrentPrcb();
    v18 = *((_QWORD *)v17 + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)v17 + 32) <= 1u )
      {
        v92 = *(_DWORD *)(v18 + 24) - 1;
        *(_DWORD *)(v18 + 24) = v92;
        if ( !v92 )
          sub_140418E4C(v17);
      }
    }
    v20 = (struct _KQUEUE *)*((_QWORD *)CurrentThread + 29);
    if ( Queue != v20 )
      sub_140242498((__int64)CurrentThread, (__int64)Queue, (__int64)v20);
    *((_BYTE *)CurrentThread + 336) = 3;
    *((_BYTE *)CurrentThread + 337) = 4;
    v21 = 0;
    *((_WORD *)CurrentThread + 169) = 128;
    *((_QWORD *)CurrentThread + 44) = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v21 & dword_140D0527C) == 0
          && (dword_140D0689C & 0x40) != 0
          && (unsigned __int8)sub_14039EA10(v17, v18, v20, v15) )
        {
          sub_14039D930(v21);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    }
    if ( Queue->Header.SignalState )
    {
      if ( Queue->CurrentCount <= Queue->MaximumCount )
      {
        LODWORD(v34) = sub_140241638((ULONG_PTR)Queue, (__int64)EntryArray, Count);
        if ( (_DWORD)v34 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          v45 = EntryArray;
LABEL_102:
          *((_BYTE *)CurrentThread + 643) = 0;
          v46 = KeGetCurrentPrcb();
          if ( *((_QWORD *)v46 + 1441) )
            sub_140340390(v46, 1LL, 0LL, 2LL);
          sub_1402946B8((__int64)v46, (__int64)CurrentThread, 1LL);
          if ( (DWORD1(xmmword_140D06900) & 0x1000000) == 0 )
            return v34;
          v99 = v45;
          goto LABEL_272;
        }
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      if ( *((_QWORD *)CurrentThread + 29) )
      {
        v97 = *((_QWORD *)CurrentThread + 65);
        v98 = (struct _KTHREAD **)*((_QWORD *)CurrentThread + 66);
        if ( *(struct _KTHREAD **)(v97 + 8) != (struct _KTHREAD *)((char *)CurrentThread + 520)
          || *v98 != (struct _KTHREAD *)((char *)CurrentThread + 520) )
        {
LABEL_271:
          __fastfail(3u);
        }
        *v98 = (struct _KTHREAD *)v97;
        *(_QWORD *)(v97 + 8) = v98;
        *((_QWORD *)CurrentThread + 29) = 0LL;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      v45 = EntryArray;
      *EntryArray = (PLIST_ENTRY)128;
      goto LABEL_130;
    }
    v22 = v109;
    v23 = QuadPart;
    if ( v109 == 2 )
    {
      v29 = *((unsigned int *)CurrentThread + 238);
      v30 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)CurrentThread + 31) - MEMORY[0xFFFFF780000003B0];
      v23 = QuadPart;
      if ( *((_BYTE *)CurrentThread + 391)
        && !*((_DWORD *)CurrentThread + 121)
        && !*((_BYTE *)CurrentThread + 390)
        && !*((_BYTE *)CurrentThread + 192)
        && (_DWORD)v29 )
      {
        v23 = QuadPart + v29;
      }
      v22 = 2;
    }
    else
    {
      if ( !v109 )
        goto LABEL_34;
      if ( !QuadPart )
      {
LABEL_129:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        v45 = EntryArray;
        *EntryArray = (PLIST_ENTRY)258;
LABEL_130:
        LODWORD(v34) = 1;
        goto LABEL_102;
      }
      v30 = MEMORY[0xFFFFF78000000014];
    }
    if ( v30 > v23 )
      goto LABEL_129;
LABEL_34:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v25 = Queue->Header.WaitListHead.Flink;
    if ( v25->Blink != &Queue->Header.WaitListHead )
      goto LABEL_271;
    v16->Flink = v25;
    *((_QWORD *)CurrentThread + 41) = p_WaitListHead;
    v25->Blink = v16;
    p_WaitListHead->Flink = v16;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    *((_BYTE *)CurrentThread + 587) = 1;
    v26 = (_LIST_ENTRY *)sub_1402B5240((__int64)CurrentThread, (__int64 *)CurrentThread + 40, v22, QuadPart, 0LL);
    *((_BYTE *)CurrentThread + 643) = 0;
    if ( v26 != (_LIST_ENTRY *)256 )
      break;
    i = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && i <= 0xFu )
    {
      v47 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v47 + 20) |= ~((unsigned __int8)(1LL << (i + 1)) - 1) & 4;
    }
  }
  *EntryArray = v26;
  if ( Count > 1
    && (unsigned __int64)&v26[-17].Blink + 7 > 1
    && v26 != (_LIST_ENTRY *)128
    && v26 != (_LIST_ENTRY *)192
    && Queue->Header.SignalState )
  {
    v51 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v51 <= 0xFu )
    {
      v52 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v52 + 20) |= (-1 << (v51 + 1)) & 4;
    }
    sub_1402F3290(Queue);
    if ( Queue->Header.SignalState )
      v12 = sub_140241638((ULONG_PTR)Queue, (__int64)(EntryArray + 1), Count - 1) + 1;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v93 = KeGetCurrentIrql();
        if ( v93 <= 0xFu && v51 <= 0xFu && v93 >= 2u )
        {
          v94 = KeGetCurrentPrcb();
          v95 = *((_QWORD *)v94 + 4375);
          v96 = ~(unsigned __int16)(-1LL << (v51 + 1));
          v67 = (v96 & *(_DWORD *)(v95 + 20)) == 0;
          *(_DWORD *)(v95 + 20) &= v96;
          if ( v67 )
            sub_140418E4C(v94);
        }
      }
    }
    __writecr8(v51);
  }
  if ( (DWORD1(xmmword_140D06900) & 0x1000000) == 0 )
    return v12;
  sub_14062D7B4(CurrentThread, EntryArray, v12);
  return v12;
}
