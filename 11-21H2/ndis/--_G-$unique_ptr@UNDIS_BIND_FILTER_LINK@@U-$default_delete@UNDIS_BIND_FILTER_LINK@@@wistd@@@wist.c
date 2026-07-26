/*
 * XREFs of ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C003260C
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0107914 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C0112C00 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0112EC4 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C0114BC4 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 * Callees:
 *     ??_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z @ 0x1C0121CA0 (--_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_FILTER_LINK **__fastcall wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
        NDIS_BIND_FILTER_LINK **a1,
        unsigned int a2)
{
  NDIS_BIND_FILTER_LINK *v3; // rcx

  v3 = *a1;
  *a1 = 0LL;
  if ( v3 )
    NDIS_BIND_FILTER_LINK::`scalar deleting destructor'(v3, a2);
  return a1;
}
