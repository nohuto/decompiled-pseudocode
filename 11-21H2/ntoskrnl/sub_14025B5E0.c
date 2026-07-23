/*
 * XREFs of sub_14025B5E0 @ 0x14025B5E0
 * Callers:
 *     sub_1407F8CF0 @ 0x1407F8CF0 (sub_1407F8CF0.c)
 * Callees:
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14025B5E0(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  bool v19; // zf

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140C51DC0);
  if ( !a3 )
  {
    v8 = *a2;
    v9 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) == a2 && (_QWORD *)*v9 == a2 )
    {
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      RtlAvlRemoveNode(&qword_140C51DC8, a2 + 2);
      --*((_DWORD *)a1 + 16);
      if ( dword_140C51DC4 == 1 )
        sub_14026A230();
      --dword_140C51DC4;
      goto LABEL_7;
    }
LABEL_26:
    __fastfail(3u);
  }
  ++*((_DWORD *)a1 + 16);
  ++dword_140C51DC4;
  if ( !dword_140C51DD8 )
  {
    dword_140C51DD8 = 1;
    qword_140C51DD0 = _InterlockedIncrement64(&qword_140C0BAF8);
  }
  CurrentThread = KeGetCurrentThread();
  memset(a2, 0, 0x50uLL);
  v13 = (_QWORD *)(v3 + 16208);
  a2[5] = CurrentThread;
  v14 = *(_QWORD *)(v3 + 16208);
  if ( *(_QWORD *)(v14 + 8) != v3 + 16208 )
    goto LABEL_26;
  *a2 = v14;
  LOBYTE(v12) = 0;
  a2[1] = v13;
  *(_QWORD *)(v14 + 8) = a2;
  *v13 = a2;
  v15 = (_QWORD *)qword_140C51DC8;
  if ( !qword_140C51DC8 )
    goto LABEL_19;
  while ( (unsigned __int64)CurrentThread < v15[3] )
  {
    v16 = (_QWORD *)*v15;
    if ( !*v15 )
      goto LABEL_19;
LABEL_15:
    v15 = v16;
  }
  v16 = (_QWORD *)v15[1];
  if ( v16 )
    goto LABEL_15;
  LOBYTE(v12) = 1;
LABEL_19:
  RtlAvlInsertNodeEx(&qword_140C51DC8, v15, v12, a2 + 2);
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51DC0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v19 = ((unsigned int)result & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= result;
        if ( v19 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
