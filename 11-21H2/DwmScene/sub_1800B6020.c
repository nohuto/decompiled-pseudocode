/*
 * XREFs of sub_1800B6020 @ 0x1800B6020
 * Callers:
 *     sub_1800B33F0 @ 0x1800B33F0 (sub_1800B33F0.c)
 * Callees:
 *     sub_180028864 @ 0x180028864 (sub_180028864.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800B3E48 @ 0x1800B3E48 (sub_1800B3E48.c)
 *     sub_1800B4028 @ 0x1800B4028 (sub_1800B4028.c)
 *     sub_1800B4100 @ 0x1800B4100 (sub_1800B4100.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B6020(_QWORD *a1)
{
  __int64 *v2; // rax
  char result; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-79h] BYREF
  __int128 v7; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v8[176]; // [rsp+40h] [rbp-59h] BYREF

  v2 = (__int64 *)sub_180028864(a1[114], (__int64)v8);
  sub_1800B3E48((__int64)(a1 + 44), v2);
  sub_1800B3DDC((__int64)v8);
  result = sub_1800B4028();
  if ( result )
  {
    v6 = 0LL;
    v4 = a1[113];
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = a1[113];
    }
    v5 = a1[112];
    *(_QWORD *)&v6 = v5;
    *((_QWORD *)&v6 + 1) = v4;
    v7 = 0LL;
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v5 = a1[112];
      v4 = a1[113];
    }
    *(_QWORD *)&v7 = v5;
    *((_QWORD *)&v7 + 1) = v4;
    return sub_1800B4100(a1 + 44, (__int64 *)&v7, (__int64 *)&v6);
  }
  return result;
}
