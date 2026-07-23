/*
 * XREFs of sub_140725080 @ 0x140725080
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140722584 @ 0x140722584 (sub_140722584.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1407255D0 (ObSetSecurityDescriptorInfo.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140725080(
        void *a1,
        int a2,
        DWORD *a3,
        char *a4,
        ULONG *a5,
        __int64 *a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  int v9; // edx
  int v10; // edx
  unsigned int v11; // esi
  unsigned __int64 v12; // rbx
  char *v13; // rcx
  char *v14; // rdx
  __int64 v15; // rbx
  struct _KTHREAD *v16; // r13
  volatile signed __int64 *v17; // r14
  volatile signed __int64 *v18; // r15
  signed __int64 v19; // rdi
  __int64 Pool2; // rax
  __int64 v21; // rbx
  char v22; // di
  unsigned int v23; // edi
  volatile signed __int64 *v24; // rbx
  signed __int64 v25; // rax
  signed __int64 v26; // rcx
  bool v27; // zf
  signed __int64 v28; // rtt
  signed __int64 v30; // rdi
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v32; // rbp
  volatile signed __int64 *v33; // r14
  signed __int64 v34; // rax
  volatile signed __int64 *i; // rcx
  _QWORD *P; // [rsp+30h] [rbp-48h]
  ULONG Size; // [rsp+88h] [rbp+10h]

  if ( !a2 )
    return ObSetSecurityDescriptorInfo(a1, a3, a4, a7, a8);
  v9 = a2 - 1;
  if ( !v9 )
    return sub_140722584((__int64)a1, a3, a4, a5);
  v10 = v9 - 1;
  if ( !v10 )
  {
    v21 = *a6;
    v22 = *a6;
    *a6 = 0LL;
    v23 = (v22 & 0xF) + 1;
    v24 = (volatile signed __int64 *)((v21 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw((const void *)(v24 + 1));
    v25 = *((_QWORD *)v24 + 1);
    v26 = v25 - v23;
    v27 = v25 == v23;
    if ( v26 <= 0 )
    {
LABEL_40:
      if ( !v27 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v32 = (volatile signed __int64 *)((char *)&unk_140D33BC0 + 16 * (unsigned __int8)*((_DWORD *)v24 + 4));
      --*((_WORD *)CurrentThread + 242);
      v33 = v32 + 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v32, 0LL);
      v34 = _InterlockedExchangeAdd64(v24 + 1, -v23) - v23;
      if ( v34 <= 0 )
      {
        if ( v34 )
          __fastfail(0xEu);
        for ( i = (volatile signed __int64 *)*v33; i != v24; i = (volatile signed __int64 *)*i )
          v33 = i;
        *v33 = *v24;
        if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v32);
        sub_1402AFC00((ULONG_PTR)v32);
        sub_1402AC800((__int64)CurrentThread);
        ExFreePoolWithTag((PVOID)v24, 0x6353624Fu);
        return 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v32);
      sub_1402AFC00((ULONG_PTR)v32);
      sub_1402AC800((__int64)CurrentThread);
    }
    else
    {
      while ( 1 )
      {
        v28 = v25;
        v25 = _InterlockedCompareExchange64(v24 + 1, v26, v25);
        if ( v28 == v25 )
          break;
        v26 = v25 - v23;
        v27 = v25 == v23;
        if ( v26 <= 0 )
          goto LABEL_40;
      }
    }
    return 0LL;
  }
  if ( v10 != 1 )
    KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
  if ( !a4 )
  {
    v11 = 0;
    *((_QWORD *)a1 - 1) = 0LL;
    return v11;
  }
  v11 = 0;
  Size = RtlLengthSecurityDescriptor(a4);
  v12 = 0LL;
  v13 = a4;
  v14 = &a4[Size & 0xFFFFFFF8];
  if ( a4 < v14 )
  {
    do
    {
      v15 = *(_QWORD *)v13 ^ v12;
      v13 += 16;
      v12 = __ROL8__(v15, 3);
    }
    while ( v13 < v14 );
  }
  v16 = KeGetCurrentThread();
  v17 = (volatile signed __int64 *)((char *)&unk_140D33BC0 + 16 * (unsigned __int8)v12);
  P = 0LL;
  --*((_WORD *)v16 + 242);
  v18 = v17 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)v17, 0LL);
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 )
      break;
LABEL_13:
    if ( P )
    {
      *P = v19;
      v18 = (volatile signed __int64 *)_InterlockedCompareExchange64(v18, (signed __int64)P, v19);
      if ( (volatile signed __int64 *)v19 == v18 )
      {
        if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&unk_140D33BC0 + 2 * (unsigned __int8)v12);
        sub_1402AFC00((ULONG_PTR)&unk_140D33BC0 + 16 * (unsigned __int8)v12);
        sub_1402AC800((__int64)v16);
        v19 = (signed __int64)P;
        goto LABEL_31;
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&unk_140D33BC0 + 2 * (unsigned __int8)v12);
      sub_1402AFC00((ULONG_PTR)&unk_140D33BC0 + 16 * (unsigned __int8)v12);
      sub_1402AC800((__int64)v16);
      if ( Size + 40 < Size )
        return (unsigned int)-1073741670;
      Pool2 = ExAllocatePool2(264LL, Size + 40, 1666409039LL);
      P = (_QWORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v12;
      *(_DWORD *)(Pool2 + 24) = Size;
      memmove((void *)(Pool2 + 32), a4, Size);
      --*((_WORD *)v16 + 242);
      v18 = v17 + 1;
      ExAcquirePushLockSharedEx((ULONG_PTR)&unk_140D33BC0 + 16 * (unsigned __int8)v12, 0LL);
    }
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v19 + 16) != v12 )
    {
      if ( *(_QWORD *)(v19 + 16) > v12 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(v19 + 24) == Size && !memcmp(a4, (const void *)(v19 + 32), Size) )
      break;
LABEL_12:
    v18 = (volatile signed __int64 *)v19;
    v19 = *(_QWORD *)v19;
    if ( !v19 )
      goto LABEL_13;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 8), 0x10uLL) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&unk_140D33BC0 + 2 * (unsigned __int8)v12);
  sub_1402AFC00((ULONG_PTR)&unk_140D33BC0 + 16 * (unsigned __int8)v12);
  sub_1402AC800((__int64)v16);
  if ( P )
    ExFreePoolWithTag(P, 0x6353624Fu);
LABEL_31:
  ExFreePoolWithTag(a4, 0);
  v30 = v19 + 32;
  if ( v30 )
    *((_QWORD *)a1 - 1) = v30 + 15;
  else
    *((_QWORD *)a1 - 1) = 0LL;
  return v11;
}
