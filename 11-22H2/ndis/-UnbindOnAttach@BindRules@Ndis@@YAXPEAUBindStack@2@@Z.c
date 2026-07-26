/*
 * XREFs of ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C01154C4
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

void __fastcall Ndis::BindRules::UnbindOnAttach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  enum BINDING_ENABLED_OR_DISABLED v4; // r15d
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  int v8; // r8d
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 j; // rbx
  __int64 v13; // rsi
  _DWORD *v14; // rdi
  int v15; // r8d
  bool v16; // cf
  int v17; // edx
  int v18; // edx
  __int64 *v19; // rax
  __int64 v20; // rcx
  unsigned __int16 *v21; // rdx
  unsigned __int16 v22; // r9
  __int64 *v23; // rax
  int v24; // [rsp+20h] [rbp-198h]
  char v25[8]; // [rsp+30h] [rbp-188h]
  __int64 v26[20]; // [rsp+40h] [rbp-178h] BYREF
  char v27[160]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v4 = BindingEnabled;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_49:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      if ( v4 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v6 + 8 * i), v4, Reason_UnbindOnAttach) )
        {
          memset(v27, 0, sizeof(v27));
          if ( (unsigned __int8)byte_1C00F5443 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v27);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v18,
                0x1Cu,
                0x31u,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                *(unsigned __int16 **)&v27[8],
                *(_QWORD *)v27);
          }
        }
      }
      else
      {
        v8 = v7[8];
        v7[8] = v8 & 0xFFFFFDFF;
        if ( (v8 != 0) != ((v8 & 0xFFFFFDFF) != 0) || !*(_QWORD *)v7 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v25 = v8 & 0xFFFFFDFF;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v8,
              *(_QWORD *)v25);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
          memset(v26, 0, sizeof(v26));
          if ( (unsigned __int8)byte_1C00F5443 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v26);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v17,
                0x1Cu,
                0x30u,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                (unsigned __int16 *)v26[1],
                v26[0]);
          }
        }
      }
      v9 = *(_QWORD *)(v6 + 8 * i);
      v10 = *(_QWORD *)(v9 + 80);
      if ( (*(_DWORD *)(v10 + 40) & 4) != 0 && !*(_DWORD *)(v9 + 32) && !*(_BYTE *)(v9 + 9) && !*(_DWORD *)(v9 + 52) )
      {
        v4 = BindingDisabled;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF__guid_D(*((_QWORD *)WPP_GLOBAL_Control + 8), v10 + 24, v9, 0x32u, v24, v10 + 24);
        }
      }
    }
  }
  v11 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v11; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_49;
    v13 = *((_QWORD *)this + 1);
    v14 = *(_DWORD **)(v13 + 8 * j);
    if ( v4 )
    {
      if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v13 + 8 * j), v4, Reason_UnbindOnAttach)
        && (unsigned __int8)byte_1C00F5443 >= 4u )
      {
        v23 = *(__int64 **)(v13 + 8 * j);
        v20 = *v23;
        v21 = *(unsigned __int16 **)(v23[10] + 24);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = 52;
          goto LABEL_48;
        }
      }
    }
    else
    {
      v15 = v14[8];
      v14[8] = v15 & 0xFFFFFDFF;
      if ( (v15 != 0) != ((v15 & 0xFFFFFDFF) != 0) || !*(_QWORD *)v14 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v25 = v15 & 0xFFFFFDFF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v25);
        }
        v16 = (unsigned __int8)byte_1C00F5443 < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5216LL) = 1;
        if ( !v16 )
        {
          v19 = *(__int64 **)(v13 + 8 * j);
          v20 = *v19;
          v21 = *(unsigned __int16 **)(v19[10] + 24);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v22 = 51;
LABEL_48:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v21,
              0x1Cu,
              v22,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              v21,
              v20);
            continue;
          }
        }
      }
    }
  }
}
