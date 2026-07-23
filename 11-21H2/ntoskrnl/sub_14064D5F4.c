/*
 * XREFs of sub_14064D5F4 @ 0x14064D5F4
 * Callers:
 *     sub_14064DB50 @ 0x14064DB50 (sub_14064DB50.c)
 *     sub_14064DC1C @ 0x14064DC1C (sub_14064DC1C.c)
 *     sub_14064E1FC @ 0x14064E1FC (sub_14064E1FC.c)
 *     sub_14064E5D0 @ 0x14064E5D0 (sub_14064E5D0.c)
 *     sub_140AB0AB0 @ 0x140AB0AB0 (sub_140AB0AB0.c)
 *     sub_140AB0BC4 @ 0x140AB0BC4 (sub_140AB0BC4.c)
 *     sub_140AB0F1C @ 0x140AB0F1C (sub_140AB0F1C.c)
 *     sub_140AB10C0 @ 0x140AB10C0 (sub_140AB10C0.c)
 * Callees:
 *     sub_1403A7CAC @ 0x1403A7CAC (sub_1403A7CAC.c)
 *     sub_14064D940 @ 0x14064D940 (sub_14064D940.c)
 */

__int64 __fastcall sub_14064D5F4(
        unsigned __int16 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned __int64 a9)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-18h]
  int v17; // [rsp+54h] [rbp-14h]

  v17 = 0;
  if ( (dword_140C0DF90 & 1) == 0 )
    return 3221225473LL;
  v12 = a2[3];
  v14[0] = a5;
  v14[1] = a6;
  v16 = *((_DWORD *)a2 + 2);
  v13 = *a2;
  a9 = __PAIR64__(a4, a3);
  v15 = v13;
  result = sub_14064D940(v12, &a9, v14);
  if ( (int)result >= 0 )
    return sub_1403A7CAC(a2[3], a1, 0, a7, a8);
  return result;
}
