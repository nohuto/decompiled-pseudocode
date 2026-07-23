/*
 * XREFs of sub_1402858A0 @ 0x1402858A0
 * Callers:
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     sub_140247800 @ 0x140247800 (sub_140247800.c)
 *     sub_140282064 @ 0x140282064 (sub_140282064.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402856A8 @ 0x1402856A8 (sub_1402856A8.c)
 *     sub_140285740 @ 0x140285740 (sub_140285740.c)
 *     sub_1402857B4 @ 0x1402857B4 (sub_1402857B4.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_140285D50 @ 0x140285D50 (sub_140285D50.c)
 *     sub_140285D90 @ 0x140285D90 (sub_140285D90.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053B3F8 @ 0x14053B3F8 (sub_14053B3F8.c)
 *     sub_1406FAEA0 @ 0x1406FAEA0 (sub_1406FAEA0.c)
 */

__int64 *__fastcall sub_1402858A0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r15
  int v5; // edi
  char v6; // r12
  int v7; // r13d
  int v8; // r14d
  unsigned __int64 v10; // rbx
  int v11; // ecx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  KIRQL v19; // bl
  NTSTATUS v20; // eax
  NTSTATUS v21; // edi
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r9
  KIRQL v25; // bl
  __int64 v26; // r9
  KIRQL v27; // bl
  unsigned __int64 v29[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+8h]
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF
  int v32; // [rsp+A0h] [rbp+18h]
  int v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v4 = *(_QWORD *)(a1 + 528);
  HIDWORD(v31) = HIDWORD(a2);
  v5 = 0;
  v29[0] = 0LL;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  LODWORD(v31) = a2 - (a2 & 0x3FFFF);
  while ( 1 )
  {
    v10 = KeAcquireQueuedSpinLock(4uLL);
    v11 = v5 | 2;
    if ( !v6 )
      v11 = v5;
    v30 = v11;
    v12 = sub_1402857B4(v4, v6);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = -1LL << ((unsigned __int8)v10 + 1);
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)v13;
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    if ( v12 )
      break;
    while ( (unsigned int)sub_14053B3F8(*(_QWORD *)(v4 + 8), v13, 0LL, 0LL) )
    {
      v19 = KeAcquireQueuedSpinLock(4uLL);
      v12 = sub_1402857B4(v4, v6);
      KeReleaseQueuedSpinLock(4uLL, v19);
      if ( v12 )
        goto LABEL_14;
    }
    if ( v7 == 1 )
      ++dword_140C49AE4;
    v21 = -1073741670;
    if ( !byte_140C54C59 )
      v21 = -1073740606;
LABEL_40:
    if ( v6 || v7 != 1 )
      RtlRaiseStatus(v21);
    v5 = v30;
    v6 = 1;
  }
LABEL_14:
  v29[0] = *(_QWORD *)(a1 + 32) - v31;
  if ( v29[0] > 0x40000 )
    LODWORD(v29[0]) = 0x40000;
  v20 = sub_140285D90(*(_QWORD *)(a1 + 168), v12, &v31, v29);
  v21 = v20;
  if ( !byte_140C54C59 && v20 == -1073741670 )
    v21 = -1073740606;
  if ( v8 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  v22 = v31;
  if ( *(__int64 *)(a1 + 32) <= 0x2000000 )
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v31 >> 18));
  else
    v23 = sub_140282064(a1, v31);
  if ( v23 )
  {
    if ( v21 >= 0 )
    {
      sub_140285D50(v23);
      sub_140247800(v32, (struct _FAST_MUTEX *)a1);
      sub_1406FAEA0(v12, a1, v30, v26);
      v27 = KeAcquireQueuedSpinLock(4uLL);
      sub_1402856A8(v4, v12, v6);
      KeReleaseQueuedSpinLock(4uLL, v27);
      return (__int64 *)v23;
    }
    goto LABEL_34;
  }
  if ( v21 < 0 )
  {
LABEL_34:
    v8 = v32;
    sub_140247800(v32, (struct _FAST_MUTEX *)a1);
    if ( v6 )
      ++dword_140C49AE8;
    else
      *v12 = 0LL;
    v25 = KeAcquireQueuedSpinLock(4uLL);
    sub_1402856A8(v4, v12, v6);
    KeReleaseQueuedSpinLock(4uLL, v25);
    if ( !FsRtlIsNtstatusExpected(v21) )
      v21 = -1073741589;
    v7 = v33;
    goto LABEL_40;
  }
  if ( !sub_140285740(a1, v22, (unsigned __int64)v12, 0LL) )
  {
    v21 = -1073741670;
    sub_1406FAEA0(v12, a1, v30, v24);
    goto LABEL_34;
  }
  if ( v12[1] != -1 )
    KeBugCheckEx(0x34u, 0x780uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v12[1] = a1;
  v12[2] = v22;
  sub_140285D50(v12);
  if ( v22 >= *(_QWORD *)(a1 + 368) )
    *(_QWORD *)(a1 + 368) = v22 + 0x40000;
  ExReleasePushLockEx(a1 + 104, 0LL);
  if ( v32 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  return v12;
}
