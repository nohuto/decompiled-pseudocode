/*
 * XREFs of sub_14084FCD4 @ 0x14084FCD4
 * Callers:
 *     sub_140B23B40 @ 0x140B23B40 (sub_140B23B40.c)
 * Callees:
 *     sub_14084FD68 @ 0x14084FD68 (sub_14084FD68.c)
 *     sub_1408504E0 @ 0x1408504E0 (sub_1408504E0.c)
 */

__int64 __fastcall sub_14084FCD4(HANDLE KeyHandle, _DWORD *a2)
{
  __int64 v4; // r8
  int v5; // ecx
  int v7; // [rsp+48h] [rbp+10h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( MEMORY[0xFFFFF78000000014] - 126227808000000000LL >= 0 )
    v4 = MEMORY[0xFFFFF78000000014] - 126227808000000000LL;
  v7 = (v4 / 10000) >> 10;
  v5 = sub_14084FD68(KeyHandle, 4u);
  if ( v5 < 0 )
  {
    LODWORD(v8) = 4;
    v5 = sub_1408504E0(KeyHandle, (__int64)&v8);
  }
  *a2 = v7;
  return (unsigned int)v5;
}
