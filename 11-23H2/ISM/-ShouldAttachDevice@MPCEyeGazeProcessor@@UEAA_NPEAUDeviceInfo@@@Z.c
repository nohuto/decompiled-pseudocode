/*
 * XREFs of ?ShouldAttachDevice@MPCEyeGazeProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1801E9890
 * Callers:
 *     <none>
 * Callees:
 *     ??$MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor@AEAKK@ISMTracing@@SAXAEAK$$QEAK@Z @ 0x1801E925C (--$MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor@AEAKK@ISMTracing@@SAXAEAK$$QEAK@Z.c)
 */

bool __fastcall MPCEyeGazeProcessor::ShouldAttachDevice(MPCEyeGazeProcessor *this, struct DeviceInfo *a2)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a2 + 1) & 0x200000) != 0 )
  {
    v3 = **((_DWORD **)this + 6);
    ISMTracing::MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor<unsigned long &,unsigned long>(
      (unsigned int *)a2,
      &v3);
  }
  return 0;
}
