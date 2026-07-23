/*
 * XREFs of sub_14063DABC @ 0x14063DABC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     sub_14036AAF4 @ 0x14036AAF4 (sub_14036AAF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056DF08 @ 0x14056DF08 (sub_14056DF08.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14063DABC(_QWORD *a1, _DWORD *a2)
{
  ULONG_PTR BugCheckParameter4; // r13
  SIZE_T v3; // r15
  void *v4; // r12
  struct _KTHREAD *v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // rdi
  __int64 v12; // rcx
  char *PoolWithQuotaTag; // rax
  int v14; // edi
  char *v15; // r14
  __int64 *v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  KIRQL v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rcx
  ULONG_PTR v31; // r13
  ULONG_PTR *v32; // r14
  struct _KTHREAD *v33; // rsi
  __int64 v34; // rbx
  unsigned int v35; // ecx
  int v36; // r8d
  int v38; // [rsp+30h] [rbp-48h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h] BYREF
  PVOID v40; // [rsp+40h] [rbp-38h]
  __int64 **v41; // [rsp+48h] [rbp-30h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-28h]
  __int64 v43; // [rsp+58h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-18h]
  KIRQL v47; // [rsp+D0h] [rbp+58h]

  BugCheckParameter4 = 0LL;
  v39 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  v7 = *((unsigned __int8 *)v5 + 792);
  v8 = -1;
  if ( *((_BYTE *)v5 + 792) || (v7 = sub_14029F6A8((__int64)&qword_140C11720, (__int64)v5)) != 0 )
  {
    _BitScanForward((unsigned int *)&v9, v7);
    *((_BYTE *)v5 + 792) = v7 & ~(1 << v9);
    _enable();
    v6 = (__int64)v5 + 96 * v9 + 1696;
    if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 >= 0x8000000000LL )
      v10 = -1;
    else
      v10 = sub_140287F30(*((_QWORD *)v5 + 23));
    *(_DWORD *)(v6 + 8) = v10;
    *(_QWORD *)v6 = (unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11720, 0LL) )
    sub_14029F120(&qword_140C11720, v6, (__int64)&qword_140C11720);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v11 = (__int64 *)qword_140C11730;
  if ( (__int64 *)qword_140C11730 != &qword_140C11730 )
  {
    do
    {
      v12 = *(v11 - 1);
      if ( v12 )
      {
        v39 = 0LL;
        sub_14036AAF4(v12, 0LL, &v39);
        v3 = (v39 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v3 > 0xFFFFFFFF )
        {
          v14 = -1073741789;
          goto LABEL_42;
        }
      }
      v11 = (__int64 *)*v11;
    }
    while ( v11 != &qword_140C11730 );
    if ( v3 )
      goto LABEL_17;
  }
  v3 = 64LL;
LABEL_17:
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v3, 0x734C6B57u);
  v40 = PoolWithQuotaTag;
  v4 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v14 = 0;
    v15 = PoolWithQuotaTag;
    memset(PoolWithQuotaTag, 0, v3);
    v16 = (__int64 *)qword_140C11730;
    v17 = 0LL;
    v39 = 0LL;
    v18 = v3;
    while ( 1 )
    {
      v41 = (__int64 **)v16;
      if ( v16 == &qword_140C11730 )
        break;
      if ( v18 < 0x40 )
        goto LABEL_54;
      v19 = (__int64)(v16 - 33);
      SpinLock = (PKSPIN_LOCK)(v16 - 25);
      v20 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v24 = *(_DWORD *)(v19 + 240);
      v47 = v20;
      v43 = *(_QWORD *)(v19 + 256);
      v38 = v24;
      if ( v43 )
        BugCheckParameter4 = sub_14056DF08(v19, v21, v22, v23);
      else
        BugCheckParameter4 = 0LL;
      KeReleaseSpinLockFromDpcLevel(SpinLock);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v47 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v27 = *((_QWORD *)CurrentPrcb + 4375);
            v28 = ~(unsigned __int16)(-1LL << (v47 + 1));
            v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= v28;
            if ( v29 )
              sub_140418E4C((__int64)CurrentPrcb);
            v17 = v39;
          }
        }
      }
      __writecr8(v47);
      if ( BugCheckParameter4 )
      {
        v30 = v43;
        v31 = BugCheckParameter4 - MEMORY[0xFFFFF78000000008];
        *((_DWORD *)v15 + 4) = v38;
        v39 = v18 - 24;
        *((_QWORD *)v15 + 1) = v31;
        BugCheckParameter4 = 0LL;
        v14 = sub_14036AAF4(v30, (unsigned __int64 *)v15 + 3, &v39);
        if ( v14 < 0 )
          goto LABEL_41;
        v17 = (v39 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v39 = v17;
        if ( v18 < v17 )
        {
LABEL_54:
          v14 = -1073741789;
          goto LABEL_41;
        }
        v18 -= v17;
        *(_QWORD *)v15 = v17;
        v15 += v17;
      }
      v16 = *v41;
    }
    v32 = (ULONG_PTR *)&v15[-v17];
    *v32 = BugCheckParameter4;
    if ( !v17 )
      v32[1] = BugCheckParameter4;
LABEL_41:
    v4 = v40;
    v8 = -1;
  }
  else
  {
    v14 = -1073741670;
  }
LABEL_42:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11720, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C11720);
  v33 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 < 0x8000000000LL )
    v8 = sub_140287F30(*((_QWORD *)v33 + 23));
  _disable();
  v34 = (__int64)v33 + 1696;
  v35 = BugCheckParameter4;
  while ( (*(_QWORD *)v34 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL)
       || *(_BYTE *)(v34 + 18) == (_BYTE)BugCheckParameter4
       || (*(_DWORD *)v34 & 1) != 0
       || *(_DWORD *)(v34 + 8) != v8 )
  {
    ++v35;
    v34 += 96LL;
    if ( v35 >= 6 )
      goto LABEL_52;
  }
  *(_BYTE *)(v34 + 18) = BugCheckParameter4;
  if ( !v34 )
  {
LABEL_52:
    if ( (*((_DWORD *)v33 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, (ULONG_PTR)&qword_140C11720, v8, BugCheckParameter4);
    _enable();
    goto LABEL_61;
  }
  if ( *(__int64 *)v34 < 0 )
  {
    *(_BYTE *)v34 |= 2u;
    _enable();
    sub_14034EE30(v34);
    _disable();
  }
  v36 = *(_DWORD *)(v34 + 88);
  *(_DWORD *)(v34 + 88) = BugCheckParameter4;
  *(_BYTE *)(v34 + 17) = BugCheckParameter4;
  *(_QWORD *)v34 = BugCheckParameter4;
  *((_BYTE *)v33 + 792) |= 1 << *(_BYTE *)(v34 + 16);
  _enable();
  if ( v36 )
    sub_14022B568((ULONG_PTR)v33, (__int64)&qword_140C11720, v36);
LABEL_61:
  sub_1402AC800((__int64)CurrentThread);
  if ( v14 >= 0 )
  {
    *a1 = v4;
    *a2 = v3;
  }
  else if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x734C6B57u);
  }
  return (unsigned int)v14;
}
