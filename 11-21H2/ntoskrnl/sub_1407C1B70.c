/*
 * XREFs of sub_1407C1B70 @ 0x1407C1B70
 * Callers:
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14053F084 @ 0x14053F084 (sub_14053F084.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_1406A4D98 @ 0x1406A4D98 (sub_1406A4D98.c)
 *     sub_1406B98FC @ 0x1406B98FC (sub_1406B98FC.c)
 *     sub_1406E137C @ 0x1406E137C (sub_1406E137C.c)
 *     sub_1406EB534 @ 0x1406EB534 (sub_1406EB534.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     sub_1407C2FB4 @ 0x1407C2FB4 (sub_1407C2FB4.c)
 *     sub_1407C300C @ 0x1407C300C (sub_1407C300C.c)
 *     sub_1407C8830 @ 0x1407C8830 (sub_1407C8830.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140915854 @ 0x140915854 (sub_140915854.c)
 *     sub_140916454 @ 0x140916454 (sub_140916454.c)
 *     sub_140916E20 @ 0x140916E20 (sub_140916E20.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1407C1B70(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  int v7; // r12d
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  struct _LOOKASIDE_LIST_EX *v27; // r9
  int v28; // r12d
  void *v29; // rbx
  unsigned int v30; // ecx
  SIZE_T v31; // r13
  PVOID v32; // rax
  int v33; // r11d
  char v34; // r12
  __int16 j; // dx
  __int64 v36; // rcx
  __int64 i; // r10
  __int64 v38; // r10
  int v39; // eax
  const void **v40; // rsi
  PVOID ProcessAuditId; // rcx
  unsigned int v42; // edx
  unsigned int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v51; // ebx
  __int64 v52; // rsi
  bool v53; // al
  unsigned int v54; // r8d
  unsigned int v55; // r8d
  int v56; // edx
  unsigned int v57; // edx
  int v58; // ecx
  unsigned int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rbx
  int v62; // r8d
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char v68; // [rsp+54h] [rbp-164h]
  unsigned int v69; // [rsp+58h] [rbp-160h] BYREF
  __int64 v70[2]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v71; // [rsp+70h] [rbp-148h] BYREF
  const void **v72; // [rsp+78h] [rbp-140h] BYREF
  const void **p_UnicodeString; // [rsp+80h] [rbp-138h]
  unsigned int *v74; // [rsp+88h] [rbp-130h] BYREF
  __int64 v75; // [rsp+90h] [rbp-128h]
  __int64 v76; // [rsp+98h] [rbp-120h]
  __int64 v77; // [rsp+A0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-110h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v80; // [rsp+D8h] [rbp-E0h]
  _LIST_ENTRY v81; // [rsp+E0h] [rbp-D8h] BYREF
  int v82; // [rsp+F0h] [rbp-C8h]
  __int64 v83; // [rsp+F8h] [rbp-C0h]
  __int64 v84; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v85; // [rsp+108h] [rbp-B0h] BYREF
  __int128 v86; // [rsp+110h] [rbp-A8h] BYREF
  __int128 v87; // [rsp+120h] [rbp-98h]
  __int128 v88; // [rsp+130h] [rbp-88h]
  _BYTE v89[48]; // [rsp+140h] [rbp-78h] BYREF

  v7 = a3;
  v9 = a1;
  v71 = a1;
  v76 = a1;
  v80 = a1;
  v70[1] = a2;
  v74 = a4;
  v70[0] = a6;
  p_UnicodeString = 0LL;
  v10 = 0LL;
  v77 = 0LL;
  UnicodeString = 0LL;
  memset(v89, 0, sizeof(v89));
  v81 = 0LL;
  InitializeListHead(&v81);
  sub_140AB4550(v89);
  sub_140AB4370(v12, v11, v13);
  v14 = *(_QWORD *)(v9 + 8);
  v72 = (const void **)v14;
  if ( *(_WORD *)(v14 + 66) )
  {
    v17 = sub_140226200(v9, v7, a4, a5, (unsigned int *)v70[0]);
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v9 + 56) || *(_QWORD *)(v9 + 64) )
  {
    sub_140AB42D0(v14);
    if ( (unsigned __int8)sub_140AB45A0(v9, 0LL) )
    {
      v17 = -1073740763;
      if ( (*(_DWORD *)(v9 + 48) & 1) == 0 )
        v17 = -1073741444;
      sub_140AB4300(v14);
      goto LABEL_3;
    }
    sub_140AB4300(v14);
    v17 = sub_14067F480((_QWORD *)v9, &v77);
    if ( v17 < 0 )
    {
LABEL_3:
      sub_140AB4260(v16, v15, v18, v19);
      sub_140AB4580(v89);
      return (unsigned int)v17;
    }
    v10 = v77;
  }
  if ( a2 )
  {
    v14 = *(_QWORD *)(a2 + 8);
    v72 = (const void **)v14;
    sub_1407C300C(*(_QWORD *)(a2 + 8), *(_QWORD *)(v9 + 8));
  }
  else
  {
    sub_140AB42D0(*(_QWORD *)(v9 + 8));
  }
  if ( v7 == 3 )
  {
    v21 = *(_QWORD *)(v9 + 8);
    if ( (unsigned __int8)sub_140AB45A0(v9, v10) )
    {
      if ( (*(_DWORD *)(v9 + 48) & 1) != 0 )
      {
        v17 = -1073740763;
        goto LABEL_146;
      }
      v25 = -1073741444;
    }
    else
    {
      v25 = 0;
    }
    v69 = v25;
    if ( !*(_QWORD *)(v21 + 80) )
    {
      v17 = -1073741670;
      goto LABEL_146;
    }
    if ( byte_140C097BD && (*(_DWORD *)(v21 + 184) & 0x1000000) != 0 )
    {
      v17 = -1073741670;
      if ( (int)sub_140916454(v21, &UnicodeString) >= 0 )
        p_UnicodeString = (const void **)&UnicodeString;
LABEL_64:
      if ( !p_UnicodeString )
        goto LABEL_146;
      v42 = *(unsigned __int16 *)p_UnicodeString;
      *(_DWORD *)v70[0] = v42 + 4;
      if ( a5 >= 4 )
      {
        *a4 = v42;
        v43 = a5 - 4;
        v17 = v69;
        if ( a5 - 4 < v42 )
          v17 = -2147483643;
        if ( v43 >= v42 )
          v43 = v42;
        memmove(a4 + 1, p_UnicodeString[1], v43);
      }
      else
      {
        v17 = -1073741789;
      }
      goto LABEL_106;
    }
    v75 = 0LL;
    v82 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    WORD1(SubjectContext.ClientToken) = -1;
    v72 = 0LL;
    v68 = sub_140AB46D0(v23, v22, v24);
    v28 = *(__int16 *)(v21 + 66);
    v29 = 0LL;
    v30 = 0;
    if ( v28 >= 2 )
      v30 = v28 - 1;
    if ( v30 )
    {
      v31 = 8LL * v30;
      v32 = Allocate(PagedPool, v31, 0x35364D43u, v27);
      v29 = v32;
      if ( !v32 )
      {
        v17 = -1073741670;
        v33 = -1073741670;
LABEL_34:
        if ( v33 < 0 )
          goto LABEL_57;
        v26 = *(unsigned __int16 *)(v21 + 66);
        WORD1(SubjectContext.ClientToken) = v26;
        if ( (_WORD)v26 )
        {
          for ( i = *(_QWORD *)(v21 + 192); i; i = *(_QWORD *)(v38 + 24) )
          {
            sub_1406B98FC((__int64)&SubjectContext, v26, *(_QWORD *)(i + 16));
            LOWORD(v26) = v26 - 1;
          }
        }
        else
        {
          *(_QWORD *)&SubjectContext.ImpersonationLevel = v21;
        }
        if ( v33 < 0 )
        {
LABEL_57:
          v34 = v68;
        }
        else
        {
          v34 = v68;
          if ( v68 )
          {
            v83 = 0LL;
            for ( j = WORD1(SubjectContext.ClientToken); j >= 0; --j )
            {
              v36 = j < 2
                  ? *((_QWORD *)&SubjectContext.ImpersonationLevel + j)
                  : *((_QWORD *)SubjectContext.ProcessAuditId + j - 2);
              if ( *(_WORD *)(v36 + 66) && *(_BYTE *)(v36 + 65) == 1 )
                break;
              if ( *(_DWORD *)(v36 + 40) != -1 )
              {
                if ( *(_DWORD *)(v21 + 40) != -1 || (*(_DWORD *)(v21 + 184) & 0x40000) == 0 )
                {
                  v39 = sub_1407C8830(&SubjectContext, &v72);
                  goto LABEL_55;
                }
                break;
              }
            }
          }
          v39 = sub_1406E137C(v21, &v72);
LABEL_55:
          if ( v39 >= 0 )
          {
            v40 = v72;
            v75 = (__int64)v72;
            v72 = 0LL;
LABEL_59:
            ProcessAuditId = SubjectContext.ProcessAuditId;
            if ( SubjectContext.ProcessAuditId )
              SeFreePrivileges((PPRIVILEGE_SET)SubjectContext.ProcessAuditId);
            if ( v34 )
              sub_140AB42A0(ProcessAuditId, v26);
            p_UnicodeString = v40;
            v9 = v71;
            goto LABEL_64;
          }
        }
        v40 = (const void **)v75;
        goto LABEL_59;
      }
      memset(v32, 0, v31);
    }
    WORD1(SubjectContext.ClientToken) = -1;
    LOWORD(SubjectContext.ClientToken) = v28;
    SubjectContext.ProcessAuditId = v29;
    v33 = 0;
    v17 = -1073741670;
    goto LABEL_34;
  }
  if ( (!a2 || !(unsigned __int8)sub_140AB45A0(a2, v10)) && !(unsigned __int8)sub_140AB45A0(v9, v10) )
  {
    switch ( v7 )
    {
      case 5:
        *(_DWORD *)v70[0] = 12;
        if ( a5 >= 0xC )
        {
          *a4 = sub_1406EB534(v14, v10, v44, v45);
          a4[1] = 0;
          v47 = 0;
          if ( *(int *)(v14 + 40) < 0 )
          {
            v47 = 1;
            a4[1] = 1;
          }
          v48 = *(_DWORD *)(v14 + 184);
          if ( (v48 & 0x100000) != 0 )
          {
            a4[1] = v47 | 2;
            v48 = *(_DWORD *)(v14 + 184);
          }
          a4[2] = (unsigned __int8)v48 >> 4;
          v17 = 0;
        }
        else
        {
          v17 = -1073741789;
        }
        break;
      case 6:
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        CurrentThread = KeGetCurrentThread();
        CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
        SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
        v51 = 4;
        *(_DWORD *)v70[0] = 4;
        if ( a5 >= 4 )
        {
          v52 = (__int64)v72;
          v53 = sub_14053F084((__int64)v72);
          v54 = v53 | *a4 & 0xFFFFFFFE;
          *a4 = v54;
          v55 = v54 & 0xFFFFFFFD;
          *a4 = v55;
          v56 = v55;
          if ( v53 && (*(_DWORD *)(v52 + 184) & 0x20) == 0 )
          {
            v56 = v55 | 2;
            *a4 = v55 | 2;
          }
          if ( !byte_140C097BD || (*(_DWORD *)(v52 + 184) & 0x1000000) == 0 )
            v51 = 0;
          v57 = v51 | v56 & 0xFFFFFFFB;
          *a4 = v57;
          v58 = v57 ^ ((unsigned __int8)v57 ^ (unsigned __int8)(*(_DWORD *)(v52 + 184) >> 22)) & 8;
          *a4 = v58;
          *a4 = v58 ^ ((unsigned __int8)v58 ^ (unsigned __int8)(*(_DWORD *)(v52 + 184) >> 19)) & 0x10;
          v17 = 0;
        }
        else
        {
          v17 = -1073741789;
        }
        SeReleaseSubjectContext(&SubjectContext);
        break;
      case 8:
        *(_DWORD *)v70[0] = 4;
        if ( a5 < 4 )
        {
          v17 = -1073741789;
          goto LABEL_146;
        }
        v59 = *a4;
        if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 4112LL) & 1) != 0 )
          *a4 = v59 & 0xFFFFFFFE;
        else
          *a4 = v59 | 1;
        v17 = 0;
LABEL_108:
        if ( a2 )
        {
          if ( ((v7 - 3) & 0xFFFFFFFC) != 0 || v7 == 4 )
          {
            v60 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL);
            if ( *(_QWORD *)(*(_QWORD *)(v9 + 8) + 168LL) < v60 )
              *(_QWORD *)a4 = v60;
          }
          if ( ((v7 - 2) & 0xFFFFFFFD) == 0 )
          {
            LODWORD(v71) = 0;
            v84 = 0LL;
            LODWORD(v74) = 0;
            v86 = 0LL;
            v87 = 0LL;
            v88 = 0LL;
            v61 = v77;
            if ( (unsigned int)sub_140916E20(
                                 *(_QWORD *)(a2 + 8),
                                 *(_QWORD *)(v9 + 8),
                                 -1,
                                 v77,
                                 (__int64)&v81,
                                 (__int64)&v84,
                                 (__int64)&v74,
                                 0LL,
                                 (__int64)&v71) == -2147483622 )
            {
              if ( v7 == 2 )
                a4[5] = v71;
              else
                a4[3] = v71;
            }
            LOBYTE(v62) = 1;
            if ( (unsigned int)sub_140915854(v9, a2, v62, -1, 0, 0LL, 0, 0LL, (__int64)&v71) == -2147483622 )
            {
              if ( v7 == 2 )
                a4[8] = v71;
              else
                a4[5] = v71;
            }
            v17 = sub_1406A4D98(*(_QWORD *)(v9 + 8), v7, (int)&v86, 48, v70[0], v61);
            if ( (int)(v17 + 0x80000000) < 0 || v17 == -2147483643 )
            {
              if ( v7 == 2 )
              {
                if ( DWORD2(v87) > a4[6] )
                  a4[6] = DWORD2(v87);
                if ( DWORD1(v88) > a4[9] )
                  a4[9] = DWORD1(v88);
                if ( DWORD2(v88) > a4[10] )
                  a4[10] = DWORD2(v88);
              }
              else
              {
                if ( (unsigned int)v87 > a4[4] )
                  a4[4] = v87;
                if ( DWORD2(v87) > a4[6] )
                  a4[6] = DWORD2(v87);
                if ( HIDWORD(v87) > a4[7] )
                  a4[7] = HIDWORD(v87);
              }
            }
          }
        }
        else if ( byte_140C097BD )
        {
          v63 = *(_QWORD *)(v9 + 8);
          if ( (*(_DWORD *)(v63 + 184) & 0x1000000) != 0 && ((v7 - 2) & 0xFFFFFFFD) == 0 )
          {
            v69 = 0;
            v85 = 0LL;
            LODWORD(v70[0]) = 0;
            v17 = sub_140916E20(v63, 0, -1, v77, (__int64)&v81, (__int64)&v85, (__int64)v70, 0LL, (__int64)&v69);
            if ( v17 == -2147483622 )
            {
              if ( v7 == 2 )
                a4[5] = v69;
              else
                a4[3] = v69;
              v17 = 0;
            }
          }
        }
        goto LABEL_146;
      default:
        v17 = sub_1406A4D98(v14, v7, (int)a4, a5, v70[0], v10);
        break;
    }
LABEL_106:
    if ( v17 < 0 )
      goto LABEL_146;
    v7 = a3;
    goto LABEL_108;
  }
  v46 = -1073741444;
  if ( (*(_BYTE *)(v9 + 48) & 1) != 0 )
    v46 = -1073740763;
  v17 = v46;
LABEL_146:
  if ( a2 )
    sub_1407C2FB4(*(_QWORD *)(a2 + 8), *(_QWORD *)(v80 + 8));
  else
    sub_140AB4300(*(_QWORD *)(v80 + 8));
  sub_140346C60(&v81);
  sub_140AB4260(v65, v64, v66, v67);
  sub_140AB4580(v89);
  if ( UnicodeString.Buffer )
  {
    RtlFreeUnicodeString(&UnicodeString);
    return (unsigned int)v17;
  }
  else
  {
    if ( !p_UnicodeString )
      return (unsigned int)v17;
    sub_140346D64(p_UnicodeString, 0x624E4D43u);
    return (unsigned int)v17;
  }
}
