/*
 * XREFs of PoFxAddDeviceRelation @ 0x140419310
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     sub_1403BA340 @ 0x1403BA340 (sub_1403BA340.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoFxAddDeviceRelation(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdi
  volatile LONG *v9; // rbp
  KIRQL v10; // al
  ULONG_PTR v11; // rdi
  KIRQL v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ecx
  _QWORD *v15; // rbp
  __int64 Pool2; // rax
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  int v20; // r13d
  int v21; // r13d
  KIRQL v22; // al
  _QWORD *v23; // r8
  KSPIN_LOCK *v24; // r15
  KIRQL v25; // al
  _QWORD *v26; // rbp
  _QWORD *v27; // rdx

  v4 = 0;
  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( !a2 )
    return (unsigned int)-1073741584;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( !v8 )
    return (unsigned int)-1073741584;
  v9 = (volatile LONG *)(v8 + 88);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88));
  v11 = *(_QWORD *)(v8 + 80);
  v12 = v10;
  if ( !v11 )
  {
    ExReleaseSpinLockExclusive(v9, v10);
    return (unsigned int)-1073741584;
  }
  sub_140355350(v11);
  ExReleaseSpinLockExclusive(v9, v12);
  if ( v11 == a1 )
  {
    v4 = -1073741584;
  }
  else
  {
    v13 = *(_DWORD *)(v11 + 828);
    v14 = 0;
    if ( !v13 )
      goto LABEL_14;
    while ( 1 )
    {
      v15 = *(_QWORD **)(*(_QWORD *)(v11 + 832) + 8LL * v14);
      if ( *a3 == *v15 && a3[1] == v15[1] )
        break;
      if ( ++v14 >= v13 )
        goto LABEL_14;
    }
    if ( v15 )
    {
      if ( (unsigned int)(a4 - 2) > 2 )
      {
        v4 = -1073741582;
      }
      else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 1) != 0
             || (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 824), 0, 0) & 1) != 0 )
      {
        v4 = -1073741811;
      }
      else
      {
        Pool2 = ExAllocatePool2(64LL, 72LL, 1297630800LL);
        if ( Pool2 )
        {
          v18 = (_QWORD *)(Pool2 + 32);
          v19 = (_QWORD *)(Pool2 + 56);
          v20 = (*(_DWORD *)(Pool2 + 16) ^ (16 * a4)) & 0x30;
          *(_DWORD *)Pool2 = 0;
          v21 = *(_DWORD *)(Pool2 + 16) ^ v20;
          *(_QWORD *)(Pool2 + 8) = 0LL;
          *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
          *(_DWORD *)(Pool2 + 16) = v21 | 0xE;
          *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
          *(_QWORD *)(Pool2 + 64) = Pool2 + 56;
          *(_QWORD *)(Pool2 + 56) = Pool2 + 56;
          *(_QWORD *)(Pool2 + 24) = v15;
          *(_QWORD *)(Pool2 + 48) = a1 + 1240;
          sub_1403BA340(v11, (__int64)v15, 1, 0);
          sub_1402D2864(*(_QWORD *)(a1 + 96), 0, 0);
          v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
          v23 = *(_QWORD **)(a1 + 1272);
          if ( *v23 != a1 + 1264 )
            goto LABEL_27;
          *v19 = a1 + 1264;
          v19[1] = v23;
          *v23 = v19;
          *(_QWORD *)(a1 + 1272) = v19;
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1240), v22);
          v24 = v15 + 16;
          v25 = KeAcquireSpinLockRaiseToDpc(v15 + 16);
          v26 = v15 + 55;
          v27 = (_QWORD *)v26[1];
          if ( (_QWORD *)*v27 != v26 )
LABEL_27:
            __fastfail(3u);
          v18[1] = v27;
          *v18 = v26;
          *v27 = v18;
          v26[1] = v18;
          KeReleaseSpinLock(v24, v25);
          sub_1402D25CC(*(_QWORD *)(a1 + 96));
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
    else
    {
LABEL_14:
      v4 = -1073741583;
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 244), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v11 + 248), 0, 0);
  return v4;
}
