/*
 * XREFs of sub_18006D0B0 @ 0x18006D0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_18006BF90 @ 0x18006BF90 (sub_18006BF90.c)
 *     sub_180075B34 @ 0x180075B34 (sub_180075B34.c)
 *     sub_180075D60 @ 0x180075D60 (sub_180075D60.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006D0B0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // r8
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v9 = *a2;
  *((_QWORD *)&v9 + 1) = v4;
  sub_180036540(a1, v10, v4, &v9);
  if ( v10[0] && (*(_DWORD *)(v10[0] + 440LL) & 0x2000000) != 0 )
  {
    v6 = sub_18006BF90(v11, v10);
    LOBYTE(v7) = 1;
    sub_180075B34(a1, v6, v7);
    sub_180010910((__int64)v11);
  }
  LOBYTE(v5) = 1;
  sub_180075D60(a1, a2, v5);
  return sub_180010910((__int64)v10);
}
