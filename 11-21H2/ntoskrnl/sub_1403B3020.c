/*
 * XREFs of sub_1403B3020 @ 0x1403B3020
 * Callers:
 *     sub_14041B4F0 @ 0x14041B4F0 (sub_14041B4F0.c)
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     KeForceEnableNx @ 0x140A540D0 (KeForceEnableNx.c)
 */

__int64 __fastcall sub_1403B3020(__int64 a1, const void *a2, char a3)
{
  int v4; // ecx

  if ( a2 )
    memmove((char *)BaseAddress + 144, a2, 0x5C0uLL);
  v4 = (unsigned __int8)KeForceEnableNx() != 0;
  if ( byte_140C4E208 )
    v4 |= 4u;
  *((_DWORD *)BaseAddress + 2) = v4;
  if ( a3 )
    *((_QWORD *)BaseAddress + 11) = qword_140C4AC00;
  else
    *((_QWORD *)BaseAddress + 11) = (unsigned int)dword_140C4BFDC;
  return 0LL;
}
