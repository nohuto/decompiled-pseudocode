/*
 * XREFs of sub_140A378B4 @ 0x140A378B4
 * Callers:
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 * Callees:
 *     sub_1403FB390 @ 0x1403FB390 (sub_1403FB390.c)
 *     sub_140401DD8 @ 0x140401DD8 (sub_140401DD8.c)
 *     sub_140401ED4 @ 0x140401ED4 (sub_140401ED4.c)
 *     sub_140403760 @ 0x140403760 (sub_140403760.c)
 *     sub_140404A70 @ 0x140404A70 (sub_140404A70.c)
 */

__int64 __fastcall sub_140A378B4(_DWORD *a1, char *a2, unsigned int a3)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0x8003:
      return sub_140404A70((__int64)(a1 + 4), (__int64)a2, a3);
    case 0x8004:
      return sub_140403760((__int64)(a1 + 4), (__int64)a2, a3);
    case 0x800C:
      return sub_1403FB390(a1 + 4, a2, a3);
    case 0x800D:
      return sub_140401DD8();
    case 0x800E:
      return sub_140401ED4(a1 + 4, a2, a3);
  }
  return result;
}
