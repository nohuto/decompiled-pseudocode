/*
 * XREFs of sub_180028068 @ 0x180028068
 * Callers:
 *     sub_180028160 @ 0x180028160 (sub_180028160.c)
 *     sub_1800CB690 @ 0x1800CB690 (sub_1800CB690.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180028068(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  v2 = a1[15];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[13];
  if ( v3 )
    sub_180010530(v3);
  return sub_1800280AC(a1);
}
