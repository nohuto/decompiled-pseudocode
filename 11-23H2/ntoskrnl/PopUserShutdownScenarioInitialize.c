/*
 * XREFs of PopUserShutdownScenarioInitialize @ 0x140B51C00
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage @ 0x1404114D0 (Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage.c)
 *     PdcTaskClientRegister @ 0x140822350 (PdcTaskClientRegister.c)
 */

__int64 __fastcall PopUserShutdownScenarioInitialize(int a1)
{
  if ( a1 == 1 )
  {
    Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage();
  }
  else if ( (int)PdcTaskClientRegister(120, &PopUserShutdownTaskClient) < 0 )
  {
    PopUserShutdownTaskClient = 0LL;
  }
  return 0LL;
}
