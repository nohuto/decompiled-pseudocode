/*
 * XREFs of sub_18003F8BC @ 0x18003F8BC
 * Callers:
 *     sub_180101B08 @ 0x180101B08 (sub_180101B08.c)
 * Callees:
 *     sub_18003EF08 @ 0x18003EF08 (sub_18003EF08.c)
 */

__int64 __fastcall sub_18003F8BC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    return sub_18003EF08(*(LPVOID *)a1);
  return result;
}
