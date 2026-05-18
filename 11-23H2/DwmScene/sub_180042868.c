/*
 * XREFs of sub_180042868 @ 0x180042868
 * Callers:
 *     sub_18003F260 @ 0x18003F260 (sub_18003F260.c)
 *     sub_18003F644 @ 0x18003F644 (sub_18003F644.c)
 * Callees:
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

__int64 __fastcall sub_180042868(__int64 a1)
{
  __int64 result; // rax

  result = 0x333333333333333LL;
  if ( *(_QWORD *)(a1 + 8) == 0x333333333333333LL )
    sub_18001DDFC();
  return result;
}
