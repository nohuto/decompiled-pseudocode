/*
 * XREFs of sub_18008A9CC @ 0x18008A9CC
 * Callers:
 *     sub_18008AC60 @ 0x18008AC60 (sub_18008AC60.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

__int64 __fastcall sub_18008A9CC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  v8 = 0LL;
  sub_180011020(a1 + 12, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010530(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011020(a1 + 14, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010530(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011020(a1 + 16, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010530(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011020(a1 + 18, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010530(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011020(a1 + 20, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010530(*((__int64 *)&v8 + 1));
  v2 = a1[21];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[19];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[17];
  if ( v4 )
    sub_180010530(v4);
  v5 = a1[15];
  if ( v5 )
    sub_180010530(v5);
  v6 = a1[13];
  if ( v6 )
    sub_180010530(v6);
  return sub_1800280AC((__int64)a1);
}
