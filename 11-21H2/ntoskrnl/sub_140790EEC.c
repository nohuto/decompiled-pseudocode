/*
 * XREFs of sub_140790EEC @ 0x140790EEC
 * Callers:
 *     sub_140790CF8 @ 0x140790CF8 (sub_140790CF8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PsChargeProcessWakeCounter @ 0x1406E1310 (PsChargeProcessWakeCounter.c)
 *     sub_14078F094 @ 0x14078F094 (sub_14078F094.c)
 *     sub_1407918AC @ 0x1407918AC (sub_1407918AC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140790EEC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int16 v5; // r15
  char v8; // r13
  __int64 v9; // r14
  __int64 Pool2; // rax
  signed __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  signed __int64 *v15; // rax
  struct _KEVENT *v16; // rcx
  void *v18; // rbx
  unsigned int i; // r8d

  v3 = 0;
  v5 = *(_WORD *)(a3 + 98) & 0x100;
  v8 = 1;
  v9 = sub_1407918AC();
  if ( v9 && (Pool2 = ExAllocatePool2(64LL, 56LL, 1920431173LL), (v11 = Pool2) != 0) )
  {
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_QWORD *)(Pool2 + 24) = a3;
    *(_WORD *)(Pool2 + 48) = *(_WORD *)(a3 + 96);
    *(_DWORD *)(Pool2 + 52) = 1;
    if ( *(_BYTE *)(a2 + 12) )
    {
      v18 = *(void **)(a2 + 24);
      *(_DWORD *)(Pool2 + 52) |= 2u;
      ObfReferenceObject(v18);
      *(_QWORD *)(v11 + 32) = v18;
      *(_QWORD *)(v11 + 40) = PsChargeProcessWakeCounter(a1);
      for ( i = 0; i < 4; ++i )
      {
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * i + 48), v11, 0LL) )
        {
          *(_WORD *)(v11 + 50) = i;
          v3 = 0;
          goto LABEL_4;
        }
      }
      sub_14078F094((PVOID *)v11, 3);
      return (unsigned int)-1073741823;
    }
    else
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
      v13 = (_QWORD *)(v9 + 24);
      v14 = *(_QWORD **)(v9 + 24);
      if ( v14 != (_QWORD *)(v9 + 24) )
      {
        while ( (v5 != 0) != (*(_BYTE *)(v14[3] + 99LL) & 1) )
        {
          v14 = (_QWORD *)*v14;
          if ( v14 == v13 )
            goto LABEL_5;
        }
        v8 = 0;
      }
LABEL_5:
      v15 = *(signed __int64 **)(v9 + 32);
      if ( (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *(_QWORD *)v11 = v13;
      *(_QWORD *)(v11 + 8) = v15;
      *v15 = v11;
      *(_QWORD *)(v9 + 32) = v11;
      if ( v8 )
      {
        if ( v5 )
          v16 = *(struct _KEVENT **)(v9 + 8);
        else
          v16 = *(struct _KEVENT **)v9;
        if ( v16 )
          KeSetEvent(v16, 1, 0);
      }
      ExReleasePushLockEx(v9 + 16, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
