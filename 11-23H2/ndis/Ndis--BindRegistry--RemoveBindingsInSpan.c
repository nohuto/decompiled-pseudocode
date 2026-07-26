/*
 * XREFs of Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C011F270
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C011EE8C (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0113754 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AA88 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRegistry::RemoveBindingsInSpan(__int64 *a1, char a2, char a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  Ndis::BindState *v8; // rcx
  int v9; // edx
  char v10[160]; // [rsp+40h] [rbp-C8h] BYREF

  if ( (a3 & 1) == 0 )
  {
    v3 = a1[1];
    v5 = a1[2];
    if ( v3 < v5 )
    {
      v6 = *a1;
      do
      {
        if ( v3 >= *(unsigned int *)(v6 + 4) )
          __fastfail(5u);
        v7 = *(_QWORD *)(v6 + 8);
        v8 = *(Ndis::BindState **)(v7 + 8 * v3);
        if ( ((*((_DWORD *)v8[1].m_AdditionalContext + 10) & 0xC) != 0) == a2
          && Ndis::BindState::SetSource(v8, RemoveBindSource, Registry) )
        {
          memset(v10, 0, sizeof(v10));
          if ( (unsigned __int8)byte_1C00F5443 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * v3),
              (struct NDIS_PNPTRACE_LOCALS *)v10);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v9,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
                *(unsigned __int16 **)&v10[8],
                *(_QWORD *)v10);
          }
        }
        ++v3;
      }
      while ( v3 < v5 );
    }
  }
}
