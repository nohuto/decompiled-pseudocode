/*
 * XREFs of IoQueryInterface @ 0x140846710
 * Callers:
 *     sub_1403CD2D0 @ 0x1403CD2D0 (sub_1403CD2D0.c)
 *     sub_1405043D8 @ 0x1405043D8 (sub_1405043D8.c)
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     sub_140846200 @ 0x140846200 (sub_140846200.c)
 * Callees:
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     sub_140846760 @ 0x140846760 (sub_140846760.c)
 */

__int64 __fastcall IoQueryInterface(
        struct _DEVICE_OBJECT *a1,
        char a2,
        ULONG_PTR a3,
        USHORT a4,
        USHORT a5,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a6,
        void *a7)
{
  if ( (a2 & 1) != 0 )
    return sub_140846760((int)a1, a3, a4, a5, (__int64)a6, a7);
  else
    return sub_14074C6C0(a1, a3, a5, a4, a6, (USHORT *)a7);
}
