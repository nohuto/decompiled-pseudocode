/*
 * XREFs of sub_140677810 @ 0x140677810
 * Callers:
 *     sub_140721010 @ 0x140721010 (sub_140721010.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1402A21B0 @ 0x1402A21B0 (sub_1402A21B0.c)
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 *     sub_14067E9B8 @ 0x14067E9B8 (sub_14067E9B8.c)
 *     sub_14067EA18 @ 0x14067EA18 (sub_14067EA18.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_1406B5B10 @ 0x1406B5B10 (sub_1406B5B10.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721878 @ 0x140721878 (sub_140721878.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140918134 @ 0x140918134 (sub_140918134.c)
 *     sub_14091BC64 @ 0x14091BC64 (sub_14091BC64.c)
 *     sub_14091ECE0 @ 0x14091ECE0 (sub_14091ECE0.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_140677810(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r14
  char v8; // r12
  char v9; // r13
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR v14; // rdi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PPRIVILEGE_SET v19; // rcx
  __int64 v20; // r14
  char v21; // r10
  int v22; // r8d
  ULONG_PTR v23; // rcx
  char v24; // r14
  PPRIVILEGE_SET v25; // rcx
  char v26; // di
  __int64 v27; // r8
  PPRIVILEGE_SET v28; // rcx
  _QWORD *v30; // rax
  char v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-D8h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  char v41; // [rsp+50h] [rbp-B0h]
  char v42; // [rsp+52h] [rbp-AEh]
  unsigned int v43; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v44; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h]
  _QWORD v52[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v57[3]; // [rsp+E8h] [rbp-18h] BYREF

  v54 = a6;
  v48 = 0xFFFFFFFFLL;
  v55 = a4;
  v44 = 0LL;
  WORD1(v44) = -1;
  v51 = a3;
  v7 = 0;
  v53 = a2;
  v8 = 0;
  v43 = 0;
  v9 = 0;
  v49 = 0LL;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v46 = 0;
  v50 = 0LL;
  memset(v57, 0, sizeof(v57));
  v42 = 0;
  v47 = 0;
  *(_OWORD *)Privileges = 0LL;
  sub_140AB4534((char *)&v48 + 4);
  v52[1] = v52;
  v52[0] = v52;
  SeCaptureSubjectContext(&SubjectContext);
  sub_140AB4550(v57);
  while ( 1 )
  {
    v41 = sub_140AB46D0();
    if ( !v41 )
      break;
    if ( v7 )
      sub_14071B6EC();
    else
      sub_140AB4370();
    v14 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_39:
      v15 = -1073741790;
      goto LABEL_40;
    }
    v15 = sub_1407C05F4(&v44, v14);
    if ( v15 < 0 )
      goto LABEL_40;
    if ( !v7 )
    {
      sub_14071F6D0(&v44);
      v9 = 1;
    }
    v15 = sub_140AB43C0(a1, 0LL);
    if ( v15 < 0 )
      goto LABEL_40;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v15 = sub_14067F480(a1, &v50);
      if ( v15 < 0 )
        goto LABEL_40;
      v15 = sub_140AB43C0(a1, v50);
      if ( v15 < 0 )
        goto LABEL_40;
    }
    if ( *((_BYTE *)KeGetCurrentThread() + 562) && (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 4112LL) & 0x20) != 0 )
      goto LABEL_39;
    if ( !*(_WORD *)(v14 + 66) || *(_BYTE *)(v14 + 65) || v7 )
    {
      v20 = v50;
      if ( *(_WORD *)(a1 + 4) )
      {
        sub_1406B5B10(*v53, &v46);
        LOBYTE(v22) = v21;
        v15 = sub_140918134((unsigned int)&v44, v20, v22, v46, 0);
        if ( v15 < 0 )
          goto LABEL_40;
      }
      if ( *(_WORD *)(v14 + 66) )
      {
        if ( !*(_BYTE *)(v14 + 65) )
        {
          LOBYTE(v11) = 1;
          v15 = sub_1409226E0(&v44, v11, 0LL);
          if ( v15 < 0 )
            goto LABEL_40;
          v15 = sub_1409224D4(&v44);
          if ( v15 < 0 )
            goto LABEL_40;
        }
      }
      if ( v20 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 160LL) & 2) != 0 )
        {
          v15 = -1072103423;
        }
        else
        {
          v30 = (_QWORD *)sub_14067EA18();
          v10 = v30;
          if ( v30 )
          {
            sub_1402A21B0(v30, v14);
            v15 = sub_1402A2204(v10, v20);
            if ( v15 >= 0 )
            {
              if ( (unsigned __int8)sub_14067E9B8(v14 + 248, v10, 0LL)
                && (unsigned __int8)sub_14067E9B8(v14 + 264, v10, 1LL) )
              {
LABEL_61:
                if ( !v42 )
                {
                  ExAcquirePushLockSharedEx(*(_QWORD *)(v14 + 32) + 72LL, 0LL);
                  v8 = 1;
                  ExAcquirePushLockExclusiveEx(*(_QWORD *)(v14 + 32) + 1784LL, 0LL);
                }
                v15 = sub_140677DC0(v14, (_DWORD)v53, v51, v55, a5, v54, v20, (__int64)v10, (__int64)&SubjectContext);
                v31 = v8;
                if ( v15 >= 0 )
                {
                  v15 = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    sub_140AB4484(*(_QWORD *)(v14 + 32));
                    v31 = 0;
                  }
                  if ( *(_WORD *)(v14 + 66) && !*(_BYTE *)(v14 + 65) )
                  {
                    LOBYTE(v12) = v8;
                    v32 = sub_14067E828(v14, &v48, v12);
                    *(_BYTE *)(v32 + 13) = *(_BYTE *)(v32 + 13) & 0xFC | 2;
                    v33 = *(_QWORD *)(v14 + 32);
                    if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
                      sub_1406BF450(v33, &v48);
                    else
                      sub_1407C97C0(v33, &v48);
                    *(_BYTE *)(v14 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    v34 = *(_QWORD *)(v14 + 32);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 72), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v34 + 72));
                    sub_1402AFC00(v34 + 72);
                    v20 = v50;
                    v15 = 0;
                    v8 = 0;
                  }
                  sub_140721878(&v44, v20, 10LL, v52, v36, v37, v38, v39, v40);
                }
                if ( v31 )
                  sub_140AB4484(*(_QWORD *)(v14 + 32));
                if ( v8 )
                {
                  v35 = *(_QWORD *)(v14 + 32);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v35 + 72));
                  sub_1402AFC00(v35 + 72);
                }
                if ( !v10 )
                  goto LABEL_40;
              }
              else
              {
                v15 = -1072103423;
              }
            }
            sub_14071C120((ULONG_PTR)v10);
            ExFreePoolWithTag(v10, 0x77554D43u);
          }
          else
          {
            v15 = -1073741670;
          }
        }
LABEL_40:
        v26 = 1;
        goto LABEL_41;
      }
      v23 = v14 + 248;
      if ( !*(_DWORD *)(v14 + 248) )
      {
        v23 = v14 + 264;
        if ( !*(_DWORD *)(v14 + 264) )
          goto LABEL_61;
      }
      v24 = 0;
      v15 = sub_14091ECE0(v23, &v43, &v49);
      if ( v15 < 0 )
        goto LABEL_40;
      if ( v9 )
      {
        sub_140721BAC(&v44);
        v9 = 0;
      }
      v25 = Privileges[1];
      if ( Privileges[1] )
        SeFreePrivileges(Privileges[1]);
      v44 = 0LL;
      WORD1(v44) = -1;
      *(_OWORD *)Privileges = 0LL;
      sub_140AB4260(v25, v11, v12, v13, v36, v37);
      v26 = 0;
      sub_140AB42A0();
      v15 = sub_14091BC64(v43, v49, v27, &v47);
      if ( v15 < 0 )
        goto LABEL_42;
      v7 = v42;
    }
    else
    {
      v7 = 1;
      v42 = 1;
      sub_140721BAC(&v44);
      v19 = Privileges[1];
      v9 = 0;
      if ( Privileges[1] )
        SeFreePrivileges(Privileges[1]);
      v44 = 0LL;
      WORD1(v44) = -1;
      *(_OWORD *)Privileges = 0LL;
      sub_140AB4260(v19, v16, v17, v18, v36, v37);
      sub_140AB42A0();
    }
  }
  v15 = -1073741431;
  v26 = 0;
LABEL_41:
  v24 = v41;
LABEL_42:
  if ( v9 )
    sub_140721BAC(&v44);
  v28 = Privileges[1];
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v26 )
    sub_140AB4260(v28, v11, v12, v13, v36, v37);
  if ( (_QWORD *)v52[0] != v52 )
    sub_140719010(v52);
  if ( v24 )
    sub_140AB42A0();
  sub_140AB4580(v57);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)v15;
}
