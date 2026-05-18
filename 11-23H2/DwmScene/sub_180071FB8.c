/*
 * XREFs of sub_180071FB8 @ 0x180071FB8
 * Callers:
 *     sub_180072150 @ 0x180072150 (sub_180072150.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180071FB8(_QWORD *a1)
{
  __int64 v2; // rcx
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
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  *a1 = &Spectre::Engine::ImageProcessingManager::`vftable';
  v2 = a1[60];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[58];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[55];
  if ( v4 )
    sub_180010530(v4);
  v5 = a1[53];
  if ( v5 )
    sub_180010530(v5);
  v6 = a1[51];
  if ( v6 )
    sub_180010530(v6);
  v7 = a1[49];
  if ( v7 )
    sub_180010530(v7);
  v8 = a1[47];
  if ( v8 )
    sub_180010530(v8);
  v9 = a1[45];
  if ( v9 )
    sub_180010530(v9);
  v10 = a1[43];
  if ( v10 )
    sub_180010530(v10);
  v11 = a1[41];
  if ( v11 )
    sub_180010530(v11);
  v12 = a1[39];
  if ( v12 )
    sub_180010530(v12);
  v13 = a1[37];
  if ( v13 )
    sub_180010530(v13);
  v14 = a1[35];
  if ( v14 )
    sub_180010530(v14);
  sub_18000B4B0((__int64)(a1 + 22), 16LL, 6LL);
  sub_18000B4B0((__int64)(a1 + 10), 16LL, 6LL);
  v15 = a1[9];
  if ( v15 )
    sub_180010530(v15);
  return sub_180013300((__int64)(a1 + 5));
}
