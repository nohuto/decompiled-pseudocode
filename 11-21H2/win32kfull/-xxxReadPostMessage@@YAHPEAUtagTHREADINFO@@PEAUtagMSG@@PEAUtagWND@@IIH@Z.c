/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0057600
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C0004DA4 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FindQMsg @ 0x1C0057C00 (FindQMsg.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C005806C (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A5F14 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01EA2A8 (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C0217AA8 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  struct tagMSG *v6; // rbx
  unsigned int *v8; // r15
  int v9; // eax
  __int64 **v10; // rsi
  unsigned int v11; // r14d
  __int64 QMsg; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  int v15; // r8d
  _QWORD *v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  struct tagMSG *v21; // rcx
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rcx
  int v26; // eax
  int v28; // r9d
  int v29; // edx
  unsigned int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // [rsp+20h] [rbp-D8h]
  int v37; // [rsp+28h] [rbp-D0h]
  __int64 v38; // [rsp+70h] [rbp-88h]
  __int64 v39; // [rsp+78h] [rbp-80h]
  __int64 v40; // [rsp+80h] [rbp-78h]
  _QWORD *v41; // [rsp+88h] [rbp-70h]

  v6 = a2;
  v8 = (unsigned int *)((char *)a1 + 488);
  v9 = *((_DWORD *)a1 + 122);
  if ( (v9 & 0x40000000) != 0 && !*((_DWORD *)a1 + 206) )
  {
    v31 = a6;
    if ( a6 )
      *v8 = v9 & 0xBFFFFFFF;
    *(_QWORD *)a2 = 0LL;
    *((_DWORD *)a2 + 2) = 18;
    *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 146);
    *((_QWORD *)a2 + 3) = 0LL;
    *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v32 = *((_QWORD *)a1 + 54);
    v35 = *(_QWORD *)(v32 + 120);
    if ( v35 )
    {
      v34 = *(_QWORD *)(v35 + 16);
      goto LABEL_69;
    }
    goto LABEL_68;
  }
  v10 = (__int64 **)((char *)a1 + 808);
  v11 = 0;
  QMsg = FindQMsg(a1, (struct tagTHREADINFO *)((char *)a1 + 808), a5, 0);
  v40 = QMsg;
  v13 = QMsg;
  if ( QMsg )
  {
    if ( (*((_DWORD *)a1 + 314) & 0x2000) != 0 || (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) > 1 )
    {
      v14 = a6;
    }
    else
    {
      v14 = 1;
      a6 = 1;
    }
    EtwTraceRetrievePostMessage(v13, v14);
    *((_DWORD *)a1 + 142) = *(_DWORD *)(v13 + 48);
    if ( *(_QWORD *)((char *)a1 + 764) != *(_QWORD *)(v13 + 52) )
      *v8 |= 0x100000u;
    *((_DWORD *)a1 + 191) = *(_DWORD *)(v13 + 52);
    *((_DWORD *)a1 + 192) = *(_DWORD *)(v13 + 56);
    v38 = *(_QWORD *)(v13 + 16);
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v38 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_59;
    v39 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v38 * *((_DWORD *)&gSharedInfo + 4);
    v16 = (_QWORD *)HMPkheFromPhe(v39);
    v41 = v16;
    v15 = 0x7FFF;
    v17 = WORD1(v38) & 0x7FFF;
    v18 = v39;
    if ( (WORD1(v38) & 0x7FFF) != *(_WORD *)(v39 + 26) && v17 != 0x7FFF )
    {
      if ( v17 || !PsGetCurrentProcessWow64Process(v39) )
        goto LABEL_59;
      v18 = v39;
      v16 = v41;
    }
    if ( (*(_BYTE *)(v18 + 25) & 1) == 0 && *(_BYTE *)(v18 + 24) == 1 )
    {
      v19 = *v16;
LABEL_13:
      if ( v19 )
        v20 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL);
      else
        v20 = *(_DWORD *)(*((_QWORD *)a1 + 53) + 280LL);
      *((_DWORD *)a1 + 193) = v20;
      *((_QWORD *)a1 + 97) = *(_QWORD *)(v13 + 80);
      *((_QWORD *)a1 + 72) = v13;
      *(_QWORD *)(*((_QWORD *)a1 + 54) + 400LL) = *(_QWORD *)(v13 + 72);
      *((_QWORD *)a1 + 159) = *(_QWORD *)(v13 + 120);
      v21 = a2;
      *(_OWORD *)a2 = *(_OWORD *)(v13 + 16);
      *((_OWORD *)a2 + 1) = *(_OWORD *)(v13 + 32);
      *((_OWORD *)a2 + 2) = *(_OWORD *)(v13 + 48);
      if ( a6 )
      {
        v22 = (unsigned __int64 *)*((_QWORD *)a1 + 60);
        v23 = *v22;
        if ( (*(_DWORD *)(v13 + 100) & 1) != 0 )
          v24 = v23 | 0x1000;
        else
          v24 = v23 & 0xFFFFFFFFFFFFEFFFuLL;
        *v22 = v24;
        if ( *((_DWORD *)*v10 + 6) == 786 )
          CheckRemoveHotkeyBit(a1, v10);
        if ( (*((_DWORD *)a1 + 122) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
          return 0LL;
        v25 = *(_QWORD **)(v13 + 8);
        if ( v25 )
          *v25 = *(_QWORD *)v13;
        if ( *(_QWORD *)v13 )
          *(_QWORD *)(*(_QWORD *)v13 + 8LL) = *(_QWORD *)(v13 + 8);
        if ( *v10 == (__int64 *)v13 )
          *v10 = *(__int64 **)v13;
        if ( v10[1] == (__int64 *)v13 )
          v10[1] = *(__int64 **)(v13 + 8);
        v26 = *(_DWORD *)(v13 + 100);
        if ( (v26 & 0x2000) == 0 && (v26 & 0x4000) == 0 && (v26 & 0x10000) == 0 )
        {
          v28 = *((_DWORD *)v10 + 4) - 1;
          *((_DWORD *)v10 + 4) = v28;
          LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qiqdd(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v22,
              v15,
              v28,
              v36,
              v37,
              20,
              (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids,
              v13,
              *(_QWORD *)(v13 + 136),
              (char)v10,
              *((_DWORD *)v10 + 5),
              v28);
          }
          v26 = *(_DWORD *)(v40 + 100);
        }
        if ( (v26 & 8) != 0
          && !*(_DWORD *)(v13 + 96)
          && (unsigned int)IsPointerInputMessage(*(unsigned int *)(v13 + 24)) )
        {
          FreePointerMessageParams(v13);
        }
        Win32FreeToPagedLookasideList(QEntryLookaside, v13);
        v21 = a2;
      }
      else
      {
        *((_QWORD *)a1 + 72) = 1LL;
      }
      v29 = *((_DWORD *)v21 + 2);
      if ( (unsigned int)(v29 + 2147482655) <= 7 )
      {
        *((_DWORD *)v21 + 2) = v29 & 0x7FFFFFFF;
        xxxDDETrackGetMessageHook();
        if ( !a6 && v13 == FindQMsg(a1, (struct tagMLIST *)v10, a5, 0) )
        {
          *(_OWORD *)(v13 + 16) = *(_OWORD *)a2;
          *(_OWORD *)(v13 + 32) = *((_OWORD *)a2 + 1);
          *(_OWORD *)(v13 + 48) = *((_OWORD *)a2 + 2);
        }
      }
      goto LABEL_45;
    }
LABEL_59:
    v19 = 0LL;
    goto LABEL_13;
  }
  if ( (*v8 & 0x40000000) != 0 && !*((_DWORD *)a1 + 206) )
  {
    v31 = a6;
    if ( a6 )
      *v8 &= ~0x40000000u;
    v6 = a2;
    *(_QWORD *)a2 = 0LL;
    *((_DWORD *)a2 + 2) = 18;
    *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 146);
    *((_QWORD *)a2 + 3) = 0LL;
    *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v32 = *((_QWORD *)a1 + 54);
    v33 = *(_QWORD *)(v32 + 120);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 16);
LABEL_69:
      *(_QWORD *)((char *)v6 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(v34 + 424)
                                                                                             + 280LL));
      EtwTraceRetrievePseudoMessage(a1, v6, v31);
      return 1LL;
    }
LABEL_68:
    v34 = *(_QWORD *)(v32 + 96);
    goto LABEL_69;
  }
LABEL_45:
  if ( !*((_DWORD *)v10 + 4) && (*v8 & 0x40000000) == 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 8LL), 0xFFFFFEF7);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 4LL), 0xFFFFFEFF);
  }
  LOBYTE(v11) = v13 != 0;
  return v11;
}
