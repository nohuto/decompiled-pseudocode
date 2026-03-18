/*
 * XREFs of _PostTransformableMessageIL @ 0x1C00A735C
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A6928 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 *     ValidateDDEConvPair @ 0x1C0217870 (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostTransformableMessageIL(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  int v9; // r9d
  __int64 v10; // rsi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v12; // r14
  __int64 v13; // rcx
  __int16 v14; // cx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  if ( a2 - 992 <= 8 )
  {
    v17 = ValidateDDEConvPair(a3, a1);
    v9 = a5;
    if ( v17 )
      v9 = 1;
  }
  else
  {
    v9 = a5;
  }
  if ( a2 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
    v9 = v18;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( v9 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( a2 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v10,
                         a1,
                         a2,
                         a3,
                         a4,
                         0) )
      return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
    if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
      || a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
    {
      MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 2);
      return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
    }
    if ( *(_QWORD *)v10 == gpepCSRSS )
      v20 = 0x2000LL;
    else
      v20 = *(_QWORD *)(v10 + 880);
    if ( (unsigned __int8)CheckAccess((char *)v12 + 880, &v20) )
    {
      if ( (unsigned __int8)Enforced(v13) )
        v14 = 5;
      else
        v14 = 1;
      MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, v14);
      return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
    }
    if ( a2 == 793 )
    {
      v19 = *((_QWORD *)a1 + 2);
      if ( *(struct tagWND **)(v19 + 1392) == a1 && *(_QWORD *)(v19 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
        return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
    }
    EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
    UserSetLastError(5LL, v16);
    MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 0);
  }
  return 0LL;
}
