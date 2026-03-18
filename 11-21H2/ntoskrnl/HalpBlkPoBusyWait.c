/*
 * XREFs of HalpBlkPoBusyWait @ 0x14052CED4
 * Callers:
 *     HalpBlkPoReadPerfIoPort @ 0x14052CFE0 (HalpBlkPoReadPerfIoPort.c)
 *     HalpBlkPoReadPerfMsr @ 0x14052D1D0 (HalpBlkPoReadPerfMsr.c)
 *     HalpBlkPoRegisterIdleState @ 0x14052D3A0 (HalpBlkPoRegisterIdleState.c)
 *     HalpBlkPoWritePerfIoPort @ 0x14052D550 (HalpBlkPoWritePerfIoPort.c)
 *     HalpBlkPoWritePerfMsr @ 0x14052D720 (HalpBlkPoWritePerfMsr.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpBlkWdFatalExceptionCheck @ 0x14052D8D0 (HalpBlkWdFatalExceptionCheck.c)
 */

__int64 __fastcall HalpBlkPoBusyWait(ULONG_PTR BugCheckParameter2, unsigned int a2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned int)BugCheckParameter2;
  v6 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter4 + 8), 0, 0);
    if ( !(_DWORD)result )
      break;
    HalpBlkWdFatalExceptionCheck((unsigned int)v3);
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v6) >= 0x989680 )
      KeBugCheckEx(0x1DAu, 6uLL, v5, v3, BugCheckParameter4);
  }
  return result;
}
