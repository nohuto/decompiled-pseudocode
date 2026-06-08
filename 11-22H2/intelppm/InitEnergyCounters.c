/*
 * XREFs of InitEnergyCounters @ 0x1C00261A0
 * Callers:
 *     <none>
 * Callees:
 *     PctGetIntelEsuType @ 0x1C0002B40 (PctGetIntelEsuType.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     ProbeMsr @ 0x1C0025B54 (ProbeMsr.c)
 *     RetrieveModelParameters @ 0x1C0025D44 (RetrieveModelParameters.c)
 *     InitEnergyCountersMsr @ 0x1C0026354 (InitEnergyCountersMsr.c)
 *     InitEnergyCountersMsrEx @ 0x1C0034100 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C00341C0 (ProbeFixedFunctionCounters.c)
 */

__int64 InitEnergyCounters()
{
  unsigned int Number; // edi
  unsigned int v1; // esi
  __int64 v2; // rdx
  int IntelEsuType; // ebx
  unsigned __int64 *p_Lock; // r8
  unsigned __int64 v5; // rax
  double v6; // xmm1_8
  __int64 SystemArgument1_low; // r9
  unsigned __int64 v8; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = -1073741637;
  IntelEsuType = PctGetIntelEsuType();
  if ( IntelEsuType == 2 )
    return v1;
  if ( Number )
    goto LABEL_17;
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
    v5 = __readmsr(0x606u);
    v2 = (unsigned __int64)HIDWORD(v5) << 32;
    p_Lock = (unsigned __int64 *)((unsigned int)v5 >> 8);
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type ^= (LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) ^ (unsigned __int8)((unsigned int)v5 >> 7)) & 0x3E;
    LOBYTE(word_1C001F8D8) = BYTE1(v5) & 0x1F;
    if ( IntelEsuType )
    {
      HIBYTE(word_1C001F8D8) = 1;
      if ( IntelEsuType == 1 )
      {
        p_Lock = (unsigned __int64 *)(BYTE1(v5) & 0x1F);
        v2 = 1LL << (char)p_Lock;
        if ( 1LL << (char)p_Lock < 0 )
        {
          v2 = (1LL << (char)p_Lock) & 1;
          v6 = (double)(int)(v2 | ((unsigned __int64)(1LL << (char)p_Lock) >> 1))
             + (double)(int)(v2 | ((unsigned __int64)(1LL << (char)p_Lock) >> 1));
        }
        else
        {
          v6 = (double)(int)v2;
        }
        *(double *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 1.0 / v6;
      }
    }
    else
    {
      HIBYTE(word_1C001F8D8) = 2;
    }
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      p_Lock = &WPP_MAIN_CB.DeviceQueue.Lock;
      SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      do
      {
        v8 = __readmsr(*((_DWORD *)p_Lock + 15));
        v2 = (unsigned __int64)HIDWORD(v8) << 32;
        *(_DWORD *)p_Lock = v8;
        p_Lock = (unsigned __int64 *)((char *)p_Lock + 4);
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
LABEL_17:
    if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) == 1 )
        InitEnergyCountersMsrEx(Number, v2, p_Lock);
    }
    else
    {
      InitEnergyCountersMsr(Number, v2, p_Lock);
    }
    return 0;
  }
  return v1;
}
