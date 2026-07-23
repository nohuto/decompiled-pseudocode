/*
 * XREFs of PspCatchCriticalBreak @ 0x1409B3C20
 * Callers:
 *     PspTerminateAllThreads @ 0x14076D200 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14076DB70 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     PsIsHostSilo @ 0x1402AFB90 (PsIsHostSilo.c)
 *     PsGetServerSiloState @ 0x1403099B4 (PsGetServerSiloState.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     DbgPrompt @ 0x1405A7CE0 (DbgPrompt.c)
 *     PsTerminateServerSilo @ 0x1409ACAA0 (PsTerminateServerSilo.c)
 */

void PspCatchCriticalBreak(const char *a1, ULONG_PTR a2, __int64 a3, __int64 a4, ...)
{
  __int64 v6; // rdx
  const CHAR *v7; // r8
  __int64 v8; // r9
  char v9; // al
  char v10; // bl
  _KPROCESS *v11; // rsi
  _KPROCESS *Process; // rbp
  CHAR Response[8]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+38h] [rbp-50h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    if ( !(_BYTE)KdDebuggerEnabled )
      goto LABEL_16;
    DbgPrintEx(0, 0, v7, v6, v8);
    while ( 1 )
    {
      v9 = 0;
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      DbgPrompt("Break, Ignore, or Continue into bugcheck (bic)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
          goto LABEL_13;
        case 'C':
LABEL_12:
          v9 = 0;
          goto LABEL_15;
        case 'I':
          goto LABEL_14;
        case 'b':
LABEL_13:
          __debugbreak();
LABEL_14:
          v9 = 1;
          goto LABEL_15;
        case 'c':
          goto LABEL_12;
        case 'i':
          goto LABEL_14;
      }
    }
LABEL_15:
    if ( !v9 )
    {
LABEL_16:
      v10 = *(_BYTE *)a2 & 0x7F;
      if ( v10 == 6 )
        v11 = *(_KPROCESS **)(a2 + 544);
      else
        v11 = (_KPROCESS *)a2;
      if ( PsIsHostSilo(a4) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( v11 != Process )
          KiStackAttachProcess(v11, 0, (__int64)v14);
        KeBugCheckEx(0xEFu, a2, v10 == 6, (ULONG_PTR)Process, 0LL);
      }
      PsTerminateServerSilo(a4);
    }
  }
}
