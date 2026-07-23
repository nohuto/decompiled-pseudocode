/*
 * XREFs of sub_1407879A8 @ 0x1407879A8
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     sub_140788300 @ 0x140788300 (sub_140788300.c)
 *     IoGetDeviceInterfaces @ 0x1407896A0 (IoGetDeviceInterfaces.c)
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 *     sub_14093F56C @ 0x14093F56C (sub_14093F56C.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 *     sub_140787DE8 @ 0x140787DE8 (sub_140787DE8.c)
 *     sub_140787F7C @ 0x140787F7C (sub_140787F7C.c)
 *     sub_140788E8C @ 0x140788E8C (sub_140788E8C.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407879A8(int *a1, __int64 a2, int a3, char a4, _QWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  __int64 v7; // r13
  PVOID v8; // r14
  bool v9; // si
  WCHAR *v10; // r15
  _WORD *v11; // rdi
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  wchar_t *v19; // r14
  PACCESS_TOKEN ClientToken; // rax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  _WORD *v23; // rax
  unsigned int v24; // r15d
  unsigned __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r8
  _WORD *i; // rsi
  __int64 v31; // rax
  _WORD *Pool2; // rax
  __int64 v33; // rax
  int v34; // ebx
  unsigned int v35; // ecx
  unsigned int v36; // [rsp+60h] [rbp-A0h] BYREF
  char v37; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE v38[11]; // [rsp+65h] [rbp-9Bh] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-88h]
  unsigned int v41[3]; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+98h] [rbp-68h]
  HANDLE v45; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v46; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int16 *v49; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v50; // [rsp+C8h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SessionId; // [rsp+108h] [rbp+8h] BYREF
  _WORD v55[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a6;
  v7 = a2;
  *(_QWORD *)&v38[3] = a2;
  v44 = a3;
  v52 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v38[1] = a4;
  v9 = 0;
  v50 = a5;
  v10 = 0LL;
  v43 = (__int64)a6;
  v11 = 0LL;
  P = 0LL;
  memset(v41, 0, sizeof(v41));
  v49 = 0LL;
  v37 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Handle = 0LL;
  v45 = 0LL;
  v36 = 0;
  v39 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v40 = 0;
  DestinationString = 0LL;
  v12 = sub_140773030(a1, v55);
  if ( v12 < 0 )
    goto LABEL_85;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  v16 = sub_140787DE8(qword_140D00AC0, (unsigned int)v55, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
  v12 = v16;
  if ( v16 == -1073741772 || v16 == -1073741766 )
  {
    v36 = 1;
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL, 538996816LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      v12 = 0;
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_26;
  }
  if ( v16 < 0 )
    goto LABEL_26;
  v17 = sub_14077D91C(
          0x47706E50u,
          0x400u,
          (int)v55,
          4,
          (__int64)Handle,
          0LL,
          (__int64)&qword_140010B80,
          (__int64)&v39,
          &P,
          v41,
          0);
  v12 = v17;
  if ( v17 < 0 )
  {
    if ( v17 != -1073741275 && v17 != -1073741772 && v17 != -1073741766 )
      goto LABEL_45;
    v19 = (wchar_t *)P;
    goto LABEL_8;
  }
  v9 = 0;
  if ( (_DWORD)v39 != 18 )
  {
    v12 = -1073741823;
    goto LABEL_25;
  }
  v19 = (wchar_t *)P;
  if ( (int)sub_140784B14(*(__int64 *)&qword_140D00AC0, (const WCHAR *)P, 0x30u, v18, 131097, 0, (__int64)&v45, 0LL) < 0 )
    goto LABEL_69;
  if ( !*(_QWORD *)&v38[3] )
    goto LABEL_89;
  HIDWORD(v39) = 400;
  v33 = ExAllocatePool2(256LL, 400LL, 538996816LL);
  *(_QWORD *)&v41[1] = v33;
  v10 = (WCHAR *)v33;
  if ( !v33 )
  {
    v12 = -1073741670;
LABEL_25:
    v7 = *(_QWORD *)&v38[3];
    goto LABEL_26;
  }
  if ( (int)sub_14077DA5C(
              *(__int64 *)&qword_140D00AC0,
              (__int64)v19,
              3,
              (int)v45,
              0LL,
              (__int64)&qword_140010AD8,
              (__int64)&v39,
              v33,
              SHIDWORD(v39),
              (__int64)&v39 + 4,
              0) >= 0
    && (_DWORD)v39 == 18
    && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0
    && RtlEqualUnicodeString(*(PCUNICODE_STRING *)&v38[3], &DestinationString, 1u) )
  {
LABEL_89:
    if ( (v44 & 1) != 0
      || (HIDWORD(v39) = 1,
          (int)sub_14077DA5C(
                 *(__int64 *)&qword_140D00AC0,
                 (__int64)v19,
                 3,
                 (int)v45,
                 0LL,
                 (__int64)&qword_14000EB88,
                 (__int64)&v39,
                 (__int64)&v37,
                 1,
                 (__int64)&v39 + 4,
                 0) >= 0)
      && v39 == 0x100000011LL
      && v37 == -1 )
    {
      v38[0] = 0;
      memset(&SessionId, 0, sizeof(SessionId));
      SeCaptureSubjectContext(&SessionId);
      v34 = sub_14077D454(*(__int64 *)&qword_140D00AC0, v19, 3, (__int64)v45, &SessionId, v38);
      SeReleaseSubjectContext(&SessionId);
      if ( v34 >= 0 )
        v9 = v38[0] != 0;
    }
  }
  ZwClose(v45);
  if ( !v9 )
  {
LABEL_69:
    ExFreePoolWithTag(v19, 0);
    v19 = 0LL;
    v41[0] = 0;
    P = 0LL;
  }
LABEL_8:
  if ( *(_QWORD *)&v38[3] )
  {
    v12 = sub_140779CA0(&v49, 0LL, *(unsigned __int16 **)&v38[3]);
    if ( v12 < 0 )
      goto LABEL_45;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( v9 )
    ClientToken = v19;
  SubjectContext.ClientToken = ClientToken;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  v21 = 4096;
  v36 = 4096;
  if ( v9 )
  {
    v35 = v41[0] >> 1;
    if ( v41[0] >> 1 >= 0x1000 )
    {
      v21 = v35 + 1;
      v36 = v35 + 1;
    }
  }
  v12 = -1073741789;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= 5 )
      goto LABEL_20;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v21 = v36;
    }
    v23 = (_WORD *)ExAllocatePool2(256LL, 2LL * v21, 538996816LL);
    v11 = v23;
    if ( !v23 )
    {
      v12 = -1073741670;
LABEL_20:
      v24 = v40;
      goto LABEL_21;
    }
    v24 = v36;
    v40 = v36;
    v25 = v36;
    if ( v9 )
      break;
    v26 = (__int64)v23;
LABEL_19:
    v46 = v25;
    v47 = v26;
    v12 = sub_140787F7C(
            qword_140D00AC0,
            (unsigned int)v55,
            (_DWORD)v49,
            (v44 & 1) == 0,
            (__int64)sub_14077CB00,
            (__int64)&SubjectContext,
            v26,
            v25,
            (__int64)&v36,
            0);
    ++v22;
    v21 = ((v26 - (__int64)v11) >> 1) + v36;
    v36 = v21;
    if ( v12 != -1073741789 )
      goto LABEL_20;
  }
  v12 = sub_1402E0340(v23, v36, v19, &v47, &v46, 2048);
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v46 )
  {
    v25 = v46 - 1;
    v26 = v47 + 2;
    goto LABEL_19;
  }
  v12 = -1073741823;
LABEL_21:
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  if ( v12 < 0 )
    goto LABEL_24;
  if ( v36 )
    goto LABEL_23;
  v36 = 1;
  if ( !v24 )
  {
    ExFreePoolWithTag(v11, 0);
    v11 = (_WORD *)ExAllocatePool2(256LL, 2LL * v36, 538996816LL);
    if ( !v11 )
    {
      v12 = -1073741670;
      goto LABEL_24;
    }
  }
  *v11 = 0;
LABEL_23:
  if ( v38[1] )
  {
LABEL_24:
    v10 = *(WCHAR **)&v41[1];
    v6 = (_DWORD *)v43;
    goto LABEL_25;
  }
  for ( i = v11; *i; i += v31 + 1 )
  {
    LOBYTE(v28) = 1;
    v12 = sub_140788E8C(v27, i, v28);
    if ( v12 < 0 )
      break;
    v31 = -1LL;
    do
      ++v31;
    while ( i[v31] );
  }
  v10 = *(WCHAR **)&v41[1];
  v6 = (_DWORD *)v43;
LABEL_45:
  v7 = *(_QWORD *)&v38[3];
LABEL_26:
  ExReleaseResourceLite(&stru_140C462A0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v12 >= 0 )
  {
    *v50 = v11;
    if ( v6 )
      *v6 = 2 * v36;
    v8 = P;
    v11 = 0LL;
    goto LABEL_30;
  }
  v8 = P;
LABEL_85:
  *v50 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  sub_14077BAB8(v49, v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v12;
}
