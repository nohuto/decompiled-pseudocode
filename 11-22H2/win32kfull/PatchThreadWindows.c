/*
 * XREFs of PatchThreadWindows @ 0x1C00211F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x1C00213CC (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall PatchThreadWindows(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *i; // rax
  __int64 v3; // rdx
  struct _THREADSASSOCIATION **v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // r14
  __int64 *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rax

  for ( i = FindShellFrameAppThreadsAssociation(a1); i; i = FindShellFrameAppThreadsAssociation(a1) )
  {
    v3 = *(_QWORD *)i;
    if ( *(struct _THREADSASSOCIATION **)(*(_QWORD *)i + 8LL) != i
      || (v4 = (struct _THREADSASSOCIATION **)*((_QWORD *)i + 1), *v4 != i) )
    {
      __fastfail(3u);
    }
    *v4 = (struct _THREADSASSOCIATION *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    Win32FreePool(i);
  }
  v5 = gSharedInfo[1];
  result = gpKernelHandleTable;
  v7 = v5 + 32LL * giheLast;
  v8 = (__int64 *)gpKernelHandleTable;
  if ( v5 <= v7 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v5 + 24) == 1 && (struct tagTHREADINFO *)v8[1] == a1 )
      {
        v9 = *v8;
        if ( (*(_BYTE *)(v5 + 25) & 1) == 0 )
          goto LABEL_12;
        result = *(_QWORD *)(v9 + 40);
        if ( *(_QWORD *)(result + 120) || (*(_BYTE *)(result + 18) & 4) == 0 )
          break;
      }
LABEL_20:
      v5 += 32LL;
      v8 += 3;
      if ( v5 > v7 )
        return result;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5502LL);
LABEL_12:
    v10 = *(_QWORD *)(v9 + 40);
    v11 = *(unsigned __int16 *)(v10 + 42);
    if ( (unsigned __int16)(v11 - 666) > 6u )
    {
      if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage()
        || (v12 = *(_QWORD *)(v9 + 40), *(_WORD *)(v12 + 42) != 694) )
      {
        *(_QWORD *)(*(_QWORD *)(v9 + 40) + 120LL) = 0LL;
      }
      else
      {
        *(_QWORD *)(v12 + 120) = 5LL;
      }
    }
    else
    {
      *(_QWORD *)(v10 + 120) = *(_QWORD *)(gpsi + 8LL * ((v11 & 0xFFFF2FFF) - 666) + 272);
    }
    SetOrClrWF(1LL, v9, 516LL, 1LL);
    result = SetOrClrWF(0LL, v9, 520LL, 1LL);
    goto LABEL_20;
  }
  return result;
}
