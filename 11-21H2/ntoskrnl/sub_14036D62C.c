/*
 * XREFs of sub_14036D62C @ 0x14036D62C
 * Callers:
 *     sub_140302650 @ 0x140302650 (sub_140302650.c)
 *     MmAdjustWorkingSetSize @ 0x1403C7500 (MmAdjustWorkingSetSize.c)
 *     sub_1405FBF80 @ 0x1405FBF80 (sub_1405FBF80.c)
 *     sub_1405FC2D0 @ 0x1405FC2D0 (sub_1405FC2D0.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 * Callees:
 *     sub_140216EB4 @ 0x140216EB4 (sub_140216EB4.c)
 *     sub_140256548 @ 0x140256548 (sub_140256548.c)
 *     sub_14026920C @ 0x14026920C (sub_14026920C.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14036C8EC @ 0x14036C8EC (sub_14036C8EC.c)
 *     sub_14036D8C8 @ 0x14036D8C8 (sub_14036D8C8.c)
 */

__int64 __fastcall sub_14036D62C(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4, int a5, _BYTE *a6)
{
  __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // rdi
  __int64 v12; // r13
  volatile LONG *v13; // rbx
  KIRQL v14; // al
  volatile LONG *v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r14
  int v18; // esi
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  int v23; // ebx
  int v24; // eax
  char v25; // al
  volatile LONG *v26; // rax
  __int64 v28; // rdx
  int v29; // ecx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v31; // rdx
  bool v32; // zf
  signed __int32 v33; // eax
  struct _KPRCB *v34; // r9
  __int64 v35; // rdx
  signed __int32 v36; // eax
  unsigned __int64 v37; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-28h] BYREF
  __int64 v39; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 v41; // [rsp+B0h] [rbp+50h]
  __int16 v43; // [rsp+C8h] [rbp+68h]

  v6 = 0LL;
  *a6 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    v6 = *((_QWORD *)CurrentThread + 23);
    v11 = v6 + 1664;
LABEL_3:
    if ( a1 == -1LL && a2 == -1LL )
      return sub_140256548(v11, 0, 0LL, -1LL);
    v12 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v11 + 174));
    v13 = (volatile LONG *)sub_140282AD0(v11);
    v14 = ExAcquireSpinLockExclusive(v13);
    *((_DWORD *)v13 + 1) = 0;
    v41 = v14;
    v15 = (volatile LONG *)sub_140282AD0(v11);
    ExAcquireSpinLockExclusiveAtDpcLevel(v15 + 16);
    if ( !a3 && (*(_DWORD *)(v6 + 1124) & 0x20) != 0 )
    {
      v18 = -1073741558;
      goto LABEL_28;
    }
    if ( a1 )
      v16 = a1 >> 12;
    else
      v16 = *(_QWORD *)(v11 + 112);
    v38 = v16;
    if ( a2 )
      v17 = a2 >> 12;
    else
      v17 = *(_QWORD *)(v11 + 120);
    v37 = v17;
    v18 = sub_14036D8C8(v11, (unsigned int)&v38, (unsigned int)&v37, a5, 0);
    if ( (v18 & 0xC0000000) == 0xC0000000 )
      goto LABEL_28;
    v19 = *(_QWORD *)(v11 + 112);
    v20 = *(_QWORD *)(v11 + 16);
    v39 = v20;
    if ( v38 > v19 )
    {
      v21 = v38 - v19;
      *a6 = 1;
      if ( !a4 )
      {
        v18 = -1073741727;
        goto LABEL_28;
      }
      if ( !a3 )
      {
        v18 = sub_14036C8EC(v6, v20, v21);
        if ( v18 < 0 )
          goto LABEL_28;
      }
      if ( !(unsigned int)sub_1402821F4((ULONG_PTR *)v12, v21, 512LL) )
      {
        if ( !a3 )
          sub_140216EB4(v6, v28, v21);
        v18 = -1073741670;
        goto LABEL_28;
      }
      v20 = v39;
    }
    else
    {
      v21 = v19 - v38;
      if ( v38 < *(_QWORD *)(v20 + 32) )
      {
        v18 = -1073741748;
        goto LABEL_28;
      }
    }
    v22 = v37;
    if ( v37 < *(_QWORD *)(v11 + 128) )
    {
      if ( *(_QWORD *)(v20 + 32) + 6LL >= v37 )
      {
        v18 = -1073741748;
        if ( *a6 )
        {
          if ( !a3 )
            sub_140216EB4(v6, v20, v21);
          if ( (ULONG_PTR *)v12 == &StartContext )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v31 = *((int *)CurrentPrcb + 8615);
            if ( (_DWORD)v31 != -1 )
            {
              if ( v21 + v31 <= 0x100 )
              {
                do
                {
                  if ( v21 >= 0x80000 )
                    break;
                  v33 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v21 + v31, v31);
                  v32 = (_DWORD)v31 == v33;
                  LODWORD(v31) = v33;
                  if ( v32 )
                    goto LABEL_28;
                }
                while ( v33 != -1 && v21 + v33 <= 0x100 );
              }
              if ( (int)v31 > 192
                && (_DWORD)v31 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v31) )
              {
                v21 += (int)v31 - 192;
              }
            }
          }
          if ( v21 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 16960), v21);
        }
        goto LABEL_28;
      }
      *(_BYTE *)(v11 + 187) |= 0x10u;
    }
    if ( !*a6 && v21 )
    {
      if ( !a3 )
        sub_140216EB4(v6, v20, v21);
      if ( (ULONG_PTR *)v12 != &StartContext )
        goto LABEL_84;
      v34 = KeGetCurrentPrcb();
      v35 = *((int *)v34 + 8615);
      if ( (_DWORD)v35 == -1 )
        goto LABEL_84;
      if ( v21 + v35 <= 0x100 )
      {
        do
        {
          if ( v21 >= 0x80000 )
            break;
          v36 = _InterlockedCompareExchange((volatile signed __int32 *)v34 + 8615, v21 + v35, v35);
          v32 = (_DWORD)v35 == v36;
          LODWORD(v35) = v36;
          if ( v32 )
            goto LABEL_85;
        }
        while ( v36 != -1 && v21 + v36 <= 0x100 );
      }
      if ( (int)v35 > 192 && (_DWORD)v35 == _InterlockedCompareExchange((volatile signed __int32 *)v34 + 8615, 192, v35) )
        v21 += (int)v35 - 192;
      if ( v21 )
LABEL_84:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 16960), v21);
LABEL_85:
      v22 = v37;
    }
    *(_QWORD *)(v11 + 112) = v38;
    *(_QWORD *)(v11 + 120) = v22;
    if ( !a5 )
    {
LABEL_28:
      v26 = (volatile LONG *)sub_140282AD0(v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v26 + 16);
      sub_14030FA80(v11, v41);
      return (unsigned int)v18;
    }
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    v23 = 0;
    LockHandle.LockQueue.Lock = &qword_140C53340;
    LockHandle.LockQueue.Next = 0LL;
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)&qword_140C53340);
    v24 = *(_DWORD *)(v11 + 184);
    v43 = v24;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v24) = v24 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_23;
      LOBYTE(v24) = v24 & 0x7F;
    }
    v23 = 1;
    LOBYTE(v43) = v24;
LABEL_23:
    if ( (a5 & 1) != 0 )
    {
      v25 = v24 | 0x40;
    }
    else
    {
      if ( (a5 & 2) == 0 )
      {
        if ( !v23 )
          goto LABEL_27;
        goto LABEL_26;
      }
      v25 = v24 & 0xBF;
    }
    LOBYTE(v43) = v25;
LABEL_26:
    *(_WORD *)(v11 + 184) = v43;
LABEL_27:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_28;
  }
  if ( a3 == 2 )
  {
    v11 = sub_14026920C();
    if ( v11 )
      goto LABEL_3;
  }
  else
  {
    v29 = a3 - 3;
    if ( a3 == 3 )
    {
      v29 = 2;
LABEL_45:
      v11 = (__int64)sub_14026DFC0(v29);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_45;
  }
  return 3221225713LL;
}
