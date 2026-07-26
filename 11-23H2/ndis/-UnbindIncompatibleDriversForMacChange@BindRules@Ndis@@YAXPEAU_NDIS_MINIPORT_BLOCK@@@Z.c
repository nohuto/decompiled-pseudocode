/*
 * XREFs of ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01159A8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114308 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062ECC (WPP_RECORDER_SF_LL_ea_1C0062ECC.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115920 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AA88 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindIncompatibleDriversForMacChange(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned int v4; // edx
  __int64 v6; // r14
  __int64 v7; // rax
  _DWORD *v8; // rdx
  _DWORD *v9; // rsi
  int v10; // r8d
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  unsigned int v13; // edx
  __int64 v14; // r14
  __int64 v15; // rax
  _DWORD *v16; // rdx
  _DWORD *v17; // rsi
  int v18; // r8d
  int v19; // edx
  int v20; // edx
  __int64 *v21; // rax
  __int64 v22; // rcx
  unsigned __int16 *v23; // rdx
  unsigned __int16 v24; // r9
  __int64 *v25; // rax
  char v26[8]; // [rsp+30h] [rbp-178h]
  __int64 v27[20]; // [rsp+40h] [rbp-168h] BYREF
  char v28[160]; // [rsp+E0h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 1257);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 1257);
  while ( v3 != v2 )
  {
    if ( v3 >= v4 )
LABEL_50:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 629);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8 * v3) + 80LL) + 56LL);
    if ( v7 )
    {
      v8 = (_DWORD *)(v7 + 48);
      _m_prefetchw((char *)this + 4424);
      if ( ((_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x20) == 0 || (*v8 & 2) != 0)
        && ((_m_prefetchw((char *)this + 4424), (_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x40) == 0)
         || (*v8 & 4) != 0) )
      {
        v9 = *(_DWORD **)(v6 + 8 * v3);
        v10 = v9[8];
        v9[8] = v10 & 0xFFBFFFFF;
        if ( (v10 != 0) != ((v10 & 0xFFBFFFFF) != 0) || !*(_QWORD *)v9 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v26 = v10 & 0xFFBFFFFF;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v10,
              *(_QWORD *)v26);
          }
          *(_BYTE *)(*(_QWORD *)v9 + 5216LL) = 1;
          memset(v28, 0, sizeof(v28));
          if ( (unsigned __int8)byte_1C00F5443 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v3),
              (struct NDIS_PNPTRACE_LOCALS *)v28);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v20,
                0x1Cu,
                0x16u,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                *(unsigned __int16 **)&v28[8],
                *(_QWORD *)v28);
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v6 + 8 * v3),
                  BindingDisabled,
                  Reason_IncompatibleWithNotification) )
      {
        memset(v27, 0, sizeof(v27));
        if ( (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v3),
            (struct NDIS_PNPTRACE_LOCALS *)v27);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v19,
              0x1Cu,
              0x15u,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              (unsigned __int16 *)v27[1],
              v27[0]);
        }
      }
      v4 = *((_DWORD *)this + 1257);
    }
    ++v3;
  }
  v11 = *((unsigned int *)this + 1253);
  v12 = 0LL;
  v13 = *((_DWORD *)this + 1253);
  while ( v12 != v11 )
  {
    if ( v12 >= v13 )
      goto LABEL_50;
    v14 = *((_QWORD *)this + 627);
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8 * v12) + 80LL) + 40LL);
    if ( v15 )
    {
      v16 = (_DWORD *)(v15 + 64);
      _m_prefetchw((char *)this + 4424);
      if ( ((_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x20) == 0 || (*v16 & 2) != 0)
        && ((_m_prefetchw((char *)this + 4424), (_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x40) == 0)
         || (*v16 & 4) != 0) )
      {
        v17 = *(_DWORD **)(v14 + 8 * v12);
        v18 = v17[8];
        v17[8] = v18 & 0xFFBFFFFF;
        if ( (v18 != 0) != ((v18 & 0xFFBFFFFF) != 0) || !*(_QWORD *)v17 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v26 = v18 & 0xFFBFFFFF;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v18,
              *(_QWORD *)v26);
          }
          *(_BYTE *)(*(_QWORD *)v17 + 5216LL) = 1;
          if ( (unsigned __int8)byte_1C00F5443 >= 4u )
          {
            v25 = *(__int64 **)(v14 + 8 * v12);
            v22 = *v25;
            v23 = *(unsigned __int16 **)(v25[10] + 24);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v24 = 24;
LABEL_43:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v23,
                0x1Cu,
                v24,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                v23,
                v22);
            }
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v14 + 8 * v12),
                  BindingDisabled,
                  Reason_IncompatibleWithNotification)
             && (unsigned __int8)byte_1C00F5443 >= 4u )
      {
        v21 = *(__int64 **)(v14 + 8 * v12);
        v22 = *v21;
        v23 = *(unsigned __int16 **)(v21[10] + 24);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = 23;
          goto LABEL_43;
        }
      }
      v13 = *((_DWORD *)this + 1253);
    }
    ++v12;
  }
}
