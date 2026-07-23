/*
 * XREFs of sub_140651FB8 @ 0x140651FB8
 * Callers:
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_140652080 @ 0x140652080 (sub_140652080.c)
 * Callees:
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

__int64 (__fastcall **__fastcall sub_140651FB8(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  result = off_14000A518;
  *a1 = off_14000A518;
  v3 = a1[24];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v3);
  v4 = a1[23];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v4);
  v5 = a1[22];
  if ( v5 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v5);
  v6 = a1[20];
  if ( v6 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v6);
  v7 = a1[19];
  if ( v7 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v7);
  v8 = a1[21];
  if ( v8 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v8);
  v9 = a1[10];
  if ( v9 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v9);
  v10 = a1[8];
  if ( v10 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v10);
  v11 = a1[6];
  if ( v11 )
    result = (__int64 (__fastcall **)())sub_1406D9550(v11);
  v12 = a1[4];
  if ( v12 )
    return (__int64 (__fastcall **)())sub_1406D9550(v12);
  return result;
}
