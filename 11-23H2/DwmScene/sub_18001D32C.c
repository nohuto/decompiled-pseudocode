/*
 * XREFs of sub_18001D32C @ 0x18001D32C
 * Callers:
 *     sub_18001CD8C @ 0x18001CD8C (sub_18001CD8C.c)
 *     sub_18002AAE4 @ 0x18002AAE4 (sub_18002AAE4.c)
 *     sub_18002E3D0 @ 0x18002E3D0 (sub_18002E3D0.c)
 *     sub_18002FD24 @ 0x18002FD24 (sub_18002FD24.c)
 *     sub_18004DD30 @ 0x18004DD30 (sub_18004DD30.c)
 *     sub_18004DE24 @ 0x18004DE24 (sub_18004DE24.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_18001D32C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B24(v2 + 32);
  return sub_18001D2A8(a1);
}
