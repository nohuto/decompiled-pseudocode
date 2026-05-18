/*
 * XREFs of sub_180029D08 @ 0x180029D08
 * Callers:
 *     sub_180029F70 @ 0x180029F70 (sub_180029F70.c)
 *     sub_1800E1F48 @ 0x1800E1F48 (sub_1800E1F48.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180029D08(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  sub_180010910((__int64)(a1 + 14));
  sub_180010910((__int64)(a1 + 12));
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_18002B404(a1);
}
