/*
 * XREFs of xxxSetThreadDesktop @ 0x1C00A9A4C
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00A64D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00A65F0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C00AD6E0 (NtUserSetThreadDesktop.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C005DB40 (zzzSetDesktop.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MapDesktop @ 0x1C0077E30 (MapDesktop.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00AC870 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     MagContextThreadCallout @ 0x1C01C9610 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(void *a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  tagQ *v13; // rax
  __int64 v14; // rdx
  _DWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+3Ch] [rbp-Ch]

  v4 = *(__int64 **)(gptiCurrent + 424LL);
  if ( !a2 )
    goto LABEL_3;
  v15[1] = 0;
  v5 = *v4;
  v15[0] = 1;
  v16 = v5;
  v17 = a2;
  v18 = 0;
  v19 = 1;
  result = MapDesktop((__int64)v15);
  if ( (int)result >= 0 )
  {
LABEL_3:
    if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 896LL)
        || *(_DWORD *)(gptiCurrent + 680LL)
        || (v11 = *(_QWORD *)(gptiCurrent + 456LL)) != 0
        && (v12 = *(_QWORD *)(v11 + 216)) != 0
        && *(_QWORD *)(v12 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL, v7);
        return 2147483665LL;
      }
      if ( !v4[42] && a1 )
      {
        LockObjectAssignment(v4 + 42, a2);
        v4[49] = (__int64)a1;
      }
    }
    if ( *(_QWORD *)(gptiCurrent + 456LL) != a2 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 8) == 0
        || (MagContextThreadCallout(gMagnContext, gptiCurrent, 0LL, 1LL), *(_QWORD *)(gptiCurrent + 456LL) != a2) )
      {
        if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL)) )
        {
          v13 = (tagQ *)AllocQueue(0LL, 0LL);
          if ( !v13 )
          {
            UserSetLastError(8LL, v14);
            return 3221225495LL;
          }
          tagQ::zzzAttachToQueue(v13, gptiCurrent, 0LL);
        }
        else if ( v9 == gpqForeground )
        {
          xxxSetForegroundWindow2(0LL, gptiCurrent, 0);
        }
        else if ( !v8 )
        {
          v10 = (gdwGTERMFlags & 1) - 1;
          *(_DWORD *)(gptiCurrent + 760LL) = v10;
          *(_DWORD *)(v9 + 384) = v10;
        }
      }
    }
    return zzzSetDesktop(gptiCurrent, a2, a1);
  }
  return result;
}
