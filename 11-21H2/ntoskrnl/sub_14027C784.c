/*
 * XREFs of sub_14027C784 @ 0x14027C784
 * Callers:
 *     sub_14027CE40 @ 0x14027CE40 (sub_14027CE40.c)
 * Callees:
 *     sub_1402270B8 @ 0x1402270B8 (sub_1402270B8.c)
 *     sub_140228BCC @ 0x140228BCC (sub_140228BCC.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140235AAC @ 0x140235AAC (sub_140235AAC.c)
 *     sub_14025DD8C @ 0x14025DD8C (sub_14025DD8C.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027CCE4 @ 0x14027CCE4 (sub_14027CCE4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14036C868 @ 0x14036C868 (sub_14036C868.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140419160 @ 0x140419160 (sub_140419160.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_140B51C0C @ 0x140B51C0C (sub_140B51C0C.c)
 */

char __fastcall sub_14027C784(__int64 a1, unsigned int a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned int v9; // edi
  __int64 v10; // rdx
  char v11; // bl
  ULONG_PTR v12; // r12
  unsigned __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  char v17; // al
  unsigned __int64 v18; // rbx
  _QWORD *v19; // r13
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdi
  char v25; // al
  int v26; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  char v30; // cl
  __int64 v31; // r8
  int v32; // edx
  unsigned int v33; // edx
  __int64 v35; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v38; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v40; // [rsp+98h] [rbp+20h]

  v40 = a4;
  v5 = *(_QWORD *)(a1 + 168);
  v35 = v5;
  v9 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v39 = sub_140317A10(a3);
  v11 = v39;
  v38 = a2 != 0 ? 6 : 4;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x44000000000LL) >> 4);
  if ( (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
    sub_1405AD468(v12);
  if ( a2 )
  {
    if ( (v11 & 1) != 0 )
    {
      if ( *((_QWORD *)KeGetCurrentPrcb() + 4272) )
      {
        v14 = sub_1402CC7C0(v12, 0LL, 0x80000000LL);
        sub_140424FF0(v14, (__int64)(a3 << 25) >> 16);
        if ( (dword_140D06880 & 0x4000000) == 0 )
        {
          v15 = (unsigned int)(1 << a2);
          if ( ((unsigned __int8)v15 & (unsigned __int8)byte_140C506CE) != 0 )
          {
            v16 = (_QWORD *)v14;
            if ( v14 < (unsigned __int64)(v14 + 4096) )
            {
              do
              {
                v17 = sub_140317A10(v16);
                if ( (v17 & 1) != 0 && (v17 & 0x20) != 0 )
                  *v16 &= ~0x20uLL;
                ++v16;
              }
              while ( (unsigned __int64)v16 < v14 + 4096 );
            }
          }
        }
        LOBYTE(v15) = 17;
        sub_1402BEDD0(v14, v15, 0x80000000LL);
      }
      else
      {
        sub_140B51C0C(v12);
      }
    }
  }
  else
  {
    if ( (v11 & 1) != 0 )
    {
      if ( (PVOID)(((unsigned __int64)sub_140317A10(&v39) >> 12) & 0xFFFFFFFFFFLL) == qword_140C532D8 )
        goto LABEL_21;
      v13 = *(_QWORD *)((__int64)(a3 << 25) >> 16);
    }
    else
    {
      v13 = *(_QWORD *)(v5 + 352);
    }
    sub_140235AAC(v12, v10, v13);
  }
LABEL_21:
  v18 = sub_1402CFEB0(a3);
  if ( (unsigned int)sub_14027B080(v18) == 1 )
  {
    v9 = 1;
  }
  else if ( v18 <= 0x7FFFFFFEFFFFLL
         || v18 >= qword_140C540C0 && v18 <= qword_140C51BF0
         || v18 >= 0xFFFFF68000000000uLL && v18 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 4;
  }
  v19 = v40;
  *v40 = 0LL;
  v20 = sub_14033AC10(a3);
  v21 = v38 | 0x90000000;
  if ( a2 )
    v21 = v38 | 0x98000000;
  v22 = sub_1402CBD10(a3, v12, v21);
  v39 = v22;
  if ( (dword_140D06880 & 0x4000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C506CE) != 0 )
  {
    v22 &= ~0x20uLL;
    v39 = v22;
  }
  if ( a2 == 3 && (dword_140D06880 & 0x30) != 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      v20 = v12;
      v22 = v39;
      v23 = *((_QWORD *)KeGetCurrentThread() + 23);
      v24 = *(_QWORD *)(v23 + 1368);
      sub_14025DD8C(v23, v39);
      sub_14036C868(v19, v24, 0LL);
    }
    else if ( v9 < 4 )
    {
      if ( PsInitialSystemProcess )
        v20 = *((_QWORD *)PsInitialSystemProcess + 5) >> 12;
      else
        v20 = ((unsigned __int64)sub_140317A10(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
    }
  }
  sub_14027CCE4(v12, a3, v20, 512LL);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  v25 = sub_140317A10(a3);
  if ( (v25 & 1) == 0 )
  {
    v26 = 0;
    LODWORD(CurrentThread) = sub_140317A80(a3);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_52;
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v26 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_52;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_52;
    }
    if ( (v22 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v22 |= 0x8000000000000000uLL;
    }
LABEL_52:
    *(_QWORD *)a3 = v22;
    if ( v26 )
      LOBYTE(CurrentThread) = sub_1402294F0(a3, v22);
    if ( a2 != 3 )
      goto LABEL_55;
LABEL_72:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(CurrentThread) = dword_140D06B08;
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(CurrentThread) = KeGetCurrentIrql();
        if ( (unsigned __int8)CurrentThread <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && (unsigned __int8)CurrentThread >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = *((_QWORD *)CurrentPrcb + 4375);
          v32 = *(_DWORD *)(v31 + 20);
          v30 = LockHandle.OldIrql + 1;
LABEL_63:
          LODWORD(CurrentThread) = ~(unsigned __int16)(-1LL << v30);
          v33 = (unsigned int)CurrentThread & v32;
          *(_DWORD *)(v31 + 20) = v33;
          if ( !v33 )
            LOBYTE(CurrentThread) = sub_140418E4C(CurrentPrcb);
        }
      }
    }
LABEL_65:
    __writecr8(OldIrql);
    return (char)CurrentThread;
  }
  if ( (v25 & 0x20) != 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C506CE) != 0 )
    sub_140419160(a1, a2, a3);
  LOBYTE(CurrentThread) = sub_1402270B8((volatile signed __int64 *)a3, a3, v22, a2);
  if ( a2 == 3 )
  {
    sub_140228BCC(a5, 3, a3);
    goto LABEL_72;
  }
LABEL_55:
  if ( !a2 )
  {
    LOBYTE(CurrentThread) = v35;
    if ( *(_DWORD *)(v35 + 120) == 4 )
    {
      OldIrql = (unsigned __int8)sub_1402F2700(v19);
      *((_WORD *)v19 + 16) = 2;
      _InterlockedAnd64(v19 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(CurrentThread) = dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          LOBYTE(CurrentThread) = KeGetCurrentIrql();
          if ( (unsigned __int8)CurrentThread <= 0xFu
            && (unsigned __int8)OldIrql <= 0xFu
            && (unsigned __int8)CurrentThread >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v30 = OldIrql + 1;
            v31 = *((_QWORD *)CurrentPrcb + 4375);
            v32 = *(_DWORD *)(v31 + 20);
            goto LABEL_63;
          }
        }
      }
      goto LABEL_65;
    }
  }
  return (char)CurrentThread;
}
