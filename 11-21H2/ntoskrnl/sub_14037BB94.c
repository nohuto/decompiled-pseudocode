/*
 * XREFs of sub_14037BB94 @ 0x14037BB94
 * Callers:
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 * Callees:
 *     sub_14037BC58 @ 0x14037BC58 (sub_14037BC58.c)
 *     sub_14037D59C @ 0x14037D59C (sub_14037D59C.c)
 */

__int64 __fastcall sub_14037BB94(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  int v8; // ebx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r11

  *(_DWORD *)(a1 + 72) = 56;
  *(_QWORD *)(a1 + 64) = 0LL;
  v8 = a4;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 4096LL;
  *(_WORD *)(a1 + 74) |= 2u;
  v9 = a7;
  *(_QWORD *)(a1 + 112) = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  *(_QWORD *)(a1 + 56) = v9;
  LODWORD(a7) = 0;
  result = sub_14037D59C(a3, &a7, a3, a4);
  if ( (int)result >= 0 )
    return sub_14037BC58((unsigned int)&a7, v8, a6, (int)v11 + 64, a5, v11 + 16, a8);
  return result;
}
