/*
 * XREFs of sub_18004AF30 @ 0x18004AF30
 * Callers:
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18004CE88 @ 0x18004CE88 (sub_18004CE88.c)
 */

void **__fastcall sub_18004AF30(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::MeshInstance::`vftable';
  v2 = (volatile signed __int32 *)a1[20];
  if ( v2 )
    sub_180010574(v2);
  v3 = (volatile signed __int32 *)a1[18];
  if ( v3 )
    sub_180010574(v3);
  sub_18004CE88(a1 + 13);
  v4 = a1[12];
  if ( v4 )
    sub_180010530(v4);
  return sub_180042F3C(a1);
}
