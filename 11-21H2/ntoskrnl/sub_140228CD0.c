/*
 * XREFs of sub_140228CD0 @ 0x140228CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_14022900C @ 0x14022900C (sub_14022900C.c)
 *     sub_140229100 @ 0x140229100 (sub_140229100.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14036CB28 @ 0x14036CB28 (sub_14036CB28.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall sub_140228CD0(__int64 a1, __int64 a2, signed int a3)
{
  __int64 v3; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  char v9; // bl
  int v10; // r13d
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  unsigned __int64 v30; // rbx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  __int64 v33; // r9
  int v34; // eax
  bool v35; // zf
  int v36; // r8d
  char v37; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // [rsp+20h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v44; // [rsp+80h] [rbp+40h]
  int v45; // [rsp+90h] [rbp+50h]
  __int64 v46; // [rsp+98h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = *(_QWORD *)(v3 + 16);
  v42 = v7;
  if ( a3 == 3 && *(_DWORD *)v3 == 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 784LL;
    v44 = (_QWORD *)v8;
  }
  else
  {
    v44 = 0LL;
    v8 = a2;
  }
  v46 = sub_140317A10(v8);
  v9 = v46;
  if ( (v46 & 1) != 0 )
  {
    v10 = 0;
    v45 = 0;
    v11 = ((unsigned __int64)sub_140317A10(&v46) >> 12) & 0xFFFFFFFFFFLL;
    if ( v9 >= 0 )
    {
      v12 = 48 * v11 - 0x220000000000LL;
      v13 = 1LL;
      if ( a3 == 3 && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 184LL) & 7) == 1 )
      {
        v13 = 2LL;
        if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
          return 0LL;
      }
      if ( a3 <= ((*(unsigned __int8 *)(a1 + 4) >> 2) & 7) )
      {
        v15 = 0LL;
      }
      else
      {
        if ( *(_WORD *)(v12 + 32) != 1
          || (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != v13
          || RtlCompareMemoryUlong((PVOID)(a2 << 25 >> 16), 0x1000uLL, 0) != 4096 )
        {
          return 0LL;
        }
        v15 = 1LL;
      }
      if ( a3 >= 1 )
      {
        if ( !(unsigned int)sub_140229100(*(_QWORD *)(a1 + 24), a2, 0LL, v15) )
          return 0LL;
        v45 = 1;
      }
      sub_14022900C(v3 + 8, v12, v13, v15);
      v7 = v42;
      v10 = v45;
    }
    if ( v44 )
    {
      v19 = sub_140317A10(a2);
      v9 = v19;
      v46 = v19;
    }
    if ( (v9 & 1) != 0 && a3 >= 1 && v9 < 0 )
    {
      sub_1402285E8(v7, a3, a2);
    }
    else
    {
      sub_1402CF280(v7, a2 << 25 >> 16, 1LL, 0LL);
      if ( a3 == 1 )
      {
        v17 = sub_1402CFEB0(a2);
        sub_1402CF280(v7, v17, 512LL, 0LL);
      }
    }
    if ( v10 )
    {
LABEL_23:
      if ( !v44 )
      {
LABEL_24:
        if ( a3 == 3 )
        {
          v18 = sub_1402CFEB0(a2);
          sub_14036CB28(
            ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        }
        return 0LL;
      }
      v20 = sub_1402CCC50(768LL, v16);
      KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
      v21 = 0;
      if ( !(unsigned int)sub_140317A80(v44) )
      {
LABEL_35:
        *v44 = v20;
        if ( v21 )
          sub_1402294F0(v44, v20);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v40 = *((_QWORD *)CurrentPrcb + 4375);
              v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v35 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
              *(_DWORD *)(v40 + 20) &= v41;
              if ( v35 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        goto LABEL_24;
      }
      if ( (unsigned int)sub_140229550(v23, v22) )
      {
        v21 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_35;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
      {
        goto LABEL_35;
      }
      if ( (v20 & 1) != 0 )
        v20 |= 0x8000000000000000uLL;
      goto LABEL_35;
    }
    v26 = sub_140317A80(a2);
    if ( a3 == 3 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
      v28 = 0LL;
      v29 = 0;
      if ( v26 )
      {
        if ( (unsigned int)sub_140229550(v27, 0LL) )
        {
          v29 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_44;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
LABEL_44:
          if ( (v28 & 1) != 0 )
            v28 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v28;
      if ( v29 )
        sub_1402294F0(a2, v28);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v30 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = *((_QWORD *)v32 + 4375);
            v16 = -1LL << (LockHandle.OldIrql + 1);
            v34 = ~(unsigned __int16)v16;
            v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
            *(_DWORD *)(v33 + 20) &= v34;
            if ( v35 )
              sub_140418E4C(v32);
          }
        }
      }
      __writecr8(v30);
      goto LABEL_23;
    }
    v16 = 0LL;
    v36 = 0;
    if ( v26 )
    {
      if ( (unsigned int)sub_140229550(v25, 0LL) )
      {
        v37 = ++v36;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_65;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_65;
        v37 = 1;
      }
      if ( ((unsigned __int8)v16 & (unsigned __int8)v37) != 0 )
        v16 |= 0x8000000000000000uLL;
    }
LABEL_65:
    *(_QWORD *)a2 = v16;
    if ( v36 )
      sub_1402294F0(a2, v16);
    goto LABEL_23;
  }
  return 0LL;
}
