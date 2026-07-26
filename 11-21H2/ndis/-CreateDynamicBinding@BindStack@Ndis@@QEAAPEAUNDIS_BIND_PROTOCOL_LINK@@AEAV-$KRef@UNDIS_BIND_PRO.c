/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C012EE98
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C00962E0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     _lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_ @ 0x1C012EFF0 (_lambda_12a273c170595e0055a0ec70dd7bc2f3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C01076E0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C010BF50 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C010EE18 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C010EE94 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C010F814 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C010F814.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C0111274 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C0114D3C (Ndis--sortProtocolsByPointer.c)
 *     ??_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z @ 0x1C0121D10 (--_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_LINK_BASE *__fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        NDIS_BIND_LINK_BASE *a2,
        _NDIS_MINIPORT_BLOCK *a3,
        enum Ndis::BindSource::Flags a4)
{
  NDIS_BIND_PROTOCOL_LINK *v8; // r10
  NDIS_BIND_LINK_BASE *v9; // rdi
  NDIS_BIND_LINK_BASE *v10; // r8
  __int64 v11; // rsi
  Ndis::BindState *v12; // rcx
  unsigned __int64 v13; // rsi
  char v14; // al
  NDIS_BIND_LINK_BASE *v16[2]; // [rsp+20h] [rbp-10h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, v16, a2);
  v8 = (NDIS_BIND_PROTOCOL_LINK *)v16[0];
  v9 = 0LL;
  if ( v16[0] )
  {
    v10 = (NDIS_BIND_LINK_BASE *)*(unsigned int *)(a1 + 4);
    while ( v9 != v10 )
    {
      if ( v9 >= v10 )
        __fastfail(5u);
      v11 = *(_QWORD *)(a1 + 8);
      if ( a4 != UnsolicitedOpen || !Ndis::BindState::IsAlive(*(Ndis::BindState **)(v11 + 8LL * (_QWORD)v9)) )
      {
        v12 = *(Ndis::BindState **)(v11 + 8LL * (_QWORD)v9);
        if ( v12[1].m_AdditionalContext == v8->BindDriver._p )
        {
          Ndis::BindState::SetSource(v12, AddBindSource, a4);
          v8 = (NDIS_BIND_PROTOCOL_LINK *)v16[0];
          v9 = *(NDIS_BIND_LINK_BASE **)(v11 + 8LL * (_QWORD)v9);
          goto LABEL_19;
        }
      }
      v9 = (NDIS_BIND_LINK_BASE *)((char *)v9 + 1);
    }
    v8->BindState.Miniport = a3;
    NDIS_BIND_LINK_BASE::LinkToDriver(v16[0], (struct NDIS_BIND_DRIVER_BASE *)a2->BindState.Miniport);
    Ndis::BindState::SetSource(&v16[0]->BindState, AddBindSource, a4);
    v9 = v16[0];
    v13 = 0LL;
    if ( *(_DWORD *)(a1 + 4) )
    {
      while ( Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 8) + 8 * v13, (__int64)v16) )
      {
        if ( ++v13 >= *(unsigned int *)(a1 + 4) )
          goto LABEL_14;
      }
      v14 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
              (unsigned int *)a1,
              v13,
              (__int64 *)v16);
    }
    else
    {
LABEL_14:
      v14 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
              (unsigned int *)a1,
              (__int64 *)v16);
    }
    v8 = (NDIS_BIND_PROTOCOL_LINK *)v16[0];
    if ( v14 )
    {
      ++*(_DWORD *)(a1 + 96);
      a3->BindEngine.m_isDirty = 1;
    }
    else
    {
      v9 = 0LL;
    }
  }
LABEL_19:
  v16[0] = 0LL;
  if ( v8 )
    NDIS_BIND_PROTOCOL_LINK::`scalar deleting destructor'(v8);
  return v9;
}
