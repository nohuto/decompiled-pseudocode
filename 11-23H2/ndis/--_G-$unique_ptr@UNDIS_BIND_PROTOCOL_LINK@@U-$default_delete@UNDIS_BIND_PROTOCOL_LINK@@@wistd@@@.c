/*
 * XREFs of ??_G?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0030E44
 * Callers:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C002BF10 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C011F188 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROT.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C0121638 (--1BindStack@Ndis@@QEAA@XZ.c)
 * Callees:
 *     ??_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z @ 0x1C012D790 (--_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_PROTOCOL_LINK **__fastcall wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
        NDIS_BIND_PROTOCOL_LINK **a1,
        unsigned int a2)
{
  NDIS_BIND_PROTOCOL_LINK *v3; // rcx

  v3 = *a1;
  *a1 = 0LL;
  if ( v3 )
    NDIS_BIND_PROTOCOL_LINK::`scalar deleting destructor'(v3, a2);
  return a1;
}
