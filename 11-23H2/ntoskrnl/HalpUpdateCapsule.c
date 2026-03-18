/*
 * XREFs of HalpUpdateCapsule @ 0x1405213A0
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140305E00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306C50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     HalEfiUpdateCapsule @ 0x14050D51C (HalEfiUpdateCapsule.c)
 */

__int64 HalpUpdateCapsule()
{
  char v1; // di
  unsigned int v2; // edx
  unsigned int updated; // ebx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v1 = 0;
  }
  else
  {
    v1 = 1;
    v2 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
    Affinity.Mask = 1LL << (v2 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  updated = HalEfiUpdateCapsule();
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return updated;
}
