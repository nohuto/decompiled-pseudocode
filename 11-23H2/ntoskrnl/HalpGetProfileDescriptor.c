/*
 * XREFs of HalpGetProfileDescriptor @ 0x14037B540
 * Callers:
 *     EmonSetInterval @ 0x14037B3B0 (EmonSetInterval.c)
 *     HalpQueryProfileSource @ 0x140507B1C (HalpQueryProfileSource.c)
 *     HalpRemoveProfileSourceFromList @ 0x140507E7C (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoring @ 0x14051D240 (EmonEnableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x140529160 (Amd64EnableMonitoring.c)
 *     Amd64SetInterval @ 0x14052A0B0 (Amd64SetInterval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProfileDescriptor(int a1, __int64 a2, _QWORD *a3)
{
  __int64 *i; // rax

  for ( i = (__int64 *)HalpProfileSourceDescriptorListHead; i != &HalpProfileSourceDescriptorListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) == a1 )
    {
      *a3 = i - 1;
      return 0LL;
    }
  }
  return 3221225659LL;
}
