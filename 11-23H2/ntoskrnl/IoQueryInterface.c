/*
 * XREFs of IoQueryInterface @ 0x140828A80
 * Callers:
 *     HalpIommuGetDeviceId @ 0x140390E6C (HalpIommuGetDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x140500314 (HalpDmaGetIommuInterface.c)
 *     ExInitializeDeviceAts @ 0x14060C7C0 (ExInitializeDeviceAts.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060E0F0 (ExpShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x1408282A4 (HalpGetCacheCoherency.c)
 * Callees:
 *     PnpQueryInterface @ 0x1407FD510 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140828AD0 (IopQueryInterfaceRecurseUp.c)
 */

__int64 __fastcall IoQueryInterface(
        _QWORD *a1,
        char a2,
        ULONG_PTR a3,
        USHORT a4,
        USHORT a5,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a6,
        void *a7)
{
  if ( (a2 & 1) != 0 )
    return IopQueryInterfaceRecurseUp((int)a1, a3, a4, a5, (__int64)a6, a7);
  else
    return PnpQueryInterface(a1, a3, a5, a4, a6, (USHORT *)a7);
}
