/*
 * XREFs of sub_1407CDED0 @ 0x1407CDED0
 * Callers:
 *     sub_14021F764 @ 0x14021F764 (sub_14021F764.c)
 *     sub_14025CB88 @ 0x14025CB88 (sub_14025CB88.c)
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_1406E5F34 @ 0x1406E5F34 (sub_1406E5F34.c)
 *     sub_14072295C @ 0x14072295C (sub_14072295C.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     sub_1409CC1BC @ 0x1409CC1BC (sub_1409CC1BC.c)
 *     SeGetLinkedToken @ 0x1409CC2A0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x1409CC3A0 (SeGetLogonSessionToken.c)
 * Callees:
 *     sub_140204B30 @ 0x140204B30 (sub_140204B30.c)
 *     sub_14023A798 @ 0x14023A798 (sub_14023A798.c)
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402DF7D8 @ 0x1402DF7D8 (sub_1402DF7D8.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14066A17C @ 0x14066A17C (sub_14066A17C.c)
 *     sub_14066B8C8 @ 0x14066B8C8 (sub_14066B8C8.c)
 *     sub_1406B91B4 @ 0x1406B91B4 (sub_1406B91B4.c)
 *     sub_14071F0D0 @ 0x14071F0D0 (sub_14071F0D0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14072E5D0 @ 0x14072E5D0 (sub_14072E5D0.c)
 *     sub_140799BB0 @ 0x140799BB0 (sub_140799BB0.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 *     sub_140986424 @ 0x140986424 (sub_140986424.c)
 *     sub_1409C6578 @ 0x1409C6578 (sub_1409C6578.c)
 *     sub_1409CCCB0 @ 0x1409CCCB0 (sub_1409CCCB0.c)
 *     sub_1409CD320 @ 0x1409CD320 (sub_1409CD320.c)
 *     sub_1409CEB64 @ 0x1409CEB64 (sub_1409CEB64.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407CDED0(
        __int128 *a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7,
        __int64 *a8)
{
  PVOID *v9; // rbx
  _DWORD *Pool2; // rax
  _DWORD *v11; // r14
  _QWORD *v12; // rax
  struct _ERESOURCE *v13; // r12
  int v14; // esi
  int v15; // r13d
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v17; // rbp
  __int64 v18; // rbx
  int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int128 v27; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // ebp
  __int64 v34; // xmm1_8
  __int64 v35; // rdx
  bool v36; // zf
  __int64 v37; // rcx
  int v38; // r12d
  __int64 v39; // rax
  _DWORD *v40; // rcx
  __int64 v41; // rsi
  int v42; // ecx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ecx
  unsigned int v47; // ebp
  char *v48; // rax
  char *v49; // rsi
  __int64 v50; // rax
  char *v51; // rsi
  ULONG v52; // r9d
  unsigned __int8 *v53; // rdx
  int v54; // esi
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned __int8 *v58; // rsi
  void *v59; // rbp
  unsigned int v60; // r14d
  void *v61; // rax
  unsigned int v62; // ecx
  void *v63; // rcx
  _SID_AND_ATTRIBUTES *v64; // rcx
  void *v65; // rcx
  int v66; // ecx
  _QWORD *v67; // rax
  PVOID *v68; // rcx
  struct _KPRCB *v69; // rdx
  __int64 v70; // rcx
  void *v71; // rcx
  struct _KPRCB *v72; // rdx
  __int64 v73; // rcx
  ULONG v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // edx
  PVOID *P; // [rsp+40h] [rbp-68h]
  POBJECT_TYPE *v79; // [rsp+48h] [rbp-60h]
  __int64 v80; // [rsp+50h] [rbp-58h] BYREF
  __int128 v81; // [rsp+58h] [rbp-50h] BYREF

  v9 = 0LL;
  P = 0LL;
  if ( a5 > 3 && a4 == 2 )
    return 3221225637LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 48LL, 1950442835LL);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0;
  v12 = Pool2 + 2;
  v11[6] = 0;
  v12[1] = v12;
  *v12 = v12;
  *((_QWORD *)v11 + 5) = v11 + 8;
  *((_QWORD *)v11 + 4) = v11 + 8;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    P = (PVOID *)ExAllocatePool2(256LL, 288LL, 1950442835LL);
    v9 = P;
    if ( !P )
    {
      v68 = (PVOID *)v11;
      goto LABEL_82;
    }
  }
  v13 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1817470291LL);
  if ( !v13 )
  {
    ExFreePoolWithTag(v11, 0);
    if ( !HIDWORD(NlsMbOemCodePageTag) )
      return 3221225626LL;
    v68 = v9;
LABEL_82:
    ExFreePoolWithTag(v68, 0);
    return 3221225626LL;
  }
  v14 = *((_DWORD *)a1 + 33) + 1168;
  if ( *((_DWORD *)a1 + 33) < 0xFFFFFB70 )
  {
    v15 = *((_DWORD *)a1 + 34);
    CurrentPrcb = KeGetCurrentPrcb();
    v80 = 0LL;
    v79 = SeTokenObjectType;
    v81 = 0LL;
    v17 = *((_QWORD *)CurrentPrcb + 264);
    ++*(_DWORD *)(v17 + 20);
    v18 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v17);
    if ( !v18 )
    {
      ++*(_DWORD *)(v17 + 24);
      v23 = *((_QWORD *)CurrentPrcb + 265);
      ++*(_DWORD *)(v23 + 20);
      v18 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v23);
      if ( !v18 )
      {
        v24 = *(unsigned int *)(v23 + 44);
        v25 = *(unsigned int *)(v23 + 36);
        ++*(_DWORD *)(v23 + 24);
        v18 = sub_14042A5E0(v25, v24);
        if ( !v18 )
        {
          v19 = -1073741670;
          goto LABEL_86;
        }
      }
    }
    *(_DWORD *)v18 = *((_DWORD *)CurrentPrcb + 9);
    v19 = sub_1407CCD80(a6, a6, a2, &v81, v18, 0);
    if ( v19 < 0 )
    {
      v69 = KeGetCurrentPrcb();
      v70 = *((_QWORD *)v69 + 264);
      ++*(_DWORD *)(v70 + 28);
      if ( *(_WORD *)v70 < *(_WORD *)(v70 + 16)
        || (++*(_DWORD *)(v70 + 32),
            v70 = *((_QWORD *)v69 + 265),
            ++*(_DWORD *)(v70 + 28),
            *(_WORD *)v70 < *(_WORD *)(v70 + 16)) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v70, (PSLIST_ENTRY)v18);
      }
      else
      {
        ++*(_DWORD *)(v70 + 32);
        sub_14042A5E0(v18, v69);
      }
LABEL_86:
      ExFreePoolWithTag(v11, 0);
      ExFreePoolWithTag(v13, 0);
      if ( HIDWORD(NlsMbOemCodePageTag) )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v19;
    }
    v20 = (__int64)v79;
    if ( (*(_DWORD *)v18 & (_DWORD)v79[9]) != 0 )
    {
      v19 = -1073741811;
    }
    else
    {
      if ( (*(_DWORD *)v18 & 0x10) != 0 )
      {
        if ( !SeSinglePrivilegeCheck(stru_140D3CB68, a6) )
        {
          v19 = -1073741727;
          goto LABEL_94;
        }
        v20 = (__int64)v79;
      }
      if ( !v15 )
        v15 = *(_DWORD *)(v20 + 104);
      *(_DWORD *)(v18 + 20) = v15;
      *(_DWORD *)(v18 + 24) = v14;
      v19 = sub_14072E5D0((int *)v18, a6, v20, &v81, v14, &v80, 0LL);
      if ( v19 >= 0 )
      {
        v21 = v80;
        if ( dword_140D05010 )
        {
          sub_140986424(v80);
          sub_1405C5EC8(v21, 1, 1u, 0x746C6644u);
        }
        v22 = v21 + 48;
        *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&qword_140C0DA70);
        *(_DWORD *)(v22 + 192) = a4;
        *(_DWORD *)(v22 + 196) = a5;
        *(_BYTE *)(v22 + 204) = 0;
        *(_QWORD *)(v22 + 48) = v13;
        ExInitializeResourceLite(v13);
        *(_QWORD *)(v22 + 24) = *((_QWORD *)a1 + 3);
        v27 = *a1;
        *(_DWORD *)(v22 + 140) = 0;
        *(_OWORD *)v22 = v27;
        *(_QWORD *)(v22 + 32) = *((_QWORD *)a1 + 4);
        *(_QWORD *)(v22 + 40) = *((_QWORD *)a1 + 5);
        *(_QWORD *)(v22 + 224) = *((_QWORD *)a1 + 28);
        *(_QWORD *)(v22 + 1120) = 0LL;
        *(_QWORD *)(v22 + 1128) = 0LL;
        *(_QWORD *)(v22 + 1096) = 0LL;
        *(_QWORD *)(v22 + 1144) = P;
        *(_DWORD *)(v22 + 120) = 0;
        *(_QWORD *)(v22 + 1160) = 0LL;
        if ( HIDWORD(NlsMbOemCodePageTag) )
        {
          v74 = RtlWalkFrameChain(P + 5, 0x1Eu, 0);
          if ( KeGetCurrentIrql() < 2u )
            RtlWalkFrameChain((PVOID *)(*(_QWORD *)(v22 + 1144) + 8 * (v74 + 5LL)), 30 - v74, 1u);
        }
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceSharedLite(*((PERESOURCE *)a1 + 6), 1u);
        *(_QWORD *)(v22 + 56) = *((_QWORD *)a1 + 7);
        *(_DWORD *)(v22 + 136) = *((_DWORD *)a1 + 34);
        *(_DWORD *)(v22 + 144) = *((_DWORD *)a1 + 36);
        *(_DWORD *)(v22 + 128) = *((_DWORD *)a1 + 32);
        *(_DWORD *)(v22 + 132) = *((_DWORD *)a1 + 33);
        v32 = *((_DWORD *)a1 + 50) & 0xFFFFFBDF;
        *(_DWORD *)(v22 + 200) = v32;
        if ( (v32 & 0x400000) != 0 )
          _InterlockedIncrement(&dword_140D3CAD0);
        v33 = *((_DWORD *)a1 + 30);
        if ( *(_DWORD *)(v22 + 120) != v33 )
        {
          *(_DWORD *)(v22 + 120) = v33;
          if ( !dword_140D3B0CC )
          {
            v65 = *(void **)(v22 + 1160);
            if ( v65 )
              ObfDereferenceObject(v65);
            *(_QWORD *)(v22 + 1160) = sub_1402DF7D8(v33, v29, v30, v31);
          }
        }
        *(_DWORD *)(v22 + 120) = *((_DWORD *)a1 + 30);
        *(_OWORD *)(v22 + 88) = *(__int128 *)((char *)a1 + 88);
        *(_QWORD *)(v22 + 104) = *((_QWORD *)a1 + 13);
        *(_DWORD *)(v22 + 112) = *((_DWORD *)a1 + 28);
        *(_WORD *)(v22 + 116) = *((_WORD *)a1 + 58);
        *(_BYTE *)(v22 + 118) = *((_BYTE *)a1 + 118);
        *(_DWORD *)(v22 + 208) = *((_DWORD *)a1 + 52);
        *(_DWORD *)(v22 + 212) = *((_DWORD *)a1 + 53);
        *(_OWORD *)(v22 + 64) = a1[4];
        v34 = *((_QWORD *)a1 + 10);
        *(_QWORD *)(v22 + 776) = v11;
        *(_QWORD *)(v22 + 1080) = 0LL;
        *(_QWORD *)(v22 + 1088) = 0LL;
        *(_QWORD *)(v22 + 1152) = 0LL;
        *(_QWORD *)(v22 + 792) = 0LL;
        *(_QWORD *)(v22 + 784) = 0LL;
        *(_DWORD *)(v22 + 800) = 0;
        *(_QWORD *)(v22 + 80) = v34;
        memset((void *)(v22 + 808), 0, 0x110uLL);
        v36 = *(_BYTE *)(v22 + 118) == 2;
        *(_QWORD *)(v22 + 176) = 0LL;
        *(_QWORD *)(v22 + 1104) = 0LL;
        *(_QWORD *)(v22 + 1112) = 0LL;
        *(_QWORD *)(v22 + 1136) = 0LL;
        if ( v36 )
        {
          LOBYTE(v35) = 1;
          sub_1409C6578(v22 + 88, v35);
        }
        if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 )
        {
          v38 = sub_14066B8C8((__int64)a1 + 24, v22 + 216);
          if ( v38 < 0 )
          {
            *(_DWORD *)(v22 + 200) |= 0x20u;
            *(_QWORD *)(v22 + 216) = 0LL;
            goto LABEL_110;
          }
        }
        else
        {
          v37 = *((_QWORD *)a1 + 27);
          *(_QWORD *)(v22 + 216) = v37;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v37 + 24)) <= 1 )
            __fastfail(0xEu);
          v38 = 0;
        }
        v39 = *((_QWORD *)a1 + 142);
        if ( v39 )
        {
          sub_14023A798(*((_QWORD *)a1 + 142));
          v39 = *((_QWORD *)a1 + 142);
        }
        *(_QWORD *)(v22 + 1136) = v39;
        v40 = (_DWORD *)*((_QWORD *)a1 + 97);
        if ( *v40 )
        {
          v38 = sub_140204B30((__int64)v40, *(_QWORD **)(v22 + 776), a7);
          if ( v38 < 0 )
            goto LABEL_110;
        }
        memmove((void *)(v22 + 1168), a1 + 73, *((unsigned int *)a1 + 33));
        v41 = v22 - (_QWORD)a1;
        if ( byte_140C5AEB0 )
        {
          *(_QWORD *)(v22 + 152) = v41 + *((_QWORD *)a1 + 19);
          v38 = sub_1409CCCB0(a1, v22);
          if ( v38 < 0 )
          {
            *(_QWORD *)(v22 + 152) = 0LL;
            goto LABEL_110;
          }
        }
        else
        {
          v42 = *((_DWORD *)a1 + 31);
          *(_DWORD *)(v22 + 124) = v42;
          v43 = (_QWORD *)(v41 + *((_QWORD *)a1 + 19));
          for ( *(_QWORD *)(v22 + 152) = v43; v42; --v42 )
          {
            *v43 += v41;
            v43 += 2;
          }
        }
        v44 = *((_QWORD *)a1 + 20);
        *(_QWORD *)(v22 + 160) = v44;
        if ( v44 )
        {
          v66 = *(_DWORD *)(v22 + 128);
          v67 = (_QWORD *)(v41 + v44);
          for ( *(_QWORD *)(v22 + 160) = v67; v66; --v66 )
          {
            *v67 += v41;
            v67 += 2;
          }
        }
        v45 = *((_QWORD *)a1 + 23);
        v46 = 4 * *(unsigned __int8 *)(*((_QWORD *)a1 + 21) + 1LL) + 8;
        if ( v45 )
          v46 += *(unsigned __int16 *)(v45 + 2);
        v47 = v46;
        v48 = (char *)ExAllocatePool2(256LL, v46, 1683252563LL);
        *(_QWORD *)(v22 + 176) = v48;
        v49 = v48;
        if ( !v48 )
          goto LABEL_118;
        memmove(v48, *((const void **)a1 + 22), v47);
        v50 = *((_QWORD *)a1 + 23);
        v51 = &v49[-*((_QWORD *)a1 + 22)];
        *(_QWORD *)(v22 + 184) = v50;
        if ( v50 )
          *(_QWORD *)(v22 + 184) = &v51[v50];
        *(_QWORD *)(v22 + 168) = &v51[*((_QWORD *)a1 + 21)];
        v52 = *((_DWORD *)a1 + 200);
        if ( v52 )
          v38 = sub_140799BB0(v22, *((void **)a1 + 98), *((void **)a1 + 99), v52);
        if ( v38 >= 0 )
        {
          v53 = (unsigned __int8 *)*((_QWORD *)a1 + 98);
          if ( v53 )
          {
            v54 = sub_14066A17C(v22, v53);
            if ( v54 < 0 )
              goto LABEL_117;
          }
          v55 = *((_QWORD *)a1 + 135);
          if ( v55 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v55 + 24)) <= 1 )
              __fastfail(0xEu);
            *(_QWORD *)(v22 + 1080) = *((_QWORD *)a1 + 135);
          }
          v56 = *((_QWORD *)a1 + 136);
          if ( v56 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v56 + 24)) <= 1 )
              __fastfail(0xEu);
            *(_QWORD *)(v22 + 1088) = *((_QWORD *)a1 + 136);
          }
          v57 = *((_QWORD *)a1 + 144);
          if ( v57 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v57 + 24)) <= 1 )
              __fastfail(0xEu);
            *(_QWORD *)(v22 + 1152) = *((_QWORD *)a1 + 144);
          }
          if ( *((_QWORD *)a1 + 137) )
          {
            v54 = sub_1409CEB64(a1, v22);
            if ( v54 < 0 )
            {
LABEL_117:
              ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
              KeLeaveCriticalRegion();
              ObfDereferenceObject((PVOID)v22);
              return (unsigned int)v54;
            }
          }
          v58 = (unsigned __int8 *)*((_QWORD *)a1 + 138);
          v59 = 0LL;
          if ( !v58 )
            goto LABEL_55;
          v60 = 4 * v58[1] + 8;
          v61 = (void *)ExAllocatePool2(256LL, v60, 1767073107LL);
          v59 = v61;
          if ( v61 )
          {
            v62 = 4 * v58[1] + 8;
            if ( v62 <= v60 )
              memmove(v61, v58, v62);
LABEL_55:
            v63 = *(void **)(v22 + 1104);
            if ( v63 )
            {
              ExFreePoolWithTag(v63, 0);
              *(_QWORD *)(v22 + 1104) = 0LL;
            }
            *(_QWORD *)(v22 + 1104) = v59;
            ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
            KeLeaveCriticalRegion();
            if ( HIDWORD(NlsMbOemCodePageTag) )
            {
              **(_QWORD **)(v22 + 1144) = *((_QWORD *)KeGetCurrentThread() + 153);
              *(_QWORD *)(*(_QWORD *)(v22 + 1144) + 8LL) = *((_QWORD *)KeGetCurrentThread() + 154);
              *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 32LL) = 13;
              *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 280LL) = 0;
              *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 284LL) = 0;
              v75 = *(_QWORD *)(v22 + 1144);
              v76 = *((_QWORD *)KeGetCurrentThread() + 23);
              *(_QWORD *)(v75 + 16) = *(_QWORD *)(v76 + 1448);
              *(_DWORD *)(v75 + 24) = *(_DWORD *)(v76 + 1456);
              *(_WORD *)(v75 + 28) = *(_WORD *)(v76 + 1460);
              *(_BYTE *)(v75 + 30) = *(_BYTE *)(v76 + 1462);
              sub_1409CD320(v22);
            }
            if ( a3 )
              sub_1406B91B4(v22);
            RtlSidHashInitialize(
              *(PSID_AND_ATTRIBUTES *)(v22 + 152),
              *(_DWORD *)(v22 + 124),
              (PSID_AND_ATTRIBUTES_HASH)(v22 + 232));
            RtlSidHashInitialize(
              *(PSID_AND_ATTRIBUTES *)(v22 + 160),
              *(_DWORD *)(v22 + 128),
              (PSID_AND_ATTRIBUTES_HASH)(v22 + 504));
            v64 = *(_SID_AND_ATTRIBUTES **)(v22 + 792);
            if ( v64 )
              RtlSidHashInitialize(v64, *(_DWORD *)(v22 + 800), (PSID_AND_ATTRIBUTES_HASH)(v22 + 808));
            if ( HIDWORD(NlsMbOemCodePageTag)
              && dword_140D04938 == 13
              && *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL) == qword_140D04928 )
            {
              *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 280LL) = _InterlockedIncrement(&dword_140D04930);
              v77 = *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 280LL);
              if ( v77 >= dword_140D04934 )
              {
                DbgPrint("\nToken number 0x%x = 0x%p\n", v77, (const void *)v22);
                __debugbreak();
              }
            }
            *a8 = v22;
            return 0LL;
          }
LABEL_118:
          ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject((PVOID)v22);
          return 3221225626LL;
        }
LABEL_110:
        ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
        KeLeaveCriticalRegion();
        ObfDereferenceObject((PVOID)v22);
        return (unsigned int)v38;
      }
    }
LABEL_94:
    if ( *((_QWORD *)&v81 + 1) )
      sub_14071F0D0((__int64)&v81);
    v71 = *(void **)(v18 + 32);
    if ( v71 )
    {
      SeReleaseSecurityDescriptor(v71, *(_BYTE *)(v18 + 16), 1);
      *(_QWORD *)(v18 + 32) = 0LL;
    }
    v72 = KeGetCurrentPrcb();
    v73 = *((_QWORD *)v72 + 264);
    ++*(_DWORD *)(v73 + 28);
    if ( *(_WORD *)v73 < *(_WORD *)(v73 + 16)
      || (++*(_DWORD *)(v73 + 32),
          v73 = *((_QWORD *)v72 + 265),
          ++*(_DWORD *)(v73 + 28),
          *(_WORD *)v73 < *(_WORD *)(v73 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v73, (PSLIST_ENTRY)v18);
    }
    else
    {
      ++*(_DWORD *)(v73 + 32);
      sub_14042A5E0(v18, v72);
    }
    goto LABEL_86;
  }
  ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag(v13, 0);
  if ( HIDWORD(NlsMbOemCodePageTag) )
    ExFreePoolWithTag(v9, 0);
  return 3221225621LL;
}
