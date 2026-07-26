/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0109660
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  unsigned __int64 i; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // r8d
  bool v9; // cf
  char v10[8]; // [rsp+30h] [rbp-28h]

  v2 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v5 = *((_QWORD *)this + 1);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 80) + 40LL);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 64) & 0x10000000) == 0 || LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) )
      {
        v8 = *(_DWORD *)(v6 + 32);
        *(_DWORD *)(v6 + 32) = v8 & 0xFFDFFFFF;
        if ( (v8 != 0) != ((v8 & 0xFFDFFFFF) != 0) || !*(_QWORD *)v6 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v10 = v8 & 0xFFDFFFFF;
            WPP_RECORDER_SF_DD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v8,
              *(_QWORD *)v10);
          }
          v9 = (unsigned __int8)byte_1C00EC66B < 4u;
          *(_BYTE *)(*(_QWORD *)v6 + 5216LL) = 1;
          if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
              0x1Cu,
              0x13u,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
              **(_QWORD **)(v5 + 8 * i));
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v5 + 8 * i),
                  BindingDisabled,
                  Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_1C00EC66B >= 4u
             && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
          0x1Cu,
          0x14u,
          (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
          **(_QWORD **)(v5 + 8 * i));
      }
    }
  }
}
