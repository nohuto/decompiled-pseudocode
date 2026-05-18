/*
 * XREFs of sub_18001D3D4 @ 0x18001D3D4
 * Callers:
 *     sub_18002920C @ 0x18002920C (sub_18002920C.c)
 *     sub_180091D14 @ 0x180091D14 (sub_180091D14.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 */

__int64 __fastcall sub_18001D3D4(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)sub_18001C7FC(a1));
}
