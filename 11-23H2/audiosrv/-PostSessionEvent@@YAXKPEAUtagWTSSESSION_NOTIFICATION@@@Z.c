/*
 * XREFs of ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18004BFDC
 * Callers:
 *     ServiceSessionChange @ 0x18004BF10 (ServiceSessionChange.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x18004BF60 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     ?Initialize@SESSION_EVENT@@QEAAJKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18004C060 (-Initialize@SESSION_EVENT@@QEAAJKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 */

void __fastcall PostSessionEvent(unsigned int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  SESSION_EVENT *v4; // rbx

  v4 = (SESSION_EVENT *)operator new(0x18uLL);
  if ( v4 )
  {
    *(_QWORD *)v4 = &SESSION_EVENT::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    if ( SESSION_EVENT::Initialize(v4, a1, a2) < 0
      || !PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v4, 0LL) )
    {
      SESSION_EVENT::`scalar deleting destructor'(v4, 1);
    }
  }
}
