/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x140A687F0
 * Callers:
 *     <none>
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x14022E848 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1402421DC (KeSaveExtendedAndSupervisorState.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x14038C0C8 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveProcessorSpecificFeatures @ 0x14038D050 (KeSaveProcessorSpecificFeatures.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x14038D068 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x14038D0F4 (KeRestoreProcessorSpecificFeatures.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PnprGetStackLimits @ 0x140562EBC (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x14056CB60 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14056CC3C (KeSuspendClockTimerSafe.c)
 *     PnprMirrorMarkedPages @ 0x140A6849C (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG v4; // r14d
  int v5; // esi
  bool v6; // bl
  __int64 v7; // rax
  __int64 Group; // r15
  __int64 v9; // rbp
  bool v10; // di
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v19[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+90h] [rbp-8h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+20h] BYREF

  ProcNumber = 0;
  v4 = (unsigned int)SystemArgument2;
  v23 = 0;
  v5 = (int)SystemArgument1;
  v18 = 0LL;
  v24 = 0LL;
  memset(v19, 0, sizeof(v19));
  v6 = 1;
  v20 = 0LL;
  v7 = PnprContext;
  *DeferredContext = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)SystemArgument1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _disable();
    v6 = (v21 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)SystemArgument1 )
      _mm_pause();
  }
  if ( KeGetProcessorNumberFromIndex((ULONG)SystemArgument2, &ProcNumber) < 0 )
    goto LABEL_53;
  Group = ProcNumber.Group;
  v9 = 1LL << ProcNumber.Number;
  if ( ((1LL << ProcNumber.Number) & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group)) == 0 )
    goto LABEL_26;
  while ( *(int *)(PnprContext + 200) < 1 )
    _mm_pause();
  KeSuspendClockTimerSafe();
  KeSaveIptStateBeforeProcessorGoesOffline();
  v10 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v10 = (int)KeSaveExtendedAndSupervisorState(
                 (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                 (__int64 *)v19) >= 0;
  KeSaveProcessorSpecificFeatures();
  if ( HalGetProcessorIdByNtNumber(v4, &v23) < 0 )
LABEL_53:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 33184) & 2) != 0 )
  {
    LOBYTE(v11) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(PnprContext + 33224))(*(_QWORD *)(PnprContext + 33168), v23, v11);
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    ((void (__fastcall *)(_QWORD, __int64 *))off_140C01D38[0])(*(_QWORD *)(PnprContext + 33160), &v18);
  ((void (__fastcall *)(_QWORD))off_140C01CD0[0])(*(_QWORD *)(PnprContext + 33160));
  if ( (*(_DWORD *)(PnprContext + 33184) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(PnprContext + 33224))(*(_QWORD *)(PnprContext + 33168), v23, 0LL);
  KeResumeClockTimerSafe();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v6 )
    _enable();
  KeRestoreProcessorSpecificFeatures((__int64)&v24);
  if ( v10 )
    KeRestoreExtendedAndSupervisorState((__int64)v19);
  KeRestoreIptStateAfterProcessorComesOnline(v13, v12, v14);
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
LABEL_26:
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    while ( *(int *)(PnprContext + 200) < 2 )
      _mm_pause();
    if ( (int)PnprMirrorMarkedPages() < 0 )
    {
      v15 = PnprContext;
      v16 = *(_DWORD *)(PnprContext + 33272);
      if ( !v16 )
        v16 = 2266;
      *(_DWORD *)(PnprContext + 33272) = v16;
      v17 = *(_DWORD *)(v15 + 33276);
      if ( !v17 )
        v17 = 1;
      *(_DWORD *)(v15 + 33276) = v17;
    }
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  }
  while ( *(int *)(PnprContext + 200) < 4 )
    _mm_pause();
  PnprGetStackLimits((char **)(PnprContext + 216 + 8LL * v4), PnprContext + 16600 + 8LL * v4);
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    if ( (v9 & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8 * Group)) != 0 )
    {
      ((void (__fastcall *)(__int64))off_140C01D40[0])(v18);
    }
    else if ( v6 )
    {
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
