/*
 * XREFs of sub_14066D0AC @ 0x14066D0AC
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 * Callees:
 *     sub_140203428 @ 0x140203428 (sub_140203428.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406598AC @ 0x1406598AC (sub_1406598AC.c)
 *     sub_14066D3F8 @ 0x14066D3F8 (sub_14066D3F8.c)
 *     sub_14066D440 @ 0x14066D440 (sub_14066D440.c)
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_1406DAEBC @ 0x1406DAEBC (sub_1406DAEBC.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 */

__int64 __fastcall sub_14066D0AC(
        char *Object,
        __int64 a2,
        int a3,
        int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r15
  PVOID v11; // r14
  __int64 v12; // r13
  int v13; // esi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  NTSTATUS v16; // eax
  int v17; // r14d
  int v18; // edx
  struct _ACCESS_STATE *v19; // rbp
  __int64 v20; // rcx
  PVOID v22; // [rsp+88h] [rbp+10h] BYREF
  int v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = *((_QWORD *)CurrentThread + 23);
  *(_DWORD *)(*((_QWORD *)Object + 174) + 40LL) = *((_DWORD *)Object + 272);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL) )
    sub_140847BB4(Object, a7);
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 1296) )
    {
      v13 = sub_140682900(*(PVOID *)(a2 + 1296));
      if ( v13 < 0 )
        goto LABEL_26;
    }
    v13 = sub_1406598AC(Object, a2);
    if ( v13 < 0 )
      goto LABEL_26;
  }
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3CAC8, 0LL);
  v14 = (_QWORD *)qword_140C1BF88;
  v15 = Object + 1096;
  if ( *(__int64 **)qword_140C1BF88 != &qword_140C1BF80 )
    __fastfail(3u);
  *((_QWORD *)Object + 138) = qword_140C1BF88;
  *v15 = &qword_140C1BF80;
  *v14 = v15;
  qword_140C1BF88 = (__int64)(Object + 1096);
  *((_QWORD *)Object + 287) = ++qword_140C1BF90;
  sub_140203428((__int64)CurrentThread);
  if ( (*(_DWORD *)(v12 + 1124) & 8) != 0 )
  {
    v13 = -1073741558;
LABEL_26:
    if ( (a6 & 1) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(Object + 1080);
      sub_1402AFC00((ULONG_PTR)(Object + 1080));
      sub_1402AC800((__int64)CurrentThread);
    }
    return (unsigned int)v13;
  }
  if ( Handle )
  {
    v22 = 0LL;
    v16 = ObReferenceObjectByHandle(Handle, 2u, qword_140D05120, *((_BYTE *)KeGetCurrentThread() + 562), &v22, 0LL);
    v11 = v22;
    v13 = v16;
    if ( v16 < 0 )
      goto LABEL_26;
  }
  v13 = sub_14066D440((ULONG_PTR)Object);
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( v13 < 0 )
    goto LABEL_26;
  v17 = 0;
  if ( !a2 || (v18 = (int)PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
  {
    if ( (a6 & 2) != 0 )
    {
      v18 = (int)Object;
      v17 = 1;
    }
    else
    {
      v18 = v12;
    }
  }
  v19 = AccessState;
  v13 = SeCreateAccessStateEx(0, v18, (_DWORD)AccessState, (int)AccessState + 160, v23, (__int64)PsProcessType + 76);
  if ( v13 < 0 )
    goto LABEL_26;
  ObfReferenceObjectWithTag(Object, 0x72437350u);
  v13 = sub_140729C30(Object, v19, v17, 0LL, 0LL);
  if ( v13 < 0 )
  {
LABEL_25:
    sub_1403478A0((__int64)v19);
    SeReleaseSubjectContext(&v19->SubjectSecurityContext);
    goto LABEL_26;
  }
  ObfDereferenceObjectWithTag(Object, 0x72437350u);
  v20 = *((_QWORD *)Object + 162);
  if ( v20 )
  {
    v13 = sub_1406DAEBC(v20, Object);
    if ( v13 < 0 )
      goto LABEL_25;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)Object + 281, 0x4000000u);
  }
  sub_14066D3F8(Object);
  if ( (a6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Object + 1080);
    sub_1402AFC00((ULONG_PTR)(Object + 1080));
    sub_1402AC800((__int64)CurrentThread);
  }
  return 0LL;
}
