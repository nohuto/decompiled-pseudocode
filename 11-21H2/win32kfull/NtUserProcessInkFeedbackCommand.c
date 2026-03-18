/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1C01FB2C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C021AB34 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall NtUserProcessInkFeedbackCommand(__int64 a1, void *Src, __int64 a3)
{
  SIZE_T v3; // rsi
  unsigned int v5; // r12d
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rdx
  void *v11; // rdi

  v3 = (unsigned int)a3;
  v5 = a1;
  v6 = 0;
  EnterSharedCrit(a1, Src, a3);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v9 = (void *)Win32AllocPoolWithQuotaZInit(v3, 1768452949LL);
    v11 = v9;
    if ( v9 )
    {
      memmove(v9, Src, v3);
      LOBYTE(v6) = (int)InkProcessorProcessInkFeedbackCommand(v5, v11, v3) >= 0;
      Win32FreePool(v11);
    }
    else
    {
      UserSetLastError(8LL, v10);
    }
  }
  else
  {
    UserSetLastError(87LL, v7);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
