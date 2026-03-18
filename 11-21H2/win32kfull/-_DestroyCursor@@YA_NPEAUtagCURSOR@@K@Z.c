/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4
 * Callers:
 *     NtUserDestroyCursor @ 0x1C0021300 (NtUserDestroyCursor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     DestroyWindowSmIcon @ 0x1C0060E08 (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C00634EC (DestroyClassSmIcon.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00A1E2C (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00A1F2C (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A36F0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0110F74 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C0119E60 (DestroyUnlockedCursor.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01505FC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C016A77E (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 * Callees:
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C002331C (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C002338C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x1C002359C (-RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0023CB0 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0026524 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall _DestroyCursor(struct tagCURSOR *a1, unsigned int a2)
{
  int v2; // ebp
  struct tagCURSOR *v3; // r13
  int v4; // r15d
  bool v6; // si
  int v7; // r14d
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // edx
  __int64 v12; // rax
  struct tagCURSOR *v13; // rcx
  __int64 v15; // rbx
  struct tagCURSOR *v16; // rax
  __int64 v17; // rcx
  char v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  v2 = 0;
  v3 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v4 = 0;
  v6 = 1;
  v7 = 1;
  if ( gbInDestroyHandleTableObjects )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    DestroyEmptyCursorObject(a1);
    return v6;
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v18, a1);
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v9 = *((_QWORD *)a1 + 3);
  v10 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  if ( !(unsigned int)RemoveCursorFromCaptionIconCache(a1) )
  {
    v11 = v19;
    if ( !v19 )
    {
      v15 = _HMPkheFromObject(a1);
      if ( *(_QWORD *)(v15 + 8) == PsGetProcessWin32Process(gpepCSRSS) && PsGetCurrentProcess() == gpepCSRSS )
        FixupGlobalCursor(a1, v10);
      goto LABEL_11;
    }
    if ( v19 == 1 )
    {
      if ( !v9 )
      {
        v2 = 1;
        v7 = *((_DWORD *)a1 + 20) & 1;
LABEL_14:
        if ( v3 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
          v4 = 1;
        if ( v2 )
        {
          if ( v4 )
          {
            v16 = a1;
            do
            {
              *((_QWORD *)v16 + 6) = a1;
              v16 = (struct tagCURSOR *)*((_QWORD *)v16 + 5);
            }
            while ( v16 );
          }
        }
        else
        {
          v12 = *((_QWORD *)a1 + 6);
          if ( gpcurLogCurrent == (struct tagCURSOR *)v12 )
          {
            gpcurLogCurrent = 0LL;
            gpcurPhysCurrent = 0LL;
          }
          if ( v3 == a1 || v4 )
          {
            v13 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
            if ( v13 )
            {
              *((_QWORD *)a1 + 5) = 0LL;
              _DestroyCursor(v13, v11);
            }
          }
          else
          {
            while ( v12 )
            {
              v17 = v12;
              v12 = *(_QWORD *)(v12 + 40);
              if ( (struct tagCURSOR *)v12 == a1 )
              {
                *(_QWORD *)(v17 + 40) = *((_QWORD *)a1 + 5);
                break;
              }
            }
            *((_QWORD *)a1 + 5) = 0LL;
            *((_QWORD *)a1 + 6) = a1;
          }
          CleanupCursorObject(a1);
          DestroyEmptyCursorObject(a1);
        }
        v6 = v7 != 0;
        goto LABEL_23;
      }
      if ( (*((_DWORD *)a1 + 20) & 0x84) == 0 )
      {
        if ( v9 != v10 )
        {
          UserSetLastError(1435LL);
          goto LABEL_33;
        }
LABEL_11:
        if ( (unsigned int)HMMarkObjectDestroy(a1) )
        {
          *((_DWORD *)a1 + 20) |= 0x2000u;
LABEL_13:
          v11 = v19;
          goto LABEL_14;
        }
LABEL_33:
        v2 = 1;
        v7 = 0;
        goto LABEL_13;
      }
    }
    else if ( v19 != 2 || v9 )
    {
      goto LABEL_11;
    }
    v2 = 1;
    goto LABEL_14;
  }
LABEL_23:
  if ( v18 )
    gphePrimaryDestroyTarget = 0LL;
  return v6;
}
