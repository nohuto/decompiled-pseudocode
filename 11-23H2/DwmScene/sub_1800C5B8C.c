/*
 * XREFs of sub_1800C5B8C @ 0x1800C5B8C
 * Callers:
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800C5B8C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  char v3; // si
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 4168);
  v7 = a1 + 4168;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 4168));
  v3 = 0;
  v4 = **(_QWORD **)(a1 + 4136);
  v6 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( v3 || (***(unsigned __int8 (__fastcall ****)(_QWORD))(v4 + 32))(*(_QWORD *)(v4 + 32)) )
      v3 = 1;
    sub_18001D3F8(&v6);
    v4 = v6;
  }
  Mtx_unlock(v2);
  return v3;
}
