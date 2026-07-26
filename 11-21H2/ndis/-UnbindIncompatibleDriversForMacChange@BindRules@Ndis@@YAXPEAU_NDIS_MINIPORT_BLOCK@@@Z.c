/*
 * XREFs of ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109440
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindIncompatibleDriversForMacChange(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rdi
  __int64 v5; // r14
  __int64 v6; // rdx
  _DWORD *v7; // rsi
  int v8; // r8d
  __int64 v9; // rbp
  unsigned __int64 j; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  _DWORD *v13; // rsi
  int v14; // r8d
  int v15; // edx
  int v16; // edx
  __int64 *v17; // rax
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdx
  unsigned __int16 v20; // r9
  __int64 *v21; // rax
  char v22[8]; // [rsp+30h] [rbp-178h]
  __int64 v23[20]; // [rsp+40h] [rbp-168h] BYREF
  char v24[160]; // [rsp+E0h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 1257);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1257) )
LABEL_49:
      __fastfail(5u);
    v5 = *((_QWORD *)this + 629);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 56LL);
    if ( v6 )
    {
      _m_prefetchw((char *)this + 4424);
      if ( ((_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x20) == 0 || (*(_DWORD *)(v6 + 48) & 2) != 0)
        && ((_m_prefetchw((char *)this + 4424), (_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x40) == 0)
         || (*(_DWORD *)(v6 + 48) & 4) != 0) )
      {
        v7 = *(_DWORD **)(v5 + 8 * i);
        v8 = v7[8];
        v7[8] = v8 & 0xFFBFFFFF;
        if ( (v8 != 0) != ((v8 & 0xFFBFFFFF) != 0) || !*(_QWORD *)v7 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v22 = v8 & 0xFFBFFFFF;
            WPP_RECORDER_SF_DD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v8,
              *(_QWORD *)v22);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
          memset(v24, 0, sizeof(v24));
          if ( (unsigned __int8)byte_1C00EC66B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v24);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v16,
                0x1Cu,
                0x16u,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                *(unsigned __int16 **)&v24[8],
                *(_QWORD *)v24);
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v5 + 8 * i),
                  BindingDisabled,
                  Reason_IncompatibleWithNotification) )
      {
        memset(v23, 0, sizeof(v23));
        if ( (unsigned __int8)byte_1C00EC66B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v23);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              0x1Cu,
              0x15u,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              (unsigned __int16 *)v23[1],
              v23[0]);
        }
      }
    }
  }
  v9 = *((unsigned int *)this + 1253);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1253) )
      goto LABEL_49;
    v11 = *((_QWORD *)this + 627);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 40LL);
    if ( v12 )
    {
      _m_prefetchw((char *)this + 4424);
      if ( ((_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x20) == 0 || (*(_DWORD *)(v12 + 64) & 2) != 0)
        && ((_m_prefetchw((char *)this + 4424), (_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x40) == 0)
         || (*(_DWORD *)(v12 + 64) & 4) != 0) )
      {
        v13 = *(_DWORD **)(v11 + 8 * j);
        v14 = v13[8];
        v13[8] = v14 & 0xFFBFFFFF;
        if ( (v14 != 0) != ((v14 & 0xFFBFFFFF) != 0) || !*(_QWORD *)v13 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v22 = v14 & 0xFFBFFFFF;
            WPP_RECORDER_SF_DD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v14,
              *(_QWORD *)v22);
          }
          *(_BYTE *)(*(_QWORD *)v13 + 5216LL) = 1;
          if ( (unsigned __int8)byte_1C00EC66B >= 4u )
          {
            v21 = *(__int64 **)(v11 + 8 * j);
            v18 = *v21;
            v19 = *(unsigned __int16 **)(v21[10] + 24);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v20 = 24;
              goto LABEL_42;
            }
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v11 + 8 * j),
                  BindingDisabled,
                  Reason_IncompatibleWithNotification)
             && (unsigned __int8)byte_1C00EC66B >= 4u )
      {
        v17 = *(__int64 **)(v11 + 8 * j);
        v18 = *v17;
        v19 = *(unsigned __int16 **)(v17[10] + 24);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v20 = 23;
LABEL_42:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v19,
            0x1Cu,
            v20,
            (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
            v19,
            v18);
          continue;
        }
      }
    }
  }
}
