/*
 * XREFs of sub_1409F1A68 @ 0x1409F1A68
 * Callers:
 *     NotifyRoutine @ 0x1409F1600 (NotifyRoutine.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409F1A28 @ 0x1409F1A28 (sub_1409F1A28.c)
 *     sub_1409F1FF4 @ 0x1409F1FF4 (sub_1409F1FF4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409F1A68(__int64 a1, PVOID *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *Pool2; // r15
  volatile signed __int64 *v10; // rsi
  int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ebp
  struct _KTHREAD *v17; // rax
  void *v18; // rax
  unsigned int v19; // ebp
  _QWORD *v20; // r14

  CurrentThread = KeGetCurrentThread();
  Pool2 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v10 = (volatile signed __int64 *)(a1 + 8);
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( !*(_QWORD *)a1 )
  {
    ObfReferenceObject(*a2);
    *(_QWORD *)a1 = a2;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x110000) != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = sub_1409F1FF4(a1, a4, *(_QWORD *)(a3 + 40));
      v13 = *(_DWORD *)(a1 + 36);
      v14 = v12;
      v15 = *(_DWORD *)(a1 + 32);
      if ( v15 < v13 )
        break;
      v16 = 2 * v13;
      if ( !v13 )
        v16 = 16;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      sub_1402AFC00((ULONG_PTR)v10);
      sub_1402F9540((__int64)KeGetCurrentThread());
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x56777445u);
      Pool2 = (void *)ExAllocatePool2(256LL, 16LL * v16, 1450669125LL);
      if ( !Pool2 )
      {
        v19 = -1073741670;
        goto LABEL_25;
      }
      v17 = KeGetCurrentThread();
      --*((_WORD *)v17 + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
      *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
      if ( v16 > *(_DWORD *)(a1 + 36) )
      {
        v18 = *(void **)(a1 + 24);
        if ( v18 )
        {
          memmove(Pool2, *(const void **)(a1 + 24), 16LL * *(unsigned int *)(a1 + 32));
          v18 = *(void **)(a1 + 24);
        }
        *(_QWORD *)(a1 + 24) = Pool2;
        Pool2 = v18;
        *(_DWORD *)(a1 + 36) = v16;
      }
      if ( (unsigned int)++v11 >= 0x14 )
      {
        v19 = -1073741823;
        goto LABEL_25;
      }
    }
    v20 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16 * v14);
    if ( v15 > (unsigned int)v14 )
    {
      memmove(v20 + 2, (const void *)(*(_QWORD *)(a1 + 24) + 16 * v14), 16LL * (v15 - (unsigned int)v14));
      v15 = *(_DWORD *)(a1 + 32);
    }
    *(_DWORD *)(a1 + 32) = v15 + 1;
    *v20 = a4 + *(_QWORD *)(a3 + 40);
    sub_1409F1A28(*(_QWORD *)a1, a3);
    v20[1] = a3;
  }
  else
  {
    sub_1409F1FF4(a1, a4, *(_QWORD *)(a3 + 40));
  }
  v19 = 0;
LABEL_25:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    sub_1402AFC00((ULONG_PTR)v10);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v19;
}
