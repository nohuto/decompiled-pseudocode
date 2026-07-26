/*
 * XREFs of ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C01150E8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114348 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062EAC (WPP_RECORDER_SF_LL_ea_1C0062EAC.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1C00B3458 (WPP_RECORDER_SF__guid_D_ea_1C00B3458.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115960 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AAA8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  char v3; // r12
  enum BINDING_ENABLED_OR_DISABLED v4; // r15d
  unsigned __int64 i; // rdi
  __int64 v7; // rsi
  _DWORD *v8; // rbx
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned __int64 j; // rbx
  __int64 v15; // rsi
  _DWORD *v16; // rdi
  int v17; // r8d
  _DWORD *v18; // rdi
  int v19; // r8d
  int v20; // edx
  int v21; // edx
  int v22; // edx
  bool v23; // cf
  __int64 *v24; // rax
  __int64 v25; // rcx
  unsigned __int16 *v26; // rdx
  unsigned __int16 v27; // r9
  __int64 *v28; // rax
  __int64 *v29; // rax
  int v30; // [rsp+28h] [rbp-E0h]
  char v31[8]; // [rsp+38h] [rbp-D0h]
  __int64 v32[20]; // [rsp+48h] [rbp-C0h] BYREF
  char v33[160]; // [rsp+E8h] [rbp-20h] BYREF
  char v34[160]; // [rsp+188h] [rbp+80h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = (char)a2;
  v4 = BindingEnabled;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_72:
      __fastfail(5u);
    v7 = *((_QWORD *)this + 3);
    v8 = *(_DWORD **)(v7 + 8 * i);
    if ( v8[13] || v8[7] )
    {
      if ( v3 )
      {
        if ( v4 )
        {
          if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v7 + 8 * i), v4, Reason_MissingOptionalFilter) )
          {
            memset(v33, 0, sizeof(v33));
            if ( (unsigned __int8)byte_1C00F5443 >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * i),
                (struct NDIS_PNPTRACE_LOCALS *)v33);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v21,
                  0x1Cu,
                  0x2Au,
                  (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                  *(unsigned __int16 **)&v33[8],
                  *(_QWORD *)v33);
            }
          }
        }
        else
        {
          v10 = v8[8];
          v8[8] = v10 & 0xFFFFFFBF;
          if ( (v10 != 0) != ((v10 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v8 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              *(_DWORD *)v31 = v10 & 0xFFFFFFBF;
              WPP_RECORDER_SF_LL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                v10,
                *(_QWORD *)v31);
            }
            *(_BYTE *)(*(_QWORD *)v8 + 5216LL) = 1;
            memset(v32, 0, sizeof(v32));
            if ( (unsigned __int8)byte_1C00F5443 >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * i),
                (struct NDIS_PNPTRACE_LOCALS *)v32);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v20,
                  0x1Cu,
                  0x29u,
                  (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                  (unsigned __int16 *)v32[1],
                  v32[0]);
            }
          }
        }
        v11 = *(_QWORD *)(v7 + 8 * i);
        v12 = *(_QWORD *)(v11 + 80);
        if ( (*(_DWORD *)(v12 + 40) & 0x11) == 1 && !*(_QWORD *)(v12 + 56) )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            WPP_RECORDER_SF__guid_D(*((_QWORD *)WPP_GLOBAL_Control + 8), v12 + 24, v11, 0x2Cu, v30, v12 + 24);
          }
          v4 = BindingDisabled;
        }
      }
      else if ( v4 == BindingEnabled )
      {
        v9 = v8[8];
        v8[8] = v9 & 0xFFFFFFBF;
        if ( (v9 != 0) != ((v9 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v8 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v9);
          }
          *(_BYTE *)(*(_QWORD *)v8 + 5216LL) = 1;
          memset(v34, 0, sizeof(v34));
          if ( (unsigned __int8)byte_1C00F5443 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v34);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)&v31[4] = *(_DWORD *)&v34[4];
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v22,
                0x1Cu,
                0x2Bu,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                *(unsigned __int16 **)&v34[8]);
            }
          }
        }
      }
    }
  }
  v13 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v13; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_72;
    v15 = *((_QWORD *)this + 1);
    if ( v3 )
    {
      v18 = *(_DWORD **)(v15 + 8 * j);
      if ( v4 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v15 + 8 * j), v4, Reason_MissingOptionalFilter)
          && (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          v28 = *(__int64 **)(v15 + 8 * j);
          v25 = *v28;
          v26 = *(unsigned __int16 **)(v28[10] + 24);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v27 = 46;
            goto LABEL_70;
          }
        }
      }
      else
      {
        v19 = v18[8];
        v18[8] = v19 & 0xFFFFFFBF;
        if ( (v19 != 0) != ((v19 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v18 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v31 = v19 & 0xFFFFFFBF;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v19,
              *(_QWORD *)v31);
          }
          v23 = (unsigned __int8)byte_1C00F5443 < 4u;
          *(_BYTE *)(*(_QWORD *)v18 + 5216LL) = 1;
          if ( !v23 )
          {
            v24 = *(__int64 **)(v15 + 8 * j);
            v25 = *v24;
            v26 = *(unsigned __int16 **)(v24[10] + 24);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v27 = 45;
LABEL_70:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v26,
                0x1Cu,
                v27,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                v26,
                v25);
              continue;
            }
          }
        }
      }
    }
    else if ( v4 == BindingEnabled )
    {
      v16 = *(_DWORD **)(v15 + 8 * j);
      v17 = v16[8];
      v16[8] = v17 & 0xFFFFFFBF;
      if ( (v17 != 0) != ((v17 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v16 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v31 = v17 & 0xFFFFFFBF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v17,
            *(_QWORD *)v31);
        }
        v23 = (unsigned __int8)byte_1C00F5443 < 4u;
        *(_BYTE *)(*(_QWORD *)v16 + 5216LL) = 1;
        if ( !v23 )
        {
          v29 = *(__int64 **)(v15 + 8 * j);
          v25 = *v29;
          v26 = *(unsigned __int16 **)(v29[10] + 24);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v27 = 47;
            goto LABEL_70;
          }
        }
      }
    }
  }
}
