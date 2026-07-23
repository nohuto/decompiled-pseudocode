/*
 * XREFs of sub_140A3792C @ 0x140A3792C
 * Callers:
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 * Callees:
 *     sub_1403FCBE0 @ 0x1403FCBE0 (sub_1403FCBE0.c)
 *     sub_140401DF0 @ 0x140401DF0 (sub_140401DF0.c)
 *     sub_1404035E0 @ 0x1404035E0 (sub_1404035E0.c)
 *     sub_140404950 @ 0x140404950 (sub_140404950.c)
 *     sub_140405370 @ 0x140405370 (sub_140405370.c)
 */

__int64 __fastcall sub_140A3792C(_DWORD *a1, int *a2)
{
  int v5; // eax

  switch ( *a1 )
  {
    case 0x8003:
      sub_140405370((__int64)(a1 + 4));
      v5 = 16;
      break;
    case 0x8004:
      sub_140404950((__int64)(a1 + 4));
      v5 = 20;
      break;
    case 0x800C:
      sub_1403FCBE0((__int64)(a1 + 4));
      v5 = 32;
      break;
    case 0x800D:
      sub_140401DF0((__int64)(a1 + 4));
      v5 = 48;
      break;
    case 0x800E:
      sub_1404035E0((__int64)(a1 + 4));
      v5 = 64;
      break;
    default:
      return 3221226536LL;
  }
  a1[1] = v5;
  if ( a2 )
    *a2 = v5;
  return 0LL;
}
