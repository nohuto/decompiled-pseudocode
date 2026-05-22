/*
 * XREFs of ??$?RUAttachedInputObjectEntry@InputSite@@@_lambda_9c87987138ffa5ecb6aee109509755f0_@@QEBA?A_PAEBUAttachedInputObjectEntry@InputSite@@@Z @ 0x18001FE70
 * Callers:
 *     ?OnWindowsMessageDeliveryChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001FC80 (-OnWindowsMessageDeliveryChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall _lambda_9c87987138ffa5ecb6aee109509755f0_::operator()<InputSite::AttachedInputObjectEntry>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 *v4; // rbx
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // r14
  __int64 v7; // rcx
  bool v8; // al

  v2 = *a2;
  v3 = **a1;
  v4 = a1[1];
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2[1];
  v6 = **v5;
  v7 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = v6(v5, &GUID_d3573f80_52a7_d2c9_ece4_38e96aede26c, v4) >= 0;
  return v2 == v3 && v8;
}
