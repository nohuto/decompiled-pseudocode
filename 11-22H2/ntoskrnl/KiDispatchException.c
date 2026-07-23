/*
 * XREFs of KiDispatchException @ 0x14030CAC0
 * Callers:
 *     KiInitializeUserApc @ 0x14030EFF8 (KiInitializeUserApc.c)
 *     KxExceptionDispatchOnExceptionStack @ 0x14041F5A0 (KxExceptionDispatchOnExceptionStack.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 *     KiRaiseException @ 0x1405789A0 (KiRaiseException.c)
 *     PspInitializeThunkContext @ 0x14077070C (PspInitializeThunkContext.c)
 *     PspFreeUserFiberShadowStack @ 0x1409B1208 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 *     RtlDispatchException @ 0x1402A3CA0 (RtlDispatchException.c)
 *     RtlpCopyExtendedContext @ 0x14030D2C0 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength2 @ 0x14030D5B0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030D6A0 (RtlInitializeExtendedContext2.c)
 *     KePopulateContinuationContext @ 0x14030DD38 (KePopulateContinuationContext.c)
 *     KdTrap @ 0x14030DD5C (KdTrap.c)
 *     KiPreprocessFault @ 0x14030DD94 (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x14030DF40 (KeContextFromKframes.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14041AC20 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x14041E4C0 (KeContextToKframes.c)
 *     _alloca_probe @ 0x140429450 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetupForInstrumentationReturn @ 0x140571030 (KiSetupForInstrumentationReturn.c)
 *     KeCopyExceptionRecord @ 0x140578940 (KeCopyExceptionRecord.c)
 *     KiTpHandleTrap @ 0x14057ED10 (KiTpHandleTrap.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     PsWow64GetProcessMachine @ 0x1407711B0 (PsWow64GetProcessMachine.c)
 *     DbgkForwardException @ 0x140939614 (DbgkForwardException.c)
 *     KdIsThisAKdTrap @ 0x140AB6EC4 (KdIsThisAKdTrap.c)
 */

__int16 __fastcall KiDispatchException(
        PEXCEPTION_RECORD ExceptionRecord,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  _KPROCESS *Process; // rdx
  ULONG v10; // r14d
  ULONG64 v11; // rsi
  unsigned __int64 v12; // rax
  void *v13; // rsp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  struct _KTHREAD *v17; // rax
  int ExceptionCode; // esi
  int v19; // eax
  ULONG64 v20; // rcx
  unsigned __int64 v22; // rdx
  struct _KPRCB *v23; // r8
  _DWORD *v24; // rdx
  int v25; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  char IsThisAKdTrap; // al
  char v28; // r8
  int v29; // r9d
  _KPROCESS *v30; // rdx
  struct _KPRCB *v31; // r8
  signed __int32 *v32; // rdx
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  unsigned __int64 v35; // r8
  _QWORD *v36; // rdi
  _OWORD *v37; // rsi
  int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r10
  bool v45; // zf
  __int64 v46; // r8
  _DWORD *SchedulerAssist; // r8
  int v48; // ett
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v51; // [rsp+30h] [rbp+0h] BYREF
  int v52; // [rsp+34h] [rbp+4h]
  int v53; // [rsp+38h] [rbp+8h]
  int v54; // [rsp+3Ch] [rbp+Ch]
  ULONG ContextLength; // [rsp+40h] [rbp+10h] BYREF
  __int64 v56; // [rsp+48h] [rbp+18h]
  unsigned __int64 v57; // [rsp+50h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+58h] [rbp+28h] BYREF
  _KPROCESS *v59; // [rsp+60h] [rbp+30h]
  unsigned __int64 v60; // [rsp+68h] [rbp+38h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+40h]
  unsigned __int64 v62; // [rsp+78h] [rbp+48h]
  __int64 v63; // [rsp+80h] [rbp+50h]
  PEXCEPTION_RECORD v64; // [rsp+88h] [rbp+58h]
  int *v65; // [rsp+90h] [rbp+60h]
  __int64 v66; // [rsp+A0h] [rbp+70h]
  _QWORD *v67; // [rsp+A8h] [rbp+78h]
  _QWORD *v68; // [rsp+B0h] [rbp+80h]
  _QWORD *v69; // [rsp+B8h] [rbp+88h]
  _QWORD *v70; // [rsp+C0h] [rbp+90h]
  unsigned __int64 v71; // [rsp+C8h] [rbp+98h]
  int v72; // [rsp+D0h] [rbp+A0h]
  _DWORD v73[37]; // [rsp+D4h] [rbp+A4h] BYREF
  __int128 v74; // [rsp+170h] [rbp+140h] BYREF
  __int128 v75; // [rsp+180h] [rbp+150h]

  LOWORD(v51) = a4;
  v63 = a3;
  v56 = a2;
  v64 = ExceptionRecord;
  v66 = a3;
  ContextEx = 0LL;
  ContextLength = 0;
  memset(v73, 0, sizeof(v73));
  v74 = 0LL;
  v75 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v59 = Process;
  __incgsdword(0x82F0u);
  if ( a5 && Process && *(_QWORD *)&Process[2].Affinity.Count )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    switch ( ExceptionRecord->ExceptionCode )
    {
      case 0x10000002:
        ExceptionRecord->ExceptionCode = -1073741795;
        break;
      case 0x10000003:
        ExceptionRecord->ExceptionCode = -1073741676;
        break;
      case 0x10000004:
        ExceptionRecord->ExceptionCode = -1073741819;
        break;
    }
    if ( ObGetCurrentIrql() < 2u )
    {
      if ( a4
        || ((v19 = ExceptionRecord->ExceptionCode, ExceptionRecord->ExceptionCode == -1073741819)
         || v19 == -2147483647
         || v19 == -1073741818)
        && ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL )
      {
        LOWORD(v17) = ((__int64 (__fastcall *)(PEXCEPTION_RECORD, __int64, __int64, _QWORD, unsigned __int8))xmmword_140C38180)(
                        ExceptionRecord,
                        a2,
                        a3,
                        0LL,
                        a4);
        if ( (_BYTE)v17 )
          return (__int16)v17;
      }
    }
    ExceptionRecord->ExceptionCode = ExceptionCode;
    Process = v59;
  }
  v10 = 1048607;
  v53 = 1048607;
  v11 = 0LL;
  if ( a4 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      v10 = 1048671;
      v53 = 1048671;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v20 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800LL) != 0
          && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
        {
          v20 &= ~0x800uLL;
        }
        v11 = v20 & 0xFFFFFFFFFFF9FFFFuLL;
        if ( (ExceptionRecord->ExceptionFlags & 0x80u) == 0 )
          v11 = v20;
        if ( (unsigned __int16)PsWow64GetProcessMachine(Process) == 332 )
          v11 &= 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  else
  {
    if ( (_BYTE)KiKernelCetEnabled )
      v10 = 1048735;
    v53 = v10;
  }
  RtlGetExtendedContextLength2(v10, &ContextLength, v11);
  v12 = ContextLength + 15LL;
  if ( v12 <= ContextLength )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
  v65 = &v51;
  if ( (_BYTE)v51 )
    memset(&v51, 0, ContextLength);
  RtlInitializeExtendedContext2((PCONTEXT)&v51, v10, &ContextEx, v11);
  KeContextFromKframes(a3, v56, &v51);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
  {
    --*(_QWORD *)&v73[21];
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      --*(_QWORD *)(a3 + 360);
      LOBYTE(v15) = a5;
      LOBYTE(v14) = v51;
      if ( (unsigned __int8)KiTpHandleTrap(ExceptionRecord, &v51, v14, v15) )
        goto LABEL_18;
      ++*(_QWORD *)(a3 + 360);
    }
  }
  LOBYTE(v14) = v51;
  if ( (unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v51, v14) )
    goto LABEL_18;
  if ( !(_BYTE)v51 )
  {
    if ( (!a5
       || !(unsigned __int8)KdTrap(a3, v56, (_DWORD)ExceptionRecord, (unsigned int)&v51, v51, v51)
       && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v51))
      && !(unsigned __int8)KdTrap(a3, v56, (_DWORD)ExceptionRecord, (unsigned int)&v51, 0, 1) )
    {
      KeBugCheckEx(
        0x1Eu,
        ExceptionRecord->ExceptionCode,
        (ULONG_PTR)ExceptionRecord->ExceptionAddress,
        ExceptionRecord->ExceptionInformation[0],
        ExceptionRecord->ExceptionInformation[1]);
    }
LABEL_18:
    LOBYTE(BugCheckParameter4) = v51;
    LOWORD(v17) = KeContextToKframes(a3, v56, (unsigned int)&v51, (_DWORD)v59, BugCheckParameter4);
    if ( !BYTE1(v51) )
      return (__int16)v17;
    _disable();
    LOWORD(v17) = KiSetupForInstrumentationReturn(a3);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( !SchedulerAssist )
      goto LABEL_92;
    _m_prefetchw(SchedulerAssist);
    LODWORD(v17) = *SchedulerAssist;
    do
    {
      v48 = (int)v17;
      LODWORD(v17) = _InterlockedCompareExchange(SchedulerAssist, (unsigned int)v17 & 0xFFDFFFFF, (signed __int32)v17);
    }
    while ( v48 != (_DWORD)v17 );
    if ( ((unsigned int)v17 & 0x200000) == 0 )
      goto LABEL_92;
    goto LABEL_91;
  }
  v22 = v71;
  v57 = v71;
  v62 = v71;
  if ( (HIDWORD(v59[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v17 = KeGetCurrentThread();
    if ( v17->ApcState.Process[1].Affinity.StaticBitmap[30]
      && ExceptionRecord->ExceptionCode == -2147483646
      && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x40000u;
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      if ( !v24 )
        goto LABEL_92;
      _m_prefetchw(v24);
      LODWORD(v17) = *v24;
      do
      {
        v25 = (int)v17;
        LODWORD(v17) = _InterlockedCompareExchange(v24, (unsigned int)v17 & 0xFFDFFFFF, (signed __int32)v17);
      }
      while ( v25 != (_DWORD)v17 );
      if ( ((unsigned int)v17 & 0x200000) == 0 )
        goto LABEL_92;
      CurrentPrcb = v23;
LABEL_91:
      LOWORD(v17) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_92:
      _enable();
      return (__int16)v17;
    }
    if ( (v60 & 0xFFF8) == 0x20 )
    {
      if ( ExceptionRecord->ExceptionCode == -2147483645 )
      {
        ExceptionRecord->ExceptionCode = 1073741855;
      }
      else if ( ExceptionRecord->ExceptionCode == -2147483644 )
      {
        ExceptionRecord->ExceptionCode = 1073741854;
      }
      v22 = (unsigned int)v22 & 0xFFFFFFF0;
      v57 = v22;
      v62 = v22;
    }
  }
  if ( a5 )
  {
    v54 = ExceptionRecord->ExceptionCode;
    IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
    BYTE1(v51) = IsThisAKdTrap;
    v30 = KeGetCurrentThread()->ApcState.Process;
    if ( !v30[1].Affinity.StaticBitmap[29] && !KdIgnoreUmExceptions && v29 != -2147483597 || IsThisAKdTrap )
    {
      if ( (unsigned __int8)KdTrap(a3, v56, (_DWORD)ExceptionRecord, (unsigned int)&v51, v28, 0) )
        goto LABEL_18;
      v29 = v54;
    }
    if ( v29 == -2147483597
      || (LOBYTE(v30) = 1, LOWORD(v17) = DbgkForwardException(ExceptionRecord, v30, 0LL), !(_BYTE)v17) )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x100u;
      v31 = KeGetCurrentPrcb();
      v32 = (signed __int32 *)v31->SchedulerAssist;
      if ( v32 )
      {
        _m_prefetchw(v32);
        v33 = *v32;
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange(v32, v33 & 0xFFDFFFFF, v33);
        }
        while ( v34 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
      _enable();
      v72 = -1073741819;
      v52 = 0;
      v35 = v57;
      v60 = v57;
      if ( (v10 & 0x100040) == 0x100040 )
      {
        v35 = (v57 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
        v60 = v35;
      }
      v36 = (_QWORD *)((v35 - 40) & 0xFFFFFFFFFFFFFFF0uLL);
      v67 = v36;
      v68 = v36 - 20;
      v37 = v36 - 24;
      v69 = v36 - 24;
      v70 = v36 - 178;
      LODWORD(v74) = -1232;
      DWORD1(v74) = v57 - ((_DWORD)v36 - 1424);
      *((_QWORD *)&v74 + 1) = 0x4D0FFFFFB30LL;
      LODWORD(v75) = v35 - ((_DWORD)v36 - 192);
      DWORD1(v75) = v57 - v35;
      ProbeForWrite(v36 - 178, v57 - (_QWORD)(v36 - 178), 0x10u);
      v36[3] = v57;
      *v36 = *((_QWORD *)v65 + 31);
      KeCopyExceptionRecord(v36 - 20, ExceptionRecord);
      LOBYTE(v38) = 1;
      RtlpCopyExtendedContext(v38, (_DWORD)v36 - 192, (unsigned int)&v74, v53, (__int64)ContextEx, 0LL);
      *v37 = v74;
      v37[1] = v75;
      --CurrentThread->SpecialApcDisable;
      v52 = 1;
      KePopulateContinuationContext(*(_QWORD *)(v63 + 360));
      *(_QWORD *)(v39 + 384) = v36 - 178;
      *(_WORD *)(v39 + 368) = 51;
      *(_QWORD *)(v39 + 360) = qword_140D1F340;
      KiSetupForInstrumentationReturn(v39);
      LOWORD(v17) = *(_WORD *)(v44 + 486);
      v45 = (_WORD)v17 == 0xFFFF;
      LOWORD(v17) = (_WORD)v17 + 1;
      *(_WORD *)(v44 + 486) = (_WORD)v17;
      if ( v45 )
      {
        v17 = (struct _KTHREAD *)(v44 + 152);
        if ( *(struct _KTHREAD **)&v17->Header.Lock != v17 )
          LOWORD(v17) = KiCheckForKernelApcDelivery(v41, v40, v42, v43);
      }
      v52 = 0;
    }
  }
  else
  {
    LOBYTE(v16) = 1;
    LOBYTE(v22) = 1;
    LOWORD(v17) = DbgkForwardException(ExceptionRecord, v22, v16);
    if ( !(_BYTE)v17 )
    {
      LOBYTE(v46) = 1;
      LOWORD(v17) = DbgkForwardException(ExceptionRecord, 0LL, v46);
      if ( !(_BYTE)v17 )
        LOWORD(v17) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
    }
  }
  return (__int16)v17;
}
