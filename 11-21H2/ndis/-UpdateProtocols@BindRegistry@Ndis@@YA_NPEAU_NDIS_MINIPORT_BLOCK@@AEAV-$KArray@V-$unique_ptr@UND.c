/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C010EC94
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112B04 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C01076E0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C010ED68 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0112748 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v12; // r14
  Ndis::BindState *v13; // rcx
  void *m_AdditionalContext; // rdx
  __int64 v15; // rdi

  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
                           a2,
                           *(unsigned int *)(a3 + 4)) )
    return 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)(a3 + 4) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(a3 + 8) + 8 * v9;
      if ( v8 >= *(unsigned int *)(a2 + 4) )
        goto LABEL_4;
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *(Ndis::BindState **)(v12 + 8 * v8);
      m_AdditionalContext = v13[1].m_AdditionalContext;
      if ( m_AdditionalContext != *(void **)(*(_QWORD *)v10 + 80LL) )
        break;
      if ( Ndis::BindState::SetSource(v13, AddBindSource, Registry)
        && (unsigned __int8)byte_1C00EC66B >= 4u
        && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v8) + 80LL) + 24LL),
          0x1Cu,
          0xBu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v8) + 80LL) + 24LL),
          **(_QWORD **)(v12 + 8 * v8));
      }
LABEL_5:
      ++v9;
LABEL_6:
      ++v8;
      if ( v9 >= *(unsigned int *)(a3 + 4) )
        goto LABEL_7;
    }
    if ( (unsigned __int64)m_AdditionalContext < *(_QWORD *)(*(_QWORD *)v10 + 80LL) )
    {
      if ( (a4 & 1) == 0
        && Ndis::BindState::SetSource(v13, RemoveBindSource, Registry)
        && (unsigned __int8)byte_1C00EC66B >= 4u
        && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v8) + 80LL) + 24LL),
          0x1Cu,
          0xCu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v8) + 80LL) + 24LL),
          **(_QWORD **)(v12 + 8 * v8));
      }
      goto LABEL_6;
    }
LABEL_4:
    if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v8, v10) )
      return 0;
    goto LABEL_5;
  }
LABEL_7:
  if ( (a4 & 1) == 0 )
  {
    while ( v8 < *(unsigned int *)(a2 + 4) )
    {
      v15 = *(_QWORD *)(a2 + 8);
      if ( Ndis::BindState::SetSource(*(Ndis::BindState **)(v15 + 8 * v8), RemoveBindSource, Registry)
        && (unsigned __int8)byte_1C00EC66B >= 4u
        && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8 * v8) + 80LL) + 24LL),
          0x1Cu,
          0xDu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v15 + 8 * v8) + 80LL) + 24LL),
          **(_QWORD **)(v15 + 8 * v8));
      }
      ++v8;
    }
  }
  return 1;
}
