/*
 * XREFs of sub_180063A00 @ 0x180063A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 */

__int64 __fastcall sub_180063A00(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 128) )
  {
    v7 = 0LL;
    sub_18006558C(a1, &v7);
    v8 = 0LL;
    sub_180065394(a1, &v8);
  }
  v9 = sub_180028544(*a2);
  sub_18002B024((_QWORD *)(a1 + 448), &v9);
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v5 = *a2;
  *((_QWORD *)&v7 + 1) = v4;
  *(_QWORD *)&v7 = v5;
  sub_180010910((__int64)&v7);
  return sub_180010910((__int64)a2);
}
