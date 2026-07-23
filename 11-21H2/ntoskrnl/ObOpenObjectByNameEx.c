/*
 * XREFs of ObOpenObjectByNameEx @ 0x1407CAF90
 * Callers:
 *     sub_140558960 @ 0x140558960 (sub_140558960.c)
 *     sub_14066E950 @ 0x14066E950 (sub_14066E950.c)
 *     sub_14066EBE0 @ 0x14066EBE0 (sub_14066EBE0.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     sub_14067F8D0 @ 0x14067F8D0 (sub_14067F8D0.c)
 *     sub_1406A0F30 @ 0x1406A0F30 (sub_1406A0F30.c)
 *     sub_1406A7AB0 @ 0x1406A7AB0 (sub_1406A7AB0.c)
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 *     IoQueryInformationByName @ 0x1407F69E0 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x1408115E0 (NtDeleteFile.c)
 *     sub_140936A54 @ 0x140936A54 (sub_140936A54.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347840 @ 0x140347840 (sub_140347840.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_1406C8634 @ 0x1406C8634 (sub_1406C8634.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_1407CCD80 @ 0x1407CCD80 (sub_1407CCD80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // edi
  _QWORD *v17; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  int v21; // r14d
  _BYTE *v22; // rdi
  PVOID *v23; // rdi
  int v24; // r15d
  PVOID v25; // rcx
  char *v26; // rdi
  __int64 v27; // rdx
  void *v28; // rcx
  struct _KPRCB *v29; // r8
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rdi
  unsigned __int64 v33; // r8
  __int64 v34; // rdx
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  void *v37; // rcx
  void *v38; // rcx
  _SLIST_ENTRY *v39; // r8
  struct _KPRCB *v40; // rdx
  __int64 v41; // rcx
  struct _KPRCB *v42; // rdx
  __int64 v43; // rcx
  char *v45; // r15
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  struct _KPRCB *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdi
  __int64 v53; // rax
  PVOID Object; // [rsp+78h] [rbp-79h] BYREF
  __int64 v55; // [rsp+80h] [rbp-71h] BYREF
  char *v56; // [rsp+88h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-61h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+98h] [rbp-59h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-49h] BYREF
  unsigned __int64 v60; // [rsp+B8h] [rbp-39h]
  __int64 v61; // [rsp+C0h] [rbp-31h]
  struct _KTHREAD *v62; // [rsp+C8h] [rbp-29h]
  __int128 v63; // [rsp+D0h] [rbp-21h] BYREF
  __int128 v64; // [rsp+E0h] [rbp-11h]
  __int128 v65; // [rsp+F0h] [rbp-1h]
  __int64 v66; // [rsp+100h] [rbp+Fh]
  __int64 v67; // [rsp+138h] [rbp+47h] BYREF

  v8 = a1;
  v66 = 0LL;
  Object = 0LL;
  LODWORD(v67) = 0;
  v55 = 0LL;
  *a8 = 0LL;
  v56 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = *((_QWORD *)CurrentPrcb + 272);
  ++*(_DWORD *)(v13 + 20);
  v14 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v13);
  if ( !v14 )
  {
    ++*(_DWORD *)(v13 + 24);
    v46 = *((_QWORD *)CurrentPrcb + 273);
    ++*(_DWORD *)(v46 + 20);
    v14 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v46);
    if ( !v14 )
    {
      v47 = *(unsigned int *)(v46 + 44);
      v48 = *(unsigned int *)(v46 + 36);
      ++*(_DWORD *)(v46 + 24);
      v14 = sub_14042A5E0(v48, v47);
      if ( !v14 )
        return 3221225626LL;
    }
  }
  *(_DWORD *)v14 = *((_DWORD *)CurrentPrcb + 9);
  v16 = sub_1407CCD80(a3, a3, v8, (unsigned int)ListEntry, v14 + 160, 1);
  if ( v16 < 0 )
  {
    v50 = KeGetCurrentPrcb();
    v51 = *((_QWORD *)v50 + 272);
    ++*(_DWORD *)(v51 + 28);
    if ( *(_WORD *)v51 < *(_WORD *)(v51 + 16)
      || (++*(_DWORD *)(v51 + 32),
          v51 = *((_QWORD *)v50 + 273),
          ++*(_DWORD *)(v51 + 28),
          *(_WORD *)v51 < *(_WORD *)(v51 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v51, (PSLIST_ENTRY)v14);
    }
    else
    {
      ++*(_DWORD *)(v51 + 32);
      sub_14042A5E0(v14, v15);
    }
    return (unsigned int)v16;
  }
  if ( !a4 )
  {
    v17 = 0LL;
    CurrentThread = KeGetCurrentThread();
    *((_QWORD *)&v59 + 1) = 0LL;
    v19 = *((_QWORD *)CurrentThread + 23);
    v61 = *(_QWORD *)(v19 + 1088);
    if ( CurrentThread && (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
    {
      v62 = KeGetCurrentThread();
      --*((_WORD *)v62 + 242);
      BugCheckParameter2 = (ULONG_PTR)CurrentThread + 1360;
      ExAcquirePushLockSharedEx((ULONG_PTR)CurrentThread + 1360, 0LL);
      if ( (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
      {
        v17 = (_QWORD *)(*((_QWORD *)CurrentThread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v17, 0x75536553u);
        DWORD2(v59) = *((_DWORD *)CurrentThread + 318) & 3;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      sub_1402AFC00(BugCheckParameter2);
      sub_1402AC800((__int64)v62);
    }
    *(_QWORD *)&v59 = v17;
    v20 = sub_140347920(v19, 0x75536553u);
    v60 = v20;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
        if ( v60 == qword_140D04940 )
          __debugbreak();
        v17 = (_QWORD *)v59;
      }
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17[143] + 284LL));
        if ( (_QWORD)v59 == qword_140D04940 )
          __debugbreak();
      }
    }
    v21 = sub_140347A20(&v59, (_QWORD *)v14, (_QWORD *)(v14 + 224), a5, (PGENERIC_MAPPING)(a2 + 76));
    if ( v21 < 0 )
      goto LABEL_33;
    a4 = v14;
  }
  v22 = *(_BYTE **)(v14 + 192);
  if ( v22 )
    *(_QWORD *)(a4 + 64) = v22;
  else
    v22 = *(_BYTE **)(a4 + 64);
  if ( !v22 )
    goto LABEL_14;
  if ( RtlValidSecurityDescriptor(v22) )
  {
    if ( (v22[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= sub_1406C8634((__int64)v22);
LABEL_14:
    v23 = (PVOID *)(v14 + 448);
    v24 = 0;
    v21 = sub_1407CB6C0(
            *(_QWORD *)(v14 + 168),
            a3,
            a6,
            *(_QWORD *)(v14 + 200),
            0LL,
            a7,
            a4,
            v14 + 448,
            (__int64)&v67,
            (__int64)&Object);
    if ( v21 >= 0 )
    {
      if ( *v23 )
      {
        v45 = (char *)Object - 48;
        v56 = (char *)Object - 48;
        ObfReferenceObject(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v45[-byte_140C25440[v45[26] & 3] + 24]);
        v24 = 0;
      }
      if ( *v23 )
      {
        ExReleasePushLockEx((ULONG_PTR)*v23 + 296, 0LL);
        if ( *(_BYTE *)(v14 + 470) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*v23, 0x554C624Fu);
          *(_BYTE *)(v14 + 470) = 0;
        }
        *v23 = 0LL;
        *(_BYTE *)(v14 + 469) = 0;
        KeLeaveCriticalRegion();
      }
      v25 = Object;
      v26 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v27 = *((_QWORD *)v26 + 4);
        if ( v27 )
        {
          v28 = *(void **)(v27 + 32);
          if ( v28 )
          {
            SeReleaseSecurityDescriptor(v28, *(_BYTE *)(v27 + 16), 1);
            *(_QWORD *)(*((_QWORD *)v26 + 4) + 32LL) = 0LL;
            v27 = *((_QWORD *)v26 + 4);
          }
          v29 = KeGetCurrentPrcb();
          v30 = *((_QWORD *)v29 + 264);
          ++*(_DWORD *)(v30 + 28);
          if ( *(_WORD *)v30 < *(_WORD *)(v30 + 16)
            || (++*(_DWORD *)(v30 + 32),
                v30 = *((_QWORD *)v29 + 265),
                ++*(_DWORD *)(v30 + 28),
                *(_WORD *)v30 < *(_WORD *)(v30 + 16)) )
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v30, (PSLIST_ENTRY)v27);
          }
          else
          {
            ++*(_DWORD *)(v30 + 32);
            sub_14042A5E0(v27, v27);
          }
          *((_QWORD *)v26 + 4) = 0LL;
          v25 = Object;
        }
      }
      else
      {
        v24 = 1;
      }
      if ( (*(_DWORD *)(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)v26[24] ^ (unsigned __int64)BYTE1(v26)]
                      + 72) & *(_DWORD *)(v14 + 160)) != 0 )
      {
        PsDereferenceSiloContext(v25);
        v21 = -1073741811;
      }
      else
      {
        if ( dword_140D3CAD0 )
        {
          *((_QWORD *)&v64 + 1) = ListEntry;
          *(_QWORD *)&v64 = a2 + 16;
          *(_QWORD *)&v65 = *(_QWORD *)(v14 + 168);
          sub_1405F43E0((__int64)&v63);
          v25 = Object;
        }
        if ( dword_140D05010 )
        {
          v52 = (__int64)v25 - 48;
          sub_1405C5EC8((__int64)v25 - 48, 0, 1u, 0x746C6644u);
          sub_1405C5EC8(v52, 1, 1u, 0x6E48624Fu);
          v25 = Object;
        }
        v31 = sub_140731DA0(v24, (char *)v25, 0, a4, 0, *(_DWORD *)(v14 + 160), a3, 0LL, v67, 0LL, &v55);
        if ( v31 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          v21 = v31;
        }
        else
        {
          *a8 = v55;
        }
      }
      v32 = (__int64)v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v56[-byte_140C25440[v56[26] & 3] + 24], 0xFFFFFFFF) == 1 )
          sub_1407A3190(v32);
        ObfDereferenceObject((PVOID)(v32 + 48));
      }
    }
    goto LABEL_33;
  }
  v21 = -1073741703;
LABEL_33:
  if ( a4 == v14 )
  {
    sub_1403478A0(a4);
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      v53 = *(_QWORD *)(a4 + 48);
      if ( v53 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v53 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 48) == qword_140D04940 )
          __debugbreak();
      }
      v49 = *(_QWORD *)(a4 + 32);
      if ( v49 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v49 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 32) == qword_140D04940 )
          __debugbreak();
      }
    }
    v33 = *(_QWORD *)(a4 + 48);
    v34 = *((_QWORD *)KeGetCurrentThread() + 23);
    _m_prefetchw((const void *)(v34 + 1208));
    v35 = *(_QWORD *)(v34 + 1208);
    if ( (v33 ^ v35) >= 0xF )
    {
LABEL_76:
      ObfDereferenceObjectWithTag((PVOID)v33, 0x75536553u);
    }
    else
    {
      while ( 1 )
      {
        v36 = v35;
        v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 1208), v35 + 1, v35);
        if ( v36 == v35 )
          break;
        if ( (v33 ^ v35) >= 0xF )
          goto LABEL_76;
      }
      sub_140347B50(v33 - 48);
    }
    v37 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v37 )
      ObfDereferenceObjectWithTag(v37, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v38 = *(void **)(v14 + 192);
  if ( v38 )
  {
    SeReleaseSecurityDescriptor(v38, *(_BYTE *)(v14 + 176), 1);
    *(_QWORD *)(v14 + 192) = 0LL;
  }
  v39 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v40 = KeGetCurrentPrcb();
      v41 = *((_QWORD *)v40 + 266);
      ++*(_DWORD *)(v41 + 28);
      if ( *(_WORD *)v41 < *(_WORD *)(v41 + 16)
        || (++*(_DWORD *)(v41 + 32),
            v41 = *((_QWORD *)v40 + 267),
            ++*(_DWORD *)(v41 + 28),
            *(_WORD *)v41 < *(_WORD *)(v41 + 16)) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v41, v39);
      }
      else
      {
        ++*(_DWORD *)(v41 + 32);
        sub_14042A5E0(v39, v40);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  sub_140347840();
  v42 = KeGetCurrentPrcb();
  v43 = *((_QWORD *)v42 + 272);
  ++*(_DWORD *)(v43 + 28);
  if ( *(_WORD *)v43 < *(_WORD *)(v43 + 16)
    || (++*(_DWORD *)(v43 + 32),
        v43 = *((_QWORD *)v42 + 273),
        ++*(_DWORD *)(v43 + 28),
        *(_WORD *)v43 < *(_WORD *)(v43 + 16)) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v43, (PSLIST_ENTRY)v14);
  }
  else
  {
    ++*(_DWORD *)(v43 + 32);
    sub_14042A5E0(v14, v42);
  }
  return (unsigned int)v21;
}
