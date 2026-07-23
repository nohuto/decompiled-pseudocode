/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x1403B9A30
 * Callers:
 *     sub_1403B97E8 @ 0x1403B97E8 (sub_1403B97E8.c)
 *     sub_1403B9904 @ 0x1403B9904 (sub_1403B9904.c)
 *     sub_1403CE36C @ 0x1403CE36C (sub_1403CE36C.c)
 *     sub_140619E90 @ 0x140619E90 (sub_140619E90.c)
 *     PoFxEnableDStateReporting @ 0x14098CC20 (PoFxEnableDStateReporting.c)
 *     sub_140AF86C4 @ 0x140AF86C4 (sub_140AF86C4.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x1403557F0 (PoFxIdleComponent.c)
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140394878 @ 0x140394878 (sub_140394878.c)
 *     sub_1403B9B9C @ 0x1403B9B9C (sub_1403B9B9C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1408233FC @ 0x1408233FC (sub_1408233FC.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  KIRQL v4; // al
  unsigned int v5; // edx
  unsigned __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // r14
  unsigned int i; // ebp
  struct _KTHREAD *CurrentThread; // rax
  char v11; // bp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  sub_1403B9B9C(*(_QWORD *)(BugCheckParameter2 + 56));
  v3 = 0;
  if ( *(_QWORD *)(BugCheckParameter2 + 64) )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 72);
    sub_14042A5E0(18LL, &v18);
  }
  if ( v1 )
  {
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v5 = *(_DWORD *)(v1 + 120);
    v6 = v4;
    if ( (*(_DWORD *)(BugCheckParameter2 + 824) & 1) != 0 )
    {
      if ( v5 )
        *(_DWORD *)(v1 + 120) = 0;
    }
    else if ( v5 )
    {
      v7 = *(_DWORD *)(BugCheckParameter2 + 828);
      v8 = v5;
      do
      {
        for ( i = 0; i < v7; ++i )
        {
          PoFxActivateComponent(BugCheckParameter2, i, 2);
          v7 = *(_DWORD *)(BugCheckParameter2 + 828);
        }
        --v8;
      }
      while ( v8 );
    }
    _InterlockedOr((volatile signed __int32 *)(v1 + 296), 4u);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    sub_1408233FC(v1);
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
  v11 = byte_140D01520;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
  sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v11 )
  {
    v17 = *(_QWORD *)(v1 + 32);
    sub_1402D2864(v17, 0, 0);
    sub_140394878(v17);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 828) )
  {
    do
      PoFxIdleComponent(BugCheckParameter2, v3++);
    while ( v3 < *(_DWORD *)(BugCheckParameter2 + 828) );
  }
}
