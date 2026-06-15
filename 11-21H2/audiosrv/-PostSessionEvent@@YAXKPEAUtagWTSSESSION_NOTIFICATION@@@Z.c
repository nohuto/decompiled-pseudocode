/*
 * XREFs of ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180042CD8
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180042C50 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x180042DA0 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 */

void __fastcall PostSessionEvent(int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rbx
  void *v6; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( v5 )
  {
    *v5 = &SESSION_EVENT::`vftable';
    v5[2] = 0LL;
    *((_DWORD *)v5 + 2) = a1;
    if ( a2 )
    {
      v6 = malloc(a2->cbSize);
      v5[2] = v6;
      if ( !v6 )
      {
        AudSrvTraceLoggingErrorHelper("SESSION_EVENT::Initialize", 0x3Du, -2147024882);
        goto LABEL_8;
      }
      memcpy_0(v6, a2, a2->cbSize);
    }
    if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v5, 0LL) )
      return;
LABEL_8:
    SESSION_EVENT::`scalar deleting destructor'((SESSION_EVENT *)v5, 1u);
  }
}
