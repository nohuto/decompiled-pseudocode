/*
 * XREFs of ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C01145C8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114308 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062ECC (WPP_RECORDER_SF_LL_ea_1C0062ECC.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AA88 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReEnableTemporaryUnbind(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  unsigned int v4; // edx
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // r8d
  int v15; // edx
  bool v16; // cf
  char v17[8]; // [rsp+30h] [rbp-D8h]
  char v18[160]; // [rsp+40h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 5);
  while ( v3 != v2 )
  {
    if ( v3 >= v4 )
LABEL_33:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_QWORD *)(v6 + 8 * v3);
    if ( !*(_BYTE *)(v7 + 9) && !*(_DWORD *)(v7 + 52) )
    {
      v8 = *(_DWORD *)(v7 + 32);
      *(_DWORD *)(v7 + 32) = v8 & 0xFFFFDFFF;
      if ( (v8 != 0) != ((v8 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v7 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v17 = v8 & 0xFFFFDFFF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v8,
            *(_QWORD *)v17);
        }
        *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
        memset(v18, 0, sizeof(v18));
        if ( (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v3),
            (struct NDIS_PNPTRACE_LOCALS *)v18);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              0x1Cu,
              0xAu,
              (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
              *(unsigned __int16 **)&v18[8],
              *(_QWORD *)v18);
        }
      }
      v4 = *((_DWORD *)this + 5);
    }
    ++v3;
  }
  v9 = *((unsigned int *)this + 1);
  v10 = 0LL;
  v11 = *((_DWORD *)this + 1);
  while ( v10 != v9 )
  {
    if ( v10 >= v11 )
      goto LABEL_33;
    v12 = *((_QWORD *)this + 1);
    v13 = *(_QWORD *)(v12 + 8 * v10);
    if ( !*(_BYTE *)(v13 + 9) && !*(_DWORD *)(v13 + 52) )
    {
      v14 = *(_DWORD *)(v13 + 32);
      *(_DWORD *)(v13 + 32) = v14 & 0xFFFFDFFF;
      if ( (v14 != 0) != ((v14 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v13 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v17 = v14 & 0xFFFFDFFF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v17);
        }
        v16 = (unsigned __int8)byte_1C00F5443 < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5216LL) = 1;
        if ( !v16 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v10) + 80LL) + 24LL),
            0x1Cu,
            0xBu,
            (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * v10) + 80LL) + 24LL),
            **(_QWORD **)(v12 + 8 * v10));
      }
      v11 = *((_DWORD *)this + 1);
    }
    ++v10;
  }
}
