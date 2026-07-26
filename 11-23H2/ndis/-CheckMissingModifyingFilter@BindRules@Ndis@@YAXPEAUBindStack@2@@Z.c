/*
 * XREFs of ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C01144A0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114308 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062ECC (WPP_RECORDER_SF_LL_ea_1C0062ECC.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AA88 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingModifyingFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r15
  BOOL v3; // esi
  unsigned __int64 i; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // edx
  int v10; // edx
  int v11; // edx
  char v12[8]; // [rsp+30h] [rbp-188h]
  __int64 v13[20]; // [rsp+40h] [rbp-178h] BYREF
  char v14[160]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_QWORD *)(v6 + 8 * i);
    if ( *(_DWORD *)(v7 + 52) || *(_DWORD *)(v7 + 28) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 80) + 40LL) & 2) != 0 )
      {
        if ( v3 )
        {
          v9 = *(_DWORD *)(v7 + 32);
          *(_DWORD *)(v7 + 32) = v9 | 0x80;
          if ( !v9 || !*(_QWORD *)v7 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              *(_DWORD *)v12 = v9 | 0x80;
              WPP_RECORDER_SF_LL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                v9,
                *(_QWORD *)v12);
            }
            *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
            memset(v14, 0, sizeof(v14));
            if ( (unsigned __int8)byte_1C00F5443 >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
                (struct NDIS_PNPTRACE_LOCALS *)v14);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v11,
                  0x1Cu,
                  0x1Cu,
                  (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                  *(unsigned __int16 **)&v14[8],
                  *(_QWORD *)v14);
            }
          }
        }
        else
        {
          v8 = *(_DWORD *)(v7 + 32);
          *(_DWORD *)(v7 + 32) = v8 & 0xFFFFFF7F;
          if ( (v8 != 0) != ((v8 & 0xFFFFFF7F) != 0) || !*(_QWORD *)v7 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              *(_DWORD *)v12 = v8 & 0xFFFFFF7F;
              WPP_RECORDER_SF_LL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                v8,
                *(_QWORD *)v12);
            }
            *(_BYTE *)(*(_QWORD *)v7 + 5216LL) = 1;
            memset(v13, 0, sizeof(v13));
            if ( (unsigned __int8)byte_1C00F5443 >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
                (struct NDIS_PNPTRACE_LOCALS *)v13);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v10,
                  0x1Cu,
                  0x1Bu,
                  (struct _GUID *)&WPP_06130e0e9ce93e3f61209ea4309c1b81_Traceguids,
                  (unsigned __int16 *)v13[1],
                  v13[0]);
            }
          }
        }
      }
      else
      {
        v3 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * i) + 32LL) != 0;
      }
    }
  }
}
