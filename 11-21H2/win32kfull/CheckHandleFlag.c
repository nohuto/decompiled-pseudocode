/*
 * XREFs of CheckHandleFlag @ 0x1C005DFC4
 * Callers:
 *     zzzSetDesktop @ 0x1C005DB40 (zzzSetDesktop.c)
 *     _GetUserObjectInformation @ 0x1C00727B0 (_GetUserObjectInformation.c)
 *     OkayToCloseWindowStation @ 0x1C00FE120 (OkayToCloseWindowStation.c)
 *     OkayToCloseDesktop @ 0x1C00FE910 (OkayToCloseDesktop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckHandleFlag(PRKPROCESS PROCESS, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v6; // ebx
  int v7; // ebp
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = a4 + 2 * ((unsigned int)a3 >> 2) + ((unsigned int)a3 >> 2);
  memset(&ApcState.ApcListHead[1], 0, 32);
  EnterHandleFlagsCrit(PROCESS, a2, a3, a4, 0LL, 0LL);
  if ( PROCESS )
  {
    if ( (unsigned int)PsGetProcessSessionId(PROCESS) != v4 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v7 = 1;
    }
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
  }
  else
  {
    ProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  }
  if ( ProcessWin32Process
    && v8 < *(_DWORD *)(ProcessWin32Process + 720)
    && _bittest64(*(const signed __int64 **)(ProcessWin32Process + 728), v8) )
  {
    v6 = 1;
  }
  if ( v7 )
    KeUnstackDetachProcess(&ApcState);
  LeaveHandleFlagsCrit();
  return v6;
}
