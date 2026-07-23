/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x14095B178
 * Callers:
 *     PiDmListRemoveList @ 0x14095AF6C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14095B0BC (PiDmListRemoveObject.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031EC60 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x14086BEC8 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, char *a3, __int64 a4, char *a5)
{
  __int64 v7; // rcx
  char *v8; // r10
  __int64 *v9; // rcx
  int v10; // edx
  __int64 v11; // r8
  char v12; // bl
  __int64 **v13; // rax
  int v14; // eax
  char *v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = 5LL * a1;
  v8 = &a3[PiDmListDefs[v7 + 1]];
  v9 = (__int64 *)(a4 + PiDmListDefs[v7 + 3]);
  v10 = 0;
  v11 = *v9;
  if ( *v9 )
  {
    v12 = 1;
    if ( *(__int64 **)(v11 + 8) != v9 || (v13 = (__int64 **)v9[1], *v13 != v9) )
      __fastfail(3u);
    *v13 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v13;
    v14 = *((_DWORD *)v8 + 4);
    if ( v14 )
    {
      v10 = v14 - 1;
    }
    else
    {
      v15 = *(char **)v8;
      while ( v15 != v8 )
      {
        v15 = *(char **)v15;
        ++v10;
      }
    }
    *((_DWORD *)v8 + 4) = v10;
    *v9 = 0LL;
    v9[1] = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)a2, 1u);
    if ( !--*((_DWORD *)Buffer + 3) )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
    ExReleaseResourceLite((PERESOURCE)a2);
    KeLeaveCriticalRegion();
    PiDmListUpdateAggregationCountWorker((__int64)Buffer, a4, -1);
  }
  else
  {
    v12 = 0;
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}
