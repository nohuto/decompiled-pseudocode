/*
 * XREFs of sub_140683990 @ 0x140683990
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407D7E94 @ 0x1407D7E94 (sub_1407D7E94.c)
 *     sub_1407E6274 @ 0x1407E6274 (sub_1407E6274.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 *     sub_1409B137C @ 0x1409B137C (sub_1409B137C.c)
 *     sub_1409B17B0 @ 0x1409B17B0 (sub_1409B17B0.c)
 *     sub_1409B1860 @ 0x1409B1860 (sub_1409B1860.c)
 * Callees:
 *     sub_140209344 @ 0x140209344 (sub_140209344.c)
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     sub_1402095F0 @ 0x1402095F0 (sub_1402095F0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14056C694 @ 0x14056C694 (sub_14056C694.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_140683DA4 @ 0x140683DA4 (sub_140683DA4.c)
 *     sub_140683F18 @ 0x140683F18 (sub_140683F18.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_14070BCA4 @ 0x14070BCA4 (sub_14070BCA4.c)
 *     sub_1407A0920 @ 0x1407A0920 (sub_1407A0920.c)
 *     sub_1407A2CB0 @ 0x1407A2CB0 (sub_1407A2CB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_140683990(ULONG_PTR BugCheckParameter1, bool a2)
{
  bool v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rdi
  ULONG_PTR v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r11
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rdx
  _OWORD v25[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    goto LABEL_9;
  --*((_WORD *)CurrentThread + 242);
  v5 = (volatile signed __int64 *)(BugCheckParameter1 + 1080);
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1520) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
    v2 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  sub_1402AC800((__int64)CurrentThread);
  if ( v2 )
  {
LABEL_9:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      v8 = BugCheckParameter1 + 1120;
      if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 1) == 0 )
      {
        sub_140209344((volatile signed __int32 *)(BugCheckParameter1 + 1120), 8, 32);
        sub_140683F18(BugCheckParameter1, v9, *(_QWORD *)(BugCheckParameter1 + 1088));
      }
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 992) )
      sub_14056C694(BugCheckParameter1);
    if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 1124), 0x12u) )
    {
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v25, v8);
      if ( *(_QWORD *)(BugCheckParameter1 + 1392) )
        sub_14070BCA4(BugCheckParameter1);
      sub_1406F89A4(BugCheckParameter1);
      sub_1402D0930((__int64)v25, 0LL);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 2248) )
    {
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2264, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 2248) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2248), 0);
      *(_QWORD *)(BugCheckParameter1 + 2248) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter1 + 2264);
      sub_1402AFC00(BugCheckParameter1 + 2264);
      sub_1402AC800((__int64)CurrentThread);
    }
    v10 = *(_QWORD **)(BugCheckParameter1 + 2840);
    if ( v10 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v10 )
          {
            v11 = v10;
            v10 = (_QWORD *)*v10;
            *v11 = 0LL;
          }
          if ( !v10[1] )
            break;
          v12 = v10;
          v10 = (_QWORD *)v10[1];
          v12[1] = 0LL;
        }
        v13 = v10[2];
        sub_1406D9550(v10);
        v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 )
          break;
        v10 = (_QWORD *)v14;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2840) = 0LL;
    v15 = *(_QWORD **)(BugCheckParameter1 + 2856);
    if ( v15 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v15 )
          {
            v16 = v15;
            v15 = (_QWORD *)*v15;
            *v16 = 0LL;
          }
          if ( !v15[1] )
            break;
          v17 = v15;
          v15 = (_QWORD *)v15[1];
          v17[1] = 0LL;
        }
        v18 = v15[2];
        sub_1406D9550(v15);
        v19 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v19 )
          break;
        v15 = (_QWORD *)v19;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2856) = 0LL;
    v20 = *(void **)(BugCheckParameter1 + 1048);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(BugCheckParameter1 + 1048) = 0LL;
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 2888) )
    {
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2888), 0);
      *(_QWORD *)(BugCheckParameter1 + 2888) = 0LL;
    }
    v21 = *(void **)(BugCheckParameter1 + 1304);
    if ( v21 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1304) = 0LL;
      ObfDereferenceObject(v21);
    }
    v22 = *(void **)(BugCheckParameter1 + 1440);
    if ( v22 )
    {
      ObfDereferenceObjectWithTag(v22, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1440) = 0LL;
    }
    if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 1124), 0x12u) )
      sub_1402095F0((_QWORD *)BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      sub_140684158(BugCheckParameter1);
      sub_140683DA4(BugCheckParameter1);
    }
    v23 = *(_QWORD *)(BugCheckParameter1 + 1088);
    if ( v23 )
      sub_1407A0920(CurrentThread, v23, BugCheckParameter1);
  }
  else
  {
    v6 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      sub_1407A2CB0(BugCheckParameter1, v6, v7);
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
    }
  }
  return v2;
}
