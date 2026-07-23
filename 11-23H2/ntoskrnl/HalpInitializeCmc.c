/*
 * XREFs of HalpInitializeCmc @ 0x140A8AD2C
 * Callers:
 *     HalpInitializeErrSrc @ 0x140A8ACE0 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmciInitializeErrorPacket @ 0x140380284 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x140380348 (HalpCmciInitProcessor.c)
 *     HalpCmcInitializePolling @ 0x1403B4628 (HalpCmcInitializePolling.c)
 *     HalpCmcStartPolling @ 0x1403B4B48 (HalpCmcStartPolling.c)
 *     HalpIsCmciImplemented @ 0x140A91D68 (HalpIsCmciImplemented.c)
 */

__int64 __fastcall HalpInitializeCmc(int a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h]

  HIDWORD(v6) = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      HalpCmcErrorSourceId = a2[7];
      HalpCmcErrorSource = a2;
      if ( (unsigned __int8)HalpIsCmciImplemented() )
      {
        HalpCmciEnabled = 1;
        _InterlockedIncrement(&HalpCmciRevertToPolledMode);
      }
      HalpCmcInitializePolling((__int64)a2);
      HalpCmcStartPolling(v5, v4);
    }
    else
    {
      LODWORD(v6) = KeGetPcr()->Prcb.Number;
      if ( (unsigned __int8)HalpIsCmciImplemented() )
      {
        HalpCmciInitializeErrorPacket((__int64)a2, v6);
        HalpCmciInitProcessor((__int64)a2, v6);
      }
    }
  }
  else
  {
    HalpCmcErrorSourceId = a2[7];
    HalpCmcErrorSource = a2;
  }
  return 0LL;
}
