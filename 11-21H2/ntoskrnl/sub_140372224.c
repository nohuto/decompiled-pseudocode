/*
 * XREFs of sub_140372224 @ 0x140372224
 * Callers:
 *     sub_1403721D8 @ 0x1403721D8 (sub_1403721D8.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140372224(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3, char a4)
{
  ULONG_PTR v4; // r14
  unsigned int v5; // edi
  int v8; // r13d
  unsigned int v9; // edx
  volatile signed __int64 *v10; // rcx
  volatile signed __int64 *v11; // rsi
  __int64 result; // rax
  ULONG_PTR v13; // rcx
  unsigned __int64 *v14; // r15
  KIRQL v15; // al
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // r12
  bool v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  __int128 v25; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+40h] [rbp-48h]
  ULONG_PTR v27; // [rsp+50h] [rbp-38h]
  ULONG_PTR v28; // [rsp+98h] [rbp+10h]

  v28 = BugCheckParameter4;
  v4 = BugCheckParameter3 + BugCheckParameter4 - 1;
  v5 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v8 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v9 = 0;
    v10 = (volatile signed __int64 *)&unk_140C4F0A0;
    do
    {
      v11 = v10 - 3;
      if ( !*v10 && !_InterlockedCompareExchange64(v10, BugCheckParameter3, 0LL) )
      {
        *((_QWORD *)v11 + 4) = v4;
        goto LABEL_8;
      }
      ++v9;
      v10 += 5;
    }
    while ( v9 < 2 );
    if ( v9 == 2 )
    {
      result = (__int64)sub_1402828F0(64, 0x28uLL, 0x7641694Du);
      v11 = (volatile signed __int64 *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = BugCheckParameter3;
      *(_QWORD *)(result + 32) = v4;
    }
LABEL_8:
    BugCheckParameter4 = v28;
  }
  else
  {
    *((_QWORD *)&v26 + 1) = BugCheckParameter3;
    v11 = (volatile signed __int64 *)&v25;
    v27 = BugCheckParameter3 + BugCheckParameter4 - 1;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v13 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( (*(_DWORD *)(v13 + 1124) & 0x10000) == 0 )
      KeBugCheckEx(0x1Au, 0x5230uLL, v13, BugCheckParameter3, BugCheckParameter4);
    v14 = (unsigned __int64 *)(*(_QWORD *)(v13 + 1368) + 840LL);
  }
  else
  {
    v14 = (unsigned __int64 *)&unk_140C4F080;
  }
  v15 = ExAcquireSpinLockExclusive(&dword_140C4F078);
  v16 = (unsigned __int64 *)*v14;
  v17 = v15;
  if ( !v8 )
  {
    while ( v16 )
    {
      if ( *((_QWORD *)v11 + 3) > v16[4] )
      {
        v16 = (unsigned __int64 *)v16[1];
      }
      else
      {
        if ( *((_QWORD *)v11 + 4) >= v16[3] )
          break;
        v16 = (unsigned __int64 *)*v16;
      }
    }
    if ( v16[3] != BugCheckParameter3 || v16[4] != v4 )
      KeBugCheckEx(0x1Au, 0x5231uLL, (ULONG_PTR)v16, BugCheckParameter3, v28);
    RtlAvlRemoveNode(v14, v16);
    goto LABEL_19;
  }
  v18 = 0;
  if ( !v16 )
    goto LABEL_18;
  while ( *((_QWORD *)v11 + 3) <= v16[4] && *((_QWORD *)v11 + 4) < v16[3] )
  {
    v19 = *v16;
    if ( !*v16 )
      goto LABEL_18;
LABEL_23:
    v16 = (unsigned __int64 *)v19;
  }
  v19 = v16[1];
  if ( v19 )
    goto LABEL_23;
  v18 = 1;
LABEL_18:
  RtlAvlInsertNodeEx(v14, (unsigned __int64)v16, v18, v11);
  v16 = 0LL;
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F078);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = *((_QWORD *)CurrentPrcb + 4375);
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v23;
        if ( v24 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v17);
  if ( v16 )
  {
    while ( v16 != (unsigned __int64 *)((char *)&unk_140C4F088 + 40 * v5) )
    {
      if ( ++v5 >= 2 )
      {
        ExFreePoolWithTag(v16, 0);
        return 1LL;
      }
    }
  }
  return 1LL;
}
