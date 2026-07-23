/*
 * XREFs of sub_1404568E6 @ 0x1404568E6
 * Callers:
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140512EF0 @ 0x140512EF0 (sub_140512EF0.c)
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 * Callees:
 *     sub_140456978 @ 0x140456978 (sub_140456978.c)
 *     sub_140458A72 @ 0x140458A72 (sub_140458A72.c)
 *     sub_140503B90 @ 0x140503B90 (sub_140503B90.c)
 */

__int64 __fastcall sub_1404568E6(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d

  if ( (unsigned int)sub_140456978(a2) == 2 )
    return sub_140458A72(v6, v9, v7, v8, a5, a6);
  else
    return sub_140503B90(v6, v9, v7, v8, a5, a6);
}
