/*
 * XREFs of ??$?RUAttachedInputObjectEntry@InputSite@@@_lambda_04d0ae44debf7fa40e3352da6740393b_@@QEBA?A_PAEBUAttachedInputObjectEntry@InputSite@@@Z @ 0x18001E220
 * Callers:
 *     ?OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001E040 (-OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall _lambda_04d0ae44debf7fa40e3352da6740393b_::operator()<InputSite::AttachedInputObjectEntry>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 *v4; // rdi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // r15
  __int64 v7; // rcx
  char v8; // bl
  bool v9; // al

  v2 = *a2;
  v3 = **a1;
  v4 = a1[1];
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2[1];
  v6 = **v5;
  v7 = *v4;
  v8 = 0;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v9 = v6(v5, &GUID_a4b99b84_c336_2bdd_25f1_145816405d92, v4) >= 0;
  if ( v2 == v3 && v9 )
    return 1;
  return v8;
}
