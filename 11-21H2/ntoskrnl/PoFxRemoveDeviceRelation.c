/*
 * XREFs of PoFxRemoveDeviceRelation @ 0x140419580
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_1404198CC @ 0x1404198CC (sub_1404198CC.c)
 *     sub_1404199DC @ 0x1404199DC (sub_1404199DC.c)
 */

__int64 __fastcall PoFxRemoveDeviceRelation(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  volatile LONG *v7; // rdi
  KIRQL v8; // al
  ULONG_PTR v9; // rsi
  KIRQL v10; // bp
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rdi
  KIRQL v15; // r13
  __int64 v16; // rdx
  char v17; // bp
  KSPIN_LOCK *v18; // rcx
  _QWORD *v19; // rax
  KSPIN_LOCK v20; // r8
  KSPIN_LOCK *v21; // rdx
  KIRQL v22; // r15
  __int64 i; // rdx
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( !a2 )
    return (unsigned int)-1073741584;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( !v6 )
    return (unsigned int)-1073741584;
  v7 = (volatile LONG *)(v6 + 88);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 88));
  v9 = *(_QWORD *)(v6 + 80);
  v10 = v8;
  if ( !v9 )
  {
    ExReleaseSpinLockExclusive(v7, v8);
    return (unsigned int)-1073741584;
  }
  sub_140355350(v9);
  ExReleaseSpinLockExclusive(v7, v10);
  v11 = *(_DWORD *)(v9 + 828);
  v12 = 0;
  if ( !v11 )
    goto LABEL_12;
  while ( 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v9 + 832) + 8LL * v12);
    if ( *a3 == *(_QWORD *)v13 && a3[1] == *(_QWORD *)(v13 + 8) )
      break;
    if ( ++v12 >= v11 )
      goto LABEL_12;
  }
  if ( v13 )
  {
    sub_1402D2864(*(_QWORD *)(a1 + 96), 0, 0);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
    v24 = 0LL;
    v16 = 0LL;
    v17 = 0;
    while ( (unsigned __int8)sub_1404199DC(a1 + 1264, v16, &v24) )
    {
      v18 = (KSPIN_LOCK *)v24;
      if ( *(_QWORD *)(v24 + 24) == v13 )
      {
        *(_DWORD *)(v24 + 16) &= ~8u;
        v19 = v18 + 7;
        v18[6] = 0LL;
        v20 = v18[7];
        if ( *(KSPIN_LOCK **)(v20 + 8) != v18 + 7 || (v21 = (KSPIN_LOCK *)v18[8], (_QWORD *)*v21 != v19) )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        v17 = 1;
        v18[8] = (KSPIN_LOCK)(v18 + 7);
        *v19 = v19;
        KeReleaseSpinLockFromDpcLevel(v18 + 1);
        break;
      }
      v16 = v24;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1240), v15);
    if ( v17 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 128));
      v24 = 0LL;
      for ( i = 0LL; (unsigned __int8)sub_1404198CC(v13, i, &v24); i = v24 )
        ;
      KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 128), v22);
      sub_140355830(v9, *(unsigned int *)(v13 + 16), 2);
    }
    else
    {
      v3 = -1073741811;
    }
    sub_1402D25CC(*(_QWORD *)(a1 + 96));
  }
  else
  {
LABEL_12:
    v3 = -1073741583;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 244), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v9 + 248), 0, 0);
  return v3;
}
