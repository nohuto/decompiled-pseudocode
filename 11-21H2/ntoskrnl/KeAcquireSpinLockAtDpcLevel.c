/*
 * XREFs of KeAcquireSpinLockAtDpcLevel @ 0x140211E00
 * Callers:
 *     sub_14020E0AC @ 0x14020E0AC (sub_14020E0AC.c)
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_140210BE8 @ 0x140210BE8 (sub_140210BE8.c)
 *     sub_1402126A4 @ 0x1402126A4 (sub_1402126A4.c)
 *     sub_140223F8C @ 0x140223F8C (sub_140223F8C.c)
 *     sub_14022CFE4 @ 0x14022CFE4 (sub_14022CFE4.c)
 *     sub_140239F94 @ 0x140239F94 (sub_140239F94.c)
 *     sub_14023AE0C @ 0x14023AE0C (sub_14023AE0C.c)
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 *     sub_14023C750 @ 0x14023C750 (sub_14023C750.c)
 *     sub_140244E70 @ 0x140244E70 (sub_140244E70.c)
 *     sub_140247C90 @ 0x140247C90 (sub_140247C90.c)
 *     sub_140248C84 @ 0x140248C84 (sub_140248C84.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     sub_14024CBF8 @ 0x14024CBF8 (sub_14024CBF8.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeAcquireInterruptSpinLock @ 0x1402511A0 (KeAcquireInterruptSpinLock.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_14025298C @ 0x14025298C (sub_14025298C.c)
 *     sub_1402536E0 @ 0x1402536E0 (sub_1402536E0.c)
 *     sub_140253FC0 @ 0x140253FC0 (sub_140253FC0.c)
 *     sub_1402566A0 @ 0x1402566A0 (sub_1402566A0.c)
 *     sub_140256D10 @ 0x140256D10 (sub_140256D10.c)
 *     PoNotifyMediaBuffering @ 0x140258980 (PoNotifyMediaBuffering.c)
 *     FsRtlUninitializeFileLock @ 0x140259FA0 (FsRtlUninitializeFileLock.c)
 *     sub_14025B770 @ 0x14025B770 (sub_14025B770.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x14025C0E0 (KeDeregisterBugCheckReasonCallback.c)
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 *     sub_1402A4320 @ 0x1402A4320 (sub_1402A4320.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1402E1BD0 @ 0x1402E1BD0 (sub_1402E1BD0.c)
 *     sub_1402E29C8 @ 0x1402E29C8 (sub_1402E29C8.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_1402F0B30 @ 0x1402F0B30 (sub_1402F0B30.c)
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 *     sub_1402F332C @ 0x1402F332C (sub_1402F332C.c)
 *     sub_140300190 @ 0x140300190 (sub_140300190.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_1403542DC @ 0x1403542DC (sub_1403542DC.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 *     sub_14035FE5C @ 0x14035FE5C (sub_14035FE5C.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_1403982A0 @ 0x1403982A0 (sub_1403982A0.c)
 *     sub_1403983A0 @ 0x1403983A0 (sub_1403983A0.c)
 *     KeDeregisterBugCheckCallback @ 0x140398710 (KeDeregisterBugCheckCallback.c)
 *     sub_140398E60 @ 0x140398E60 (sub_140398E60.c)
 *     sub_14039EE50 @ 0x14039EE50 (sub_14039EE50.c)
 *     sub_14039F200 @ 0x14039F200 (sub_14039F200.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     KeRegisterBugCheckCallback @ 0x1403B5E30 (KeRegisterBugCheckCallback.c)
 *     sub_1403C1214 @ 0x1403C1214 (sub_1403C1214.c)
 *     sub_1403CC174 @ 0x1403CC174 (sub_1403CC174.c)
 *     sub_1403CE4FC @ 0x1403CE4FC (sub_1403CE4FC.c)
 *     sub_1403D1870 @ 0x1403D1870 (sub_1403D1870.c)
 *     sub_1403D98F0 @ 0x1403D98F0 (sub_1403D98F0.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     sub_1403DB0A0 @ 0x1403DB0A0 (sub_1403DB0A0.c)
 *     KdRegisterPowerHandler @ 0x1403DD310 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x1403DDD50 (KdAcquireDebuggerLock.c)
 *     sub_1403F93A0 @ 0x1403F93A0 (sub_1403F93A0.c)
 *     sub_1404198CC @ 0x1404198CC (sub_1404198CC.c)
 *     sub_1404199DC @ 0x1404199DC (sub_1404199DC.c)
 *     KeSynchronizeExecution @ 0x140420B90 (KeSynchronizeExecution.c)
 *     sub_140459E52 @ 0x140459E52 (sub_140459E52.c)
 *     sub_140459EC8 @ 0x140459EC8 (sub_140459EC8.c)
 *     sub_14045A41A @ 0x14045A41A (sub_14045A41A.c)
 *     sub_14045E06E @ 0x14045E06E (sub_14045E06E.c)
 *     sub_140460FAC @ 0x140460FAC (sub_140460FAC.c)
 *     sub_140518C60 @ 0x140518C60 (sub_140518C60.c)
 *     sub_140518DDC @ 0x140518DDC (sub_140518DDC.c)
 *     sub_140518F1C @ 0x140518F1C (sub_140518F1C.c)
 *     sub_14051910C @ 0x14051910C (sub_14051910C.c)
 *     sub_1405192A0 @ 0x1405192A0 (sub_1405192A0.c)
 *     sub_140519514 @ 0x140519514 (sub_140519514.c)
 *     sub_140519744 @ 0x140519744 (sub_140519744.c)
 *     sub_1405198A0 @ 0x1405198A0 (sub_1405198A0.c)
 *     sub_140519A0C @ 0x140519A0C (sub_140519A0C.c)
 *     sub_140519B94 @ 0x140519B94 (sub_140519B94.c)
 *     sub_140519D28 @ 0x140519D28 (sub_140519D28.c)
 *     sub_140519E90 @ 0x140519E90 (sub_140519E90.c)
 *     sub_140524C30 @ 0x140524C30 (sub_140524C30.c)
 *     sub_140524EB0 @ 0x140524EB0 (sub_140524EB0.c)
 *     sub_140525620 @ 0x140525620 (sub_140525620.c)
 *     sub_140525930 @ 0x140525930 (sub_140525930.c)
 *     sub_140525E80 @ 0x140525E80 (sub_140525E80.c)
 *     sub_140526160 @ 0x140526160 (sub_140526160.c)
 *     sub_1405262A0 @ 0x1405262A0 (sub_1405262A0.c)
 *     sub_1405264A0 @ 0x1405264A0 (sub_1405264A0.c)
 *     sub_140526870 @ 0x140526870 (sub_140526870.c)
 *     sub_140526F10 @ 0x140526F10 (sub_140526F10.c)
 *     sub_140527130 @ 0x140527130 (sub_140527130.c)
 *     sub_140527CF0 @ 0x140527CF0 (sub_140527CF0.c)
 *     sub_140527F70 @ 0x140527F70 (sub_140527F70.c)
 *     sub_140528160 @ 0x140528160 (sub_140528160.c)
 *     sub_140528C60 @ 0x140528C60 (sub_140528C60.c)
 *     sub_140529200 @ 0x140529200 (sub_140529200.c)
 *     sub_140541E40 @ 0x140541E40 (sub_140541E40.c)
 *     sub_1405517A0 @ 0x1405517A0 (sub_1405517A0.c)
 *     KdDeregisterPowerHandler @ 0x140565030 (KdDeregisterPowerHandler.c)
 *     sub_140565198 @ 0x140565198 (sub_140565198.c)
 *     sub_140565378 @ 0x140565378 (sub_140565378.c)
 *     sub_1405655BC @ 0x1405655BC (sub_1405655BC.c)
 *     KeAcquireSpinLockForDpc @ 0x14056E780 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x14056E850 (KeAcquireSpinLockRaiseToSynch.c)
 *     sub_14056EC64 @ 0x14056EC64 (sub_14056EC64.c)
 *     sub_14056F81C @ 0x14056F81C (sub_14056F81C.c)
 *     sub_140572EC0 @ 0x140572EC0 (sub_140572EC0.c)
 *     sub_1405777C0 @ 0x1405777C0 (sub_1405777C0.c)
 *     sub_14057AFDC @ 0x14057AFDC (sub_14057AFDC.c)
 *     sub_14057B0EC @ 0x14057B0EC (sub_14057B0EC.c)
 *     sub_14057B194 @ 0x14057B194 (sub_14057B194.c)
 *     sub_1405C850C @ 0x1405C850C (sub_1405C850C.c)
 *     sub_1405C8980 @ 0x1405C8980 (sub_1405C8980.c)
 *     sub_1405CADAC @ 0x1405CADAC (sub_1405CADAC.c)
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 *     sub_1405D67D4 @ 0x1405D67D4 (sub_1405D67D4.c)
 *     sub_1405D7930 @ 0x1405D7930 (sub_1405D7930.c)
 *     sub_1405D8980 @ 0x1405D8980 (sub_1405D8980.c)
 *     sub_1406125C0 @ 0x1406125C0 (sub_1406125C0.c)
 *     sub_140633B20 @ 0x140633B20 (sub_140633B20.c)
 *     sub_140634044 @ 0x140634044 (sub_140634044.c)
 *     sub_1406342C8 @ 0x1406342C8 (sub_1406342C8.c)
 *     sub_14063DFAC @ 0x14063DFAC (sub_14063DFAC.c)
 *     sub_14063E084 @ 0x14063E084 (sub_14063E084.c)
 *     sub_140A58F00 @ 0x140A58F00 (sub_140A58F00.c)
 *     sub_140A6581C @ 0x140A6581C (sub_140A6581C.c)
 *     sub_140A9D190 @ 0x140A9D190 (sub_140A9D190.c)
 *     sub_140A9D2AC @ 0x140A9D2AC (sub_140A9D2AC.c)
 *     sub_140A9D3E0 @ 0x140A9D3E0 (sub_140A9D3E0.c)
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 */

void __stdcall KeAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax

  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A310(SpinLock);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v3 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v5 = *(_DWORD *)(v3 + 24);
        *(_DWORD *)(v3 + 24) = v5 + 1;
        if ( v5 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    {
      v4 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v4 && *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v6 = *(_DWORD *)(v4 + 24) - 1;
        *(_DWORD *)(v4 + 24) = v6;
        if ( !v6 )
          sub_140418E4C(CurrentPrcb);
      }
      sub_140211E70(SpinLock);
    }
  }
}
