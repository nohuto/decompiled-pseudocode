/*
 * XREFs of sub_1C0011950 @ 0x1C0011950
 * Callers:
 *     sub_1C0011820 @ 0x1C0011820 (sub_1C0011820.c)
 *     sub_1C0011880 @ 0x1C0011880 (sub_1C0011880.c)
 *     sub_1C004C410 @ 0x1C004C410 (sub_1C004C410.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C0011950(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  v4 = -1073741637;
  if ( (unsigned int)sub_1C0007798(a1, 6) )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v8 = 0LL;
    v7[0] = 1;
    v7[1] = 24;
    v9 = *(_DWORD *)(v5 + 32);
    v10 = *(_DWORD *)(v5 + 24);
    return (unsigned int)sub_1C001A364(a1 + 336, 6LL, v7);
  }
  return v4;
}
