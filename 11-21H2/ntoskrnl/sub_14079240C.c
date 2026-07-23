/*
 * XREFs of sub_14079240C @ 0x14079240C
 * Callers:
 *     ExUnsubscribeWnfStateChange @ 0x140791480 (ExUnsubscribeWnfStateChange.c)
 *     sub_1407919CC @ 0x1407919CC (sub_1407919CC.c)
 *     sub_1407928B0 @ 0x1407928B0 (sub_1407928B0.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14079240C(struct _EX_RUNDOWN_REF *P, PEPROCESS a2)
{
  __int64 v2; // r15
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbp
  ULONG_PTR Count; // rbp
  __int64 v8; // rax
  __int64 v9; // r13
  struct _EX_RUNDOWN_REF **v10; // rdx
  PVOID *v11; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v13; // rdx
  PVOID *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // ecx
  BOOL v18; // r13d
  int v19; // r12d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  BOOL v23; // [rsp+78h] [rbp+20h]

  v2 = *((_QWORD *)a2 + 269);
  v4 = 1;
  if ( v2 )
  {
    v5 = sub_140347C10(v2 + 80, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 80), 0LL) )
      sub_14029F120((unsigned __int64 *)(v2 + 80), v5, v2 + 80);
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
  }
  if ( !P[5].Count )
  {
    v4 = 0;
    goto LABEL_43;
  }
  v23 = 0;
  Count = P[6].Count;
  if ( Count )
  {
    v8 = sub_140347C10(Count + 112, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
      sub_14029F120((unsigned __int64 *)(Count + 112), v8, Count + 112);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    v10 = (struct _EX_RUNDOWN_REF **)P[8].Count;
    if ( v10[1] != &P[8] )
      goto LABEL_61;
    v11 = (PVOID *)P[9].Count;
    if ( *v11 != &P[8] )
      goto LABEL_61;
    *v11 = v10;
    v10[1] = (struct _EX_RUNDOWN_REF *)v11;
    Ptr_high = HIDWORD(P[12].Ptr);
    P[6].Count = 0LL;
    if ( (Ptr_high & 1) != 0 )
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
  }
  v13 = (struct _EX_RUNDOWN_REF **)P[3].Count;
  if ( v13[1] != &P[3] )
    goto LABEL_61;
  v14 = (PVOID *)P[4].Count;
  if ( *v14 != &P[3] )
    goto LABEL_61;
  *v14 = v13;
  v13[1] = (struct _EX_RUNDOWN_REF *)v14;
  v15 = sub_140347C10(v2 + 104, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
    sub_14029F120((unsigned __int64 *)(v2 + 104), v15, v2 + 104);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
  v17 = P[15].Count;
  if ( v17 != 1 && ((PEPROCESS)P[5].Count == PsInitialSystemProcess || !v17) )
    goto LABEL_25;
  v20 = (struct _EX_RUNDOWN_REF **)P[13].Count;
  if ( v20[1] != &P[13] || (v21 = (PVOID *)P[14].Count, *v21 != &P[13]) )
LABEL_61:
    __fastfail(3u);
  *v21 = v20;
  v20[1] = (struct _EX_RUNDOWN_REF *)v21;
  if ( Count && (BYTE4(P[12].Ptr) & 1) != 0 && ((BYTE4(P[15].Ptr) & 1) != 0 || (P[16].Count & 1) != 0) )
  {
    v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 164), 0xFFFFFFFF) == 1;
    goto LABEL_26;
  }
LABEL_25:
  v18 = 0;
LABEL_26:
  P[5].Count = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2 + 104);
  sub_1402AFC00(v2 + 104);
  if ( Count )
  {
    v19 = 0;
    if ( v23 || v18 )
    {
      if ( sub_140347810((struct _EX_RUNDOWN_REF *)(Count + 8)) )
      {
        v19 = 1;
      }
      else
      {
        v23 = 0;
        v18 = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Count + 112);
    sub_1402AFC00(Count + 112);
    if ( v2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v2 + 80);
      sub_1402AFC00(v2 + 80);
      v2 = 0LL;
    }
    if ( v18 )
      sub_1407938B0(Count, 8LL, 1LL, a2 != PsInitialSystemProcess);
    if ( v23 )
      sub_1407938B0(Count, 4LL, 1LL, a2 != PsInitialSystemProcess);
    if ( v19 )
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(Count + 8));
  }
LABEL_43:
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 + 80);
    sub_1402AFC00(v2 + 80);
  }
  sub_1402AD030(P + 1);
  if ( v4 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
