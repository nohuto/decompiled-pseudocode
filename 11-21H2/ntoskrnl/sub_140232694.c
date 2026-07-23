/*
 * XREFs of sub_140232694 @ 0x140232694
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_14028C82C @ 0x14028C82C (sub_14028C82C.c)
 *     sub_14029A6AC @ 0x14029A6AC (sub_14029A6AC.c)
 *     sub_1402C2AD0 @ 0x1402C2AD0 (sub_1402C2AD0.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402C9E70 @ 0x1402C9E70 (sub_1402C9E70.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_14031F940 @ 0x14031F940 (sub_14031F940.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_14032E130 @ 0x14032E130 (sub_14032E130.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 *     sub_1403856F4 @ 0x1403856F4 (sub_1403856F4.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_140232694(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a1;
  if ( (*a1 & 4) != 0 )
  {
    result = sub_140317A10(a1);
    if ( a2 )
      *a1 = v3 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !a3 )
      return result & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else if ( a3 && (v3 & 2) != 0 )
  {
    return sub_140317A10(a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}
