/*
 * XREFs of PspApplyWorkingSetLimits @ 0x1409B1F60
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsJobPostCallback @ 0x1407E9790 (PspSetJobLimitsJobPostCallback.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x14020C05C (MmEnforceWorkingSetLimit.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x14061C530 (MmAdjustWorkingSetSize.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall PspApplyWorkingSetLimits(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID *v7; // rbx
  PVOID *result; // rax
  __int64 v9; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  $115DCDF994C6370D29323EAB0E0C9502 v12; // [rsp+30h] [rbp-40h] BYREF

  p_P = &P;
  P = &P;
  memset(&v12, 0, sizeof(v12));
  while ( 1 )
  {
    v2 = PspWorkingSetChangeHead;
    if ( (__int64 *)PspWorkingSetChangeHead == &PspWorkingSetChangeHead )
      break;
    if ( *(__int64 **)(PspWorkingSetChangeHead + 8) != &PspWorkingSetChangeHead
      || (v3 = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(*(_QWORD *)PspWorkingSetChangeHead + 8LL) != PspWorkingSetChangeHead)
      || (PspWorkingSetChangeHead = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(v3 + 8) = &PspWorkingSetChangeHead,
          v4 = p_P,
          *p_P != &P) )
    {
LABEL_14:
      __fastfail(3u);
    }
    *(_QWORD *)(v2 + 8) = p_P;
    *(_QWORD *)v2 = &P;
    *v4 = v2;
    p_P = (PVOID *)v2;
    KiStackAttachProcess(*(_KPROCESS **)(v2 + 16), 0, (__int64)&v12);
    MmAdjustWorkingSetSize(*(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 32), 0, 1);
    MmEnforceWorkingSetLimit(*(_KPROCESS **)(v2 + 16), 1LL, v5, v6);
    KiUnstackDetachProcess(&v12);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1536), 0xFFFFFEFF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D0C390, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140D0C390);
  KeAbPostRelease((ULONG_PTR)&qword_140D0C390);
  while ( 1 )
  {
    v7 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_14;
    v9 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_14;
    P = *(PVOID *)P;
    *(_QWORD *)(v9 + 8) = &P;
    ObfDereferenceObjectWithTag(v7[2], 0x624A7350u);
    ExFreePoolWithTag(v7, 0x72437350u);
  }
}
