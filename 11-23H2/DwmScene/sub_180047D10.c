/*
 * XREFs of sub_180047D10 @ 0x180047D10
 * Callers:
 *     sub_180017FD0 @ 0x180017FD0 (sub_180017FD0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_180028138 @ 0x180028138 (sub_180028138.c)
 */

__int64 __fastcall sub_180047D10(__int64 a1)
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
  __int64 result; // rax
  volatile signed __int32 *v12; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Mesh::`vftable';
  v2 = *(_QWORD *)(a1 + 280);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(_QWORD *)(a1 + 264);
  if ( v3 )
    sub_180010530(v3);
  v4 = *(_QWORD *)(a1 + 248);
  if ( v4 )
    sub_180010530(v4);
  v5 = *(_QWORD *)(a1 + 232);
  if ( v5 )
    sub_180010530(v5);
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
    sub_180010530(v6);
  v7 = *(_QWORD *)(a1 + 200);
  if ( v7 )
    sub_180010530(v7);
  v8 = *(_QWORD *)(a1 + 184);
  if ( v8 )
    sub_180010530(v8);
  v9 = *(_QWORD *)(a1 + 168);
  if ( v9 )
    sub_180010530(v9);
  v10 = *(_QWORD *)(a1 + 152);
  if ( v10 )
    sub_180010530(v10);
  sub_180027FD4((void **)(a1 + 128));
  result = sub_180028138(a1);
  v12 = *(volatile signed __int32 **)(a1 + 104);
  if ( v12 )
    return sub_180010574(v12);
  return result;
}
