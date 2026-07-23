/*
 * XREFs of sub_140794F30 @ 0x140794F30
 * Callers:
 *     sub_14079781C @ 0x14079781C (sub_14079781C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 *     sub_140796390 @ 0x140796390 (sub_140796390.c)
 *     sub_140796798 @ 0x140796798 (sub_140796798.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_140796BF4 @ 0x140796BF4 (sub_140796BF4.c)
 *     sub_140796D80 @ 0x140796D80 (sub_140796D80.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_140797ACC @ 0x140797ACC (sub_140797ACC.c)
 *     sub_140797B54 @ 0x140797B54 (sub_140797B54.c)
 *     sub_14079809C @ 0x14079809C (sub_14079809C.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409F4FB4 @ 0x1409F4FB4 (sub_1409F4FB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140794F30(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char v7; // r13
  __int64 v8; // r14
  BOOL v9; // r9d
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rbx
  struct _KTHREAD *v13; // rax
  unsigned int v14; // eax
  ULONG_PTR v15; // r15
  int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int8 v20; // di
  unsigned __int16 *v21; // rbx
  int v22; // r8d
  int v23; // r9d
  char v24; // al
  __int64 v25; // rcx
  unsigned __int8 v26; // bl
  __int64 v27; // rdi
  __int64 v28; // rbx
  unsigned int *v29; // r12
  int v30; // eax
  ULONG_PTR v31; // rcx
  REGHANDLE v32; // rdi
  signed __int64 *v34; // r15
  int v35; // r12d
  unsigned int *v36; // r14
  __int16 v37; // ax
  __int64 v38; // rax
  void *v39; // rdi
  unsigned int v40; // r14d
  char v41; // r13
  unsigned __int16 *v42; // r15
  unsigned __int8 i; // r14
  __int64 v44; // rdi
  int v45; // r12d
  __int64 v46; // r9
  ULONG_PTR v47; // rcx
  unsigned __int8 v48; // bl
  __int64 v49; // r14
  __int64 v50; // rdi
  __int16 v51; // ax
  __int64 v52; // r9
  ULONG_PTR v53; // rcx
  void *Pool2; // rax
  ULONGLONG v55; // rax
  __int64 v56; // rax
  _BYTE v57[8]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h]
  unsigned int v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  unsigned int *v62; // [rsp+68h] [rbp-98h]
  ULONG_PTR v63; // [rsp+70h] [rbp-90h]
  _OWORD v64[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v65; // [rsp+A0h] [rbp-60h]
  _OWORD v66[3]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67[3]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]

  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL);
  v9 = (*(_BYTE *)(a1 + 98) & 2) != 0;
  *(_QWORD *)&v65 = a3;
  v62 = a5;
  BugCheckParameter2 = 0LL;
  v61 = 0LL;
  v59 = v8;
  v10 = sub_140796798(v8, a2, 2, v9, (__int64)&BugCheckParameter2);
  if ( !v10 )
  {
    *a5 = 120;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v12 = BugCheckParameter2;
    v63 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 408, 0LL);
    *(_QWORD *)(v12 + 416) = KeGetCurrentThread();
    v13 = KeGetCurrentThread();
    --*((_WORD *)v13 + 242);
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = KeGetCurrentThread();
    if ( *(_QWORD *)(a1 + 40) )
    {
      v10 = 0;
      v15 = BugCheckParameter2;
      goto LABEL_22;
    }
    v14 = sub_140796390(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
    v60 = v14;
    if ( v14 )
      *a5 += v14 + 16;
    if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
    {
      v15 = BugCheckParameter2;
      v10 = -1073741789;
      goto LABEL_22;
    }
    v15 = BugCheckParameter2;
    sub_140796BF4(BugCheckParameter2);
    v17 = (_QWORD *)(v15 + 56);
    *(_QWORD *)(a1 + 40) = v15;
    v18 = *(_QWORD *)(v15 + 56);
    v19 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v18 + 8) != v15 + 56 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(v18 + 8) = v19;
    *v17 = v19;
    if ( !*(_DWORD *)(v15 + 96) )
    {
      v38 = *(_QWORD *)(v15 + 400);
      if ( !v38 || !*(_DWORD *)(v38 + 96) )
      {
        *a5 = 0;
LABEL_21:
        v10 = 0;
LABEL_22:
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
        KeLeaveCriticalRegion();
        v31 = v63 + 408;
        *(_QWORD *)(v63 + 416) = 0LL;
        ExReleasePushLockEx(v31, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_23;
      }
    }
    v20 = 0;
    v21 = (unsigned __int16 *)(v15 + 134);
    do
    {
      if ( *(_DWORD *)(v21 - 3) )
      {
        v34 = (signed __int64 *)sub_140797594(v8, *v21, 0LL);
        if ( (unsigned __int8)sub_140797B54(v34, *(_QWORD *)(a1 + 32) + 40LL) )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)(v34 + 86), 0LL);
          if ( v34[97] )
            v35 = sub_140797ACC(*(_QWORD *)(a1 + 32) + 40LL);
          else
            v35 = -1073741790;
          if ( _InterlockedCompareExchange64(v34 + 86, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v34 + 86);
          sub_1402AFC00((ULONG_PTR)(v34 + 86));
          if ( v35 < 0 )
          {
            sub_1407981E8(v34, 0LL);
          }
          else
          {
            v7 += 1 << v20;
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v34[137] + 448) + 8LL * *(unsigned int *)v34),
              1u);
          }
          v8 = v59;
        }
        else
        {
          sub_1407981E8(v34, 0LL);
        }
      }
      ++v20;
      v21 += 16;
    }
    while ( v20 < 8u );
    v57[0] = v7;
    LOBYTE(v16) = 2;
    sub_140796D80(a1, 0, v16, 0, (__int64)v57);
    v15 = BugCheckParameter2;
    v24 = v7 & v57[0];
    *(_BYTE *)(a1 + 101) = v7 & v57[0];
    v25 = *(_QWORD *)(v15 + 400);
    if ( v25 )
    {
      v41 = 0;
      v42 = (unsigned __int16 *)(v25 + 134);
      for ( i = 0; i < 8u; ++i )
      {
        if ( *(_DWORD *)(v42 - 3) )
        {
          v44 = sub_140797594(qword_140D05008, *v42, 0LL);
          if ( (unsigned __int8)sub_140797B54(v44, *(_QWORD *)(a1 + 32) + 40LL) )
          {
            ExAcquirePushLockSharedEx(v44 + 688, 0LL);
            if ( *(_QWORD *)(v44 + 776) )
              v45 = sub_140797ACC(*(_QWORD *)(a1 + 32) + 40LL);
            else
              v45 = -1073741790;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 688), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v44 + 688));
            sub_1402AFC00(v44 + 688);
            if ( v45 >= 0 )
              v41 += 1 << i;
          }
          sub_1407981E8(v44, 0LL);
        }
        v42 += 16;
      }
      v57[0] = v41;
      LOBYTE(v23) = 1;
      LOBYTE(v22) = 2;
      sub_140796D80(a1, 0, v22, v23, (__int64)v57);
      v15 = BugCheckParameter2;
      v8 = v59;
      *(_BYTE *)(a1 + 103) = v41 & v57[0];
      v24 = *(_BYTE *)(a1 + 101);
    }
    if ( v24 )
    {
      v26 = 0;
      v27 = 0LL;
      do
      {
        if ( ((unsigned __int8)(1 << v26) & *(_BYTE *)(a1 + 101)) != 0 )
        {
          v36 = (unsigned int *)sub_140797594(v8, *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v27 + 134), 0LL);
          v37 = *(_WORD *)(a1 + 98);
          if ( (v37 & 0x20) != 0 || (v36[204] & 0x2000000) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              sub_140758DB8((__int64)v36, 0, a1);
            }
            else if ( sub_140347810((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 1112LL)) )
            {
              v47 = *(_QWORD *)(a1 + 80);
              memset(v66, 0, sizeof(v66));
              sub_14030D5C0(v47, 0LL, (__int64)v66, v46);
              sub_140758DB8((__int64)v36, 1, a1);
              sub_1402D0930((__int64)v66, 0LL);
              sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 1112LL));
            }
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v36 + 137) + 448LL) + 8LL * *v36),
            1u);
        }
        v8 = v59;
        ++v26;
        v27 += 32LL;
      }
      while ( v26 < 8u );
      if ( !*(_BYTE *)(a1 + 103) )
        goto LABEL_18;
    }
    else if ( !*(_BYTE *)(a1 + 103) )
    {
      v10 = 0;
      *v62 = 0;
      goto LABEL_22;
    }
    v48 = 0;
    v49 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v48) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v50 = sub_140797594(
                qword_140D05008,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v49 + 134),
                0LL);
        v51 = *(_WORD *)(a1 + 98);
        if ( (v51 & 0x20) != 0 || (*(_DWORD *)(v50 + 816) & 0x2000000) != 0 )
        {
          if ( (v51 & 1) != 0 )
          {
            sub_140758DB8(v50, 0, a1);
          }
          else if ( sub_140347810((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 1112LL)) )
          {
            v53 = *(_QWORD *)(a1 + 80);
            memset(v67, 0, sizeof(v67));
            sub_14030D5C0(v53, 0LL, (__int64)v67, v52);
            sub_140758DB8(v50, 1, a1);
            sub_1402D0930((__int64)v67, 0LL);
            sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 80) + 1112LL));
          }
        }
        sub_1407981E8(v50, 0LL);
      }
      ++v48;
      v49 += 32LL;
    }
    while ( v48 < 8u );
LABEL_18:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      if ( *(_QWORD *)(a1 + 88) )
      {
        v39 = 0LL;
        v65 = 0LL;
        memset(v64, 0, sizeof(v64));
        sub_14079809C(a1, v64);
        v40 = v60;
        if ( v60 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, v60, 1182233669LL);
          v39 = Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)&v65 = Pool2;
            *((_QWORD *)&v65 + 1) = v40 | 0x8000000000000000uLL;
            sub_1409F4FB4(Pool2);
          }
        }
        sub_14042A5E0(&xmmword_140010DE8, 1LL);
        if ( v39 )
          ExFreePoolWithTag(v39, 0);
      }
    }
    else
    {
      v28 = v65;
      sub_14079809C(a1, v65 + 72);
      v29 = v62;
      *v62 = 120;
      v30 = sub_140796390(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
      if ( v30 )
      {
        *v29 = v30 + 136;
        *(_DWORD *)(v28 + 132) = 0x80000000;
        *(_DWORD *)(v28 + 128) = v30;
        *(_QWORD *)(v28 + 120) = 136LL;
        sub_1409F4FB4((void *)(v28 + 136));
        *(_DWORD *)(v28 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v28 + 116) = 0;
      }
    }
    goto LABEL_21;
  }
  v15 = BugCheckParameter2;
LABEL_23:
  if ( v15 )
    sub_140796B04((PVOID)v15);
  if ( v10 >= 0 )
  {
    v32 = qword_140C15FA8;
    if ( EtwEventEnabled(qword_140C15FA8, &stru_140010DC8) )
    {
      v55 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v55;
      v56 = *(_QWORD *)(a1 + 40);
      v70 = 16LL;
      v69 = v56 + 40;
      EtwWrite(v32, &stru_140010DC8, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)v10;
}
