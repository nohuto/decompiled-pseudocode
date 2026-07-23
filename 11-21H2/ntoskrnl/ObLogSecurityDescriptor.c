/*
 * XREFs of ObLogSecurityDescriptor @ 0x140724E60
 * Callers:
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_1406BBA30 @ 0x1406BBA30 (sub_1406BBA30.c)
 *     sub_1406DB04C @ 0x1406DB04C (sub_1406DB04C.c)
 *     sub_1406EF8B8 @ 0x1406EF8B8 (sub_1406EF8B8.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     ObSetSecurityDescriptorInfo @ 0x1407255D0 (ObSetSecurityDescriptorInfo.c)
 *     sub_140792BF0 @ 0x140792BF0 (sub_140792BF0.c)
 *     sub_140825158 @ 0x140825158 (sub_140825158.c)
 *     sub_1409EB878 @ 0x1409EB878 (sub_1409EB878.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(char *Buf1, _QWORD *a2, unsigned int a3)
{
  size_t v4; // r13
  char *v5; // r10
  unsigned __int64 v6; // rbx
  char *i; // r9
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Pool2; // r15
  signed __int64 *v11; // rsi
  volatile signed __int64 *v12; // r14
  signed __int64 v13; // rdi

  v4 = RtlLengthSecurityDescriptor(Buf1);
  v5 = &Buf1[v4 & 0xFFFFFFFFFFFFFFF8uLL];
  v6 = 0LL;
  for ( i = Buf1; i < v5; v6 = __ROL8__(v8, 3) )
  {
    v8 = *(_QWORD *)i ^ v6;
    i += 16;
  }
  CurrentThread = KeGetCurrentThread();
  Pool2 = 0LL;
  v11 = (signed __int64 *)((char *)&unk_140D33BC0 + 16 * (unsigned __int8)v6);
  --*((_WORD *)CurrentThread + 242);
LABEL_4:
  v12 = v11 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)v11, 0LL);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 )
      break;
LABEL_9:
    if ( !Pool2 )
    {
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v11);
      sub_1402AFC00((ULONG_PTR)v11);
      sub_1402AC800((__int64)CurrentThread);
      if ( (int)v4 + 40 < (unsigned int)v4 )
        return 3221225626LL;
      Pool2 = (_QWORD *)ExAllocatePool2(264LL, (unsigned int)(v4 + 40), 1666409039LL);
      if ( !Pool2 )
        return 3221225626LL;
      Pool2[1] = a3;
      Pool2[2] = v6;
      *((_DWORD *)Pool2 + 6) = v4;
      memmove(Pool2 + 4, Buf1, v4);
      --*((_WORD *)CurrentThread + 242);
      goto LABEL_4;
    }
    *Pool2 = v13;
    v12 = (volatile signed __int64 *)_InterlockedCompareExchange64(v12, (signed __int64)Pool2, v13);
    if ( (volatile signed __int64 *)v13 == v12 )
    {
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v11);
      sub_1402AFC00((ULONG_PTR)v11);
      sub_1402AC800((__int64)CurrentThread);
      *a2 = Pool2 + 4;
      return 0LL;
    }
  }
  while ( *(_QWORD *)(v13 + 16) != v6 )
  {
    if ( *(_QWORD *)(v13 + 16) > v6 )
      goto LABEL_9;
LABEL_8:
    v12 = (volatile signed __int64 *)v13;
    v13 = *(_QWORD *)v13;
    if ( !v13 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v13 + 24) != (_DWORD)v4 || memcmp(Buf1, (const void *)(v13 + 32), v4) )
    goto LABEL_8;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 8), a3) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  sub_1402AFC00((ULONG_PTR)v11);
  sub_1402AC800((__int64)CurrentThread);
  *a2 = v13 + 32;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x6353624Fu);
  return 0LL;
}
