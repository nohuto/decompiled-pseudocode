/*
 * XREFs of HvlPhase0Initialize @ 0x14081FE98
 * Callers:
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293450 (PdcCreateWatchdogAroundClientCall.c)
 *     HviIsAnyHypervisorPresent @ 0x140382850 (HviIsAnyHypervisorPresent.c)
 *     HvlQueryConnection @ 0x140383690 (HvlQueryConnection.c)
 *     HvlpTryConfigureInterface @ 0x1403836B0 (HvlpTryConfigureInterface.c)
 *     strstr @ 0x1403D91D0 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x1405410A0 (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x14054205C (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x140548F64 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x14054941C (HvlpPhase0Enlightenments.c)
 *     HviGetHypervisorVersion @ 0x14061545C (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  HvlpFlags = (HviIsAnyHypervisorPresent() ? 0x1000 : 0) | HvlpFlags & 0xFFFFEFFF;
  if ( (int)HvlQueryConnection(0LL) >= 0 || (result = HvlpTryConfigureInterface(a1), (int)result >= 0) )
  {
    result = HvlpSetupBootProcessorEarlyHypercallPages(a1);
    if ( (int)result >= 0 )
    {
      HvlHypervisorConnected = 1;
      HvlpDetermineEnlightenments();
      result = PdcCreateWatchdogAroundClientCall();
      if ( (int)result >= 0 )
      {
        if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
          HvlpRootFlags |= 8u;
        if ( (HvlpFlags & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3492LL) & 0x2000) != 0 )
          HvlpRootFlags |= 0x800u;
        result = HvlpPhase0Enlightenments(a1);
        if ( (int)result >= 0 )
        {
          result = HvlpInitializeBootProcessor(a1);
          v3 = result;
          if ( (int)result >= 0 )
          {
            HviGetHypervisorVersion(HvlpHypervisorVersion);
            return v3;
          }
        }
      }
    }
  }
  else if ( (_DWORD)result == -1070264320 )
  {
    return 0LL;
  }
  return result;
}
