/*
 * XREFs of GreGetStockObject @ 0x1C002E9B0
 * Callers:
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 *     bInitICM @ 0x1C02E5C44 (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002EB00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C016F200 (GreGetDpiDepDefaultGuiFont.c)
 */

void *__fastcall GreGetStockObject(int a1)
{
  __int64 v1; // rbx
  int v2; // esi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v10; // eax
  void *result; // rax

  v1 = a1;
  LOBYTE(v2) = 18;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v8 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v8 + 360) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v8 + 340) )
      {
        LOBYTE(v2) = *(_DWORD *)(v8 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6, v7);
        if ( CurrentProcessWin32Process )
          v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  if ( (unsigned int)v1 > 0x11 )
  {
LABEL_12:
    if ( (unsigned int)v1 > 0x15 )
      return 0LL;
    else
      return gahStockObjects[v1];
  }
  v10 = 205824;
  if ( !_bittest(&v10, v1) || (v2 & 0xF) != 0 || (result = gahStockObjects96[v1]) == 0LL )
  {
    if ( (_DWORD)v1 == 17 )
      return (void *)GreGetDpiDepDefaultGuiFont(17LL);
    goto LABEL_12;
  }
  return result;
}
