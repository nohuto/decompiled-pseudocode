/*
 * XREFs of sub_1407B6CA0 @ 0x1407B6CA0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140204280 (RtlQueryPackageIdentity.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     sub_14030263C @ 0x14030263C (sub_14030263C.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_140302C20 @ 0x140302C20 (sub_140302C20.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045A08C @ 0x14045A08C (sub_14045A08C.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     sub_1406C3EEC @ 0x1406C3EEC (sub_1406C3EEC.c)
 *     sub_1406C5900 @ 0x1406C5900 (sub_1406C5900.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     sub_1407A8280 @ 0x1407A8280 (sub_1407A8280.c)
 *     sub_1407B6430 @ 0x1407B6430 (sub_1407B6430.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1407B69B8 @ 0x1407B69B8 (sub_1407B69B8.c)
 *     sub_1407B69F0 @ 0x1407B69F0 (sub_1407B69F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1407B6CA0(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  ULONG_PTR v6; // r15
  int v7; // ecx
  bool v8; // cf
  unsigned int v9; // ebx
  char v10; // di
  int v11; // r12d
  __int64 *v12; // rdi
  __int64 *v13; // rsi
  _DWORD *v14; // rdi
  char *v15; // r13
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  char *v21; // rax
  char *v22; // rsi
  _QWORD *v23; // rbx
  __int64 v24; // rax
  bool v25; // cl
  int v26; // eax
  unsigned int v27; // eax
  _OWORD *v28; // rax
  _OWORD *v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // r14d
  __int64 v32; // rcx
  char *v33; // rcx
  unsigned int v34; // r8d
  char *v35; // r15
  _WORD *v36; // r9
  _WORD *v37; // rdx
  unsigned __int64 v38; // rdi
  unsigned int v39; // ebx
  unsigned int v40; // eax
  unsigned int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // ebx
  unsigned int v45; // r8d
  __int64 v46; // r13
  unsigned int v47; // r14d
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rax
  char *v53; // r13
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v55; // r14
  _QWORD **v56; // r15
  int v57; // r12d
  _QWORD *i; // rbx
  unsigned int v59; // eax
  unsigned int v60; // ebx
  unsigned int v61; // r14d
  int v62; // ecx
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  bool v66; // zf
  unsigned __int64 v67; // rax
  struct _KTHREAD *v68; // rdi
  signed __int64 *v69; // rbx
  char *v70; // r15
  int v71; // r12d
  char *j; // r14
  __int64 *v73; // rsi
  signed __int64 *v74; // r12
  void *v75; // rbx
  ULONG_PTR v76; // r14
  size_t v77; // rcx
  unsigned int v78; // ebx
  unsigned int v79; // edx
  unsigned int v80; // ecx
  __int64 *v81; // rsi
  NTSTATUS result; // eax
  signed __int32 v83[8]; // [rsp+0h] [rbp-618h] BYREF
  int v84; // [rsp+30h] [rbp-5E8h]
  unsigned int v85; // [rsp+34h] [rbp-5E4h]
  int v86; // [rsp+38h] [rbp-5E0h]
  char v87; // [rsp+3Ch] [rbp-5DCh]
  PVOID v88; // [rsp+40h] [rbp-5D8h]
  int v89; // [rsp+48h] [rbp-5D0h]
  bool v90; // [rsp+4Ch] [rbp-5CCh]
  bool v91; // [rsp+4Dh] [rbp-5CBh]
  int v92; // [rsp+50h] [rbp-5C8h]
  PVOID v93; // [rsp+58h] [rbp-5C0h]
  __int64 v94; // [rsp+60h] [rbp-5B8h]
  PVOID Object; // [rsp+68h] [rbp-5B0h]
  int v96; // [rsp+70h] [rbp-5A8h]
  char v97; // [rsp+74h] [rbp-5A4h]
  int v98; // [rsp+80h] [rbp-598h]
  __int64 v99; // [rsp+88h] [rbp-590h]
  char *v100; // [rsp+90h] [rbp-588h]
  size_t Size; // [rsp+98h] [rbp-580h] BYREF
  unsigned int *v102; // [rsp+A0h] [rbp-578h]
  ULONG_PTR AppIdSize; // [rsp+A8h] [rbp-570h] BYREF
  PVOID P; // [rsp+B0h] [rbp-568h] BYREF
  ULONG_PTR PackageSize; // [rsp+B8h] [rbp-560h] BYREF
  int v106; // [rsp+C0h] [rbp-558h]
  char *v107; // [rsp+C8h] [rbp-550h]
  char *v108; // [rsp+D0h] [rbp-548h]
  char *v109; // [rsp+D8h] [rbp-540h]
  _WORD *v110; // [rsp+E0h] [rbp-538h]
  char *v111; // [rsp+E8h] [rbp-530h]
  _QWORD *v112; // [rsp+F0h] [rbp-528h]
  __int64 v113; // [rsp+F8h] [rbp-520h]
  unsigned __int64 v114; // [rsp+100h] [rbp-518h]
  int v115; // [rsp+108h] [rbp-510h]
  int v116; // [rsp+12Ch] [rbp-4ECh]
  __int64 CurrentServerSilo; // [rsp+138h] [rbp-4E0h]
  _OWORD v118[2]; // [rsp+190h] [rbp-488h] BYREF
  struct _KTHREAD *v119; // [rsp+1B0h] [rbp-468h]
  void *v120; // [rsp+1B8h] [rbp-460h]
  struct _KTHREAD *v121; // [rsp+1C0h] [rbp-458h]
  _QWORD v122[14]; // [rsp+1D0h] [rbp-448h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-3D8h] BYREF
  _OWORD v124[27]; // [rsp+290h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+440h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+4D0h] [rbp-148h] BYREF

  v106 = a5;
  v113 = a1;
  v102 = a3;
  AppIdSize = 130LL;
  memset(v124, 0, sizeof(v124));
  v6 = 0LL;
  v98 = 0;
  LODWORD(Size) = 0;
  PackageSize = 254LL;
  v93 = 0LL;
  memset(v122, 0, 0x68uLL);
  v90 = 0;
  Object = 0LL;
  memset(v118, 0, sizeof(v118));
  v85 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v97 = v106 != 5;
  v7 = 136;
  if ( v106 == 5 )
    v7 = 80;
  v92 = v7;
  v96 = v7;
  v99 = v113;
  v8 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return -1073741820;
    v8 = a2 < 0x270;
  }
  v9 = v8 ? 0xC0000004 : 0;
  v87 = 0;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a5 != 148 || (result = sub_1406D75F4(v10), result >= 0) )
  {
    if ( sub_1406C5900(v10) )
      v87 = 1;
    v11 = 0;
    v86 = 0;
    P = 0LL;
    sub_1402F374C(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v12 = (__int64 *)qword_140D06940;
    v88 = qword_140D06940;
    v93 = qword_140D06940;
    v84 = v9;
    v13 = (__int64 *)Object;
    v94 = v99;
    while ( 1 )
    {
      if ( !v12 )
      {
        if ( v84 >= 0 && v94 && (*(_DWORD *)v94 = 0, v11 < 0) )
        {
          v84 = v11;
        }
        else if ( v102 )
        {
          *v102 = v85;
        }
        goto LABEL_226;
      }
      if ( !sub_1407B69B8((__int64)v12) && (!a4 || v12 != qword_140D06940) )
      {
        v44 = sub_140300B40(v43);
        v115 = v44;
        if ( (!a4 || v44 == *a4) && sub_140300B74((__int64)v12, CurrentServerSilo) )
          break;
      }
LABEL_76:
      if ( v12 == qword_140D06940 )
        v12 = 0LL;
      v12 = sub_1407B69F0(v12, v87);
      v88 = v12;
      v93 = v12;
    }
    v46 = v113 + v85;
    v94 = v46;
    v99 = v46;
    v89 = 624;
    if ( v85 + 624 < v85 )
    {
      v47 = v45;
      v85 = v45;
      v11 = -1073741675;
    }
    else
    {
      v47 = v85 + 624;
      v85 += 624;
      v11 = 0;
    }
    v86 = v11;
    if ( v11 < 0 )
    {
      v84 = v11;
      goto LABEL_226;
    }
    memset(v122, 0, 0x68uLL);
    if ( v47 > a2 )
    {
      v84 = -1073741820;
      if ( !v102 )
        goto LABEL_226;
      v51 = v94;
    }
    else
    {
      v50 = sub_1407B6430(v46, (__int64)v12, v97, v122);
      v11 = v50;
      v86 = v50;
      if ( v50 < 0 )
      {
        v84 = v50;
        goto LABEL_226;
      }
      v51 = v94;
      *(_QWORD *)v94 = 0LL;
      *(_DWORD *)(v51 + 100) = v44;
      *(_QWORD *)(v51 + 64) = 0LL;
      *(_DWORD *)(v51 + 56) = 0;
      if ( v12 == qword_140D06940 )
        *(_QWORD *)(v51 + 96) = 0LL;
      if ( v12 == (__int64 *)qword_140D06A30 )
      {
        v52 = qword_140C50848 << 12;
        *(_QWORD *)(v51 + 144) = qword_140C50848 << 12;
        *(_QWORD *)(v51 + 8) = v52;
      }
      if ( v11 < 0 )
      {
        v84 = v11;
        goto LABEL_226;
      }
    }
    v53 = (char *)(v51 + 256);
    v100 = (char *)(v51 + 256);
    if ( v12 == qword_140D06940 )
    {
      v81 = (__int64 *)v12[6];
      if ( v81 == v12 + 6 )
      {
        v13 = 0LL;
      }
      else
      {
        v13 = v81 - 95;
        sub_1406C3EEC();
      }
    }
    else
    {
      v13 = 0LL;
      v112 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v121 = CurrentThread;
      v55 = (signed __int64 *)v93;
      v56 = (_QWORD **)((char *)v93 + 1504);
      v57 = 0;
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v55 + 135), 0LL);
      for ( i = *v56; ; i = (_QWORD *)*i )
      {
        if ( i == v56 )
          goto LABEL_99;
        v13 = i - 167;
        v112 = i - 167;
        if ( ObReferenceObjectSafeWithTag((__int64)(i - 167)) )
          break;
      }
      v57 = 1;
LABEL_99:
      v6 = 0LL;
      if ( _InterlockedCompareExchange64(v55 + 135, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v55 + 135);
      sub_1402AFC00((ULONG_PTR)(v55 + 135));
      sub_1402AC800((__int64)CurrentThread);
      if ( !v57 )
      {
        v13 = 0LL;
        v112 = 0LL;
      }
      v12 = (__int64 *)v93;
      v88 = v93;
      v11 = v86;
      v94 = v99;
      v53 = v100;
      v47 = v85;
    }
    Object = v13;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v13 )
        {
          v14 = v53;
          v107 = v53;
          v15 = v53 + 368;
          v100 = v15;
          if ( v84 < 0 )
            goto LABEL_45;
          v16 = v88;
          v17 = sub_140347920((__int64)v88, 0x746C6644u);
          v90 = SeSecurityAttributePresent(v17, (__int64)&qword_140A38B30, v18);
          _m_prefetchw(v16 + 151);
          v19 = v16[151];
          while ( (v17 ^ v19) < 0xF )
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange64(v16 + 151, v19 + 1, v19);
            if ( v20 == v19 )
            {
              sub_140347B50(v17 - 48);
              goto LABEL_15;
            }
          }
          ObfDereferenceObjectWithTag((PVOID)v17, 0x746C6644u);
LABEL_15:
          v21 = v107;
          *(_QWORD *)(v107 + 52) = 0LL;
          *((_DWORD *)v21 + 84) = 0;
          v22 = v107;
          *((_QWORD *)v107 + 43) = *((_QWORD *)v93 + 293) << 12;
          *((_QWORD *)v22 + 5) = v122[4];
          *((_DWORD *)v22 + 12) = 0;
          if ( v90 )
            *((_DWORD *)v22 + 12) = 1;
          v23 = v93;
          v24 = *((_QWORD *)v93 + 279);
          if ( v24 )
          {
            *(_OWORD *)v22 = *(_OWORD *)v24;
            *((_OWORD *)v22 + 1) = *(_OWORD *)(v24 + 16);
            *((_QWORD *)v22 + 4) = *(_QWORD *)(v24 + 32);
          }
          else
          {
            *(_OWORD *)v22 = 0LL;
            *((_OWORD *)v22 + 1) = 0LL;
            *((_QWORD *)v22 + 4) = 0LL;
          }
          if ( (*((_DWORD *)v23 + 543) & 0x1000) != 0 )
          {
            *((_DWORD *)v22 + 12) = *((_DWORD *)v22 + 12) & 0xFFFFFFE1 | 2;
          }
          else if ( v23 == (_QWORD *)qword_140D06A30 )
          {
            *((_DWORD *)v22 + 12) = *((_DWORD *)v22 + 12) & 0xFFFFFFE1 | 4;
          }
          else if ( sub_14030263C(v23) )
          {
            *((_DWORD *)v22 + 12) = *((_DWORD *)v22 + 12) & 0xFFFFFFE1 | 6;
          }
          else
          {
            v25 = *((_QWORD *)&xmmword_140C490E0 + 1) && v23 == *((_QWORD **)&xmmword_140C490E0 + 1);
            v91 = v25;
            v26 = v14[12];
            if ( v25 )
              v27 = v26 & 0xFFFFFFE1 | 8;
            else
              v27 = v26 & 0xFFFFFFE1;
            v14[12] = v27;
          }
          *((_QWORD *)v22 + 45) = v23[287];
          sub_1407A8280(v23, v124);
          v28 = v22 + 64;
          v29 = v124;
          v30 = 2LL;
          do
          {
            *v28 = *v29;
            v28[1] = v29[1];
            v28[2] = v29[2];
            v28[3] = v29[3];
            v28[4] = v29[4];
            v28[5] = v29[5];
            v28[6] = v29[6];
            v28 += 8;
            *(v28 - 1) = v29[7];
            v29 += 8;
            --v30;
          }
          while ( v30 );
          *v28 = *v29;
          if ( v23[162] )
            v14[88] = *(_DWORD *)(v23[162] + 1428LL);
          else
            v14[88] = 0;
          v12 = (__int64 *)v93;
          v88 = v93;
          if ( *((_DWORD *)v93 + 17)
            || dword_140D068FC && (unsigned int)sub_14045A08C((__int64)v93, *((_BYTE *)v93 + 1463)) )
          {
            *((_DWORD *)v22 + 12) |= 0x20u;
          }
          v11 = v86;
          if ( v86 < 0 )
          {
            v84 = v86;
            v13 = (__int64 *)Object;
            goto LABEL_226;
          }
          v14 = v107;
          v13 = (__int64 *)Object;
          v94 = v99;
          v15 = v100;
LABEL_45:
          if ( a5 != 148 )
          {
LABEL_46:
            v31 = v85;
            goto LABEL_47;
          }
          v74 = (signed __int64 *)v88;
          v75 = (void *)sub_140347920((__int64)v88, 0x746C6644u);
          v120 = v75;
          sub_14066A374((__int64)v75, Src, 0x44u, (ULONG *)&Size);
          PackageSize = 254LL;
          AppIdSize = 130LL;
          v86 = RtlQueryPackageIdentity(v75, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
          if ( v86 >= 0 )
          {
            v6 = AppIdSize;
            v76 = PackageSize;
          }
          else
          {
            v76 = 0LL;
            PackageSize = 0LL;
            AppIdSize = 0LL;
          }
          sub_1402F89B0(v74 + 151, (unsigned __int64)v75, 0x746C6644u);
          v77 = (unsigned int)Size;
          v78 = (Size + 7) & 0xFFFFFFF8;
          v98 = v78;
          if ( v78 + v85 < v85 )
          {
            v79 = -1;
            v85 = -1;
            v11 = -1073741675;
          }
          else
          {
            v79 = v78 + v85;
            v85 += v78;
            v11 = 0;
          }
          v86 = v11;
          if ( v11 >= 0 )
          {
            v89 += v78;
            if ( v79 > a2 )
            {
              v84 = -1073741820;
              if ( !v102 )
              {
                v12 = (__int64 *)v88;
                goto LABEL_226;
              }
            }
            else
            {
              v14[13] = 368;
              memmove(v15, Src, v77);
              v15 += v78;
              v100 = v15;
              v79 = v85;
            }
            if ( !v76 )
            {
LABEL_162:
              v80 = v85;
              goto LABEL_163;
            }
            v80 = -1;
            if ( v76 > 0xFFFFFFFF )
            {
              v84 = -1073741820;
              goto LABEL_225;
            }
            v98 = v76;
            if ( (unsigned int)v76 + v79 < v79 )
            {
              v85 = -1;
              v11 = -1073741675;
            }
            else
            {
              v80 = v76 + v79;
              v85 = v76 + v79;
              v11 = 0;
            }
            v86 = v11;
            if ( v11 >= 0 )
            {
              v89 += v76;
              if ( v80 <= a2 )
              {
                v14[14] = (_DWORD)v15 - (_DWORD)v14;
                memmove(v15, PackageFullName, (unsigned int)v76);
                v15 += (unsigned int)v76;
                v100 = v15;
                goto LABEL_162;
              }
              v84 = -1073741820;
              if ( !v102 )
              {
                v12 = (__int64 *)v88;
                goto LABEL_226;
              }
LABEL_163:
              if ( !v6 )
                goto LABEL_46;
              if ( v6 > 0xFFFFFFFF )
              {
                v84 = -1073741820;
                goto LABEL_225;
              }
              v98 = v6;
              if ( (unsigned int)v6 + v80 < v80 )
              {
                v31 = -1;
                v85 = -1;
                v11 = -1073741675;
              }
              else
              {
                v31 = v6 + v80;
                v85 = v6 + v80;
                v11 = 0;
              }
              v86 = v11;
              if ( v11 >= 0 )
              {
                v89 += v6;
                if ( v31 > a2 )
                {
                  v84 = -1073741820;
                  if ( !v102 )
                  {
                    v12 = (__int64 *)v88;
                    goto LABEL_226;
                  }
LABEL_47:
                  v12 = (__int64 *)v88;
                }
                else
                {
                  v14[84] = (_DWORD)v15 - (_DWORD)v14;
                  memmove(v15, AppId, (unsigned int)v6);
                  v12 = (__int64 *)v88;
                  v15 += (unsigned int)v6;
                  v100 = v15;
                }
                if ( v12 == qword_140D06940 )
                  goto LABEL_73;
                if ( v12 == (__int64 *)PsInitialSystemProcess )
                {
                  v33 = byte_140001030;
                }
                else if ( v12 == (__int64 *)qword_140D06A30 )
                {
                  v33 = byte_140001180;
                }
                else if ( sub_14030263C(v12) )
                {
                  v33 = (char *)L"$&";
                }
                else
                {
                  v86 = sub_1407B66E0(v32, &P);
                  if ( v86 < 0 )
                    v33 = (char *)v12[184];
                  else
                    v33 = (char *)P;
                }
                v108 = v33;
                v34 = *(unsigned __int16 *)v33;
                v98 = v34;
                v35 = v15;
                v111 = v15;
                LODWORD(Size) = v34;
                v36 = (_WORD *)*((_QWORD *)v33 + 1);
                v37 = v36;
                v110 = v36;
                if ( a5 != 148 && v34 )
                {
                  v37 = &v36[(unsigned __int64)v34 >> 1];
                  v110 = v37;
                  while ( v37 != v36 )
                  {
                    v110 = --v37;
                    if ( *v37 == 92 )
                    {
                      v110 = ++v37;
                      break;
                    }
                  }
                  v34 -= 2 * (v37 - v36);
                  LODWORD(Size) = v34;
                }
                v38 = v34;
                v39 = (v34 + 9) & 0xFFFFFFF8;
                v98 = v39;
                v40 = v39 + v31;
                if ( v39 + v31 < v31 )
                {
                  v41 = -1;
                  v85 = -1;
                  v11 = -1073741675;
                }
                else
                {
                  v41 = v39 + v31;
                  v85 = v40;
                  v11 = 0;
                }
                v86 = v11;
                if ( v11 >= 0 )
                {
                  v89 += v39;
                  if ( v41 <= a2 )
                  {
                    if ( v34 )
                    {
                      memmove(v15, v37, v34);
                      v35 = &v15[2 * (v38 >> 1)];
                      v111 = v35;
                    }
                    *(_WORD *)v35 = 0;
                    v35 += 2;
                    v111 = v35;
LABEL_68:
                    if ( P )
                    {
                      ExFreePoolWithTag(P, 0);
                      P = 0LL;
                    }
                    if ( v84 >= 0 )
                    {
                      v42 = v94;
                      *(_WORD *)(v94 + 56) = (_WORD)v35 - (_WORD)v15 - 2;
                      *(_WORD *)(v42 + 58) = v39;
                      *(_QWORD *)(v42 + 64) = v15;
                    }
                    v12 = (__int64 *)v88;
LABEL_73:
                    if ( v84 < 0 || (*(_DWORD *)v94 = v89, v11 >= 0) )
                    {
                      v6 = 0LL;
                      goto LABEL_76;
                    }
                    v84 = v11;
LABEL_226:
                    if ( v12 && v12 != qword_140D06940 )
                      ObfDereferenceObjectWithTag(v12, 0x6E457350u);
                    if ( v13 && (PVOID)v13[68] != qword_140D06940 )
                      ObfDereferenceObjectWithTag(v13, 0x6E457350u);
                    if ( P )
                      ExFreePoolWithTag(P, 0);
                    return v84;
                  }
                  v84 = -1073741820;
                  if ( v102 )
                    goto LABEL_68;
LABEL_225:
                  v12 = (__int64 *)v88;
                  goto LABEL_226;
                }
              }
            }
          }
          v84 = v11;
          goto LABEL_225;
        }
        v116 = *((_DWORD *)v13 + 1);
        if ( !(_BYTE)v116 )
        {
          v59 = v47 + v92;
          if ( v47 + v92 < v47 )
          {
            v59 = -1;
            v11 = -1073741675;
          }
          else
          {
            v11 = 0;
          }
          v85 = v59;
          v60 = v59;
          v86 = v11;
          if ( v11 < 0 )
          {
            v84 = v11;
            goto LABEL_226;
          }
          v61 = v92;
          v89 += v92;
          if ( v59 > a2 )
          {
            v84 = -1073741820;
            if ( !v102 )
              goto LABEL_226;
          }
          else
          {
            sub_140302C20((__int64)v13, v118, v48, v49);
            v62 = BYTE8(v118[0]);
            if ( BYTE8(v118[0]) == 4 )
            {
              v89 -= v61;
              v85 = v60 - v61;
            }
            else
            {
              *((_DWORD *)v53 + 6) = v118[0];
              *((_DWORD *)v53 + 17) = v62;
              *((_DWORD *)v53 + 18) = BYTE9(v118[0]);
              *((_DWORD *)v53 + 14) = SBYTE10(v118[0]);
              *((_DWORD *)v53 + 15) = SBYTE11(v118[0]);
              v63 = DesiredTime;
              *(_QWORD *)v53 = DesiredTime * (unsigned __int64)*((unsigned int *)v13 + 163);
              *((_QWORD *)v53 + 1) = v63 * *((unsigned int *)v13 + 183);
              *((_QWORD *)v53 + 2) = v13[144];
              *((_DWORD *)v53 + 16) = *((_DWORD *)v13 + 85);
              *(_OWORD *)(v53 + 40) = *(_OWORD *)(v13 + 153);
              if ( (*((_DWORD *)v13 + 29) & 0x400) != 0 )
              {
                v64 = v13[164];
                v65 = v94;
              }
              else
              {
                if ( (v13[173] & 8) != 0
                  || (v64 = *((_QWORD *)Object + 148), _InterlockedOr(v83, 0), (v13[173] & 8) != 0) )
                {
                  v64 = 0LL;
                }
                v12 = (__int64 *)v93;
                v88 = v93;
                v11 = v86;
                v13 = (__int64 *)Object;
                v65 = v99;
                v94 = v99;
                v53 = v100;
              }
              v114 = v64;
              if ( v87 && v64 > 0x7FFFFFFEFFFFLL )
                *((_QWORD *)v53 + 4) = 0LL;
              else
                *((_QWORD *)v53 + 4) = v64;
              if ( v106 != 5 )
              {
                v66 = v87 == 0;
                if ( v87 )
                {
                  *((_QWORD *)v53 + 10) = 0LL;
                  *((_QWORD *)v53 + 11) = 0LL;
                }
                else
                {
                  *((_QWORD *)v53 + 10) = v13[7];
                  *((_QWORD *)v53 + 11) = v13[6];
                  v12 = (__int64 *)v93;
                  v88 = v93;
                  v11 = v86;
                  v13 = (__int64 *)Object;
                  v65 = v99;
                  v94 = v99;
                  v53 = v100;
                }
                v67 = v13[164];
                v114 = v67;
                if ( v66 || v67 <= 0x7FFFFFFEFFFFLL )
                  *((_QWORD *)v53 + 12) = v67;
                else
                  *((_QWORD *)v53 + 12) = 0LL;
                *((_QWORD *)v53 + 13) = v13[30];
                *((_QWORD *)v53 + 14) = 0LL;
                *((_QWORD *)v53 + 15) = 0LL;
                *((_QWORD *)v53 + 16) = 0LL;
              }
              ++*(_DWORD *)(v65 + 4);
              if ( v11 < 0 )
              {
                v84 = v11;
                goto LABEL_226;
              }
              v53 += v61;
              v100 = v53;
            }
          }
        }
        if ( v12 == qword_140D06940 )
          break;
        v13 = 0LL;
        v109 = 0LL;
        v68 = KeGetCurrentThread();
        v119 = v68;
        v69 = (signed __int64 *)v93;
        v70 = (char *)v93 + 1504;
        v71 = 0;
        --*((_WORD *)v68 + 242);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v69 + 135), 0LL);
        for ( j = (char *)*((_QWORD *)Object + 167); j != v70; j = *(char **)j )
        {
          v13 = (__int64 *)(j - 1336);
          v109 = j - 1336;
          if ( ObReferenceObjectSafeWithTag((__int64)(j - 1336)) )
          {
            v71 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64(v69 + 135, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v69 + 135);
        sub_1402AFC00((ULONG_PTR)(v69 + 135));
        sub_1402AC800((__int64)v68);
        ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( !v71 )
        {
          v13 = 0LL;
          v109 = 0LL;
        }
        v12 = (__int64 *)v93;
        v88 = v93;
        v11 = v86;
        v94 = v99;
        v53 = v100;
LABEL_143:
        Object = v13;
        v47 = v85;
        v6 = 0LL;
      }
      v73 = (__int64 *)v13[95];
      if ( v73 != v12 + 6 )
      {
        v13 = v73 - 95;
        sub_1406C3EEC();
        goto LABEL_143;
      }
      v13 = 0LL;
      Object = 0LL;
      v47 = v85;
      v6 = 0LL;
    }
  }
  return result;
}
