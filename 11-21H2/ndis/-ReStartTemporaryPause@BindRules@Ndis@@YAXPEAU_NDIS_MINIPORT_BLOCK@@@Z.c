/*
 * XREFs of ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109920
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReStartTemporaryPause(Ndis::BindRules *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // rbp
  unsigned __int16 *v3; // rbx
  unsigned __int64 i; // rsi
  __int64 v6; // r15
  _DWORD *v7; // r14
  int v8; // r8d
  __int64 v9; // rbp
  unsigned __int64 j; // rsi
  __int64 v11; // r15
  _DWORD *v12; // r14
  int v13; // r8d
  int v14; // r8d
  unsigned int v15; // edx
  int v16; // edx
  bool v17; // cf
  char v18[8]; // [rsp+30h] [rbp-E8h]
  char v19[160]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 1257);
  v3 = 0LL;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1257) )
LABEL_32:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 629);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( !v7[10] )
    {
      v8 = v7[9];
      v7[9] = v8 & 0xFFFFFFDF;
      if ( (v8 != 0) != ((v8 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v7 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v8 & 0xFFFFFFDF;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v8,
            *(_QWORD *)v18);
        }
        *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
        memset(v19, 0, sizeof(v19));
        if ( (unsigned __int8)byte_1C00EC66B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v19);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              0x1Cu,
              0xCu,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *(unsigned __int16 **)&v19[8],
              *(_QWORD *)v19);
        }
      }
    }
  }
  v9 = *((unsigned int *)this + 1253);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1253) )
      goto LABEL_32;
    v11 = *((_QWORD *)this + 627);
    v12 = *(_DWORD **)(v11 + 8 * j);
    if ( !v12[10] )
    {
      v13 = v12[9];
      v12[9] = v13 & 0xFFFFFFDF;
      if ( (v13 != 0) != ((v13 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v12 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v13 & 0xFFFFFFDF;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v13,
            *(_QWORD *)v18);
        }
        v17 = (unsigned __int8)byte_1C00EC66B < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5216LL) = 1;
        if ( !v17 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 24LL),
            0x1Cu,
            0xDu,
            (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
  }
  if ( !*((_DWORD *)this + 1270) )
  {
    v14 = *((_DWORD *)this + 1269);
    v15 = v14 & 0xFFFFFFDF;
    *((_DWORD *)this + 1269) = v14 & 0xFFFFFFDF;
    if ( (v14 != 0) != ((v14 & 0xFFFFFFDF) != 0) || !*((_QWORD *)this + 630) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v18 = v14 & 0xFFFFFFDF;
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v14,
          *(_QWORD *)v18);
      }
      v17 = (unsigned __int8)byte_1C00EC66B < 4u;
      *(_BYTE *)(*((_QWORD *)this + 630) + 5216LL) = 1;
      if ( !v17 )
      {
        if ( this )
          v3 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v15,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
            v3,
            this);
      }
    }
  }
}
