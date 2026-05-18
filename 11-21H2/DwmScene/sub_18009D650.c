/*
 * XREFs of sub_18009D650 @ 0x18009D650
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 *     sub_18006BF28 @ 0x18006BF28 (sub_18006BF28.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009D650(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF

  v12 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v12 = *a2;
  *((_QWORD *)&v12 + 1) = v4;
  sub_180062BE0(a1, &v12);
  sub_18006BF28(v13, a2);
  v5 = v13[0];
  v6 = (_QWORD *)(v13[0] + 1896);
  v7 = *(_QWORD *)(a1 + 1904);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 1904);
    v5 = v13[0];
  }
  v8 = *(_QWORD *)(a1 + 1896);
  v14[0] = *v6;
  *v6 = v8;
  v14[1] = v6[1];
  v6[1] = v7;
  sub_180010910((__int64)v14);
  *(_DWORD *)(v5 + 1940) = *(_DWORD *)(a1 + 1940);
  *(_DWORD *)(v5 + 1944) = *(_DWORD *)(a1 + 1944);
  *(_BYTE *)(v5 + 1952) = *(_BYTE *)(a1 + 1952);
  *(_DWORD *)(v5 + 1948) = *(_DWORD *)(a1 + 1948);
  *(_DWORD *)(v5 + 1956) = *(_DWORD *)(a1 + 1956);
  *(_DWORD *)(v5 + 1964) = *(_DWORD *)(a1 + 1964);
  *(_DWORD *)(v5 + 1960) = *(_DWORD *)(a1 + 1960);
  *(_DWORD *)(v5 + 1968) = *(_DWORD *)(a1 + 1968);
  v9 = (_QWORD *)(a1 + 1768);
  if ( v5 + 1768 != a1 + 1768 )
  {
    if ( *(_QWORD *)(a1 + 1792) >= 0x10uLL )
      v9 = (_QWORD *)*v9;
    sub_180012190((__int64 *)(v5 + 1768), v9, *(_QWORD *)(a1 + 1784));
  }
  v10 = (_QWORD *)(a1 + 1848);
  if ( v5 + 1848 != a1 + 1848 )
  {
    if ( *(_QWORD *)(a1 + 1872) >= 0x10uLL )
      v10 = (_QWORD *)*v10;
    sub_180012190((__int64 *)(v5 + 1848), v10, *(_QWORD *)(a1 + 1864));
  }
  sub_180010910((__int64)v13);
  return sub_180010910((__int64)a2);
}
