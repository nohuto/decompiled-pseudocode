/*
 * XREFs of ExAllocateCacheAwarePushLock @ 0x140389430
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreeCacheAwarePushLock @ 0x14063C290 (ExFreeCacheAwarePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

ULONG_PTR __fastcall ExAllocateCacheAwarePushLock(char a1)
{
  char v1; // r12
  int v2; // r13d
  POOL_TYPE v3; // esi
  PVOID PoolWithTag; // rax
  ULONG_PTR v5; // rbx
  char *v6; // rax
  char *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rbp
  ULONG_PTR v10; // rdi
  unsigned int v12; // eax
  unsigned int v13; // r15d
  struct _KPRCB *v14; // rax
  USHORT v15; // cx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  unsigned int v18; // [rsp+30h] [rbp-68h]
  _QWORD *v19; // [rsp+38h] [rbp-60h]
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0;
  v2 = a1 & 1;
  Affinity = 0LL;
  v3 = v2 != 0 ? NonPagedPoolNx : PagedPool;
  PreviousAffinity = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x100uLL, 0x70636C50u);
  v5 = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x100uLL);
  if ( word_140D05000 == 1 )
  {
    v6 = (char *)ExAllocatePoolWithTag(v3, 0x1000uLL, 0x6C636C50u);
    v7 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x1000uLL);
      v8 = (_QWORD *)v5;
      v9 = 32LL;
      do
      {
        *(_QWORD *)v7 = 0LL;
        v7[8] = 1;
        *((_QWORD *)v7 + 2) = v5;
        *v8 = v7;
        v7 += 128;
        ++v8;
        --v9;
      }
      while ( v9 );
      return v5;
    }
    v10 = 0LL;
LABEL_28:
    ExFreeCacheAwarePushLock(v5);
    return v10;
  }
  v12 = dword_140D06884;
  v13 = 0;
  v18 = dword_140D06884;
  v19 = (_QWORD *)v5;
  while ( 1 )
  {
    v14 = v13 >= v12 ? KeGetCurrentPrcb() : (struct _KPRCB *)sub_140348800(v13);
    v15 = *(_WORD *)(*((_QWORD *)v14 + 24) + 138LL);
    if ( v2 )
    {
      v16 = (_QWORD *)sub_140349710(NonPagedPoolNx, 0x80uLL, 1818455120LL, v15, 0);
    }
    else
    {
      KeQueryNodeActiveAffinity(v15, &Affinity, 0LL);
      if ( v1 )
      {
        KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      }
      else
      {
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v1 = 1;
      }
      v16 = ExAllocatePoolWithTag(v3, 0x80uLL, 0x6C636C50u);
    }
    v17 = v16;
    if ( !v16 )
      break;
    memset(v16, 0, 0x80uLL);
    ++v13;
    v17[2] = v5;
    *v19++ = v17;
    if ( v13 >= 0x20 )
    {
      v10 = v5;
      v5 = 0LL;
      goto LABEL_25;
    }
    v12 = v18;
  }
  v10 = 0LL;
LABEL_25:
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v5 )
    goto LABEL_28;
  return v10;
}
