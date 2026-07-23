/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x140B748B0
 * Callers:
 *     KiIntSteerInit @ 0x140B4E594 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     HviIsXboxNanovisorPresent @ 0x140351668 (HviIsXboxNanovisorPresent.c)
 *     HviIsAnyHypervisorPresent @ 0x1403829F0 (HviIsAnyHypervisorPresent.c)
 */

char KiIntSteerDetermineSteeringEnabled()
{
  bool v0; // zf

  if ( (KiInterruptSteeringFlags & 1) == 0 )
  {
    if ( (KiInterruptSteeringFlags & 2) != 0 )
      return 1;
    if ( (unsigned __int16)KiActiveGroups <= 1u
      && KeQueryActiveProcessorCountEx(0) >= 2
      && !(_BYTE)dword_140D1D1EC
      && !HviIsXboxNanovisorPresent() )
    {
      if ( HvlHypervisorConnected )
      {
        if ( (HvlpFlags & 2) == 0 )
          return 0;
        v0 = (HvlpRootFlags & 0x400) == 0;
      }
      else
      {
        v0 = !HviIsAnyHypervisorPresent();
      }
      if ( v0 )
        return 1;
    }
  }
  return 0;
}
