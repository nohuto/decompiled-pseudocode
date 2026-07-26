/*
 * XREFs of ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C01091B4
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  __int64 v3; // rbp
  unsigned __int64 i; // rdi
  __int64 v5; // r14
  _DWORD *v6; // rsi
  int v7; // r8d
  __int64 v8; // rbp
  unsigned __int64 j; // rdi
  __int64 v10; // r14
  _DWORD *v11; // rsi
  int v12; // r8d
  bool v13; // cf
  int v14; // edx
  char v15[8]; // [rsp+30h] [rbp-D8h]
  char v16[160]; // [rsp+40h] [rbp-C8h] BYREF

  if ( *((_DWORD *)this + 16) )
  {
    v3 = *((unsigned int *)this + 5);
    for ( i = 0LL; i != v3; ++i )
    {
      if ( i >= *((unsigned int *)this + 5) )
LABEL_29:
        __fastfail(5u);
      v5 = *((_QWORD *)this + 3);
      v6 = *(_DWORD **)(v5 + 8 * i);
      v7 = v6[8];
      v6[8] = v7 & 0xFFFBFFE3;
      if ( (v7 != 0) != ((v7 & 0xFFFBFFE3) != 0) || !*(_QWORD *)v6 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v15 = v7 & 0xFFFBFFE3;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v7,
            *(_QWORD *)v15);
        }
        *(_BYTE *)(*(_QWORD *)v6 + 5216LL) = 1;
        memset(v16, 0, sizeof(v16));
        if ( (unsigned __int8)byte_1C00EC66B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v16);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v14,
              0x1Cu,
              0x19u,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *(unsigned __int16 **)&v16[8],
              *(_QWORD *)v16);
        }
      }
    }
    v8 = *((unsigned int *)this + 1);
    for ( j = 0LL; j != v8; ++j )
    {
      if ( j >= *((unsigned int *)this + 1) )
        goto LABEL_29;
      v10 = *((_QWORD *)this + 1);
      v11 = *(_DWORD **)(v10 + 8 * j);
      v12 = v11[8];
      v11[8] = v12 & 0xFFFBFFE3;
      if ( (v12 != 0) != ((v12 & 0xFFFBFFE3) != 0) || !*(_QWORD *)v11 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v15 = v12 & 0xFFFBFFE3;
          WPP_RECORDER_SF_DD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v12,
            *(_QWORD *)v15);
        }
        v13 = (unsigned __int8)byte_1C00EC66B < 4u;
        *(_BYTE *)(*(_QWORD *)v11 + 5216LL) = 1;
        if ( !v13 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * j) + 80LL) + 24LL),
            0x1Cu,
            0x1Au,
            (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v10 + 8 * j));
      }
    }
  }
}
