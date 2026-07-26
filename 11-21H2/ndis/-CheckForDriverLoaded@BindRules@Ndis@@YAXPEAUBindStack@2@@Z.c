/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0109738
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForDriverLoaded(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  unsigned __int64 i; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // edx
  int v8; // r8d
  __int64 v9; // r14
  unsigned __int64 j; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // edx
  bool v15; // cf
  int v16; // edx
  int v17; // edx
  __int64 *v18; // rax
  __int64 v19; // rcx
  unsigned __int16 *v20; // rdx
  unsigned __int16 v21; // r9
  __int64 *v22; // rax
  char v23[8]; // [rsp+30h] [rbp-188h]
  __int64 v24[20]; // [rsp+40h] [rbp-178h] BYREF
  char v25[160]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_48:
      __fastfail(5u);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( **(_BYTE **)(v6 + 80) )
    {
      v8 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v8 & 0xFFFFFFFD;
      if ( (v8 != 0) != ((v8 & 0xFFFFFFFD) != 0) || !*(_QWORD *)v6 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v23 = v8 & 0xFFFFFFFD;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v8,
            *(_QWORD *)v23);
        }
        *(_BYTE *)(*(_QWORD *)v6 + 5216LL) = 1;
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
              0xFu,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              (unsigned __int16 *)v24[1],
              v24[0]);
        }
      }
    }
    else
    {
      v7 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v7 | 2;
      if ( !v7 || !*(_QWORD *)v6 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v23 = v7 | 2;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v7,
            *(_QWORD *)v23);
        }
        *(_BYTE *)(*(_QWORD *)v6 + 5216LL) = 1;
        memset(v25, 0, sizeof(v25));
        if ( (unsigned __int8)byte_1C00EC66B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v25);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v17,
              0x1Cu,
              0x10u,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *(unsigned __int16 **)&v25[8],
              *(_QWORD *)v25);
        }
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_48;
    v11 = *((_QWORD *)this + 1);
    v12 = *(_QWORD *)(v11 + 8 * j);
    if ( **(_BYTE **)(v12 + 80) )
    {
      v13 = *(_DWORD *)(v12 + 32);
      *(_DWORD *)(v12 + 32) = v13 & 0xFFFFFFFD;
      if ( (v13 != 0) != ((v13 & 0xFFFFFFFD) != 0) || !*(_QWORD *)v12 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v23 = v13 & 0xFFFFFFFD;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v13,
            *(_QWORD *)v23);
        }
        v15 = (unsigned __int8)byte_1C00EC66B < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5216LL) = 1;
        if ( !v15 )
        {
          v18 = *(__int64 **)(v11 + 8 * j);
          v19 = *v18;
          v20 = *(unsigned __int16 **)(v18[10] + 24);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v21 = 17;
LABEL_47:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v20,
              0x1Cu,
              v21,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              v20,
              v19);
            continue;
          }
        }
      }
    }
    else
    {
      v14 = *(_DWORD *)(v12 + 32);
      *(_DWORD *)(v12 + 32) = v14 | 2;
      if ( !v14 || !*(_QWORD *)v12 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v23 = v14 | 2;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v23);
        }
        v15 = (unsigned __int8)byte_1C00EC66B < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5216LL) = 1;
        if ( !v15 )
        {
          v22 = *(__int64 **)(v11 + 8 * j);
          v19 = *v22;
          v20 = *(unsigned __int16 **)(v22[10] + 24);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v21 = 18;
            goto LABEL_47;
          }
        }
      }
    }
  }
}
