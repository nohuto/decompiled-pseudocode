/*
 * XREFs of HalFreeHardwareCounters @ 0x140908600
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __stdcall HalFreeHardwareCounters(HANDLE CounterSetHandle)
{
  __int64 v1; // rdx
  unsigned int v2; // edx
  __int64 v3; // rax

  if ( CounterSetHandle != (HANDLE)qword_140C0CA20 )
  {
    if ( (char *)CounterSetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && off_140C02520[15] )
      return sub_14042A5E0(CounterSetHandle, v1);
    return -1073741811;
  }
  if ( (*((_BYTE *)KeGetCurrentPrcb() + 88) & 1) == 0 )
    return -1073741811;
  v2 = 0;
  while ( v2 < (unsigned __int8)dword_140D06884 )
  {
    v3 = v2++;
    _InterlockedDecrement((volatile signed __int32 *)(qword_140D088C0[v3] + 88));
  }
  return 0;
}
