/*
 * XREFs of sub_140340078 @ 0x140340078
 * Callers:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_14033F8E0 @ 0x14033F8E0 (sub_14033F8E0.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 *     sub_14037BAD4 @ 0x14037BAD4 (sub_14037BAD4.c)
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14033C3A0 @ 0x14033C3A0 (sub_14033C3A0.c)
 */

unsigned __int64 __fastcall sub_140340078(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char v5; // r11
  __int16 v6; // r10
  unsigned __int64 result; // rax
  __int64 v8; // rax
  __int16 v9; // r8
  char v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v4 = a3;
  sub_14033C3A0(&v12, 0);
  if ( (v6 & 0x400) != 0 || (v5 & 4) != 0 )
    result = v12;
  else
    result = v12 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( result )
      v8 = sub_14033B6A0(result, v4);
    else
      v8 = sub_1402CCC50(v4 << 32);
    result = v8 ^ (unsigned __int16)(v8 ^ (v9 << 12)) & 0xF000;
    v11 = result;
    if ( (v10 & 1) != 0 )
    {
      result |= 4uLL;
      v11 = result;
    }
    if ( (v10 & 2) != 0 )
      return v11 | 2;
  }
  return result;
}
