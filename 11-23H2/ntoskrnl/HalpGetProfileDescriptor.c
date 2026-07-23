/*
 * XREFs of HalpGetProfileDescriptor @ 0x14037B6E0
 * Callers:
 *     EmonSetInterval @ 0x14037B550 (EmonSetInterval.c)
 *     HalpQueryProfileSource @ 0x14050806C (HalpQueryProfileSource.c)
 *     HalpRemoveProfileSourceFromList @ 0x1405083CC (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoring @ 0x14051D790 (EmonEnableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x1405296B0 (Amd64EnableMonitoring.c)
 *     Amd64SetInterval @ 0x14052A600 (Amd64SetInterval.c)
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
