/*
 * XREFs of RaidLunQueueCheckWaitTimeout @ 0x1C004039C
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C001F1FC (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     RiDecrementDeviceQueueCount @ 0x1C0006A0C (RiDecrementDeviceQueueCount.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     RiRemoveSListEntry @ 0x1C0040F64 (RiRemoveSListEntry.c)
 */

__int64 __fastcall RaidLunQueueCheckWaitTimeout(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v4; // r15
  char v5; // si
  unsigned int v6; // r12d
  char v7; // r13
  unsigned int v8; // r14d
  __int64 v9; // rbp
  volatile LONG *v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  ULONGLONG v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  ULONGLONG UnbiasedInterruptTime; // [rsp+20h] [rbp-58h]
  volatile LONG *v22; // [rsp+28h] [rbp-50h]
  char v26; // [rsp+98h] [rbp+20h]

  v4 = (_QWORD *)(a1 + 160);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v8 = 0;
  v26 = 0;
  v9 = 0LL;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  v11 = (volatile LONG *)(a1 + 72);
  v22 = v11;
  ExAcquireSpinLockSharedAtDpcLevel(v11);
  v12 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 == v4 )
  {
LABEL_27:
    ExReleaseSpinLockSharedFromDpcLevel(v11);
  }
  else
  {
    while ( 1 )
    {
      v13 = v12[3];
      if ( (*(_BYTE *)(v13 + 450) & 2) == 0 )
      {
        v14 = *(v12 - 2);
        if ( v14 == -1LL || v14 >= UnbiasedInterruptTime )
          break;
      }
      if ( v5 )
      {
        if ( (*(_BYTE *)(v13 + 450) & 2) == 0 && !v7 )
        {
          v9 = v12[3];
          v7 = 1;
          v8 = *(_DWORD *)(v9 + 672) + *(_QWORD *)(v13 + 744) / 0x100000000LL;
        }
        v15 = *v12;
        v16 = v12[2] + 120LL;
        if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v17 = (_QWORD *)v12[1], (_QWORD *)*v17 != v12) )
LABEL_26:
          __fastfail(3u);
        *v17 = v15;
        *(_QWORD *)(v15 + 8) = v17;
        if ( (*(_BYTE *)(v16 + 20) & 2) != 0 )
        {
          RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)a1);
          RiRemoveSListEntry((PSLIST_HEADER)(a1 + 96));
          RiRemoveSListEntry((PSLIST_HEADER)(a1 + 112));
          *(_BYTE *)(v16 + 20) &= ~2u;
          v11 = v22;
        }
        else
        {
          v18 = *(_QWORD *)v16;
          if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 )
            goto LABEL_26;
          v19 = *(_QWORD **)(v16 + 8);
          if ( *v19 != v16 )
            goto LABEL_26;
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
        }
        RiDecrementDeviceQueueCount(a1, v16);
        *(_BYTE *)(v16 + 20) &= ~1u;
        v20 = *(_QWORD **)(a3 + 8);
        if ( *v20 != a3 )
          goto LABEL_26;
        *v12 = a3;
        ++v6;
        v12[1] = v20;
        *v20 = v12;
        *(_QWORD *)(a3 + 8) = v12;
        v12 = (_QWORD *)*v4;
        if ( v6 == a2 )
          goto LABEL_25;
        v5 = v26;
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v11);
        ExAcquireSpinLockExclusiveAtDpcLevel(v11);
        v12 = (_QWORD *)*v4;
        v5 = 1;
        v26 = 1;
      }
      if ( v12 == v4 )
        goto LABEL_25;
    }
    if ( !v5 )
      goto LABEL_27;
LABEL_25:
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  }
  if ( v7 )
  {
    if ( v8 > *(_DWORD *)(v9 + 2188) )
      *(_DWORD *)(v9 + 2188) = v8;
  }
  return v6;
}
