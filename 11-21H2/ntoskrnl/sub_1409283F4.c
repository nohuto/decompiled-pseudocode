/*
 * XREFs of sub_1409283F4 @ 0x1409283F4
 * Callers:
 *     sub_1405400A4 @ 0x1405400A4 (sub_1405400A4.c)
 *     sub_140927394 @ 0x140927394 (sub_140927394.c)
 *     sub_140927D44 @ 0x140927D44 (sub_140927D44.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409283F4(_QWORD *Object, char *a2, __int64 a3, int a4, PRKEVENT a5)
{
  __int64 v10; // r12
  _OWORD *PoolWithQuotaTag; // rax
  _OWORD *v12; // r14
  int v14; // ecx
  _OWORD *v15; // rbx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // xmm1
  int v20; // esi
  struct _FAST_MUTEX *v21; // r12
  struct _LIST_ENTRY *Blink; // rcx
  __int128 v23; // xmm1
  int v24; // [rsp+30h] [rbp-1C8h]
  _OWORD v25[23]; // [rsp+40h] [rbp-1B8h] BYREF

  memset(v25, 0, 0x168uLL);
  v10 = 2LL;
  v24 = a4 & 2;
  if ( (a4 & 2) == 0 )
  {
    HIDWORD(v25[4]) = a4;
    v12 = v25;
    ExAcquireFastMutex(&stru_140C48CC0);
    v14 = *(_DWORD *)(a3 + 40);
    a5 = (PRKEVENT)Object[175];
    if ( (unsigned int)(v14 - 1) <= 1 && (a2[1376] & 0x40) != 0 )
      a5 = 0LL;
    if ( v14 == 5 )
    {
      if ( ((unsigned __int8)a4 & (unsigned __int8)a2[1376] & 0x40) == 0 )
      {
LABEL_14:
        KeInitializeEvent((PRKEVENT)&v25[1], SynchronizationEvent, 0);
        goto LABEL_15;
      }
      a5 = 0LL;
    }
    if ( (unsigned int)(v14 - 3) <= 1 && a2[1376] < 0 )
      a5 = 0LL;
    goto LABEL_14;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x168uLL, 0x45676244u);
  v12 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  *((_DWORD *)PoolWithQuotaTag + 19) = a4 | 4;
  ObfReferenceObjectWithTag(Object, 0x4F676244u);
  ObfReferenceObjectWithTag(a2, 0x4F676244u);
  *((_QWORD *)v12 + 10) = KeGetCurrentThread();
LABEL_15:
  v15 = (_OWORD *)((char *)v12 + 88);
  *((_QWORD *)v12 + 7) = Object;
  v16 = (_OWORD *)((char *)v12 + 88);
  *((_QWORD *)v12 + 8) = a2;
  v17 = (_OWORD *)a3;
  v18 = 2LL;
  do
  {
    *v16 = *v17;
    v16[1] = v17[1];
    v16[2] = v17[2];
    v16[3] = v17[3];
    v16[4] = v17[4];
    v16[5] = v17[5];
    v16[6] = v17[6];
    v16 += 8;
    v19 = v17[7];
    v17 += 8;
    *(v16 - 1) = v19;
    --v18;
  }
  while ( v18 );
  *v16 = *v17;
  *(_OWORD *)((char *)v12 + 40) = *(_OWORD *)(a2 + 1224);
  if ( a5 )
  {
    v21 = (struct _FAST_MUTEX *)&a5[1];
    ExAcquireFastMutex((PFAST_MUTEX)&a5[1]);
    if ( (a5[4].Header.LockNV & 1) != 0 )
    {
      v20 = -1073740972;
    }
    else
    {
      Blink = a5[3].Header.WaitListHead.Blink;
      if ( Blink->Flink != &a5[3].Header.WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v12 = (char *)a5 + 80;
      *((_QWORD *)v12 + 1) = Blink;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
      a5[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v12;
      if ( !v24 )
        KeSetEvent(a5, 0, 0);
      v20 = 0;
    }
    KeReleaseGuardedMutex(v21);
    v10 = 2LL;
  }
  else
  {
    v20 = -1073740973;
  }
  if ( v24 )
  {
    if ( v20 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      ObfDereferenceObjectWithTag(a2, 0x4F676244u);
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    KeReleaseGuardedMutex(&stru_140C48CC0);
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject(v12 + 1, Executive, 0, 0, 0LL);
      v20 = *((_DWORD *)v12 + 18);
      do
      {
        *(_OWORD *)a3 = *v15;
        *(_OWORD *)(a3 + 16) = v15[1];
        *(_OWORD *)(a3 + 32) = v15[2];
        *(_OWORD *)(a3 + 48) = v15[3];
        *(_OWORD *)(a3 + 64) = v15[4];
        *(_OWORD *)(a3 + 80) = v15[5];
        *(_OWORD *)(a3 + 96) = v15[6];
        a3 += 128LL;
        v23 = v15[7];
        v15 += 8;
        *(_OWORD *)(a3 - 16) = v23;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)a3 = *v15;
    }
  }
  return (unsigned int)v20;
}
