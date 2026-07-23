/*
 * XREFs of sub_1402DBD88 @ 0x1402DBD88
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407608BC @ 0x1407608BC (sub_1407608BC.c)
 */

__int64 __fastcall sub_1402DBD88(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  KIRQL v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  bool v14; // zf
  __int64 v15; // rdx
  unsigned __int8 v16; // di
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  __int64 i; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 k; // rcx
  _QWORD *j; // rax
  unsigned __int64 v26; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // eax
  unsigned __int8 v31; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  v31 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  v6 = sub_14027B520();
  v7 = (volatile LONG *)sub_140282AD0(v6);
  v8 = ExAcquireSpinLockExclusive(v7);
  *((_DWORD *)v7 + 1) = 0;
  v9 = v8;
  sub_1402D8E9C(&v31);
  v12 = sub_1402DBF3C(v2, v10, v11);
  v13 = v12;
  if ( !v12 )
    KeBugCheckEx(0x1Au, 0x2100uLL, BugCheckParameter2, v2, 0LL);
  v14 = (*(_DWORD *)(v12 + 60))-- == 1;
  if ( v14 )
  {
    v18 = *(_QWORD **)v12;
    v19 = (_QWORD *)v12;
    if ( *(_QWORD *)v12 )
    {
      for ( ; v18[1]; v18 = (_QWORD *)v18[1] )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(v12 + 16); ; i = v18[2] )
      {
        v18 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v18 || (_QWORD *)v18[1] == v19 )
          break;
        v19 = v18;
      }
    }
    if ( v18 )
      v21 = v18[6];
    else
      v21 = 0LL;
    v22 = *(_QWORD *)(v13 + 8);
    v23 = v13;
    *(_QWORD *)a2 = v21;
    if ( v22 )
    {
      for ( j = *(_QWORD **)v22; j; j = (_QWORD *)*j )
        v22 = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(v13 + 16); ; k = *(_QWORD *)(v22 + 16) )
      {
        v22 = k & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v22 || *(_QWORD *)v22 == v23 )
          break;
        v23 = v22;
      }
    }
    if ( v22 )
      v26 = *(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v26 = 0LL;
    *(_QWORD *)(a2 + 8) = v26;
    RtlAvlRemoveNode((unsigned __int64 *)(v5 + 80), (unsigned __int64 *)v13);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v13 + 72);
  }
  else
  {
    v13 = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v16 = v31;
    if ( v31 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = *((_QWORD *)CurrentPrcb + 4375);
      v16 = v31;
      v15 = -1LL << (v31 + 1);
      v30 = ~(unsigned __int16)v15;
      v14 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
      *(_DWORD *)(v29 + 20) &= v30;
      if ( v14 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v16 = v31;
  }
  __writecr8(v16);
  LOBYTE(v15) = v9;
  sub_14030FA80(v6, v15);
  if ( v13 && *(_BYTE *)(v13 + 64) == 1 )
    sub_1407608BC(BugCheckParameter2, 0LL, 0LL);
  return v13;
}
