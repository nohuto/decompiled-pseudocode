/*
 * XREFs of HalpcSetCmosDataByType @ 0x140520770
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmosRangeHandler @ 0x14052041C (HalpCmosRangeHandler.c)
 */

__int64 __fastcall HalpcSetCmosDataByType(int a1, unsigned int a2, __int64 a3, int a4)
{
  return HalpCmosRangeHandler(1, a1, a2, a3, a4);
}
