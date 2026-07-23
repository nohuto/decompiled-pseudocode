/*
 * XREFs of sub_140729C30 @ 0x140729C30
 * Callers:
 *     sub_1406623D0 @ 0x1406623D0 (sub_1406623D0.c)
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 *     sub_14066D4BC @ 0x14066D4BC (sub_14066D4BC.c)
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 *     sub_1406AFD10 @ 0x1406AFD10 (sub_1406AFD10.c)
 *     sub_1406B4B90 @ 0x1406B4B90 (sub_1406B4B90.c)
 *     sub_1406B8FE0 @ 0x1406B8FE0 (sub_1406B8FE0.c)
 *     sub_1406C08F0 @ 0x1406C08F0 (sub_1406C08F0.c)
 *     sub_1406C2A70 @ 0x1406C2A70 (sub_1406C2A70.c)
 *     sub_1406C505C @ 0x1406C505C (sub_1406C505C.c)
 *     sub_1406D9390 @ 0x1406D9390 (sub_1406D9390.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     sub_1406E1214 @ 0x1406E1214 (sub_1406E1214.c)
 *     sub_1406E2A70 @ 0x1406E2A70 (sub_1406E2A70.c)
 *     sub_1406EC524 @ 0x1406EC524 (sub_1406EC524.c)
 *     sub_1406F0080 @ 0x1406F0080 (sub_1406F0080.c)
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_14072295C @ 0x14072295C (sub_14072295C.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 *     NtCreateEvent @ 0x140727DD0 (NtCreateEvent.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     sub_14072A4C0 @ 0x14072A4C0 (sub_14072A4C0.c)
 *     sub_140782F2C @ 0x140782F2C (sub_140782F2C.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_140796F10 @ 0x140796F10 (sub_140796F10.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_1407D53D0 @ 0x1407D53D0 (sub_1407D53D0.c)
 *     sub_1407F385C @ 0x1407F385C (sub_1407F385C.c)
 *     SeFilterToken @ 0x140831700 (SeFilterToken.c)
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 *     sub_140846BEC @ 0x140846BEC (sub_140846BEC.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 *     sub_140854BB0 @ 0x140854BB0 (sub_140854BB0.c)
 *     IoCreateController @ 0x140861240 (IoCreateController.c)
 *     sub_140928A50 @ 0x140928A50 (sub_140928A50.c)
 *     ntoskrnl_30 @ 0x140938B40 (ntoskrnl_30.c)
 *     sub_1409AEFF0 @ 0x1409AEFF0 (sub_1409AEFF0.c)
 *     sub_1409AF200 @ 0x1409AF200 (sub_1409AF200.c)
 *     sub_1409C6000 @ 0x1409C6000 (sub_1409C6000.c)
 *     SeGetLogonSessionToken @ 0x1409CC3A0 (SeGetLogonSessionToken.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 *     sub_140A062C8 @ 0x140A062C8 (sub_140A062C8.c)
 * Callees:
 *     sub_1402A49D0 @ 0x1402A49D0 (sub_1402A49D0.c)
 *     sub_1402A4A60 @ 0x1402A4A60 (sub_1402A4A60.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeDeassignSecurity @ 0x1406BC2D0 (SeDeassignSecurity.c)
 *     sub_1406C8634 @ 0x1406C8634 (sub_1406C8634.c)
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 *     sub_140726394 @ 0x140726394 (sub_140726394.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140729C30(
        char *Object,
        PACCESS_STATE AccessState,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _SLIST_ENTRY *v9; // rsi
  char *v10; // r15
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  POBJECT_TYPE v15; // rdi
  KPROCESSOR_MODE v16; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v18; // r8
  PVOID v19; // rax
  unsigned __int64 v20; // rax
  _SLIST_ENTRY *v21; // r14
  char *v22; // rcx
  PSECURITY_DESCRIPTOR v23; // rdx
  int v24; // eax
  int v25; // r14d
  _SLIST_ENTRY *v26; // rcx
  bool v27; // zf
  int v28; // ecx
  _SLIST_ENTRY *v29; // rax
  PVOID v30; // rdx
  int v31; // r12d
  __int64 v32; // r8
  __int64 v33; // r9
  _SLIST_ENTRY *v34; // rcx
  struct _KPRCB *v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  PACCESS_TOKEN v41; // rcx
  __int64 v43; // r8
  int v44; // ecx
  unsigned int v45; // ebx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v48; // rcx
  PVOID v49; // r14
  struct _KTHREAD *v50; // rax
  char *v51; // rax
  char *v52; // rcx
  ULONG_PTR v53; // rcx
  _QWORD *ClientToken; // rax
  _QWORD *v55; // rax
  _QWORD *PrimaryToken; // rax
  int v57; // [rsp+30h] [rbp-D0h]
  __int64 v58; // [rsp+48h] [rbp-B8h]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  int v60; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v61; // [rsp+68h] [rbp-98h]
  PVOID Objecta; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+78h] [rbp-88h]
  ULONG Index[2]; // [rsp+80h] [rbp-80h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+88h] [rbp-78h] BYREF
  char *v66; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v67; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  __int128 v70; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  struct _KTHREAD *v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  _QWORD v75[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v76[28]; // [rsp+180h] [rbp+80h] BYREF

  v60 = a3;
  Objecta = Object;
  v69 = a6;
  v63 = a4;
  memset(v76, 0, sizeof(v76));
  memset(v75, 0, sizeof(v75));
  v9 = (_SLIST_ENTRY *)*((_QWORD *)Object - 2);
  v10 = Object - 48;
  v11 = 0LL;
  v12 = 0x140000000uLL;
  v13 = 0LL;
  v14 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v66 = 0LL;
  v15 = (POBJECT_TYPE)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ v14];
  if ( (*(Object - 22) & 2) != 0 )
  {
    v51 = (char *)byte_140C25440[*(Object - 22) & 3];
    v52 = (char *)(v10 - v51);
    if ( v10 != v51 )
    {
      v13 = v52 + 8;
      v66 = v52 + 8;
    }
  }
  v16 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (*((_BYTE *)v15 + 66) & 8) == 0 && !v13 && !v9[2].Next )
  {
    *((_QWORD *)v10 + 4) = 0LL;
    if ( a7 )
    {
      v43 = (unsigned int)v60;
      v44 = v63 + 1;
      v59 = v69;
      *a7 = 0LL;
      v45 = sub_140731DA0(0LL, Object, v43, 0LL, v44, v9->Next, v16, 0LL, 0, v59, a7);
    }
    else
    {
      v45 = 0;
    }
    Next = v9[2].Next;
    if ( Next )
    {
      LOBYTE(v12) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v9[1].Next), v12, v11);
      v9[2].Next = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v48 = *((_QWORD *)CurrentPrcb + 264);
    ++*(_DWORD *)(v48 + 28);
    if ( *(_WORD *)v48 < *(_WORD *)(v48 + 16)
      || (++*(_DWORD *)(v48 + 32),
          v48 = *((_QWORD *)CurrentPrcb + 265),
          ++*(_DWORD *)(v48 + 28),
          *(_WORD *)v48 < *(_WORD *)(v48 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v48, v9);
      ObfDereferenceObject(Object);
      return v45;
    }
    else
    {
      ++*(_DWORD *)(v48 + 32);
      sub_14042A5E0(v9, CurrentPrcb);
      ObfDereferenceObject(Object);
      return v45;
    }
  }
  if ( !AccessState )
  {
    AccessState = (PACCESS_STATE)v75;
    CurrentThread = KeGetCurrentThread();
    v67 = CurrentThread;
    *((_QWORD *)&v70 + 1) = 0LL;
    v18 = *((_QWORD *)CurrentThread + 23);
    v74 = v18;
    v72 = *(_QWORD *)(v18 + 1088);
    if ( CurrentThread )
    {
      if ( (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
      {
        v73 = KeGetCurrentThread();
        --*((_WORD *)v73 + 242);
        BugCheckParameter2 = (ULONG_PTR)CurrentThread + 1360;
        ExAcquirePushLockSharedEx((ULONG_PTR)CurrentThread + 1360, 0LL);
        if ( (*((_DWORD *)v67 + 344) & 8) != 0 )
        {
          v61 = (PVOID)(*((_QWORD *)v67 + 159) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(v61, 0x75536553u);
          DWORD2(v70) = *((_DWORD *)v67 + 318) & 3;
        }
        else
        {
          v61 = 0LL;
        }
        v53 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          v53 = BugCheckParameter2;
        }
        sub_1402AFC00(v53);
        sub_1402AC800((__int64)v73);
        v18 = v74;
        v19 = v61;
      }
      else
      {
        v19 = 0LL;
        v61 = 0LL;
      }
    }
    else
    {
      v19 = 0LL;
      v61 = 0LL;
    }
    *(_QWORD *)&v70 = v19;
    v20 = sub_140347920(v18, 0x75536553u);
    v71 = v20;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
        if ( v71 == qword_140D04940 )
          __debugbreak();
        v55 = (_QWORD *)v70;
      }
      else
      {
        v55 = v61;
      }
      if ( v55 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v55[143] + 284LL));
        if ( (_QWORD)v70 == qword_140D04940 )
          __debugbreak();
      }
    }
    LODWORD(v61) = sub_140347A20(&v70, v75, v76, v60, (PGENERIC_MAPPING)((char *)v15 + 76));
    if ( (int)v61 < 0 )
    {
      ObfDereferenceObject(Object);
      return (unsigned int)v61;
    }
  }
  v21 = v9[2].Next;
  AccessState->SecurityDescriptor = v21;
  if ( v21 )
  {
    if ( !RtlValidSecurityDescriptor(v21) )
    {
      ObfDereferenceObject(Objecta);
      if ( AccessState == (PACCESS_STATE)v75 )
      {
        sub_1403478A0((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (BYTE2(v21->Next) & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= sub_1406C8634((__int64)v21);
  }
  v22 = v66;
  if ( !v66 && ((*((_BYTE *)v15 + 66) & 8) != 0 || v9[2].Next) )
  {
    v23 = AccessState->SecurityDescriptor;
    Index[1] = 0;
    v60 = 0;
    SecurityDescriptor = 0LL;
    Index[0] = 8;
    v24 = sub_1402A4A60((__int64)v15, (__int64)v23, 0LL, &v60, Index);
    if ( v24 < 0 )
    {
      v25 = v24;
    }
    else
    {
      v60 |= 16 * (a5 & 1);
      v25 = sub_1402A49D0(
              0,
              (int)AccessState->SecurityDescriptor,
              (int)&SecurityDescriptor,
              0LL,
              v15 == qword_140C24FB8,
              v60,
              Index,
              (__int64)&AccessState->SubjectSecurityContext,
              (__int64)v15 + 76);
      if ( v25 >= 0 )
      {
        v57 = 1;
        v25 = sub_14042A5E0(Objecta, 3LL);
        if ( v25 >= 0 )
        {
          v26 = v9[2].Next;
          if ( LOBYTE(v9[1].Next) <= 1u && v26 )
            ExFreePoolWithTag(v26, 0);
          v22 = v66;
          v9[2].Next = 0LL;
          AccessState->SecurityDescriptor = 0LL;
          goto LABEL_19;
        }
        SeDeassignSecurity(&SecurityDescriptor);
      }
    }
    ObfDereferenceObject(Objecta);
    if ( AccessState == (PACCESS_STATE)v75 )
    {
      sub_1403478A0((__int64)AccessState);
      SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    }
    return (unsigned int)v25;
  }
LABEL_19:
  *((_QWORD *)v10 + 4) = 0LL;
  if ( a7 )
  {
    v27 = v22 == 0LL;
    v28 = v63;
    v29 = v9;
    if ( v27 )
      v29 = 0LL;
    v58 = v69;
    v30 = Objecta;
    *a7 = 0LL;
    LOBYTE(v57) = v16;
    v31 = sub_140731DA0(0LL, v30, 0LL, AccessState, v28 + 1, v9->Next, v57, v29, 0, v58, a7);
    ObfDereferenceObject(Objecta);
    goto LABEL_23;
  }
  if ( AccessState == (PACCESS_STATE)v75 )
  {
    v49 = Objecta;
    goto LABEL_50;
  }
  if ( ((__int64)v9->Next & 0x400) != 0 )
    v16 = 1;
  v49 = Objecta;
  v31 = sub_1407227B0(AccessState, v16, (__int64)v15, (__int64)Objecta);
  if ( v31 >= 0 )
  {
LABEL_50:
    v50 = KeGetCurrentThread();
    --*((_WORD *)v50 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 16), 0LL);
    v31 = sub_140726394((__int64)v10, *((_QWORD *)KeGetCurrentThread() + 23));
    ExReleasePushLockEx((ULONG_PTR)(v10 + 16), 0LL);
    KeLeaveCriticalRegion();
    if ( v31 >= 0 )
      goto LABEL_23;
  }
  ObfDereferenceObject(v49);
LABEL_23:
  v34 = v9[2].Next;
  if ( v34 )
  {
    LOBYTE(v32) = 1;
    SeReleaseSecurityDescriptor(v34, LOBYTE(v9[1].Next), v32, v33);
    v9[2].Next = 0LL;
  }
  v35 = KeGetCurrentPrcb();
  v36 = *((_QWORD *)v35 + 264);
  ++*(_DWORD *)(v36 + 28);
  if ( *(_WORD *)v36 < *(_WORD *)(v36 + 16)
    || (++*(_DWORD *)(v36 + 32),
        v36 = *((_QWORD *)v35 + 265),
        ++*(_DWORD *)(v36 + 28),
        *(_WORD *)v36 < *(_WORD *)(v36 + 16)) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v36, v9);
  }
  else
  {
    ++*(_DWORD *)(v36 + 32);
    sub_14042A5E0(v9, v35);
  }
  if ( AccessState == (PACCESS_STATE)v75 )
  {
    sub_1403478A0((__int64)AccessState);
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)qword_140D04940 )
          __debugbreak();
      }
      ClientToken = AccessState->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)qword_140D04940 )
          __debugbreak();
      }
    }
    v37 = (unsigned __int64)AccessState->SubjectSecurityContext.PrimaryToken;
    v38 = *((_QWORD *)KeGetCurrentThread() + 23);
    _m_prefetchw((const void *)(v38 + 1208));
    v39 = *(_QWORD *)(v38 + 1208);
    if ( (v37 ^ v39) >= 0xF )
    {
LABEL_68:
      ObfDereferenceObjectWithTag((PVOID)v37, 0x75536553u);
    }
    else
    {
      while ( 1 )
      {
        v40 = v39;
        v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 1208), v39 + 1, v39);
        if ( v40 == v39 )
          break;
        if ( (v37 ^ v39) >= 0xF )
          goto LABEL_68;
      }
      sub_140347B50(v37 - 48);
    }
    v41 = AccessState->SubjectSecurityContext.ClientToken;
    AccessState->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v41 )
      ObfDereferenceObjectWithTag(v41, 0x75536553u);
    AccessState->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v31;
}
