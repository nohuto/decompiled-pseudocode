/*
 * XREFs of sub_14092B264 @ 0x14092B264
 * Callers:
 *     sub_140540684 @ 0x140540684 (sub_140540684.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14092B264(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // rax
  void *v9; // rdi
  volatile signed __int32 *v11; // r14
  void *v12; // rbp
  unsigned int v13; // ebx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-28h] BYREF

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x704E534Bu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *((_QWORD *)PoolWithTag + 13) = a2;
  v11 = (volatile signed __int32 *)(PoolWithTag + 88);
  *((_DWORD *)PoolWithTag + 22) = 0;
  v12 = PoolWithTag + 120;
  *((_QWORD *)PoolWithTag + 12) = a1;
  *((_QWORD *)PoolWithTag + 14) = a4;
  KeInitializeEvent((PRKEVENT)PoolWithTag + 5, NotificationEvent, 0);
  KeInitializeApc((__int64)v9, a3, 0, (__int64)sub_14092B4E0, 0LL, 0LL, 0, 0LL);
  if ( KeInsertQueueApc((__int64)v9, (__int64)v9, (__int64)v11, 2) )
  {
    Timeout.QuadPart = -50000000LL;
    while ( 1 )
    {
      v13 = KeWaitForSingleObject(v12, Executive, 0, 0, &Timeout);
      if ( !v13 )
        break;
      if ( v13 == 258 )
        *(_DWORD *)(a4 + 4) |= 0x8000u;
      if ( !_InterlockedCompareExchange(v11, 1, 0) )
        return v13;
    }
    ExFreePoolWithTag(v9, 0x704E534Bu);
    return v13;
  }
  else
  {
    ExFreePoolWithTag(v9, 0x704E534Bu);
    *(_DWORD *)(a4 + 4) |= 0x4000u;
    return 3221225473LL;
  }
}
