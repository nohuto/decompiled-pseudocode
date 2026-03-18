/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C00B3750
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C002037C (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ebx
  void *v7; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1);
    DirtyVisRgnTrackers(a1);
    v4 = *((_QWORD *)a1 + 5);
    v5 = *(_QWORD *)a1;
    v6 = *(_DWORD *)(v4 + 28);
    v7 = (void *)ReferenceDwmApiPort(v4);
    DwmAsyncChildStyleChange(v7, v5, -16, v6);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
