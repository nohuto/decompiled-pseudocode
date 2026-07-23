/*
 * XREFs of sub_1407E0F30 @ 0x1407E0F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203428 @ 0x140203428 (sub_140203428.c)
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_14035F344 @ 0x14035F344 (sub_14035F344.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_140360E3C @ 0x140360E3C (sub_140360E3C.c)
 *     sub_140360F40 @ 0x140360F40 (sub_140360F40.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14041D320 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056C780 @ 0x14056C780 (sub_14056C780.c)
 *     sub_1405FBB0C @ 0x1405FBB0C (sub_1405FBB0C.c)
 *     sub_140659708 @ 0x140659708 (sub_140659708.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 *     sub_14069C104 @ 0x14069C104 (sub_14069C104.c)
 *     sub_140791970 @ 0x140791970 (sub_140791970.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 *     sub_1407DB734 @ 0x1407DB734 (sub_1407DB734.c)
 *     sub_1407E0C48 @ 0x1407E0C48 (sub_1407E0C48.c)
 *     sub_1407E0C78 @ 0x1407E0C78 (sub_1407E0C78.c)
 *     sub_1407E0CE4 @ 0x1407E0CE4 (sub_1407E0CE4.c)
 *     sub_1407E0DC4 @ 0x1407E0DC4 (sub_1407E0DC4.c)
 *     sub_1407E15B4 @ 0x1407E15B4 (sub_1407E15B4.c)
 *     sub_1409AD164 @ 0x1409AD164 (sub_1409AD164.c)
 *     sub_1409DA55C @ 0x1409DA55C (sub_1409DA55C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407E0F30(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  HANDLE ProcessId; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int16 v18; // bx
  __int64 *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int128 *v22; // r9
  __int64 v23; // r8
  int v24; // r10d
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // r11
  const char *v31; // rax
  unsigned int v32; // r10d
  unsigned __int64 v33; // rcx
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int128 *v37; // r10
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r11
  __int64 v42; // rcx
  __int64 v43; // rcx
  void *v44; // rcx
  ULONG_PTR v45; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v46[3]; // [rsp+38h] [rbp-60h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 1124) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter2 + 1096);
  memset(v46, 0, sizeof(v46));
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1096) )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3CAC8, 0LL);
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    sub_140203428((__int64)CurrentThread);
  }
  v6 = *(void **)(BugCheckParameter2 + 1472);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter2 + 1472) = 0LL;
  }
  sub_14069C104(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 2464) )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter2 + 2464));
  v7 = *(void **)(BugCheckParameter2 + 1400);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *(_QWORD *)(BugCheckParameter2 + 1400) = 0LL;
  }
  v8 = *(_QWORD *)(BugCheckParameter2 + 1200);
  if ( v8 )
  {
    ObfDereferenceObject((PVOID)(v8 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter2 + 1200) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2896) )
    sub_140659708((__int64 *)BugCheckParameter2);
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter2);
  sub_1407E15B4(ProcessId);
  if ( (*(_DWORD *)(BugCheckParameter2 + 1124) & 0x40000) != 0 )
  {
    sub_14030D5C0(BugCheckParameter2, 0LL, (__int64)v46, v10);
    if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x400) != 0 )
      sub_14042A5E0(BugCheckParameter2, v11);
    sub_1407DB734(0, BugCheckParameter2);
    sub_1402D0930((__int64)v46, 0LL);
    sub_140693C24(BugCheckParameter2);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1296) )
  {
    sub_140684158(BugCheckParameter2, 0LL, 1u, 0);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter2 + 1296), 0x73507350u);
    *(_QWORD *)(BugCheckParameter2 + 1296) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 1256) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 2160) = MmBadPointer;
  }
  v12 = *(_QWORD *)(BugCheckParameter2 + 2520);
  if ( v12 )
    sub_1403606C4(v12);
  if ( *(_QWORD *)(BugCheckParameter2 + 992) )
    sub_14056C780(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 1088) )
  {
    --*((_WORD *)CurrentThread + 243);
    v13 = sub_1407A1AC0((unsigned int *)qword_140D06A60, *(_QWORD *)(BugCheckParameter2 + 1088));
    if ( !v13 )
      KeBugCheck(0x17u);
    sub_1407A2B78(qword_140D06A60, *(_QWORD *)(BugCheckParameter2 + 1088), v13);
    v14 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v14 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1208) )
    sub_1407E0C48(BugCheckParameter2);
  v15 = *(void **)(BugCheckParameter2 + 1328);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter2, 24616LL);
  }
  v45 = BugCheckParameter2;
  v16 = sub_1402A1124((ULONG_PTR)&qword_140D321C8, &v45, 2uLL, 0);
  if ( v16 )
  {
    v18 = *(_WORD *)(v16 + 16);
    SeFreePrivileges((PPRIVILEGE_SET)v16);
    v19 = (__int64 *)sub_14035F5E8((__int64)&unk_140D31A00, v18 & 0x3FF);
    sub_14035F344(v20, *v19);
    sub_1405FBB0C((__int64)&unk_140D31A00, v18);
  }
  sub_1407E0C78(BugCheckParameter2, v17);
  sub_1407E0CE4(BugCheckParameter2);
  sub_140791970(BugCheckParameter2, 1);
  sub_140360E3C(0LL, BugCheckParameter2);
  sub_1407E0DC4(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 2288) )
  {
    sub_1409DA55C();
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter2 + 2288), 0);
  }
  if ( sub_1402F5718() >= (unsigned __int64)qword_140C4EDF0 )
  {
    v22 = &xmmword_140E018C0;
    _mm_prefetch((const char *)&xmmword_140E018C0, 0);
    v23 = qword_140C4EDE0;
    v24 = 64;
    v25 = qword_140C4EDE8;
    v26 = qword_140C4EDE0;
    v27 = 8LL;
    do
    {
      v26 = __ROR8__(v26 - *(_QWORD *)v22, qword_140C4EDE8);
      v22 = (__int128 *)((char *)v22 + 8);
      v24 -= 8;
      --v27;
    }
    while ( v27 );
    for ( ; v24; --v24 )
    {
      v28 = *(unsigned __int8 *)v22;
      v22 = (__int128 *)((char *)v22 + 1);
      v26 = __ROR8__(v26 - v28, qword_140C4EDE8);
    }
    v14 = qword_140C4EDF8 == v26;
    v29 = qword_140C4EDB0;
    if ( !v14 && !qword_140C4EDB0 )
    {
      v25 = qword_140C4EDE8;
      v23 = qword_140C4EDE0;
      v29 = (unsigned int)__ROR4__(2120, 35);
      qword_140C4EDB0 = (unsigned int)v29;
      xmmword_140C4EDB8 = 0LL;
      qword_140C4EDC8 = 267LL;
      qword_140C4EDD0 = (__int64)&xmmword_140E018C0;
    }
    v30 = (_QWORD *)xmmword_140E018C0;
    v31 = (const char *)xmmword_140E018C0;
    v32 = 4 * xmmword_140E018D0;
    v33 = xmmword_140E018C0 + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)xmmword_140E018C0 < v33 )
    {
      do
      {
        _mm_prefetch(v31, 0);
        v31 += 64;
      }
      while ( (unsigned __int64)v31 < v33 );
    }
    v34 = v23;
    if ( v32 >= 8 )
    {
      v35 = (unsigned __int64)v32 >> 3;
      do
      {
        v34 = __ROR8__(v34 - *v30++, v25);
        v32 -= 8;
        --v35;
      }
      while ( v35 );
    }
    for ( ; v32; --v32 )
    {
      v36 = *(unsigned __int8 *)v30;
      v30 = (_QWORD *)((char *)v30 + 1);
      v34 = __ROR8__(v34 - v36, v25);
    }
    if ( qword_140C4EE00 != v34 && !v29 )
    {
      v25 = qword_140C4EDE8;
      v23 = qword_140C4EDE0;
      v29 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C4EDB0 = (unsigned int)v29;
      xmmword_140C4EDB8 = 0LL;
      qword_140C4EDC8 = 267LL;
      qword_140C4EDD0 = xmmword_140E018C0;
    }
    v37 = xmmword_140D06F80;
    _mm_prefetch((const char *)xmmword_140D06F80, 0);
    v38 = 4LL;
    v39 = 32;
    do
    {
      v23 = __ROR8__(v23 - *(_QWORD *)v37, v25);
      v37 = (__int128 *)((char *)v37 + 8);
      v39 -= 8;
      --v38;
    }
    while ( v38 );
    for ( ; v39; --v39 )
    {
      v40 = *(unsigned __int8 *)v37;
      v37 = (__int128 *)((char *)v37 + 1);
      v23 = __ROR8__(v23 - v40, v25);
    }
    if ( qword_140C4EE08 != v23 && !v29 )
    {
      qword_140C4EDC8 = 267LL;
      v29 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C4EDB0 = (unsigned int)v29;
      xmmword_140C4EDB8 = 0LL;
      qword_140C4EDD0 = (__int64)xmmword_140D06F80;
    }
    if ( *(_QWORD *)&xmmword_140D06F80[0] != (_QWORD)xmmword_140E018C0
      || (_DWORD)xmmword_140D06F90 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v29 )
        goto LABEL_68;
      v29 = (unsigned int)__ROR4__(4240, 68);
      qword_140C4EDB0 = (unsigned int)v29;
      xmmword_140C4EDB8 = 0LL;
      qword_140C4EDC8 = 267LL;
      qword_140C4EDD0 = *(_QWORD *)&xmmword_140D06F80[0];
    }
    if ( !v29 )
    {
LABEL_71:
      v41 = sub_1402F5718();
      v21 = 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL;
      qword_140C4EDF0 = v41 + v21 + 288000000000LL;
      goto LABEL_72;
    }
LABEL_68:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))stru_140C4ED70.DeferredRoutine != DeferredRoutine )
      KeInitializeDpc(&stru_140C4ED70, (PKDEFERRED_ROUTINE)DeferredRoutine, &stru_140C4ED70);
    qword_140C4EDD8 = 1845792LL;
    KeInsertQueueDpc(&stru_140C4ED70, 0LL, 0LL);
    goto LABEL_71;
  }
LABEL_72:
  v42 = *(_QWORD *)(BugCheckParameter2 + 1384);
  if ( v42 )
    sub_1409AD164(v42, v21);
  v43 = *(_QWORD *)(BugCheckParameter2 + 1024);
  if ( v43 )
    sub_140360F40(v43);
  v44 = *(void **)(BugCheckParameter2 + 1408);
  if ( v44 )
  {
    ExFreePoolWithTag(v44, 0);
    *(_QWORD *)(BugCheckParameter2 + 1408) = 0LL;
  }
}
