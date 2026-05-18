/*
 * XREFs of sub_18009A750 @ 0x18009A750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002B404 @ 0x18002B404 (sub_18002B404.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18009A750(_QWORD *lpMem, char a2)
{
  volatile signed __int32 *v4; // rcx

  *lpMem = &Spectre::Engine::DeviceRenderState::`vftable';
  sub_180010910((__int64)(lpMem + 12));
  v4 = (volatile signed __int32 *)lpMem[10];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_18002B404((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
