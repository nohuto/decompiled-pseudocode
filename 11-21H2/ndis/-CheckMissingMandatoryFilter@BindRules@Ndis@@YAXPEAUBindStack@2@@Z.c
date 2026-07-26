/*
 * XREFs of ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0108F64
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1C00AD860 (WPP_RECORDER_SF__guid_D_ea_1C00AD860.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingMandatoryFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  int v3; // r15d
  unsigned __int64 i; // rdi
  __int64 v6; // rsi
  _DWORD *v7; // rbx
  int v8; // r8d
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int64 j; // rdi
  __int64 v13; // rsi
  _DWORD *v14; // rbx
  int v15; // r8d
  int v16; // edx
  int v17; // edx
  bool v18; // cf
  int v19; // edx
  int v20; // edx
  __int64 *v21; // rax
  __int64 v22; // rcx
  unsigned __int16 *v23; // rdx
  unsigned __int16 v24; // r9
  __int64 *v25; // rax
  int v26; // [rsp+20h] [rbp-198h]
  char v27[8]; // [rsp+30h] [rbp-188h]
  __int64 v28[20]; // [rsp+40h] [rbp-178h] BYREF
  char v29[160]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_58:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      if ( v3 )
      {
        v17 = v7[8];
        v7[8] = v17 | 0x20;
        if ( !v17 || !*(_QWORD *)v7 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v27 = v17 | 0x20;
            WPP_RECORDER_SF_DD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v17,
              *(_QWORD *)v27);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
          memset(v29, 0, sizeof(v29));
          if ( (unsigned __int8)byte_1C00EC66B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v29);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v20,
                0x1Cu,
                0x1Eu,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                *(unsigned __int16 **)&v29[8],
                *(_QWORD *)v29);
          }
        }
      }
      else
      {
        v8 = v7[8];
        v7[8] = v8 & 0xFFFFFFDF;
        if ( (v8 != 0) != ((v8 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v7 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v27 = v8 & 0xFFFFFFDF;
            WPP_RECORDER_SF_DD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v8,
              *(_QWORD *)v27);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
          memset(v28, 0, sizeof(v28));
          if ( (unsigned __int8)byte_1C00EC66B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v28);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v19,
                0x1Cu,
                0x1Du,
                (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                (unsigned __int16 *)v28[1],
                v28[0]);
          }
        }
      }
      v9 = *(_QWORD *)(v6 + 8 * i);
      v10 = *(_QWORD *)(v9 + 80);
      if ( (*(_DWORD *)(v10 + 40) & 1) == 0 && *(_DWORD *)(v9 + 28) && *(_DWORD *)(v9 + 32) && !*(_BYTE *)(v9 + 8) )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF__guid_D(*((_QWORD *)WPP_GLOBAL_Control + 8), v10 + 24, v9, 0x1Fu, v26, v10 + 24);
        }
        v3 = 1;
      }
    }
  }
  v11 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v11; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_58;
    v13 = *((_QWORD *)this + 1);
    v14 = *(_DWORD **)(v13 + 8 * j);
    if ( v3 )
    {
      v16 = v14[8];
      v14[8] = v16 | 0x20;
      if ( !v16 || !*(_QWORD *)v14 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v27 = v16 | 0x20;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v16,
            *(_QWORD *)v27);
        }
        v18 = (unsigned __int8)byte_1C00EC66B < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5216LL) = 1;
        if ( !v18 )
        {
          v25 = *(__int64 **)(v13 + 8 * j);
          v22 = *v25;
          v23 = *(unsigned __int16 **)(v25[10] + 24);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v24 = 33;
            goto LABEL_57;
          }
        }
      }
    }
    else
    {
      v15 = v14[8];
      v14[8] = v15 & 0xFFFFFFDF;
      if ( (v15 != 0) != ((v15 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v14 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v27 = v15 & 0xFFFFFFDF;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v27);
        }
        v18 = (unsigned __int8)byte_1C00EC66B < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5216LL) = 1;
        if ( !v18 )
        {
          v21 = *(__int64 **)(v13 + 8 * j);
          v22 = *v21;
          v23 = *(unsigned __int16 **)(v21[10] + 24);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v24 = 32;
LABEL_57:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v23,
              0x1Cu,
              v24,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              v23,
              v22);
            continue;
          }
        }
      }
    }
  }
}
