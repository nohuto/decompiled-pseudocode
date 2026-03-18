/*
 * XREFs of ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00FECFC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsChildWindowDpiIsolationEnabled(struct tagWND *a1, struct tagWND *a2)
{
  char v2; // bl
  __int64 v4; // rdx
  int v6; // ecx
  char CurrentThreadDpiAwarenessContext; // al

  v2 = 0;
  if ( gfDwmChildWindowDpiIsolationEnabled )
  {
    if ( a2 )
    {
      v4 = *((_QWORD *)a2 + 5);
      if ( *(_DWORD *)(v4 + 292) == 1 )
      {
        if ( a1 )
        {
          v6 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        }
        else
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(0LL, v4);
          v4 = *((_QWORD *)a2 + 5);
          LOBYTE(v6) = CurrentThreadDpiAwarenessContext;
        }
        if ( (*(_DWORD *)(v4 + 288) & 0xF) == 2 || (v6 & 0xF) != 2 )
          return 1;
      }
    }
  }
  return v2;
}
