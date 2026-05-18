/*
 * XREFs of sub_18003D188 @ 0x18003D188
 * Callers:
 *     sub_18003D270 @ 0x18003D270 (sub_18003D270.c)
 *     sub_1800E6CDC @ 0x1800E6CDC (sub_1800E6CDC.c)
 * Callees:
 *     sub_18003D7E0 @ 0x18003D7E0 (sub_18003D7E0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_18003D188(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  volatile signed __int32 *v5; // rcx

  *a1 = &Spectre::Engine::CommandList::`vftable';
  if ( a1[12] )
    sub_18003D7E0();
  v2 = (volatile signed __int32 *)a1[17];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (void (__fastcall ***)(_QWORD, __int64))a1[12];
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = (volatile signed __int32 *)a1[10];
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  return sub_18002B404((__int64)a1);
}
