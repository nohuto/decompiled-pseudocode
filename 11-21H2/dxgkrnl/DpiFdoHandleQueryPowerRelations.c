/*
 * XREFs of DpiFdoHandleQueryPowerRelations @ 0x1C021BE54
 * Callers:
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01F2F00 (DpiFdoHandleQueryDeviceRelations.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiFdoHandleQueryPowerRelations(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  __int64 v3; // rdi
  unsigned int v4; // r13d
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  __int64 v8; // r15
  __int64 *v9; // r14
  __int64 *v10; // rdi
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // r12
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // r12
  int v16; // [rsp+80h] [rbp+8h]
  unsigned int v18; // [rsp+90h] [rbp+18h]

  v2 = *(unsigned int **)(a2 + 56);
  v3 = a2;
  v4 = 0;
  v16 = 4;
  v5 = 0;
  v6 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 133LL) || *(_BYTE *)(a1 + 480) )
  {
    v4 = -1073741637;
    goto LABEL_4;
  }
  if ( v2 )
    v5 = *v2;
  AcquireMiniportListMutex();
  v8 = qword_1C01304C8;
  if ( *(_QWORD *)v8 == v8 )
  {
LABEL_43:
    _InterlockedExchange64(&qword_1C01304D8, 0LL);
    KeReleaseMutex(Mutex, 0);
    return v4;
  }
  v6 = v5;
  while ( *(_BYTE *)(v8 + 133) )
  {
LABEL_42:
    v8 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 == qword_1C01304C8 )
      goto LABEL_43;
  }
  KeWaitForSingleObject((PVOID)(v8 + 72), Executive, 0, 0, 0LL);
  v9 = *(__int64 **)(v8 + 56);
  if ( (__int64 *)*v9 == v9 )
  {
LABEL_41:
    KeReleaseMutex((PRKMUTEX)(v8 + 72), 0);
    goto LABEL_42;
  }
  while ( 1 )
  {
    if ( !*((_BYTE *)v9 + 480) && *((_DWORD *)v9 + 4) == 1953656900 )
    {
      if ( *((_DWORD *)v9 + 5) == 2 )
      {
        v10 = v9;
        goto LABEL_20;
      }
      if ( *((_DWORD *)v9 + 5) == 3 )
      {
        v11 = v9[341];
        if ( v11 )
          break;
      }
    }
LABEL_40:
    v9 = (__int64 *)*v9;
    if ( *v9 == *(_QWORD *)(v8 + 56) )
      goto LABEL_41;
  }
  v10 = *(__int64 **)(v11 + 64);
LABEL_20:
  KeEnterCriticalRegion();
  if ( *((_BYTE *)v10 + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10[3] + 64) + 4088LL));
  ExAcquireResourceSharedLite((PERESOURCE)v10[21], 1u);
  v12 = *((_DWORD *)v10 + 59);
  if ( v12 != 2 && (*((_DWORD *)v10 + 60) != 2 || ((v12 - 3) & 0xFFFFFFFC) != 0 || v12 == 4)
    || (v10[488] & 2) == 0
    || (*((_BYTE *)v10 + 3905) & 0x20) != 0 )
  {
    goto LABEL_37;
  }
  if ( v5 >= v6 + 1 )
    goto LABEL_36;
  v13 = v16 + v5;
  v18 = v13;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8 * v13 + 15, 0x74727044u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v2 && v6 )
    {
      memmove(PoolWithTag, v2, 8LL * (v6 - 1) + 16);
      goto LABEL_34;
    }
    *PoolWithTag = 0;
    if ( v2 )
LABEL_34:
      ExFreePoolWithTag(v2, 0);
    v2 = v15;
    *(_QWORD *)(a2 + 56) = v15;
    v5 = v18;
    v16 *= 2;
LABEL_36:
    ObfReferenceObject((PVOID)v9[19]);
    ++v6;
    *(_QWORD *)&v2[2 * (*v2)++ + 2] = v9[19];
LABEL_37:
    if ( *((_BYTE *)v10 + 484) )
      DpiEnableD3Requests(v10[3]);
    ExReleaseResourceLite((PERESOURCE)v10[21]);
    KeLeaveCriticalRegion();
    goto LABEL_40;
  }
  v4 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  if ( *((_BYTE *)v10 + 484) )
    DpiEnableD3Requests(v10[3]);
  ExReleaseResourceLite((PERESOURCE)v10[21]);
  KeLeaveCriticalRegion();
  KeReleaseMutex((PRKMUTEX)(v8 + 72), 0);
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  v3 = a2;
LABEL_4:
  if ( v2 )
  {
    while ( v6 )
      ObfDereferenceObject(*(PVOID *)&v2[2 * --v6 + 2]);
    ExFreePoolWithTag(v2, 0);
  }
  *(_QWORD *)(v3 + 56) = 0LL;
  return v4;
}
