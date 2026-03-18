/*
 * XREFs of _SetTimer @ 0x1C01C0A94
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0215F70 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00E6510 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall SetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r11

  if ( !a1 )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v10 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5);
  return 0LL;
}
