/*
 * XREFs of sub_180028864 @ 0x180028864
 * Callers:
 *     sub_1800B4B60 @ 0x1800B4B60 (sub_1800B4B60.c)
 *     sub_1800B4E58 @ 0x1800B4E58 (sub_1800B4E58.c)
 *     sub_1800B53C0 @ 0x1800B53C0 (sub_1800B53C0.c)
 *     sub_1800B55A0 @ 0x1800B55A0 (sub_1800B55A0.c)
 *     sub_1800B6020 @ 0x1800B6020 (sub_1800B6020.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_1800B3C40 @ 0x1800B3C40 (sub_1800B3C40.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028864(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
LABEL_7:
    sub_1800120F4();
  v5 = *(_DWORD *)(v4 + 8);
  do
  {
    if ( !v5 )
      goto LABEL_7;
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
  }
  while ( v6 != v5 );
  v7 = *(_QWORD *)(a1 + 16);
  v9[0] = a1 + 4096;
  v9[1] = v7;
  v10 = 0LL;
  sub_1800B3C40(a2, v9);
  sub_180010910((__int64)&v10);
  return a2;
}
