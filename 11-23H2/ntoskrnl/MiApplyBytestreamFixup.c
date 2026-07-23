/*
 * XREFs of MiApplyBytestreamFixup @ 0x14035F34C
 * Callers:
 *     MiSwitchBaseAddress @ 0x1407D40EC (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
