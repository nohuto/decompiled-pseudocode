/*
 * XREFs of ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0120E68
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C011BBC8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0035088 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C011EE8C (Ndis--BindRegistry--UpdateFiltersInner.c)
 */

bool __fastcall Ndis::BindRegistry::UpdateFilters(
        _NDIS_MINIPORT_BLOCK *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int a4)
{
  __int64 v8; // rax
  unsigned int *v10[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
          a2,
          a3[1]) )
    return 0;
  v10[2] = (unsigned int *)a3[1];
  v8 = a2[1];
  v12 = 0LL;
  v10[1] = 0LL;
  v11[1] = 0LL;
  v11[2] = v8;
  v10[0] = a3;
  v11[0] = a2;
  return Ndis::BindRegistry::UpdateFiltersInner(a1, (__int64)v11, v10, &v12, 1, a4);
}
