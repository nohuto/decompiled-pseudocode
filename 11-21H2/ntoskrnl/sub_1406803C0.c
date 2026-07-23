/*
 * XREFs of sub_1406803C0 @ 0x1406803C0
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_140208BE0 @ 0x140208BE0 (sub_140208BE0.c)
 *     sub_140208C24 @ 0x140208C24 (sub_140208C24.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140681130 @ 0x140681130 (sub_140681130.c)
 *     sub_140681174 @ 0x140681174 (sub_140681174.c)
 *     sub_1406811B0 @ 0x1406811B0 (sub_1406811B0.c)
 *     sub_1406815C0 @ 0x1406815C0 (sub_1406815C0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140717780 @ 0x140717780 (sub_140717780.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_14071C050 @ 0x14071C050 (sub_14071C050.c)
 *     sub_14071EE7C @ 0x14071EE7C (sub_14071EE7C.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_1407221B0 @ 0x1407221B0 (sub_1407221B0.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 */

__int64 __fastcall sub_1406803C0(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9,
        __int64 *a10)
{
  unsigned int v11; // edi
  unsigned int v12; // r12d
  int v13; // eax
  char v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  char v17; // al
  signed __int64 v18; // rcx
  __int16 i; // bx
  __int64 v20; // rcx
  unsigned int v21; // esi
  char v22; // r13
  unsigned int j; // ecx
  unsigned __int16 *v24; // rax
  ULONG_PTR v25; // rsi
  __int64 v26; // r15
  wchar_t *v27; // r15
  int v28; // edi
  unsigned __int16 v29; // r10
  unsigned __int64 v30; // rcx
  __int16 v31; // r10
  unsigned __int64 v32; // r8
  unsigned __int16 v33; // ax
  char *v34; // rdx
  unsigned __int64 v35; // rcx
  signed __int64 v36; // r9
  unsigned __int64 v37; // r8
  char v38; // r14
  unsigned __int16 *v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r11
  unsigned __int16 v43; // ax
  _WORD *v44; // rcx
  unsigned __int64 v45; // r8
  __int16 v46; // r9
  unsigned __int64 v47; // rdx
  char *v48; // r10
  UNICODE_STRING *v49; // rbx
  void *v50; // rcx
  ULONG_PTR v51; // rbx
  ULONG_PTR *v52; // rax
  __int16 v53; // si
  unsigned int v54; // edi
  __int64 v55; // r14
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rbx
  ULONG_PTR v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r14d
  __int64 v64; // rdx
  unsigned int v65; // edi
  __int64 v66; // rsi
  unsigned __int16 *v67; // rax
  int v68; // edx
  wchar_t *Buffer; // rbx
  bool v70; // zf
  wchar_t *v71; // r15
  unsigned __int16 Length; // di
  UNICODE_STRING v73; // xmm6
  __int16 v74; // r8
  wchar_t *v75; // rax
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v77; // cx
  __int16 v78; // bx
  ULONG_PTR v79; // rsi
  int v80; // ebx
  __int64 v81; // r13
  __int64 v82; // rbx
  ULONG_PTR v83; // rcx
  int v84; // ebx
  __int64 v85; // rcx
  ULONG_PTR v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rsi
  unsigned __int16 *v90; // rax
  UNICODE_STRING *v91; // rbx
  void *v92; // rcx
  _SLIST_ENTRY *v93; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v95; // rcx
  char v97; // [rsp+40h] [rbp-C0h]
  _BYTE BugCheckParameter2[15]; // [rsp+41h] [rbp-BFh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v100[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD BugCheckParameter3[3]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v102; // [rsp+70h] [rbp-90h]
  __int64 v103; // [rsp+78h] [rbp-88h] BYREF
  __int64 v104; // [rsp+80h] [rbp-80h] BYREF
  __int64 v105; // [rsp+88h] [rbp-78h]
  __int16 v106; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  __int64 v108; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v109; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING v110; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v111; // [rsp+C0h] [rbp-40h]
  __int64 v112; // [rsp+C8h] [rbp-38h]
  __int128 v113; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v114; // [rsp+E0h] [rbp-20h]
  __int128 v115; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v116; // [rsp+F8h] [rbp-8h]
  ULONG_PTR *v117; // [rsp+100h] [rbp+0h]
  __int64 *v118; // [rsp+108h] [rbp+8h]
  __int64 v119; // [rsp+110h] [rbp+10h]
  __int128 v120; // [rsp+118h] [rbp+18h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+128h] [rbp+28h]
  PSLIST_ENTRY v122[22]; // [rsp+140h] [rbp+40h] BYREF

  v119 = a7;
  v116 = a8;
  v117 = a9;
  v11 = a3;
  v111 = a2;
  v112 = a1;
  v118 = a10;
  v12 = a4;
  v106 = a3;
  DestinationString = 0LL;
  v103 = 0LL;
  v113 = 0LL;
  v104 = 0LL;
  v108 = 0LL;
  v100[0] = 0;
  v115 = 0LL;
  LOWORD(BugCheckParameter3[0]) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v97 = 1;
  BugCheckParameter2[0] = 0;
  *(_QWORD *)&BugCheckParameter2[7] = 0LL;
  sub_1407C97FC(&v103);
  v105 = 0LL;
  *(_DWORD *)&BugCheckParameter2[3] = -1;
  *(_QWORD *)&BugCheckParameter3[1] = 0LL;
  sub_1407C97FC(&v104);
  P = 0LL;
  *(_WORD *)&BugCheckParameter2[1] = 0;
  v102 = 0;
  sub_1407C97FC(&v108);
  memset(v122, 0, 0xA8uLL);
  v120 = 0LL;
  WORD1(v120) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( a5 || (LOWORD(v13) = *(_WORD *)(a1 + 2), (_WORD)v13) )
  {
    v13 = *(__int16 *)(a1 + 2);
    v14 = 0;
    if ( v13 >= 2 )
    {
      _mm_lfence();
      v109 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * *(__int16 *)(a1 + 2) - 16);
LABEL_68:
      if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
      {
        sub_140AB4550(a6 + 168);
        *(_DWORD *)(a6 + 160) |= 1u;
      }
      v53 = *(_WORD *)(a1 + 2);
      v114 = 0LL;
      if ( v53 < 0 )
      {
LABEL_174:
        v25 = *(_QWORD *)&BugCheckParameter3[1];
        v26 = v105;
        goto LABEL_175;
      }
      v54 = *(_DWORD *)&BugCheckParameter2[3];
      v55 = v112;
      while ( 1 )
      {
        v56 = sub_140721CE0(v55, (unsigned __int16)v53);
        v58 = v56;
        if ( !v57 && (*(_DWORD *)(v56 + 40) != -1 || (*(_DWORD *)(*(_QWORD *)(v56 + 32) + 4112LL) & 0x2000) == 0) )
          v114 = v56;
        if ( *(_WORD *)(v56 + 66) && *(_BYTE *)(v56 + 65) == 1 )
          goto LABEL_174;
        if ( *(_DWORD *)(v56 + 40) != -1 )
        {
          if ( !(unsigned __int8)sub_140721FD0(*(_QWORD *)(v56 + 288), a5, v57) )
          {
            v59 = *(_QWORD *)(v58 + 32);
            if ( (*(_BYTE *)(v59 + 140) & 1) != 0 )
              sub_1406BF400(v59, *(unsigned int *)(v58 + 40));
            else
              sub_1407C9820(v59);
            v60 = sub_1407221B0(*(_QWORD *)(v58 + 32), 0LL, (__int64)&BugCheckParameter2[3]);
            v61 = *(_QWORD *)(v58 + 32);
            v28 = v60;
            if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
              sub_1406BF450(v61, &v103);
            else
              sub_1407C97C0(v61, &v103);
            goto LABEL_89;
          }
          if ( *(_DWORD *)(v58 + 280) )
          {
            v28 = sub_1407221B0(*(_QWORD *)(v58 + 32), 0LL, (__int64)&BugCheckParameter2[3]);
LABEL_89:
            if ( v28 >= 0 )
            {
              v25 = *(_QWORD *)(v58 + 32);
              v54 = *(_DWORD *)&BugCheckParameter2[3];
              *(_QWORD *)&BugCheckParameter3[1] = v25;
              goto LABEL_96;
            }
            if ( v28 != -1073741772 )
              goto LABEL_67;
            v54 = *(_DWORD *)&BugCheckParameter2[3];
            goto LABEL_92;
          }
          v54 = -1;
          *(_DWORD *)&BugCheckParameter2[3] = -1;
        }
LABEL_92:
        if ( --v53 < 0 )
        {
          v25 = *(_QWORD *)&BugCheckParameter3[1];
LABEL_96:
          if ( v54 == -1 )
            goto LABEL_174;
          if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
            v62 = sub_1406BF400(v25, v54);
          else
            v62 = sub_1407C9820(v25);
          v26 = v62;
          if ( (*(_BYTE *)(v62 + 16) & 2) == 0 && *(_DWORD *)(v62 + 12) == 6 )
          {
            if ( !(unsigned __int8)sub_1407C46A0(v25, (__int64)&P, (__int64)&BugCheckParameter2[1], (__int64)&v108) )
            {
              v28 = -1073741670;
              goto LABEL_176;
            }
            if ( v102 <= 0xFFFF && (v102 & 1) == 0 )
            {
              v63 = v106;
              v64 = (unsigned int)v106;
              *((_QWORD *)&v113 + 1) = P;
              LOWORD(v113) = v102;
              WORD1(v113) = v102;
              v65 = (unsigned __int16)v102;
              if ( v106 < v12 )
              {
                v66 = v111;
                do
                {
                  v67 = (unsigned __int16 *)sub_140681174(v66, v64);
                  v64 = (unsigned int)(v68 + 1);
                  v65 += *v67 + 2;
                }
                while ( (unsigned int)v64 < v12 );
                v25 = *(_QWORD *)&BugCheckParameter3[1];
              }
              if ( v65 <= 0xFFFF )
              {
                DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v65, 0x36364D43u);
                Buffer = DestinationString.Buffer;
                if ( !DestinationString.Buffer )
                {
                  v28 = -1073741670;
                  goto LABEL_178;
                }
                DestinationString.Length = 0;
                DestinationString.MaximumLength = v65;
                sub_140208AD8(&DestinationString, (unsigned __int16 *)&v113);
                if ( BugCheckParameter2[1] )
                {
                  ExFreePoolWithTag(P, 0);
                }
                else if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
                {
                  sub_1406BF450(v25, &v108);
                }
                else
                {
                  sub_1407C97C0(v25, &v108);
                }
                v70 = (*(_BYTE *)(v25 + 140) & 1) == 0;
                P = 0LL;
                if ( v70 )
                  sub_1407C97C0(v25, &v104);
                else
                  sub_1406BF450(v25, &v104);
                v105 = 0LL;
                sub_140721BAC(v112);
                v71 = DestinationString.Buffer;
                Length = DestinationString.Length;
                v73 = DestinationString;
                v97 = 0;
                if ( !v14 )
                  goto LABEL_161;
                v110 = DestinationString;
                v74 = 0;
                *((_QWORD *)&v115 + 1) = DestinationString.Buffer;
                LOWORD(v115) = 0;
                WORD1(v115) = DestinationString.MaximumLength;
                if ( DestinationString.Length )
                {
                  v75 = v110.Buffer;
                  MaximumLength = v110.MaximumLength;
                  v77 = v110.Length;
                  while ( *v75 == 92 )
                  {
                    ++v75;
                    v77 -= 2;
                    MaximumLength -= 2;
                    v110.Buffer = v75;
                    v74 += 2;
                    v110.Length = v77;
                    v110.MaximumLength = MaximumLength;
                    LOWORD(v115) = v74;
                    if ( !v77 )
                      goto LABEL_134;
                  }
                  if ( v77 )
                  {
                    while ( *v75 != 92 )
                    {
                      ++v75;
                      v77 -= 2;
                      MaximumLength -= 2;
                      v110.Buffer = v75;
                      v74 += 2;
                      v110.Length = v77;
                      v110.MaximumLength = MaximumLength;
                      LOWORD(v115) = v74;
                      if ( !v77 )
                        goto LABEL_134;
                    }
                    do
                    {
                      if ( *v75 != 92 )
                        break;
                      ++v75;
                      MaximumLength -= 2;
                      v77 -= 2;
                    }
                    while ( v77 );
                    v110.Buffer = v75;
                    v110.Length = v77;
                    v110.MaximumLength = MaximumLength;
                  }
                }
LABEL_134:
                if ( (unsigned int)sub_140717780(&v115, &stru_140D3CE98, 2LL)
                  || (int)sub_1406811B0(&v110, v100, v122) < 0
                  || (v78 = v100[0], (int)sub_140681130((unsigned int)v100[0], v122) < 0)
                  || (v79 = 0LL,
                      (int)sub_1407350A0(
                             *((_QWORD *)qword_140D3CB10 + 1),
                             0LL,
                             (__int64)&BugCheckParameter2[7],
                             (__int64)BugCheckParameter2,
                             (__int64)BugCheckParameter3) < 0) )
                {
LABEL_161:
                  v79 = *(_QWORD *)&BugCheckParameter2[7];
LABEL_162:
                  *(_QWORD *)&BugCheckParameter2[7] = v79;
                }
                else
                {
                  if ( LOWORD(BugCheckParameter3[0]) != v78 )
                  {
                    sub_14071BF40(*(ULONG_PTR *)&BugCheckParameter2[7]);
                    goto LABEL_162;
                  }
                  v79 = *(_QWORD *)&BugCheckParameter2[7];
                  if ( (int)sub_1407C05F4(&v120, *(_QWORD *)&BugCheckParameter2[7]) >= 0 )
                  {
                    sub_140721B68(&v120);
                    v80 = sub_1406815C0(v79, 0LL);
                    sub_140721BAC(&v120);
                    if ( v80 >= 0 )
                    {
                      if ( BugCheckParameter2[0] )
                      {
                        sub_14071C050(v79);
                        BugCheckParameter2[0] = 0;
                      }
                      v81 = v112;
                      sub_14071F6D0(v112);
                      v97 = 1;
                      if ( !(unsigned __int8)sub_140720F74(v81, 0LL) )
                      {
                        v82 = v109;
                        v83 = *(_QWORD *)(v109 + 32);
                        if ( (*(_BYTE *)(v83 + 140) & 1) != 0 )
                          sub_1406BF400(v83, *(unsigned int *)(v109 + 40));
                        else
                          sub_1407C9820(v83);
                        v84 = sub_1407221B0(*(_QWORD *)(v82 + 32), 0LL, (__int64)&BugCheckParameter2[3]);
                        v85 = *(_QWORD *)(v109 + 32);
                        if ( (*(_BYTE *)(v85 + 140) & 1) != 0 )
                          sub_1406BF450(v85, &v103);
                        else
                          sub_1407C97C0(v85, &v103);
                        if ( v84 >= 0 )
                        {
                          v86 = *(_QWORD *)(v109 + 32);
                          *(_QWORD *)&BugCheckParameter3[1] = v86;
                          v87 = (*(_BYTE *)(v86 + 140) & 1) != 0
                              ? sub_1406BF400(v86, *(unsigned int *)&BugCheckParameter2[3])
                              : sub_1407C9820(v86);
                          v70 = *(_DWORD *)(v87 + 12) == 6;
                          v105 = v87;
                          if ( v70 )
                          {
                            if ( (unsigned __int8)sub_1407C46A0(
                                                    *(ULONG_PTR *)&BugCheckParameter3[1],
                                                    (__int64)&P,
                                                    (__int64)&BugCheckParameter2[1],
                                                    (__int64)&v108) )
                            {
                              if ( v102 <= 0xFFFF && (v102 & 1) == 0 )
                              {
                                LOWORD(v113) = v102;
                                WORD1(v113) = v102;
                                *((_QWORD *)&v113 + 1) = P;
                                if ( !(unsigned int)sub_140717780(&DestinationString, &v113, 0LL) )
                                {
                                  v88 = v109;
                                  sub_14071EE7C(v109, v119);
                                  *(_QWORD *)(v88 + 104) = v79;
                                  sub_14071BC64(v79);
                                  *(_WORD *)(v88 + 8) |= 8u;
                                  sub_140721BAC(v81);
                                  v97 = 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if ( v63 < v12 )
                {
                  v89 = v111;
                  while ( 1 )
                  {
                    v90 = (unsigned __int16 *)sub_140681174(v89, v63);
                    DestinationString.Length = Length + 2;
                    v71[(unsigned __int64)Length >> 1] = 92;
                    sub_140208C24(&DestinationString, v90);
                    if ( ++v63 >= v12 )
                      break;
                    v71 = DestinationString.Buffer;
                    Length = DestinationString.Length;
                  }
                  v73 = DestinationString;
                  v79 = *(_QWORD *)&BugCheckParameter2[7];
                }
                v91 = (UNICODE_STRING *)v116;
                v92 = *(void **)(v116 + 8);
                if ( v92 )
                {
                  ExFreePoolWithTag(v92, 0);
                  v28 = 0;
                  v91->Buffer = 0LL;
                }
                else
                {
                  v28 = 0;
                }
                if ( BugCheckParameter2[0] )
                  sub_14071C050(v79);
                *(_QWORD *)&BugCheckParameter2[7] = 0LL;
                *v117 = v79;
                *v91 = v73;
                RtlInitUnicodeString(&DestinationString, 0LL);
                v25 = *(_QWORD *)&BugCheckParameter3[1];
                v26 = v105;
                *v118 = v114;
                goto LABEL_176;
              }
            }
          }
LABEL_175:
          v28 = -1073741772;
LABEL_176:
          Buffer = DestinationString.Buffer;
          if ( DestinationString.Buffer )
            ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_178:
          if ( P )
          {
            if ( BugCheckParameter2[1] )
            {
              ExFreePoolWithTag(P, 0);
            }
            else if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
            {
              sub_1406BF450(v25, &v108);
            }
            else
            {
              sub_1407C97C0(v25, &v108);
            }
          }
          if ( v26 )
          {
            if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
              sub_1406BF450(v25, &v104);
            else
              sub_1407C97C0(v25, &v104);
          }
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          if ( v97 )
            sub_140721BAC(v112);
          v22 = BugCheckParameter2[2];
          goto LABEL_193;
        }
      }
    }
  }
  else
  {
    v14 = 1;
  }
  _mm_lfence();
  v15 = *(_QWORD *)(a1 + 8LL * (__int16)v13 + 8);
  v109 = v15;
  if ( !v14 || (*(_DWORD *)(v15 + 8) & 8) == 0 )
    goto LABEL_68;
  *(_QWORD *)&BugCheckParameter2[7] = *(_QWORD *)(v15 + 104);
  v16 = *(_QWORD *)(*(_QWORD *)&BugCheckParameter2[7] + 296LL);
  v17 = v16 & 1;
  if ( (v16 & 1) != 0 )
    v16 &= ~1uLL;
  if ( !v16 || v17 )
    goto LABEL_68;
  v18 = _InterlockedIncrement64(*(volatile signed __int64 **)&BugCheckParameter2[7]);
  if ( !v18 )
    KeBugCheckEx(0x51u, 0x24uLL, *(ULONG_PTR *)&BugCheckParameter2[7], 0LL, 0LL);
  if ( v18 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i < 2 )
      v20 = *(_QWORD *)(a1 + 8LL * i + 8);
    else
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    sub_140AB4300(v20);
  }
  v97 = 0;
  sub_140AB42D0(*(_QWORD *)&BugCheckParameter2[7]);
  v21 = *(unsigned __int16 *)v16;
  v22 = 1;
  BugCheckParameter2[2] = 1;
  for ( j = v11; j < v12; ++j )
  {
    if ( j >= 8 )
      v24 = (unsigned __int16 *)(*(_QWORD *)(v111 + 160) + 16 * (j - 8 + 6LL));
    else
      v24 = (unsigned __int16 *)(v111 + 16 * (j + 2LL));
    v21 += *v24 + 2;
  }
  if ( v21 > 0xFFFF )
  {
    v25 = *(_QWORD *)&BugCheckParameter3[1];
    v26 = *(_QWORD *)&BugCheckParameter3[1];
    goto LABEL_175;
  }
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v21, 0x36364D43u);
  v27 = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    DestinationString.MaximumLength = v21;
    DestinationString.Length = 0;
    if ( (int)sub_140208BE0(&DestinationString.Length) >= 0 )
    {
      v30 = *(unsigned __int16 *)v16;
      v31 = 0;
      v32 = (unsigned __int64)(unsigned __int16)v21 >> 1;
      if ( (v30 & 1) == 0 )
      {
        v33 = *(_WORD *)(v16 + 2);
        if ( (v33 & 1) == 0 && (unsigned __int16)v30 <= v33 && v33 != 0xFFFF )
        {
          v34 = *(char **)(v16 + 8);
          if ( v34 || !(_WORD)v30 && !v33 )
          {
            v35 = v30 >> 1;
            if ( v32 )
            {
              v36 = (char *)v27 - v34;
              v37 = v32 - v35;
              do
              {
                if ( !v35 )
                  break;
                --v35;
                *(_WORD *)&v34[v36] = *(_WORD *)v34;
                ++v31;
                v34 += 2;
              }
              while ( v35 + v37 );
            }
          }
        }
      }
      v29 = 2 * v31;
      DestinationString.Length = v29;
    }
    if ( v11 < v12 )
    {
      v38 = DestinationString.MaximumLength;
      do
      {
        if ( v11 >= 8 )
          v39 = (unsigned __int16 *)(*(_QWORD *)(v111 + 160) + 16 * (v11 - 8 + 6LL));
        else
          v39 = (unsigned __int16 *)(v111 + 16 * (v11 + 2LL));
        v40 = v29;
        v29 += 2;
        DestinationString.Length = v29;
        v27[v40 >> 1] = 92;
        if ( (v29 & 1) == 0 && (v38 & 1) == 0 && v29 <= (unsigned __int16)v21 && (_WORD)v21 != 0xFFFF )
        {
          v41 = *v39;
          v42 = (unsigned __int64)v29 >> 1;
          if ( (v41 & 1) == 0 )
          {
            v43 = v39[1];
            if ( (v43 & 1) == 0 && (unsigned __int16)v41 <= v43 && v43 != 0xFFFF )
            {
              v44 = (_WORD *)*((_QWORD *)v39 + 1);
              if ( v44 || !(_WORD)v41 && !v43 )
              {
                v45 = v41 >> 1;
                v46 = 0;
                v47 = ((unsigned __int64)(unsigned __int16)v21 >> 1) - v42;
                if ( v47 )
                {
                  v48 = (char *)v27 + 2 * v42 - (_QWORD)v44;
                  do
                  {
                    if ( !v45 )
                      break;
                    --v45;
                    *(_WORD *)&v48[(_QWORD)v44] = *v44;
                    ++v46;
                    ++v44;
                    --v47;
                  }
                  while ( v47 );
                }
                v29 = 2 * (v46 + v42);
                DestinationString.Length = v29;
              }
            }
          }
        }
        ++v11;
      }
      while ( v11 < v12 );
    }
    v49 = (UNICODE_STRING *)v116;
    v50 = *(void **)(v116 + 8);
    if ( v50 )
      ExFreePoolWithTag(v50, 0);
    *v49 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v51 = *(_QWORD *)&BugCheckParameter2[7];
    sub_140AB4300(*(_QWORD *)&BugCheckParameter2[7]);
    v28 = 0;
    BugCheckParameter2[2] = 0;
    v52 = v117;
    *v118 = v109;
    *(_QWORD *)&BugCheckParameter2[7] = 0LL;
    *v52 = v51;
LABEL_67:
    v25 = *(_QWORD *)&BugCheckParameter3[1];
    v26 = *(_QWORD *)&BugCheckParameter3[1];
    goto LABEL_176;
  }
  v28 = -1073741670;
LABEL_193:
  if ( *(_QWORD *)&BugCheckParameter2[7] )
  {
    if ( v22 )
      sub_140AB4300(*(_QWORD *)&BugCheckParameter2[7]);
    sub_14071BF40(*(ULONG_PTR *)&BugCheckParameter2[7]);
  }
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  v93 = v122[20];
  if ( v122[20] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v95 = *((_QWORD *)CurrentPrcb + 272);
    ++*(_DWORD *)(v95 + 28);
    if ( *(_WORD *)v95 < *(_WORD *)(v95 + 16)
      || (++*(_DWORD *)(v95 + 32),
          v95 = *((_QWORD *)CurrentPrcb + 273),
          ++*(_DWORD *)(v95 + 28),
          *(_WORD *)v95 < *(_WORD *)(v95 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v95, v93);
    }
    else
    {
      ++*(_DWORD *)(v95 + 32);
      sub_14042A5E0(v93, v93);
    }
  }
  return (unsigned int)v28;
}
