/*
 * XREFs of InitEnergyCounters @ 0x1C0024920
 * Callers:
 *     <none>
 * Callees:
 *     PctGetIntelEsuType @ 0x1C00022C0 (PctGetIntelEsuType.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     RetrieveModelParameters @ 0x1C002458C (RetrieveModelParameters.c)
 *     ProbeMsr @ 0x1C0024604 (ProbeMsr.c)
 *     InitEnergyCountersMsr @ 0x1C0024A74 (InitEnergyCountersMsr.c)
 *     InitEnergyCountersMsrEx @ 0x1C0032F90 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0033050 (ProbeFixedFunctionCounters.c)
 */

__int64 InitEnergyCounters()
{
  unsigned int Number; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx
  int IntelEsuType; // esi
  unsigned __int64 *p_Lock; // r8
  unsigned __int64 v6; // rax
  double v7; // xmm1_8
  __int64 SystemArgument1_low; // r9
  unsigned __int64 v9; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = -1073741637;
  IntelEsuType = PctGetIntelEsuType();
  if ( IntelEsuType == 2 )
    return v1;
  if ( Number )
    goto LABEL_3;
  memset(&WPP_MAIN_CB.DeviceQueue.Size + 1, 0, 0xDCuLL);
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = IntelEsuType & 1;
  RetrieveModelParameters((unsigned int *)&WPP_MAIN_CB.Dpc.DeferredContext);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 && !(unsigned __int8)ProbeFixedFunctionCounters() )
  {
    memset(&WPP_MAIN_CB.Dpc.DeferredContext, 0, 0x98uLL);
    LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
    WPP_MAIN_CB.Dpc.SystemArgument1 = (void *)0x63900000001LL;
  }
  if ( ProbeMsr((__int64)&WPP_MAIN_CB.Dpc.DeferredContext) )
  {
    v6 = __readmsr(0x606u);
    v2 = (unsigned __int64)HIDWORD(v6) << 32;
    p_Lock = (unsigned __int64 *)v6;
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type ^= (LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) ^ (unsigned __int8)((unsigned int)v6 >> 7)) & 0x3E;
    if ( IntelEsuType == 1 )
    {
      p_Lock = (unsigned __int64 *)(((unsigned int)v6 >> 8) & 0x1F);
      v2 = 1LL << (BYTE1(v6) & 0x1F);
      if ( v2 < 0 )
      {
        v2 = (1LL << (BYTE1(v6) & 0x1F)) & 1;
        v7 = (double)(int)(v2 | ((unsigned __int64)(1LL << (BYTE1(v6) & 0x1F)) >> 1))
           + (double)(int)(v2 | ((unsigned __int64)(1LL << (BYTE1(v6) & 0x1F)) >> 1));
      }
      else
      {
        v7 = (double)(int)v2;
      }
      *(double *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 1.0 / v7;
    }
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      p_Lock = &WPP_MAIN_CB.DeviceQueue.Lock;
      SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      do
      {
        v9 = __readmsr(*((_DWORD *)p_Lock + 15));
        v2 = (unsigned __int64)HIDWORD(v9) << 32;
        *(_DWORD *)p_Lock = v9;
        p_Lock = (unsigned __int64 *)((char *)p_Lock + 4);
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
LABEL_3:
    if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) == 1 )
        InitEnergyCountersMsrEx(Number, v2, p_Lock);
    }
    else
    {
      InitEnergyCountersMsr(Number);
    }
    return 0;
  }
  return v1;
}
