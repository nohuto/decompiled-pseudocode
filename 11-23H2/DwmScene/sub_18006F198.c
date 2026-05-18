/*
 * XREFs of sub_18006F198 @ 0x18006F198
 * Callers:
 *     sub_18006F260 @ 0x18006F260 (sub_18006F260.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 */

__int64 __fastcall sub_18006F198(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::DepthBuffer::`vftable';
  sub_180027FD4((void **)(a1 + 256));
  sub_18000B4B0(a1 + 192, 16LL, 4LL);
  sub_18000B4B0(a1 + 128, 16LL, 4LL);
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010574(v3);
  return sub_180028138(a1);
}
