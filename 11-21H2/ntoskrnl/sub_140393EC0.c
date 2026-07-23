/*
 * XREFs of sub_140393EC0 @ 0x140393EC0
 * Callers:
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 *     sub_14058BEE4 @ 0x14058BEE4 (sub_14058BEE4.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058BA24 @ 0x14058BA24 (sub_14058BA24.c)
 *     sub_14058BEE4 @ 0x14058BEE4 (sub_14058BEE4.c)
 *     sub_14059AEEC @ 0x14059AEEC (sub_14059AEEC.c)
 *     sub_1405BAEEC @ 0x1405BAEEC (sub_1405BAEEC.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 *     sub_14096F2D4 @ 0x14096F2D4 (sub_14096F2D4.c)
 */

__int64 __fastcall sub_140393EC0(__int64 a1, int a2)
{
  volatile LONG *v3; // r13
  KIRQL v4; // al
  __int64 *v5; // r15
  KIRQL v6; // bl
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 **v9; // r14
  __int64 *v10; // rsi
  int v11; // esi
  _QWORD **v12; // rsi
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 *v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rax
  struct _KEVENT *v26; // rsi
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // eax
  __int128 v31; // xmm0
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  __int64 v34; // r9
  int v35; // eax
  KIRQL v36; // al
  __int64 v37; // rcx
  _QWORD *v38; // r13
  __int128 v39; // xmm0
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  __int64 v46; // r8
  int v47; // eax
  _OWORD v48[6]; // [rsp+20h] [rbp-60h] BYREF
  int v49; // [rsp+C0h] [rbp+40h]

  memset(v48, 0, 0x58uLL);
  v49 = 0;
  v3 = (volatile LONG *)(a1 + 1344);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v5 = (__int64 *)(a1 + 1552);
LABEL_2:
  v6 = v4;
  do
  {
    v7 = (__int64 *)*v5;
    if ( (__int64 *)*v5 != v5 )
    {
      v8 = *v7;
      if ( (__int64 *)v7[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
LABEL_77:
        __fastfail(3u);
      *v5 = v8;
      *(_QWORD *)(v8 + 8) = v5;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)v7 + 16) )
      {
        *((_DWORD *)v7 + 12) &= ~0x10000000u;
        v7[1] = (__int64)v7;
        *v7 = (__int64)v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7 + 16);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = *((_QWORD *)CurrentPrcb + 4375);
              v19 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
              *(_DWORD *)(v18 + 20) &= v19;
              if ( v20 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        sub_1406F4904(v7 - 1);
      }
      else
      {
        v15 = (__int64 *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5 )
          goto LABEL_77;
        *v7 = (__int64)v15;
        v7[1] = (__int64)v5;
        v15[1] = (__int64)v7;
        *v5 = (__int64)v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v21 = KeGetCurrentIrql();
            if ( v21 <= 0xFu && v6 <= 0xFu && v21 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v23 = *((_QWORD *)v22 + 4375);
              v24 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v20 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
              *(_DWORD *)(v23 + 20) &= v24;
              if ( v20 )
                sub_140418E4C(v22);
            }
          }
        }
        __writecr8(v6);
      }
      v4 = ExAcquireSpinLockExclusive(v3);
      goto LABEL_2;
    }
    v9 = (__int64 **)(a1 + 1584);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 == (__int64 *)v9 )
        break;
      v25 = *v10;
      if ( (__int64 **)v10[1] != v9 || *(__int64 **)(v25 + 8) != v10 )
        goto LABEL_77;
      *v9 = (__int64 *)v25;
      v26 = (struct _KEVENT *)(v10 - 1);
      *(_QWORD *)(v25 + 8) = v9;
      if ( v26[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
      {
        if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 976)) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v3);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v27 = KeGetCurrentIrql();
              if ( v27 <= 0xFu && v6 <= 0xFu && v27 >= 2u )
              {
                v28 = KeGetCurrentPrcb();
                v29 = *((_QWORD *)v28 + 4375);
                v30 = ~(unsigned __int16)(-1LL << (v6 + 1));
                v20 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
                *(_DWORD *)(v29 + 20) &= v30;
                if ( v20 )
                  sub_140418E4C(v28);
              }
            }
          }
          __writecr8(v6);
          sub_14059AEEC(v26);
          sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 976));
          v6 = ExAcquireSpinLockExclusive(v3);
        }
        if ( (v26[3].Header.SignalState & 0x10000000) == 0 )
          KeSetEvent(v26 + 2, 0, 0);
      }
      else
      {
        v48[0] = *(_OWORD *)&v26->Header.Lock;
        v48[1] = *(_OWORD *)&v26->Header.WaitListHead.Blink;
        v48[2] = v26[1].Header.WaitListHead;
        v48[3] = *(_OWORD *)&v26[2].Header.Lock;
        v31 = *(_OWORD *)&v26[2].Header.WaitListHead.Blink;
        *(_QWORD *)&v48[5] = v26;
        v48[4] = v31;
        v26[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v48;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && v6 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = *((_QWORD *)v33 + 4375);
              v35 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v20 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
              *(_DWORD *)(v34 + 20) &= v35;
              if ( v20 )
                sub_140418E4C(v33);
            }
          }
        }
        __writecr8(v6);
        if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 976)) )
        {
          sub_14096F2D4(v48);
          sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 976));
        }
        v36 = sub_14058BA24(v48, v26, a1);
        --*(_DWORD *)(a1 + 2028);
        v6 = v36;
        if ( *(_DWORD *)(a1 + 2024) )
          KeSetEvent((PRKEVENT)(a1 + 2032), 0, 0);
      }
    }
    v11 = a2;
    if ( !a2 )
      continue;
    v12 = (_QWORD **)(a1 + 1568);
    while ( 1 )
    {
      v13 = *v12;
      if ( *v12 == v12 )
        break;
      v37 = *v13;
      if ( (_QWORD **)v13[1] != v12 || *(_QWORD **)(v37 + 8) != v13 )
        goto LABEL_77;
      *v12 = (_QWORD *)v37;
      v38 = v13 - 1;
      *(_QWORD *)(v37 + 8) = v12;
      v48[0] = *(_OWORD *)(v13 - 1);
      v48[1] = *(_OWORD *)(v13 + 1);
      v48[2] = *(_OWORD *)(v13 + 3);
      v48[3] = *(_OWORD *)(v13 + 5);
      v39 = *(_OWORD *)(v13 + 7);
      *(_QWORD *)&v48[5] = v13 - 1;
      v48[4] = v39;
      v13[9] = v48;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v40 = KeGetCurrentIrql();
          if ( v40 <= 0xFu && v6 <= 0xFu && v40 >= 2u )
          {
            v41 = KeGetCurrentPrcb();
            v42 = *((_QWORD *)v41 + 4375);
            v43 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v20 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
            *(_DWORD *)(v42 + 20) &= v43;
            if ( v20 )
              sub_140418E4C(v41);
          }
        }
      }
      __writecr8(v6);
      if ( (unsigned int)sub_14058BEE4(a1, *(_QWORD *)&v48[2]) )
      {
        v49 = 1;
      }
      else if ( !v49 )
      {
        goto LABEL_76;
      }
      *((_QWORD *)&v48[2] + 1) = 1LL;
LABEL_76:
      v6 = sub_14058BA24(v48, v38, a1);
    }
    v11 = a2;
    v3 = (volatile LONG *)(a1 + 1344);
  }
  while ( (__int64 *)*v5 != v5 || v11 && *(_QWORD *)(a1 + 1568) != a1 + 1568 || *v9 != (__int64 *)v9 );
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v44 = KeGetCurrentIrql();
      if ( v44 <= 0xFu && v6 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = *((_QWORD *)v45 + 4375);
        v47 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v20 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
        *(_DWORD *)(v46 + 20) &= v47;
        if ( v20 )
          sub_140418E4C(v45);
      }
    }
  }
  result = v6;
  __writecr8(v6);
  if ( *(_DWORD *)(a1 + 1980) )
  {
    KeResetEvent((PRKEVENT)(a1 + 1976));
    return sub_1405BAEEC(a1);
  }
  return result;
}
