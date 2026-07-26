/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0114404
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114348 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062EAC (WPP_RECORDER_SF_LL_ea_1C0062EAC.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115960 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  unsigned int v4; // edx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r8d
  bool v10; // cf
  char v11[8]; // [rsp+30h] [rbp-28h]

  v2 = *((unsigned int *)this + 1);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 1);
  while ( v3 != v2 )
  {
    if ( v3 >= v4 )
      __fastfail(5u);
    v6 = *((_QWORD *)this + 1);
    v7 = *(_QWORD *)(v6 + 8 * v3);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 80) + 40LL);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 64) & 0x10000000) == 0 || LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) )
      {
        v9 = *(_DWORD *)(v7 + 32);
        *(_DWORD *)(v7 + 32) = v9 & 0xFFDFFFFF;
        if ( (v9 != 0) != ((v9 & 0xFFDFFFFF) != 0) || !*(_QWORD *)v7 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v11 = v9 & 0xFFDFFFFF;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v9,
              *(_QWORD *)v11);
          }
          v10 = (unsigned __int8)byte_1C00F5443 < 4u;
          *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
          if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8 * v3) + 80LL) + 24LL),
              0x1Cu,
              0x13u,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v6 + 8 * v3) + 80LL) + 24LL),
              **(_QWORD **)(v6 + 8 * v3));
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v6 + 8 * v3),
                  BindingDisabled,
                  Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_1C00F5443 >= 4u
             && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8 * v3) + 80LL) + 24LL),
          0x1Cu,
          0x14u,
          (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v6 + 8 * v3) + 80LL) + 24LL),
          **(_QWORD **)(v6 + 8 * v3));
      }
      v4 = *((_DWORD *)this + 1);
    }
    ++v3;
  }
}
