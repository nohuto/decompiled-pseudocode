/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014F34E
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C01ABF70 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C003D8F0 (TransitionCursorSuppressionState.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C005B398 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C005B8C4 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     PhkFirstValid @ 0x1C0071984 (PhkFirstValid.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C008C400 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C008C668 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     EditionPostRawMouseInputMessage @ 0x1C014F920 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C01AC670 (RawInputRequestedForMouse.c)
 *     UsingPenCursors @ 0x1C01ADC9C (UsingPenCursors.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        LARGE_INTEGER *a11)
{
  int v11; // r13d
  char v12; // bl
  unsigned int v13; // r14d
  LARGE_INTEGER v15; // r8
  LARGE_INTEGER v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  int v20; // r15d
  bool v21; // r12
  struct tagHOOK *Valid; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  BOOL v27; // r13d
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v34; // r15d
  __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // edx
  LARGE_INTEGER v44; // rax
  LARGE_INTEGER *v45; // rbx
  CursorApiRouter *v46; // rcx
  __int64 v47; // rcx
  __int32 v48; // ebx
  __int64 v49; // rcx
  int v51; // [rsp+34h] [rbp-8Dh] BYREF
  int v52; // [rsp+38h] [rbp-89h]
  LARGE_INTEGER *v53; // [rsp+40h] [rbp-81h]
  __int64 *v54; // [rsp+48h] [rbp-79h] BYREF
  __int64 *v55; // [rsp+50h] [rbp-71h] BYREF
  _WORD v56[2]; // [rsp+58h] [rbp-69h] BYREF
  int v57; // [rsp+5Ch] [rbp-65h]
  int v58; // [rsp+60h] [rbp-61h]
  int v59; // [rsp+64h] [rbp-5Dh]
  int v60; // [rsp+68h] [rbp-59h]
  int v61; // [rsp+6Ch] [rbp-55h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp-51h]
  _DWORD v63[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 *v64; // [rsp+80h] [rbp-41h]
  __int64 v65; // [rsp+88h] [rbp-39h]
  _DWORD v66[6]; // [rsp+90h] [rbp-31h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-19h]

  v11 = a1;
  v12 = 1;
  v52 = a1;
  v13 = 1;
  v53 = a11;
  v54 = a4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v17 = gptiRit;
  v18 = *(__int64 **)(gptiRit + 464LL);
  v19 = *v18;
  v20 = (*(_DWORD *)(gptiRit + 680LL) | *(_DWORD *)(*v18 + 16)) & 0x8000;
  v21 = a5 && (unsigned int)RawInputRequestedForMouse();
  if ( v20 || v21 )
  {
    EnterCrit(1LL, 0LL);
    if ( v20 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v55, "LowLevelMouseMoveHook", 0LL);
      v66[1] = a2;
      v66[3] = a8;
      v66[4] = a6;
      v66[5] = 0;
      v51 = 0;
      v66[0] = v11;
      v66[2] = 0;
      if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
        a3 = (unsigned __int8)a3 | 0xFF515700LL;
      v67 = a3;
      Valid = (struct tagHOOK *)PhkFirstValid(gptiRit, 14);
      if ( Valid )
      {
        v53[4] = PerformanceCounter;
        v23 = *(_QWORD *)(gptiCurrent + 1416LL);
        *(_QWORD *)(gptiCurrent + 1416LL) = v66;
        v24 = xxxCallHook2(Valid, 0LL, 0x200uLL, (__int64)v66, &v51, 0);
        *(_QWORD *)(gptiCurrent + 1416LL) = v23;
        v25 = v24 == 0;
        v26 = *(_QWORD *)(gptiCurrent + 448LL);
        v27 = !v25;
        v28 = *(_DWORD *)(v26 + 4);
        if ( (v28 & *(_DWORD *)(v26 + 16) & 0xFFFFFDFF) != 0 )
          SetWakeBit(gptiCurrent, v28 & 0xFFFFFDFF);
        v53[5] = KeQueryPerformanceCounter(0LL);
        if ( v27 )
        {
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v55);
          UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
          return 0LL;
        }
        v11 = v52;
      }
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v55);
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v21 )
  {
    v34 = a6;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      v35 = *(_WORD *)(a5 + 2) & 0xFE7F;
      v64 = v54;
      v56[0] = v35;
      v57 = *(_DWORD *)(a5 + 4);
      v58 = *(_DWORD *)(a5 + 8);
      v59 = *(_DWORD *)(a5 + 12);
      v60 = *(_DWORD *)(a5 + 16);
      v61 = *(_DWORD *)(a5 + 20);
      v56[1] = 0;
      v63[1] = 0;
      v65 = 0LL;
      v63[0] = v54 != 0LL ? 2 : 0;
      if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, a6, v63, v56) )
      {
        v13 = 9;
        *(_WORD *)a5 = -1;
      }
    }
  }
  else
  {
    v34 = a6;
  }
  if ( v12 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
      v19,
      v17,
      (LARGE_INTEGER)v15.QuadPart,
      (LARGE_INTEGER)v16.QuadPart);
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(1LL, 0LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8u, 1);
    UserSessionSwitchLeaveCrit(v37, v36, v38, v39);
  }
  LODWORD(gptCursorAsync) = v11;
  gptCursorAsync->y = a2;
  if ( a10 )
  {
    if ( !a5 || (v40 = 1LL, (*(_BYTE *)(a5 + 2) & 1) != 0) )
      v40 = 0LL;
  }
  else
  {
    v40 = 2LL;
  }
  v41 = CCursorClip::BoundPoint(gpCursorClip, gptCursorAsync, v40, 0LL, gptCursorAsync);
  if ( v41 == 2 )
  {
    v13 |= 2u;
  }
  else if ( v41 == 1 )
  {
    v13 |= 4u;
  }
  if ( a5 )
    *(_WORD *)(a5 + 2) = *(_WORD *)(a5 + 2);
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors(v42, 1LL) )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v43);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, v43, 0);
    }
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v54, "MoveCursor", 0LL);
    EtwTraceGreMovePointerBegin(v34, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v44 = KeQueryPerformanceCounter(0LL);
    v45 = v53;
    v53[2] = v44;
    CursorApiRouter::MovePointer(v46, *(HDEV *)(gpDispInfo + 40LL), (int)gptCursorAsync, gptCursorAsync->y);
    v45[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(v34, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v13 |= 0x10u;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v54);
    CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  }
  if ( !gProtocolType )
  {
    if ( *(_DWORD *)(SGDGetUserSessionState(v42) + 15936) )
    {
      v48 = *(_DWORD *)(SGDGetUserSessionState(v47) + 15936) + 1;
      _InterlockedExchange((volatile __int32 *)(SGDGetUserSessionState(v49) + 15940), v48);
    }
  }
  return v13;
}
