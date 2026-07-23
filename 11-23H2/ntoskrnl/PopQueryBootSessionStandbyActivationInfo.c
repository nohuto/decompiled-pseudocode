/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140587714
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1403D7180 (PpmQueryPlatformStateResidency.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C6AF68 )
  {
    qword_140C6AF68(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140CF7D80);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
