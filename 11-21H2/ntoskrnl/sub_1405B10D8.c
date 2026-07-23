/*
 * XREFs of sub_1405B10D8 @ 0x1405B10D8
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 * Callees:
 *     sub_14023B3C8 @ 0x14023B3C8 (sub_14023B3C8.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 */

__int64 __fastcall sub_1405B10D8(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v7 = a1;
    v4 = *(_QWORD *)(a1 + 40);
    v9 = 0LL;
    v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    v5 = *(_QWORD *)(qword_140C51F48 + 8 * ((v4 >> 43) & 0x3FF));
    v6 = sub_1402C1550(v8);
    sub_14023B3C8(v5, (__int64)sub_1405B11A0, (__int64)&v7, *((_DWORD *)v6 + 2));
    return v9;
  }
  else
  {
    v2 = *(_QWORD *)a1 & 0xFFFFFF0000000000uLL | (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x1FFFFF) << 19);
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 136));
    return *(_QWORD *)(v2 + 40) + 64LL;
  }
}
