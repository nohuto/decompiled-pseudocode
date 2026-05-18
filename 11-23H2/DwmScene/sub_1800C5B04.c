/*
 * XREFs of sub_1800C5B04 @ 0x1800C5B04
 * Callers:
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800C5B04(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 4168);
  v6 = a1 + 4168;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 4168));
  v3 = **(_QWORD **)(a1 + 4152);
  v5 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    (***(void (__fastcall ****)(_QWORD, _QWORD))(v3 + 32))(*(_QWORD *)(v3 + 32), *(unsigned int *)(a1 + 4248));
    sub_18001D3F8(&v5);
    v3 = v5;
  }
  return Mtx_unlock(v2);
}
