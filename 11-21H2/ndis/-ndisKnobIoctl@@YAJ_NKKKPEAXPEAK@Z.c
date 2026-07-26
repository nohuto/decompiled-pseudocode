/*
 * XREFs of ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x1C01247B4
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C0133CF4 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 */

__int64 __fastcall ndisKnobIoctl(
        bool a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  return KnobNamespace::Ioctl(a1, a2, a3, a4, a5, a6);
}
