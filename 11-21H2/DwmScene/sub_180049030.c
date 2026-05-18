/*
 * XREFs of sub_180049030 @ 0x180049030
 * Callers:
 *     sub_18004A1B0 @ 0x18004A1B0 (sub_18004A1B0.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_180029DE4 @ 0x180029DE4 (sub_180029DE4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_180049030(__int64 *lpMem, char a2)
{
  volatile signed __int32 *v4; // rcx

  *lpMem = (__int64)&Spectre::Engine::RenderState::`vftable';
  sub_180029C94(lpMem + 16);
  sub_180010910((__int64)(lpMem + 14));
  v4 = (volatile signed __int32 *)lpMem[13];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180029DE4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
