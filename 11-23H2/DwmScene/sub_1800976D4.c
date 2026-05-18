/*
 * XREFs of sub_1800976D4 @ 0x1800976D4
 * Callers:
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180097288 @ 0x180097288 (sub_180097288.c)
 *     sub_1800DF794 @ 0x1800DF794 (sub_1800DF794.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800976D4(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  void (__fastcall *v9)(__int64, __int64, _QWORD *); // r9
  __int64 v10; // r11
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 48));
  if ( sub_180011DE0((_QWORD *)(a1 + 32)) )
  {
    v8 = sub_18001246C(v14, v7);
    v9(v10, a2, v8);
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 8);
    if ( v11 == *(_QWORD **)(a1 + 16) )
    {
      sub_180097288((char **)a1, *(char **)(a1 + 8), a3);
    }
    else
    {
      sub_18001246C(v11, a3);
      *(_QWORD *)(a1 + 8) += 16LL;
    }
    sub_1800DF794(a2);
  }
  Mtx_unlock(v6);
  v12 = a3[1];
  if ( v12 )
    sub_180010530(v12);
  return a2;
}
