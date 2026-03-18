/*
 * XREFs of ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C01CDBAC
 * Callers:
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01DA2C4 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

union _LARGE_INTEGER __fastcall CTouchProcessor::PassedHoldTime(struct _KTHREAD **this, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  union _LARGE_INTEGER result; // rax
  unsigned int v10; // ebp
  unsigned __int64 v11; // rdx
  unsigned int v12; // ebp
  struct _KTHREAD *v13; // rsi
  bool v14; // cf
  bool v15; // zf

  v4 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8865);
  result = gliQpcFreq;
  if ( gliQpcFreq.QuadPart )
  {
    if ( (unsigned __int64)(gliQpcFreq.QuadPart - 1) > 0x7FFFFFFD )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8885);
    if ( !this[14] )
    {
      v10 = 0;
      if ( qword_1C0296860 && (int)qword_1C0296860() >= 0 && qword_1C0296868 )
        v10 = qword_1C0296868();
      this[14] = (struct _KTHREAD *)(gliQpcFreq.QuadPart * v10 / 1000);
    }
    v11 = (unsigned __int64)this[15];
    if ( !v11 )
    {
      v12 = 0;
      if ( qword_1C0296870 && (int)qword_1C0296870() >= 0 && qword_1C0296878 )
        v12 = qword_1C0296878();
      v11 = gliQpcFreq.QuadPart * v12 / 1000;
      this[15] = (struct _KTHREAD *)v11;
    }
    v13 = (struct _KTHREAD *)(a4 - a3);
    if ( a2 == 3 )
    {
      v14 = v13 < this[14];
      v15 = v13 == this[14];
    }
    else
    {
      v14 = (unsigned __int64)v13 < v11;
      v15 = v13 == (struct _KTHREAD *)v11;
    }
    LOBYTE(v4) = !v14 && !v15;
    return (union _LARGE_INTEGER)v4;
  }
  return result;
}
