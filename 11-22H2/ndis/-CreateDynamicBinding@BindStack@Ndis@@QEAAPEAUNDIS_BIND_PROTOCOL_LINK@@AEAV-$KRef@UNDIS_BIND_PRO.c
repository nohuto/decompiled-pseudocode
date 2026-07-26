/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C013AC08
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     _lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_ @ 0x1C01218C0 (_lambda_12a273c170595e0055a0ec70dd7bc2f3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@XZ @ 0x1C0069A38 (--1-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0113794 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C0115FC4 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C011CE24 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C011CE24.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C011EDDC (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C011EE50 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C011F418 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C0120AB4 (Ndis--sortProtocolsByPointer.c)
 *     ??_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z @ 0x1C012D7D0 (--_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_LINK_BASE *__fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        NDIS_BIND_LINK_BASE *a2,
        _NDIS_MINIPORT_BLOCK *a3,
        enum Ndis::BindSource::Flags a4)
{
  unsigned int v8; // edx
  NDIS_BIND_LINK_BASE *v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 i; // rdi
  __int64 v12; // rsi
  Ndis::BindState *v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // edx
  NDIS_BIND_LINK_BASE *v17; // rsi
  unsigned __int64 v18; // rdi
  char v19; // al
  NDIS_BIND_PROTOCOL_LINK *v20; // rcx
  NDIS_BIND_LINK_BASE *v21[2]; // [rsp+20h] [rbp-10h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, v21, a2);
  v9 = v21[0];
  if ( !v21[0] )
    goto LABEL_20;
  v10 = *(unsigned int *)(a1 + 4);
  for ( i = 0LL; i != v10; ++i )
  {
    if ( i >= v10 )
      __fastfail(5u);
    v12 = *(_QWORD *)(a1 + 8);
    if ( a4 != UnsolicitedOpen || !Ndis::BindState::IsAlive(*(Ndis::BindState **)(v12 + 8 * i)) )
    {
      v13 = *(Ndis::BindState **)(v12 + 8 * i);
      if ( v13[1].m_AdditionalContext == v9[1].BindState.Miniport )
      {
        Ndis::BindState::SetSource(v13, AddBindSource, a4);
        v14 = *(_QWORD *)(v12 + 8 * i);
        wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::~unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
          (NDIS_BIND_PROTOCOL_LINK **)v21,
          v15);
        return (NDIS_BIND_LINK_BASE *)v14;
      }
    }
  }
  v9->BindState.Miniport = a3;
  NDIS_BIND_LINK_BASE::LinkToDriver(v21[0], (struct NDIS_BIND_DRIVER_BASE *)a2->BindState.Miniport);
  Ndis::BindState::SetSource(&v21[0]->BindState, AddBindSource, a4);
  v17 = v21[0];
  v18 = 0LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    while ( Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 8) + 8 * v18, (__int64)v21) )
    {
      if ( ++v18 >= *(unsigned int *)(a1 + 4) )
        goto LABEL_14;
    }
    v19 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
            (unsigned int *)a1,
            v18,
            (__int64 *)v21);
  }
  else
  {
LABEL_14:
    v19 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
            (unsigned int *)a1,
            (__int64 *)v21);
  }
  if ( v19 )
  {
    v20 = (NDIS_BIND_PROTOCOL_LINK *)v21[0];
    ++*(_DWORD *)(a1 + 96);
    v21[0] = 0LL;
    a3->BindEngine.m_isDirty = 1;
    if ( v20 )
      NDIS_BIND_PROTOCOL_LINK::`scalar deleting destructor'(v20);
    return v17;
  }
  else
  {
LABEL_20:
    wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::~unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
      (NDIS_BIND_PROTOCOL_LINK **)v21,
      v8);
    return 0LL;
  }
}
