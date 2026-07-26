/*
 * XREFs of ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114B5C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114308 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062ECC (WPP_RECORDER_SF_LL_ea_1C0062ECC.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AA88 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReStartTemporaryPause(Ndis::BindRules *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // rbp
  unsigned __int16 *v3; // rbx
  unsigned __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // r15
  _DWORD *v8; // r14
  int v9; // r8d
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // r15
  _DWORD *v14; // r14
  int v15; // r8d
  int v16; // r8d
  unsigned int v17; // edx
  int v18; // edx
  bool v19; // cf
  char v20[8]; // [rsp+30h] [rbp-E8h]
  char v21[160]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 1257);
  v3 = 0LL;
  v5 = 0LL;
  v6 = *((_DWORD *)this + 1257);
  while ( v5 != v2 )
  {
    if ( v5 >= v6 )
LABEL_34:
      __fastfail(5u);
    v7 = *((_QWORD *)this + 629);
    v8 = *(_DWORD **)(v7 + 8 * v5);
    if ( !v8[10] )
    {
      v9 = v8[9];
      v8[9] = v9 & 0xFFFFFFDF;
      if ( (v9 != 0) != ((v9 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v8 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v20 = v9 & 0xFFFFFFDF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v9,
            *(_QWORD *)v20);
        }
        *(_BYTE *)(*(_QWORD *)v8 + 5216LL) = 1;
        memset(v21, 0, sizeof(v21));
        if ( (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * v5),
            (struct NDIS_PNPTRACE_LOCALS *)v21);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
              0x1Cu,
              0xCu,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *(unsigned __int16 **)&v21[8],
              *(_QWORD *)v21);
        }
      }
      v6 = *((_DWORD *)this + 1257);
    }
    ++v5;
  }
  v10 = *((unsigned int *)this + 1253);
  v11 = 0LL;
  v12 = *((_DWORD *)this + 1253);
  while ( v11 != v10 )
  {
    if ( v11 >= v12 )
      goto LABEL_34;
    v13 = *((_QWORD *)this + 627);
    v14 = *(_DWORD **)(v13 + 8 * v11);
    if ( !v14[10] )
    {
      v15 = v14[9];
      v14[9] = v15 & 0xFFFFFFDF;
      if ( (v15 != 0) != ((v15 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v14 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v20 = v15 & 0xFFFFFFDF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v20);
        }
        v19 = (unsigned __int8)byte_1C00F5443 < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5216LL) = 1;
        if ( !v19 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * v11) + 80LL) + 24LL),
            0x1Cu,
            0xDu,
            (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * v11) + 80LL) + 24LL),
            **(_QWORD **)(v13 + 8 * v11));
      }
      v12 = *((_DWORD *)this + 1253);
    }
    ++v11;
  }
  if ( !*((_DWORD *)this + 1270) )
  {
    v16 = *((_DWORD *)this + 1269);
    v17 = v16 & 0xFFFFFFDF;
    *((_DWORD *)this + 1269) = v16 & 0xFFFFFFDF;
    if ( (v16 != 0) != ((v16 & 0xFFFFFFDF) != 0) || !*((_QWORD *)this + 630) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v20 = v16 & 0xFFFFFFDF;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v16,
          *(_QWORD *)v20);
      }
      v19 = (unsigned __int8)byte_1C00F5443 < 4u;
      *(_BYTE *)(*((_QWORD *)this + 630) + 5216LL) = 1;
      if ( !v19 )
      {
        if ( this )
          v3 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
            v3,
            this);
      }
    }
  }
}
