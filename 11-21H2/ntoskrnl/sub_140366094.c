/*
 * XREFs of sub_140366094 @ 0x140366094
 * Callers:
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140365C94 @ 0x140365C94 (sub_140365C94.c)
 * Callees:
 *     sub_1403661D0 @ 0x1403661D0 (sub_1403661D0.c)
 *     sub_140366620 @ 0x140366620 (sub_140366620.c)
 *     sub_14036669C @ 0x14036669C (sub_14036669C.c)
 */

__int64 __fastcall sub_140366094(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 result; // rax
  unsigned __int64 *v12; // rdx
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  sub_1403661D0(a1, a2, a3);
  if ( (*(_BYTE *)(a1 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(a1 + 352) + 1850LL) == 2 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 1u);
  if ( a4 >= 0x20000000000LL )
    return 3221227780LL;
  v8 = a4 >> 9;
  if ( (a5 & 1) != 0 )
    v9 = 1;
  else
    v9 = (a5 & 2) != 0 ? 3 : 0;
  sub_140366620(a1);
  if ( v9 || (v13 = *(__int64 **)(a1 + 408), (unsigned __int64)*v13 >> 3 != v8) || v13[1] != a3 )
  {
    result = sub_14036669C(a1, 1LL, &v13, v10);
    if ( (int)result < 0 )
      return result;
    v12 = (unsigned __int64 *)v13;
    *v13 = (8 * v8) | *(_DWORD *)v13 & 7;
    v12[1] = a3;
    *v12 = v9 | *v12 & 0xFFFFFFFFFFFFFFF8uLL;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 332), 1u);
    if ( !v9 )
      *(_QWORD *)(a1 + 408) = v13;
  }
  return 0LL;
}
