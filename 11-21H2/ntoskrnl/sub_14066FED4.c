/*
 * XREFs of sub_14066FED4 @ 0x14066FED4
 * Callers:
 *     sub_14066F980 @ 0x14066F980 (sub_14066F980.c)
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_140794AD0 @ 0x140794AD0 (sub_140794AD0.c)
 *     sub_14079982C @ 0x14079982C (sub_14079982C.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067023C @ 0x14067023C (sub_14067023C.c)
 *     sub_1406E8024 @ 0x1406E8024 (sub_1406E8024.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     sub_140798300 @ 0x140798300 (sub_140798300.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14066FED4(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4, struct _EX_RUNDOWN_REF **a5)
{
  __int64 v5; // rax
  __int64 v7; // r15
  SIZE_T v10; // rdx
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  SIZE_T v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // rdi
  struct _EX_RUNDOWN_REF *v14; // r12
  unsigned int v15; // esi
  volatile signed __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  struct _EX_RUNDOWN_REF *v19; // rax
  struct _EX_RUNDOWN_REF *v20; // r14
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r14
  struct _EX_RUNDOWN_REF **v27; // r8
  struct _EX_RUNDOWN_REF *v28; // rdx
  PVOID Ptr; // rcx

  v5 = *(_QWORD *)(a3 + 8);
  v7 = (a2 >> 4) & 3;
  if ( PsInitialSystemProcess == (PEPROCESS)a4 || (_DWORD)v7 != 3 )
  {
    v12 = 184LL;
    if ( !v5 )
      v12 = 168LL;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, v12, 0x20666E57u);
  }
  else
  {
    v10 = 184LL;
    if ( !v5 )
      v10 = 168LL;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v10, 0x20666E57u);
  }
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  LODWORD(v13->Count) = 11012355;
  v13[6].Count = a1;
  v13[5].Count = a2;
  LODWORD(v13[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v13[8].Count = (ULONG_PTR)&v13[21];
    *(_OWORD *)&v13[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v14 = v13 + 9;
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16)) < 0 )
  {
    ExFreePoolWithTag(v13, 0x20666E57u);
    return 3221225626LL;
  }
  v13[14].Count = 0LL;
  v13[16].Count = (ULONG_PTR)&v13[15];
  v13[15].Count = (ULONG_PTR)&v13[15];
  v13[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 && (int)sub_1406E8024(a1, (unsigned int)v7, 1LL, &v13[13]) < 0 )
  {
    v15 = -1073741670;
    goto LABEL_41;
  }
  v15 = sub_14067023C(v13);
  if ( v15 )
  {
LABEL_41:
    ObDereferenceSecurityDescriptor(v14->Count, 1LL);
    ExFreePoolWithTag(v13, 0x20666E57u);
    return v15;
  }
  v16 = (volatile signed __int64 *)(a1 + 48);
  v17 = sub_140347C10(a1 + 48, 0LL);
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    sub_14029F120((unsigned __int64 *)(a1 + 48), v17, a1 + 48);
  if ( v18 )
    *(_BYTE *)(v18 + 18) = 1;
  v19 = (struct _EX_RUNDOWN_REF *)sub_140798300(a1, a2);
  v20 = v19;
  if ( v19 )
  {
    sub_140347810(v19 + 1);
    if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 48);
    sub_1402AFC00(a1 + 48);
    ObDereferenceSecurityDescriptor(v14->Count, 1LL);
    Ptr = v13[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v13, 0x20666E57u);
    *a5 = v20;
    return 0LL;
  }
  sub_140347810(v13 + 1);
  v21 = *(_QWORD **)(a1 + 56);
  v22 = 0;
  if ( !v21 )
    goto LABEL_26;
  while ( v13[5].Count < v21[3] )
  {
    v23 = (_QWORD *)*v21;
    if ( !*v21 )
      goto LABEL_26;
LABEL_23:
    v21 = v23;
  }
  v23 = (_QWORD *)v21[1];
  if ( v23 )
    goto LABEL_23;
  v22 = 1;
LABEL_26:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v21, v22, &v13[2].Count);
  if ( (_DWORD)v7 == 3 )
  {
    v13[19].Count = a4;
    v24 = *(_QWORD *)(a4 + 2152);
    v25 = sub_140347C10(v24 + 56, 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 56), 0LL) )
      sub_14029F120((unsigned __int64 *)(v24 + 56), v25, v24 + 56);
    if ( v26 )
      *(_BYTE *)(v26 + 18) = 1;
    v27 = *(struct _EX_RUNDOWN_REF ***)(v24 + 72);
    v28 = v13 + 17;
    if ( *v27 != (struct _EX_RUNDOWN_REF *)(v24 + 64) )
      __fastfail(3u);
    v28->Count = v24 + 64;
    v13[18].Count = (ULONG_PTR)v27;
    *v27 = v28;
    *(_QWORD *)(v24 + 72) = v28;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24 + 56);
    sub_1402AFC00(v24 + 56);
  }
  if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 48);
  sub_1402AFC00(a1 + 48);
  *a5 = v13;
  return 0LL;
}
