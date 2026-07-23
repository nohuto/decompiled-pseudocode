/*
 * XREFs of sub_140527410 @ 0x140527410
 * Callers:
 *     sub_140525620 @ 0x140525620 (sub_140525620.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140527410(_QWORD *a1, ULONG_PTR a2)
{
  int v4; // eax

  v4 = sub_14042A5E0(*(unsigned int *)(*a1 + 16LL), *(unsigned int *)(a1[1] + 16LL));
  if ( v4 < 0 )
    KeBugCheckEx(0x159u, 0x3200uLL, v4, *(unsigned int *)(a1[1] + 16LL), a2);
  return 0LL;
}
