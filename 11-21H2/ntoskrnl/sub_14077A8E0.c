/*
 * XREFs of sub_14077A8E0 @ 0x14077A8E0
 * Callers:
 *     sub_1406E5780 @ 0x1406E5780 (sub_1406E5780.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_14077747C @ 0x14077747C (sub_14077747C.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077A8E0(int a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // ebp
  _QWORD *Pool2; // r14
  int v7; // r12d
  bool v8; // si
  __int64 v10; // r13
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rbx
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  volatile signed __int32 *v15; // rcx
  unsigned int v16; // ebx
  _QWORD *v17; // rsi
  PVOID *v18; // rbx
  struct _KTHREAD *v20; // rax
  _QWORD *v21; // rax

  v4 = 0LL;
  v5 = 0;
  Pool2 = 0LL;
  v7 = 0;
  v8 = 0;
  v10 = 5LL * a1;
  CurrentThread = KeGetCurrentThread();
  v12 = a2 + qword_1400084F0[5 * a1 + 1];
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx(a2, 0LL);
  v13 = *(_DWORD *)(v12 + 16);
  if ( v13 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v13, 1517317712LL);
    if ( Pool2 )
    {
      v14 = *(_QWORD **)v12;
      if ( *(_QWORD *)v12 != v12 )
      {
        while ( (unsigned int)v4 < *(_DWORD *)(v12 + 16) )
        {
          v15 = (volatile signed __int32 *)((char *)v14 - qword_1400084F0[v10 + 3]);
          Pool2[v4] = v15;
          _InterlockedAdd(v15 + 2, 1u);
          v14 = (_QWORD *)*v14;
          v4 = (unsigned int)(v4 + 1);
          if ( v14 == (_QWORD *)v12 )
            goto LABEL_6;
        }
        v8 = 1;
      }
LABEL_6:
      if ( (unsigned int)v4 < *(_DWORD *)(v12 + 16) )
        v8 = 1;
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v8 = *(_QWORD *)v12 != v12;
  }
  ExReleasePushLockEx(a2, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v20 = KeGetCurrentThread();
    --*((_WORD *)v20 + 242);
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    v21 = *(_QWORD **)v12;
    while ( v21 != (_QWORD *)v12 )
    {
      v21 = (_QWORD *)*v21;
      ++v7;
    }
    *(_DWORD *)(v12 + 16) = v7;
    ExReleasePushLockEx(a2, 0LL);
    KeLeaveCriticalRegion();
  }
  v16 = 0;
  if ( (_DWORD)v4 )
  {
    v17 = Pool2;
    do
    {
      v5 = sub_14042A5E0(*v17, a4);
      if ( v5 < 0 )
        break;
      ++v16;
      ++v17;
    }
    while ( v16 < (unsigned int)v4 );
  }
  if ( Pool2 )
  {
    if ( (_DWORD)v4 )
    {
      v18 = (PVOID *)Pool2;
      do
      {
        sub_14077B394(*v18++);
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(Pool2, 0x5A706E50u);
  }
  return (unsigned int)v5;
}
