/*
 * XREFs of sub_140881DF2 @ 0x140881DF2
 * Callers:
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140881DF2(__int64 a1, PSECURITY_DESCRIPTOR *a2, char a3)
{
  __int64 v7; // rax
  _QWORD *v8; // rdi
  PSECURITY_DESCRIPTOR v9; // rbx
  size_t v10; // r14
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // rcx

  if ( !RtlValidSecurityDescriptor(*a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
  {
    v7 = byte_140C25440[*(_BYTE *)(a1 + 26) & 0x3F];
    v8 = (_QWORD *)(a1 - v7);
    if ( a1 != v7 && !*v8 )
    {
      v9 = *a2;
      if ( a3 )
      {
        *a2 = 0LL;
      }
      else
      {
        v10 = RtlLengthSecurityDescriptor(*a2);
        Pool2 = (void *)ExAllocatePool2(256LL, v10, 1229021775LL);
        v9 = Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        memmove(Pool2, *a2, v10);
      }
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
      v13 = a1 + 16;
      if ( *v8 )
      {
        ExReleasePushLockEx(v13, 0LL);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        *v8 = v9;
        ExReleasePushLockEx(v13, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  return 0LL;
}
