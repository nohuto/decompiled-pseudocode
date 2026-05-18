/*
 * XREFs of sub_18005CD50 @ 0x18005CD50
 * Callers:
 *     sub_1800599D0 @ 0x1800599D0 (sub_1800599D0.c)
 *     sub_18005A110 @ 0x18005A110 (sub_18005A110.c)
 *     sub_1800E3514 @ 0x1800E3514 (sub_1800E3514.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_18005CD50(__int64 a1)
{
  unsigned __int64 v2; // rdx
  LPVOID *v3; // rdi
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::DeviceTexture::`vftable';
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 >= 0x10 )
    sub_180010884(*(char **)(a1 + 120), v2 + 1);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 15LL;
  *(_BYTE *)(a1 + 120) = 0;
  v3 = *(LPVOID **)(a1 + 112);
  if ( v3 )
  {
    if ( *v3 )
      sub_18000B998(*v3);
    sub_18000B998(v3);
  }
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(volatile signed __int32 **)(a1 + 80);
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  return sub_18002B404(a1);
}
