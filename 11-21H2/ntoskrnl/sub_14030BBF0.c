/*
 * XREFs of sub_14030BBF0 @ 0x14030BBF0
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_1402416A4 @ 0x1402416A4 (sub_1402416A4.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_140266644 @ 0x140266644 (sub_140266644.c)
 *     sub_1402669CC @ 0x1402669CC (sub_1402669CC.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_1402A1948 @ 0x1402A1948 (sub_1402A1948.c)
 *     sub_1402A19AC @ 0x1402A19AC (sub_1402A19AC.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_14036DAE4 @ 0x14036DAE4 (sub_14036DAE4.c)
 *     sub_1403DADE0 @ 0x1403DADE0 (sub_1403DADE0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056C540 @ 0x14056C540 (sub_14056C540.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_1405962EC @ 0x1405962EC (sub_1405962EC.c)
 *     sub_140596B14 @ 0x140596B14 (sub_140596B14.c)
 */

void __fastcall sub_14030BBF0(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  PRKEVENT v4; // rdi
  int v5; // esi
  _QWORD *v6; // rbx
  __int64 v7; // r11
  __int64 *v8; // r12
  int v9; // r13d
  __int16 v10; // dx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 *v14; // r14
  int v15; // r15d
  __int64 Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v18; // rdx
  unsigned __int64 OldIrql; // rsi
  KIRQL v20; // r10
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 **v25; // rax
  _DWORD *v26; // rcx
  __int64 v27; // r9
  __int64 **v28; // rax
  __int64 **v29; // rdi
  __int64 *v30; // rax
  __int64 **v31; // rdi
  char v32; // r8
  unsigned int v33; // r9d
  unsigned int v34; // eax
  struct _LIST_ENTRY *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  struct _KPRCB *v39; // r9
  unsigned __int64 v40; // rbx
  _QWORD *v41; // r8
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  int v44; // eax
  _QWORD *v45; // rcx
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 **v50; // rax
  unsigned __int64 v51; // rsi
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  __int64 v54; // r9
  int v55; // eax
  bool v56; // zf
  int v57; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v59; // r10
  __int64 v60; // r9
  int v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned __int8 v64; // al
  int v65; // eax
  unsigned __int8 v66; // al
  int v67; // eax
  unsigned int v68; // [rsp+20h] [rbp-60h]
  char v69; // [rsp+24h] [rbp-5Ch]
  unsigned int v70; // [rsp+28h] [rbp-58h]
  int v71; // [rsp+2Ch] [rbp-54h]
  PRKEVENT Event; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]
  __int16 v77; // [rsp+B0h] [rbp+30h]
  int v78; // [rsp+B8h] [rbp+38h]
  int v79; // [rsp+B8h] [rbp+38h]
  int v80; // [rsp+B8h] [rbp+38h]
  int v81; // [rsp+B8h] [rbp+38h]
  int v82; // [rsp+B8h] [rbp+38h]

  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(a1 + 12) )
    sub_1403DADE0();
  if ( (*(_DWORD *)(v3 + 4) & 0x20) != 0 )
    return;
  v4 = *(PRKEVENT *)(v3 + 16600);
  Event = v4;
  sub_1402669CC(v3);
  v68 = sub_140266644((_QWORD *)v3, a2);
  v5 = v68;
  sub_1402A19AC(v3, a2, v68);
  if ( (v68 & 5) != 0 )
  {
    sub_1402416A4(v3, 0LL, 0LL, 0);
    LOBYTE(v4[2].Header.SignalState) = 1;
  }
  if ( (v68 & 2) != 0 )
    ++HIDWORD(v4[3].Header.WaitListHead.Flink);
  v6 = 0LL;
  if ( (v68 & 0x20) != 0 )
  {
    if ( WORD1(v4[97].Header.WaitListHead.Blink) > 0xAu )
      WORD1(v4[97].Header.WaitListHead.Blink) = 10;
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
    if ( BYTE2(v4[2].Header.SignalState) )
    {
      v41 = (_QWORD *)(v3 + 16608);
      BYTE2(v4[2].Header.SignalState) = 0;
      v42 = *(_QWORD **)(v3 + 16608);
      if ( v42 != (_QWORD *)(v3 + 16608) )
      {
        do
        {
          v43 = v42;
          v42 = (_QWORD *)*v42;
          if ( (struct _LIST_ENTRY *)v43[9] >= v4[2].Header.WaitListHead.Flink )
          {
            v46 = *v43;
            v47 = (_QWORD *)v43[1];
            if ( *(_QWORD **)(*v43 + 8LL) != v43 )
              goto LABEL_80;
            if ( (_QWORD *)*v47 != v43 )
              goto LABEL_80;
            *v47 = v46;
            *(_QWORD *)(v46 + 8) = v47;
            v48 = *v41;
            if ( *(_QWORD **)(*v41 + 8LL) != v41 )
              goto LABEL_80;
            *v43 = v48;
            v43[1] = v41;
            *(_QWORD *)(v48 + 8) = v43;
            *v41 = v43;
          }
        }
        while ( v42 != v41 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  }
  v7 = a2;
  v8 = (__int64 *)(v3 + 16608);
  BYTE1(v4[2].Header.SignalState) = 1;
  v69 = 0;
  v70 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v9 = 0;
      v71 = v5 & 1;
      if ( (v5 & 1) != 0 )
      {
        v49 = sub_140596B14(v3, *((unsigned __int8 *)qword_14003BE80 + (*(_BYTE *)v7 & 0x7F)));
        v7 = a2;
        *(_QWORD *)(a2 + 104) = v49;
      }
      v10 = ++LOWORD(v4[97].Header.WaitListHead.Blink);
      *(_QWORD *)(v7 + 88) = *(_QWORD *)(v7 + 80) - *(_QWORD *)(v7 + 96);
      v77 = v10;
      while ( 1 )
      {
        v11 = (__int64 *)*v8;
        if ( (__int64 *)*v8 == v8 )
          goto LABEL_49;
        v12 = *v11;
        if ( (__int64 *)v11[1] != v8 || *(__int64 **)(v12 + 8) != v11 )
          goto LABEL_80;
        *v8 = v12;
        v13 = v11 - 3;
        *(_QWORD *)(v12 + 8) = v8;
        v14 = v11;
        *v11 = 0LL;
        if ( *((_WORD *)v11 + 74) == v10 )
          break;
        *((_WORD *)v13 + 86) = v10;
        v15 = v5 & 0x20;
        if ( (v5 & 0x20) != 0 && (struct _LIST_ENTRY *)v13[12] < Event[2].Header.WaitListHead.Flink )
        {
          v28 = (__int64 **)v8[1];
          v29 = (__int64 **)(v13 + 3);
          if ( *v28 == v8 )
          {
            *v29 = v8;
            v29[1] = (__int64 *)v28;
            *v28 = (__int64 *)v29;
            v8[1] = (__int64)v29;
            goto LABEL_45;
          }
LABEL_80:
          __fastfail(3u);
        }
        if ( (unsigned __int64)v13[18] > 1 || (v13[23] & 7) != 0 )
        {
          v78 = *((_DWORD *)v13 + 46);
          BYTE1(v78) = BYTE1(v78) & 0xF9 | 2;
          *((_WORD *)v13 + 92) = v78;
          if ( *(_BYTE *)(v7 + 2) == 2
            && (v13[18] <= (unsigned __int64)v13[14] || (unsigned __int64)(v13[18] - v13[14]) < 0x40000) )
          {
            goto LABEL_33;
          }
          if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
          {
            sub_14056E6FC(&LockHandle, retaddr);
            v7 = a2;
          }
          else
          {
            _m_prefetchw(&LockHandle);
            Next = (__int64)LockHandle.LockQueue.Next;
            if ( !LockHandle.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&LockHandle) == &LockHandle )
                goto LABEL_24;
              Next = sub_140282C20((__int64 *)&LockHandle);
              v7 = a2;
            }
            LockHandle.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          }
LABEL_24:
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v18 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v57 = *(_DWORD *)(v18 + 24) - 1;
              *(_DWORD *)(v18 + 24) = v57;
              if ( !v57 )
              {
                sub_140418E4C(CurrentPrcb);
                v7 = a2;
              }
            }
          }
          OldIrql = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
              {
                v59 = KeGetCurrentPrcb();
                v60 = *((_QWORD *)v59 + 4375);
                v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v56 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
                *(_DWORD *)(v60 + 20) &= v61;
                if ( v56 )
                {
                  sub_140418E4C(v59);
                  v7 = a2;
                }
              }
            }
          }
          __writecr8(OldIrql);
          v5 = v68;
          v9 = sub_14030C260(v13, v7, v68);
          if ( v9 )
            *(_BYTE *)(a2 + 4) = 2;
          LockHandle.LockQueue.Lock = &qword_140C53340;
          LockHandle.LockQueue.Next = 0LL;
          v20 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v20 <= 0xFu )
          {
            v27 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v27 + 20) |= (-1 << (v20 + 1)) & 4;
          }
          LockHandle.OldIrql = v20;
          v21 = KeGetCurrentPrcb();
          v22 = *((_QWORD *)v21 + 4375);
          if ( v22 )
          {
            if ( *((_BYTE *)v21 + 32) <= 1u )
            {
              v62 = *(_DWORD *)(v22 + 24);
              *(_DWORD *)(v22 + 24) = v62 + 1;
              if ( v62 == -1 )
                sub_140418E4C(v21);
            }
          }
          if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
          {
            sub_14045A10C(&LockHandle, &qword_140C53340);
          }
          else if ( _InterlockedExchange64((volatile __int64 *)&qword_140C53340, (__int64)&LockHandle) )
          {
            sub_140311C70(&LockHandle);
          }
LABEL_33:
          if ( !v15 || (struct _LIST_ENTRY *)v13[12] < Event[2].Header.WaitListHead.Flink || v13[13] )
          {
            v79 = *((_DWORD *)v13 + 46);
            BYTE1(v79) &= 0xF9u;
            *((_WORD *)v13 + 92) = v79;
            v23 = *((unsigned __int16 *)v13 + 87);
            v24 = *(_QWORD *)(qword_140C51F48 + 8 * v23) + 16608LL;
            v25 = *(__int64 ***)(*(_QWORD *)(qword_140C51F48 + 8 * v23) + 16616LL);
            if ( *v25 != (__int64 *)v24 )
              goto LABEL_80;
            *v14 = v24;
            v14[1] = (__int64)v25;
            *v25 = v14;
            *(_QWORD *)(v24 + 8) = v14;
            v26 = (_DWORD *)v13[13];
            if ( v26 )
              sub_14024B0B4(v26, 1);
          }
          else
          {
            v80 = *((_DWORD *)v13 + 46);
            v13[4] = (__int64)v6;
            BYTE1(v80) |= 6u;
            v6 = v13 + 4;
            *((_WORD *)v13 + 92) = v80;
          }
          v7 = a2;
          if ( v9 )
            goto LABEL_49;
          v10 = v77;
        }
        else if ( v13[13] )
        {
          v50 = (__int64 **)v8[1];
          if ( *v50 != v8 )
            goto LABEL_80;
          *v14 = (__int64)v8;
          v14[1] = (__int64)v50;
          *v50 = v14;
          v8[1] = (__int64)v14;
        }
        else
        {
          v81 = *((_DWORD *)v13 + 46);
          BYTE1(v81) |= 6u;
          *((_WORD *)v13 + 92) = v81;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v51 = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v52 = KeGetCurrentIrql();
              if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
              {
                v53 = KeGetCurrentPrcb();
                v54 = *((_QWORD *)v53 + 4375);
                v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v56 = (v55 & *(_DWORD *)(v54 + 20)) == 0;
                *(_DWORD *)(v54 + 20) &= v55;
                if ( v56 )
                  sub_140418E4C(v53);
              }
            }
          }
          __writecr8(v51);
          sub_14056C540(v13 - 208);
          KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
          v82 = *((_DWORD *)v13 + 46);
          BYTE1(v82) &= 0xF9u;
          *((_WORD *)v13 + 92) = v82;
          sub_14036DAE4(v13, 0LL);
          v10 = v77;
          v7 = a2;
          v5 = v68;
        }
      }
      v30 = (__int64 *)*v8;
      v31 = (__int64 **)(v13 + 3);
      if ( *(__int64 **)(*v8 + 8) != v8 )
        goto LABEL_80;
      *v31 = v30;
      v31[1] = v8;
      v30[1] = (__int64)v31;
      *v8 = (__int64)v31;
      if ( v71 )
      {
        v3 = a1;
        v63 = sub_1405962EC(a1, v7, &LockHandle);
        v7 = a2;
        if ( !v63 )
        {
          v4 = Event;
          continue;
        }
      }
      break;
    }
LABEL_49:
    if ( (v5 & 0x20) != 0 )
    {
LABEL_45:
      while ( v6 )
      {
        v44 = *((_DWORD *)v6 + 38);
        v45 = v6 - 4;
        v6 = (_QWORD *)*v6;
        *((_WORD *)v45 + 92) = v44 & 0xF9FF;
        sub_14036DAE4(v45, 1LL);
      }
      v7 = a2;
    }
    v32 = v5 | v69;
    v69 |= v5;
    if ( v9 )
    {
      BYTE1(Event[2].Header.SignalState) = 0;
      if ( (v32 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v40 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && LockHandle.OldIrql <= 0xFu && v66 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v38 = *((_QWORD *)v39 + 4375);
            v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v56 = (v67 & *(_DWORD *)(v38 + 20)) == 0;
            v37 = (unsigned int)v67 & *(_DWORD *)(v38 + 20);
            *(_DWORD *)(v38 + 20) = v37;
            if ( v56 )
              goto LABEL_129;
          }
        }
      }
    }
    else
    {
      v4 = Event;
      v33 = v5 & 0xFFFFFB9C | v70;
      v70 = v33;
      v34 = (__int64)Event[1].Header.WaitListHead.Blink & 0xFFFFFBFF;
      if ( v33 != v34 )
      {
        v5 = v34 ^ v33;
        v68 = v34 ^ v33;
        if ( ((LOBYTE(Event[1].Header.WaitListHead.Blink) ^ (unsigned __int8)v33) & 5) != 0 )
          LOBYTE(Event[2].Header.SignalState) = 1;
        v3 = a1;
        *(_BYTE *)(v7 + 2) = 6;
        continue;
      }
      BYTE1(Event[2].Header.SignalState) = 0;
      if ( (v32 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 0;
      if ( LODWORD(Event[1].Header.WaitListHead.Blink) )
      {
        LODWORD(Event[1].Header.WaitListHead.Blink) &= 0x400u;
        KeSetEvent(Event, 0, 0);
        v32 = v69;
      }
      if ( (v32 & 0x43) != 0 )
      {
        Event[100].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 8);
        *(_QWORD *)&Event[101].Header.Lock = *(_QWORD *)(a2 + 16);
        Event[101].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(a2 + 24);
        Event[101].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 32);
        *(_QWORD *)&Event[102].Header.Lock = *(_QWORD *)(a2 + 40);
        Event[102].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(a2 + 48);
        v35 = *(struct _LIST_ENTRY **)(a2 + 56);
        Event[102].Header.WaitListHead.Blink = v35;
        v36 = *(_QWORD *)(a2 + 64);
        *(_QWORD *)&Event[103].Header.Lock = v36;
        Event[100].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v35 + v36);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v40 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v64 = KeGetCurrentIrql();
          if ( v64 <= 0xFu && LockHandle.OldIrql <= 0xFu && v64 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v38 = *((_QWORD *)v39 + 4375);
            v65 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v56 = (v65 & *(_DWORD *)(v38 + 20)) == 0;
            v37 = (unsigned int)v65 & *(_DWORD *)(v38 + 20);
            *(_DWORD *)(v38 + 20) = v37;
            if ( v56 )
LABEL_129:
              sub_140418E4C(v39);
          }
        }
      }
    }
    break;
  }
  __writecr8(v40);
  sub_1402A1948(a1, v37, v38, (__int64)v39);
}
