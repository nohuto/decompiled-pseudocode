/*
 * XREFs of xxxInterSendMsgEx @ 0x1C00517B0
 * Callers:
 *     NtUserReplyMessage @ 0x1C0001170 (NtUserReplyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     ClearSendMessages @ 0x1C0060BF8 (ClearSendMessages.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 *     xxxReceiverDied @ 0x1C00F7FC0 (xxxReceiverDied.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005849C (TransformMessageBetweenCoordinateSpaces.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 *     ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4 (-IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     wcsncpycch @ 0x1C00D50E0 (wcsncpycch.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C0101550 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ProcessSuspendedSendMessage @ 0x1C011B430 (ProcessSuspendedSendMessage.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015C110 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015C1E4 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     strncpycch @ 0x1C016E572 (strncpycch.c)
 *     _FreeTouchInputInfo @ 0x1C01D7140 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInterSendMsgEx(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        void **a4,
        int a5,
        struct tagTHREADINFO *a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 CurrentProcessWin32Process; // r15
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // ebx
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  int v20; // ebx
  __int16 v21; // ax
  void **v22; // r15
  struct tagTHREADINFO *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned int v26; // edi
  int v27; // ecx
  __int64 v28; // rax
  void *v29; // rdx
  size_t v30; // r8
  void **v31; // rdx
  __int64 v32; // rcx
  _OWORD *v33; // rax
  void **v35; // rdx
  int v36; // edx
  size_t v37; // r8
  void **v38; // rdi
  const void *v39; // rdx
  size_t v40; // r8
  __int64 v41; // rdi
  size_t v42; // r8
  struct tagTHREADINFO *v43; // rdi
  __int64 v44; // rdx
  struct tagTHREADINFO *v45; // r15
  unsigned __int64 v46; // rcx
  struct tagTHREADINFO **v47; // rcx
  unsigned int v48; // eax
  int v49; // edi
  int v50; // r15d
  unsigned int v51; // edi
  struct tagTHREADINFO *v52; // rdx
  __int64 v53; // r8
  int v54; // esi
  __int64 v55; // rdi
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  int v63; // eax
  int v64; // ecx
  int v65; // ecx
  _QWORD *v66; // rcx
  const void *v67; // rdx
  int v68; // edx
  int v69; // r8d
  int v70; // eax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  __int128 *v74; // rax
  __int128 v75; // xmm0
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 CurrentProcess; // rax
  __int64 v80; // rax
  _DWORD *v81; // r15
  _DWORD *v82; // rdx
  __int64 v83; // rcx
  int v84; // eax
  unsigned int v85; // [rsp+44h] [rbp-124h]
  int v86; // [rsp+4Ch] [rbp-11Ch]
  unsigned int v87; // [rsp+50h] [rbp-118h]
  int Size; // [rsp+58h] [rbp-110h]
  void **Src; // [rsp+60h] [rbp-108h]
  void *Srca; // [rsp+60h] [rbp-108h]
  void *v91[2]; // [rsp+68h] [rbp-100h] BYREF
  __int64 v92; // [rsp+78h] [rbp-F0h] BYREF
  void **v93; // [rsp+80h] [rbp-E8h]
  void *v94; // [rsp+88h] [rbp-E0h]
  _QWORD *v95; // [rsp+90h] [rbp-D8h]
  unsigned __int64 HighLimit; // [rsp+98h] [rbp-D0h] BYREF
  unsigned __int64 LowLimit; // [rsp+A0h] [rbp-C8h] BYREF
  void **v98; // [rsp+A8h] [rbp-C0h]
  _DWORD *v99; // [rsp+B0h] [rbp-B8h]
  _QWORD *v100; // [rsp+B8h] [rbp-B0h]
  __int64 v101; // [rsp+C0h] [rbp-A8h]
  __int64 v102; // [rsp+C8h] [rbp-A0h]
  __int64 v103; // [rsp+D0h] [rbp-98h]
  _QWORD v104[4]; // [rsp+E0h] [rbp-88h] BYREF
  _BYTE v105[16]; // [rsp+100h] [rbp-68h] BYREF
  __int128 v106; // [rsp+110h] [rbp-58h] BYREF
  __int64 v107; // [rsp+120h] [rbp-48h]
  int v111; // [rsp+190h] [rbp+28h]
  char v112; // [rsp+190h] [rbp+28h]

  v101 = 0LL;
  v98 = 0LL;
  v93 = 0LL;
  *(_OWORD *)v91 = 0LL;
  v94 = 0LL;
  v86 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v12 = gptiCurrent;
  if ( !a5 )
    v12 = 0LL;
  v103 = v12;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v12 && (*(_DWORD *)(v12 + 488) & 1) != 0 )
    return 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1
    || (v15 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL), v15 == CurrentProcessWin32Process)
    || a2 >= 0xE && a2 < 0x4E
    || a2 < 0xC )
  {
LABEL_10:
    if ( !a8 )
    {
      v16 = 0LL;
      if ( a1 )
      {
        v16 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      }
      else if ( a6 )
      {
        v16 = *((_QWORD *)a6 + 53);
      }
      if ( v16 != CurrentProcessWin32Process )
      {
        if ( a2 == 717 )
          return 0LL;
        v17 = IsMessageAllowedAcrossILByReceiver(
                (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                (struct tagPROCESSINFO *)v16,
                a1,
                a2,
                a3,
                (__int64)a4,
                1);
        if ( !v17 )
        {
          v17 = IsMessageAlwaysAllowedAcrossIL(a2);
          if ( v17 )
            MSGSQMAddMessage(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              (struct tagPROCESSINFO *)v16,
              (__int64)a4,
              1,
              2);
        }
        v13 = 2LL;
        if ( !v17 )
        {
          if ( a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
          {
            if ( *(_QWORD *)v16 == gpepCSRSS )
              v92 = 0x2000LL;
            else
              v92 = *(_QWORD *)(v16 + 880);
            v18 = CheckAccess(CurrentProcessWin32Process + 880, &v92);
            v20 = v18;
            if ( v18 )
            {
              if ( (unsigned __int8)Enforced(v19) )
                v21 = 5;
              else
                v21 = 1;
              MSGSQMAddMessage(
                (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                (struct tagPROCESSINFO *)v16,
                (__int64)a4,
                1,
                v21);
            }
          }
          else
          {
            v20 = 1;
            MSGSQMAddMessage(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              (struct tagPROCESSINFO *)v16,
              (__int64)a4,
              1,
              2);
          }
          if ( !v20 )
          {
            if ( a1
              && a2 == 793
              && (v13 = *((_QWORD *)a1 + 2), *(struct tagWND **)(v13 + 1392) == a1)
              && *(_QWORD *)(v13 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
            {
              v20 = 1;
            }
            else
            {
              EtwTraceUIPIMsgError(CurrentProcessWin32Process, v16, a2, a3, a4);
              UserSetLastError(5LL);
              MSGSQMAddMessage(
                (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                (struct tagPROCESSINFO *)v16,
                (__int64)a4,
                1,
                0);
            }
            if ( !v20 )
              return 0LL;
          }
        }
      }
    }
    v22 = a4;
    if ( a2 == 576 )
    {
      if ( !HMValidateHandle((__int64)a4, 0x14u) )
        return 0LL;
    }
    else if ( a2 == 281 && !HMValidateHandle((__int64)a4, 0x15u) )
    {
      return 0LL;
    }
    v23 = a6;
    if ( (*((_DWORD *)a6 + 314) & 0x20) == 0 )
      goto LABEL_30;
    if ( a7 )
    {
      if ( (*(_DWORD *)(a7 + 32) & 0x40) != 0 )
        goto LABEL_298;
      if ( *(_DWORD *)a7 == 2 && *(_DWORD *)(a7 + 36) )
        return 0LL;
    }
    if ( !v12 )
    {
LABEL_270:
      if ( !a7 )
      {
        if ( !(unsigned int)ProcessSuspendedSendMessage(v23, a1, a2, a3, a4) )
          return 0LL;
        v23 = a6;
      }
      if ( *((_DWORD *)v23 + 134) > 0x2710u )
        return 0LL;
LABEL_30:
      v24 = Win32AllocateFromPagedLookasideList(SMSLookaside, v13);
      v25 = v24;
      v102 = v24;
      if ( !v24 )
        return 0LL;
      *(_QWORD *)(v24 + 120) = 0LL;
      v85 = 0;
      v111 = 0;
      Src = a4;
      *(_DWORD *)(v24 + 128) = *(_DWORD *)(gptiCurrent + 1412LL);
      if ( a7 && *(_DWORD *)a7 == 33 )
      {
LABEL_140:
        *(_QWORD *)(v25 + 112) = 0LL;
        v43 = (struct tagTHREADINFO *)(v25 + 16);
        *(_QWORD *)(v25 + 16) = 0LL;
        v104[0] = v25 + 112;
        v104[1] = a1;
        HMAssignmentLock(v104, 0LL);
        *(_DWORD *)(v25 + 104) = a2;
        *(_QWORD *)(v25 + 88) = a3;
        *(_QWORD *)(v25 + 96) = v22;
        *(_DWORD *)(v25 + 84) = 0;
        v95 = (_QWORD *)(v25 + 72);
        *(_QWORD *)(v25 + 72) = 0LL;
        if ( a2 == 576 || a2 == 281 )
        {
          v80 = _HMObjectFromHandle(v22);
          v45 = a6;
          if ( v80 )
            HMChangeOwnerThread(v80, a6);
        }
        else
        {
          v45 = a6;
        }
        if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
          goto LABEL_325;
        *(_QWORD *)v25 = gsmsList;
        *(_QWORD *)(v25 + 8) = gsmsList;
        *(_QWORD *)(gsmsList + 8LL) = v25;
        gsmsList = v25;
        v46 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(v25 + 80) = v46;
        *(_QWORD *)(v25 + 40) = v45;
        *(_QWORD *)(v25 + 32) = v12;
        *(_DWORD *)(v25 + 132) = W32GetCurrentThreadDpiAwarenessContext(v46, v44);
        *(_QWORD *)(v25 + 64) = 0LL;
        if ( a7 && (*(_DWORD *)a7 & 1) != 0 )
        {
          if ( (*(_DWORD *)a7 & 0x100) != 0 )
            v64 = 1024;
          else
            v64 = 2048;
          v65 = *(_DWORD *)(v25 + 84) | v64;
          *(_DWORD *)(v25 + 84) = v65;
          *(_QWORD *)(v25 + 48) = *(_QWORD *)(a7 + 8);
          *(_QWORD *)(v25 + 56) = *(_QWORD *)(a7 + 16);
          if ( (*(_DWORD *)a7 & 0x20) != 0 )
          {
            *(_DWORD *)(v25 + 84) = v65 | 0x200;
            *v95 = *(_QWORD *)(a7 + 24);
          }
          else
          {
            *(_DWORD *)(v25 + 84) = v65 | 0x100;
            *(_QWORD *)(v25 + 64) = gptiCurrent;
          }
        }
        if ( a9 )
          *(_DWORD *)(v25 + 84) |= 0x10000u;
        v47 = (struct tagTHREADINFO **)*((_QWORD *)v45 + 66);
        if ( *v47 != (struct tagTHREADINFO *)((char *)v45 + 520) )
          goto LABEL_325;
        *(_QWORD *)v43 = (char *)v45 + 520;
        *(_QWORD *)(v25 + 24) = v47;
        *v47 = v43;
        *((_QWORD *)v45 + 66) = v43;
        v48 = *((_DWORD *)v45 + 134) + 1;
        *((_DWORD *)v45 + 134) = v48;
        if ( v48 > LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
          LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = v48;
        if ( v12 )
        {
          v101 = *(_QWORD *)(v12 + 504);
          *(_QWORD *)(v12 + 504) = v25;
        }
        else
        {
          *(_DWORD *)(v25 + 84) |= 8u;
        }
        if ( (*(_DWORD *)(v25 + 84) & 0x200) == 0 )
        {
          if ( a2 - 577 <= 0x16 && (v49 = 8122367, _bittest(&v49, a2 - 577)) || a2 == 528 && (_WORD)a3 == 582 )
            CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, a4, 6LL, v25);
        }
        EtwTraceBeginSendMessage(v25, v12, a7);
        if ( !v12 )
        {
          SetWakeBit(v45, 64LL);
          EtwTraceEndSendMessage(v25);
          return 1LL;
        }
        v50 = 0;
        v87 = 0;
        v51 = 512;
        Size = 0;
        if ( (*((_DWORD *)a6 + 122) & 1) == 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 8LL), 0x40u);
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 4LL), 0x40u);
          if ( (*(_DWORD *)(*((_QWORD *)a6 + 56) + 16LL) & 0x40) != 0 )
            KeSetEvent(*((PRKEVENT *)a6 + 92), 2, 0);
        }
        if ( a7 )
        {
          v87 = *(_DWORD *)(a7 + 36);
          v51 = ((*(_DWORD *)(a7 + 32) & 1) << 15) + 512;
        }
        CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v105);
        v52 = a6;
        if ( *(_QWORD *)(v12 + 432) == *((_QWORD *)a6 + 54) )
        {
          v63 = *(_DWORD *)(v12 + 488);
          if ( (v63 & 0x10000) == 0 )
          {
            *(_DWORD *)(v12 + 488) = v63 | 0x10000;
            Size = 1;
          }
        }
        for ( ; (*(_DWORD *)(v25 + 84) & 1) == 0; v52 = a6 )
        {
          if ( v50 )
            break;
          v99 = 0LL;
          v106 = 0LL;
          v107 = 0LL;
          v112 = 0;
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v12 + 448) + 4LL), 0xFFFFFDFF);
          if ( a2 == 788 )
          {
            if ( a4 )
            {
              if ( *((_DWORD *)v52 + 158) <= 0x501u )
              {
                if ( *((_DWORD *)v52 + 162) )
                {
                  v81 = *a4;
                  v99 = v81;
                  if ( (unsigned int)(v81[12] - 13) <= 1 )
                  {
                    ThreadLock(v81, &v106);
                    v112 = 1;
                  }
                }
              }
            }
          }
          v50 = xxxRealSleepThread(v51, v87, 0, 0, 0LL) == 0;
          if ( v112 )
          {
            v82 = v99;
            v83 = (v50 << 7) | v99[22] & 0xFFFFFF7F;
            v99[22] = v83;
            if ( v50 )
            {
              v84 = v83 ^ ((unsigned __int8)v83 ^ (unsigned __int8)(v83 + 1)) & 0x7F;
              v82[22] = v84;
              if ( (v84 & 0x7Fu) > 0xA )
                v82[16] |= 0x10u;
            }
            ThreadUnlock1(v83, v82, v53);
          }
          if ( v50 && a7 )
          {
            v68 = *(_DWORD *)(a7 + 32);
            v69 = *(_DWORD *)(v25 + 84);
            if ( ((v68 & 0x10) != 0 || (v69 & 0x20) != 0) && (v69 & 0x10) != 0 )
            {
              v87 = 0;
              v50 = 0;
            }
            if ( (v68 & 8) != 0 && !(unsigned int)IsThreadHung(a6, 0) )
            {
              v50 = 0;
LABEL_317:
              EtwTraceConvertTimeOutToBlocking();
              continue;
            }
            if ( !v50 )
              goto LABEL_317;
          }
        }
        CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v105);
        if ( Size )
        {
          *(_DWORD *)(v12 + 488) &= ~0x10000u;
          MergeDeferredMessagesOfThreadOnQueue(v12);
        }
        if ( (*(_DWORD *)(v12 + 488) & 1) == 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v12 + 448) + 8LL), 0x200u);
          _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v12 + 448) + 4LL), 0x200u);
          if ( (*(_DWORD *)(*(_QWORD *)(v12 + 448) + 16LL) & 0x200) != 0 )
            KeSetEvent(*(PRKEVENT *)(v12 + 736), 2, 0);
        }
        if ( !v50 )
        {
          if ( v85 )
          {
            v66 = v94;
            v100 = v94;
            if ( a2 != 131 )
            {
              v67 = *(const void **)(v25 + 120);
              if ( v86 )
              {
                if ( v86 == 1 )
                  strncpycch(v94, v67);
                else
                  wcsncpycch(v94, v67, v85 >> 1);
              }
              else
              {
                memmove(v94, v67, v85);
              }
              v54 = 8122367;
              goto LABEL_179;
            }
            if ( a9 && a1 )
            {
              if ( (unsigned int)IsWindowDesktopComposed(a1) )
              {
                TransformMessageBetweenCoordinateSpaces(0x83u, 0LL, (__int64)a1);
                v66 = v100;
              }
              else
              {
                v66 = v94;
              }
            }
            v74 = *(__int128 **)(v25 + 120);
            v75 = *v74;
            if ( a3 )
            {
              v76 = v66[6];
              *(_OWORD *)v66 = v75;
              *((_OWORD *)v66 + 1) = v74[1];
              *((_OWORD *)v66 + 2) = v74[2];
              v66[6] = v76;
              v77 = *((_QWORD *)v74 + 6);
              v54 = 8122367;
              if ( v77 )
              {
                *(_OWORD *)v76 = *(_OWORD *)v77;
                *(_OWORD *)(v76 + 16) = *(_OWORD *)(v77 + 16);
                *(_QWORD *)(v76 + 32) = *(_QWORD *)(v77 + 32);
              }
              goto LABEL_179;
            }
            *(_OWORD *)v66 = v75;
          }
          else if ( a2 == 831 && a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
          {
            TransformMessageBetweenCoordinateSpaces(0x33Fu, 0LL, (__int64)a1);
          }
        }
        v54 = 8122367;
LABEL_179:
        EtwTraceEndSendMessage(v25);
        *(_QWORD *)(v12 + 504) = v101;
        if ( a7 )
        {
          **(_QWORD **)(a7 + 40) = *v95;
          v55 = 0LL;
          if ( (*(_DWORD *)(v25 + 84) & 0x8000) != 0 && (*(_BYTE *)(a7 + 32) & 0x20) != 0 )
            UserSetLastError(1400LL);
          else
            LOBYTE(v55) = v50 == 0;
        }
        else
        {
          v55 = *v95;
        }
        if ( a7 || v50 )
        {
          v56 = *(_DWORD *)(v25 + 84);
          if ( (v56 & 1) == 0 )
          {
            v70 = v56 | 1;
            *(_DWORD *)(v25 + 84) = v70;
            if ( (v70 & 0x4000) != 0 )
            {
              *(_DWORD *)(v25 + 84) = v70 | 8;
            }
            else
            {
              --*((_DWORD *)a6 + 134);
              v71 = (_QWORD *)(v25 + 16);
              v72 = *(_QWORD *)(v25 + 16);
              v73 = *(_QWORD **)(v25 + 24);
              if ( *(_QWORD *)(v72 + 8) != v25 + 16 || (_QWORD *)*v73 != v71 )
                goto LABEL_325;
              *v73 = v72;
              *(_QWORD *)(v72 + 8) = v73;
              *v71 = 0LL;
              *(_DWORD *)(v25 + 84) |= 0x10u;
            }
          }
        }
        v57 = *(_DWORD *)(v25 + 84);
        if ( (v57 & 0x4010) != 0x10 )
        {
          v57 |= 8u;
          *(_DWORD *)(v25 + 84) = v57;
        }
        if ( (v57 & 0x8008) == 8 )
          return v55;
        v58 = *(_DWORD *)(v25 + 104);
        if ( v58 == 576 )
        {
          FreeTouchInputInfo(*(_QWORD *)(v25 + 96), 0LL);
        }
        else if ( v58 == 281 )
        {
          FreeGestureInfo(*(_QWORD *)(v25 + 96), 0LL);
        }
        if ( (*(_DWORD *)(v25 + 84) & 0x200) == 0 )
        {
          if ( (v59 = *(_DWORD *)(v25 + 104), (unsigned int)(v59 - 577) <= 0x16) && _bittest(&v54, v59 - 577)
            || v59 == 528 && *(_WORD *)(v25 + 88) == 582 )
          {
            CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v25 + 96), 6LL, v25);
          }
        }
        v60 = *(_QWORD *)v25;
        v61 = *(_QWORD **)(v25 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) == v25 && *v61 == v25 )
        {
          *v61 = v60;
          *(_QWORD *)(v60 + 8) = v61;
          HMAssignmentUnlock(v25 + 112);
          v62 = *(_QWORD *)(v25 + 120);
          if ( v62 )
            Win32FreePool(v62);
          Win32FreeToPagedLookasideList(SMSLookaside, v25);
          return v55;
        }
LABEL_325:
        __fastfail(3u);
      }
      if ( a2 < 0x46 && a2 >= 0x39 || a2 - 1 > 0x343 )
        goto LABEL_35;
      if ( a2 <= 0x143 )
      {
        if ( a2 == 323 )
        {
LABEL_114:
          if ( *(_DWORD *)(gptiCurrent + 1412LL) == 1 )
            goto LABEL_35;
LABEL_98:
          *(_OWORD *)v91 = *(_OWORD *)a4;
          if ( _mm_srli_si128(*(__m128i *)v91, 8).m128i_u64[0] >= (unsigned __int64)MmSystemRangeStart && v12 )
            goto LABEL_35;
          v26 = LODWORD(v91[0]) + 18;
          v111 = LODWORD(v91[0]) + 18;
          if ( (unsigned int)(LODWORD(v91[0]) + 18) < LODWORD(v91[0]) )
          {
LABEL_116:
            Win32FreeToPagedLookasideList(SMSLookaside, v24);
            return 8LL;
          }
        }
        else
        {
          switch ( a2 )
          {
            case 1u:
            case 0x81u:
              UserSetLastError(5LL);
              Win32FreeToPagedLookasideList(SMSLookaside, v25);
              return 0LL;
            case 0xCu:
            case 0x1Au:
            case 0xC2u:
              if ( a4 )
                goto LABEL_98;
              goto LABEL_35;
            case 0xDu:
            case 0xC4u:
              goto LABEL_75;
            case 0x1Bu:
              goto LABEL_98;
            case 0x38u:
              v26 = *(unsigned __int16 *)a4;
              v111 = v26;
              break;
            case 0x46u:
            case 0x47u:
              v26 = 40;
              v111 = 40;
              v85 = 40;
              break;
            case 0x49u:
              v26 = a3;
              v111 = a3;
              break;
            case 0x4Au:
              v98 = a4;
              if ( !a4[2] )
              {
                v26 = 24;
                v111 = 24;
                goto LABEL_54;
              }
              v26 = *((_DWORD *)a4 + 2) + 24;
              v111 = v26;
              if ( v26 < 0x18 )
              {
                Win32FreeToPagedLookasideList(SMSLookaside, v24);
                return 0LL;
              }
              break;
            case 0x53u:
              v26 = *(_DWORD *)a4;
              v111 = *(_DWORD *)a4;
              break;
            case 0x83u:
              if ( a3 )
                v26 = 96;
              else
                v26 = 16;
              v111 = v26;
              v85 = v26;
              break;
            case 0xCBu:
LABEL_118:
              v26 = 4 * a3;
              v111 = 4 * a3;
              break;
            default:
              goto LABEL_35;
          }
        }
      }
      else
      {
        if ( a2 <= 0x283 )
        {
          if ( a2 != 643 )
          {
            switch ( a2 )
            {
              case 0x145u:
              case 0x18Du:
              case 0x196u:
                goto LABEL_98;
              case 0x148u:
              case 0x189u:
                goto LABEL_75;
              case 0x14Au:
              case 0x14Cu:
              case 0x14Du:
              case 0x158u:
                goto LABEL_114;
              case 0x180u:
              case 0x181u:
              case 0x18Cu:
              case 0x18Fu:
              case 0x1A2u:
                if ( *(_DWORD *)(gptiCurrent + 1412LL) != 1 )
                  goto LABEL_98;
                goto LABEL_35;
              case 0x191u:
              case 0x192u:
                goto LABEL_118;
              case 0x218u:
                if ( !a4 || (a3 & 0x8000) == 0 || a4 >= MmSystemRangeStart && v12 )
                  goto LABEL_35;
                v26 = *((_DWORD *)a4 + 4) + 20;
                v111 = v26;
                if ( v26 >= 0x14 )
                  goto LABEL_36;
                goto LABEL_116;
              case 0x219u:
                if ( !a4 || (a3 & 0x8000) == 0 || a4 >= MmSystemRangeStart && v12 )
                  goto LABEL_35;
                v26 = *(_DWORD *)a4;
                goto LABEL_79;
              case 0x220u:
                v93 = a4;
                v26 = (*((_DWORD *)a4 + 15) & 0x7FFFFFFF) + (*((_DWORD *)a4 + 19) & 0x7FFFFFFF);
                v111 = v26;
                goto LABEL_36;
              default:
                goto LABEL_35;
            }
          }
          if ( a3 == 24 )
          {
            v26 = (*(_DWORD *)a4 << 9) + 4;
            goto LABEL_79;
          }
          goto LABEL_35;
        }
        switch ( a2 )
        {
          case 0x30Cu:
LABEL_75:
            *(_OWORD *)v91 = *(_OWORD *)a4;
            if ( SHIDWORD(v91[0]) < 0 )
              v86 = 1;
            else
              v86 = 2;
            v22 = v91;
            a4 = v91;
            if ( v91[1] < MmSystemRangeStart || !v12 )
            {
              v26 = HIDWORD(v91[0]) & 0x7FFFFFFF;
LABEL_79:
              v111 = v26;
              break;
            }
LABEL_35:
            v26 = 0;
            break;
          case 0x341u:
            v26 = 96;
            v111 = 96;
            v85 = 96;
            break;
          case 0x342u:
            v26 = 80;
            v111 = 80;
            goto LABEL_54;
          case 0x344u:
            v26 = 1204;
            v111 = 1204;
            v85 = 1204;
            break;
          default:
            goto LABEL_35;
        }
      }
LABEL_36:
      if ( !v26 )
      {
LABEL_37:
        v27 = v111;
        goto LABEL_134;
      }
LABEL_54:
      v28 = Win32AllocPoolWithQuotaZInit(v26, 1668510549LL);
      *(_QWORD *)(v25 + 120) = v28;
      if ( !v28 )
        goto LABEL_37;
      v94 = v22;
      if ( a2 != 70 && a2 != 71 && a2 <= 0x30C )
      {
        if ( a2 == 131 )
        {
          v31 = Src;
          if ( a3 )
          {
            *(_OWORD *)v28 = *(_OWORD *)Src;
            *(_OWORD *)(v28 + 16) = *((_OWORD *)Src + 1);
            *(_OWORD *)(v28 + 32) = *((_OWORD *)Src + 2);
            *(_QWORD *)(v28 + 48) = Src[6];
            v32 = *(_QWORD *)(v25 + 120) + 56LL;
            *(_QWORD *)(v28 + 48) = v32;
            v33 = Src[6];
            *(_OWORD *)v32 = *v33;
            *(_OWORD *)(v32 + 16) = v33[1];
            *(_QWORD *)(v32 + 32) = *((_QWORD *)v33 + 4);
            v22 = *(void ***)(v25 + 120);
            a4 = v22;
            goto LABEL_37;
          }
          v30 = v26;
          goto LABEL_68;
        }
        if ( a2 > 0x83 )
        {
          if ( a2 <= 0x220 )
          {
            if ( a2 != 544 )
            {
              v29 = (void *)v28;
              switch ( a2 )
              {
                case 0xC2u:
                case 0x143u:
                case 0x145u:
                case 0x14Au:
                case 0x14Cu:
                case 0x14Du:
                case 0x158u:
                case 0x180u:
                case 0x181u:
                case 0x18Cu:
                case 0x18Du:
                case 0x18Fu:
                case 0x196u:
                case 0x1A2u:
                  goto LABEL_101;
                case 0xC4u:
                  *(_WORD *)v28 = *(_WORD *)v91[1];
                  v29 = *(void **)(v25 + 120);
                  goto LABEL_62;
                case 0x148u:
                case 0x189u:
                  goto LABEL_62;
                case 0x191u:
                  v85 = v26;
                  v30 = v26;
                  goto LABEL_67;
                default:
                  goto LABEL_66;
              }
            }
            v38 = v93;
            v39 = v93[10];
            if ( v39 )
            {
              v40 = *((unsigned int *)v93 + 19);
              LODWORD(v40) = v40 & 0x7FFFFFFF;
              memmove((void *)v28, v39, v40);
              *v38 = *(void **)(v25 + 120);
            }
            if ( *((_DWORD *)v93 + 14) )
            {
              v41 = *((unsigned int *)v93 + 19);
              LODWORD(v41) = v41 & 0x7FFFFFFF;
              Srca = (void *)(*(_QWORD *)(v25 + 120) + v41);
              v42 = *((unsigned int *)v93 + 15);
              LODWORD(v42) = v42 & 0x7FFFFFFF;
              memmove(Srca, v93[8], v42);
              v93[1] = Srca;
            }
            goto LABEL_37;
          }
          v29 = (void *)v28;
          if ( a2 == 780 )
            goto LABEL_62;
        }
        else
        {
          if ( a2 == 12 )
            goto LABEL_101;
          v29 = (void *)v28;
          if ( a2 == 13 )
          {
LABEL_62:
            v27 = v111;
            v85 = v111;
            v94 = v91[1];
            v91[1] = v29;
            goto LABEL_134;
          }
          if ( a2 > 0x19 )
          {
            if ( a2 > 0x1B )
            {
              if ( a2 == 74 )
              {
                v22 = (void **)v28;
                a4 = (void **)v28;
                v35 = v98;
                *(_OWORD *)v28 = *(_OWORD *)v98;
                *(_QWORD *)(v28 + 16) = v35[2];
                if ( !v35[2] )
                  goto LABEL_37;
                *(_QWORD *)(v28 + 16) = v28 + 24;
                memmove((void *)(v28 + 24), v35[2], *((unsigned int *)v35 + 2));
                v27 = v111;
LABEL_134:
                if ( v27 && !*(_QWORD *)(v25 + 120) )
                {
                  Win32FreeToPagedLookasideList(SMSLookaside, v25);
                  return 0LL;
                }
                if ( a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) && (a2 <= 0x240 || a2 >= 0x258 || a2 == 589) )
                {
                  TransformMessageBetweenCoordinateSpaces(a2, (__int64)a1, 0LL);
                  v22 = a4;
                }
                goto LABEL_140;
              }
              goto LABEL_66;
            }
LABEL_101:
            v22 = (void **)v28;
            a4 = (void **)v28;
            v36 = HIDWORD(v91[0]) ^ (HIDWORD(v91[0]) ^ *(_DWORD *)(v28 + 4)) & 0x7FFFFFFF;
            *(_DWORD *)(v28 + 4) = v36;
            *(_DWORD *)v28 = v91[0];
            *(_QWORD *)(v28 + 8) = v28 + 16;
            v37 = v36 ^ (v36 ^ (v26 - 16)) & 0x7FFFFFFF;
            *(_DWORD *)(v28 + 4) = v37;
            LODWORD(v37) = v37 & 0x7FFFFFFF;
            memmove((void *)(v28 + 16), v91[1], v37);
            v27 = v111;
            goto LABEL_134;
          }
        }
      }
LABEL_66:
      v30 = v26;
LABEL_67:
      v31 = Src;
LABEL_68:
      memmove((void *)v28, v31, v30);
      v22 = *(void ***)(v25 + 120);
      a4 = v22;
      goto LABEL_37;
    }
    v78 = **((_QWORD **)a6 + 53);
    CurrentProcess = PsGetCurrentProcess(a6, v13);
    if ( !PsGetProcessCommonJob(CurrentProcess, v78) )
      return 0LL;
    v23 = a6;
LABEL_298:
    if ( v12 )
      goto LABEL_30;
    goto LABEL_270;
  }
  if ( a2 <= 0xD0 )
  {
    if ( a2 != 208 )
    {
      switch ( a2 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_195;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          v13 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL);
          if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v13 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) == 0 )
            goto LABEL_10;
          UserSetLastError(5LL);
          break;
        case 0x4Eu:
          goto LABEL_279;
        default:
          goto LABEL_10;
      }
      goto LABEL_279;
    }
LABEL_195:
    if ( (!(unsigned __int8)Enforced(v14) || *(_QWORD *)v15 == gpepCSRSS)
      && (*(_DWORD *)(v15 + 780) != *(_DWORD *)(CurrentProcessWin32Process + 780)
       || *(_DWORD *)(v15 + 784) != *(_DWORD *)(CurrentProcessWin32Process + 784)) )
    {
      goto LABEL_279;
    }
    goto LABEL_10;
  }
  if ( a2 != 272 )
  {
    if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
      goto LABEL_10;
    goto LABEL_195;
  }
LABEL_279:
  UserSetLastError(5LL);
  return 0LL;
}
