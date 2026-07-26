/*
 * XREFs of ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C011EE50
 * Callers:
 *     ?insertSortedUnique@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@P6A_NAEBV34@1@Z@Z @ 0x1C011E774 (-insertSortedUnique@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIN.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C011ED2C (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C013AC08 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C002BD80 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C011F1C8 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROT.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
        unsigned int *a1,
        unsigned __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char result; // al
  unsigned __int64 v13; // rdx

  v3 = a1[1];
  if ( a2 > v3 )
    return 0;
  v7 = *a1;
  v8 = (unsigned int)(v3 + 1);
  if ( v7 < v8 )
  {
    if ( v8 < 4 )
      v8 = 4LL;
    v13 = ((unsigned int)v7 >> 1) + (unsigned int)v7;
    if ( v8 >= v13 )
      v13 = v8;
    if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
            a1,
            v13) )
      return 0;
  }
  v9 = a1[1];
  if ( a2 < v9 )
    Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::moveElements(
      a1,
      (unsigned int)a2,
      (unsigned int)(a2 + 1),
      (unsigned int)(v9 - a2));
  v10 = *a3;
  v11 = *((_QWORD *)a1 + 1);
  *a3 = 0LL;
  *(_QWORD *)(v11 + 8 * a2) = v10;
  result = 1;
  ++a1[1];
  return result;
}
