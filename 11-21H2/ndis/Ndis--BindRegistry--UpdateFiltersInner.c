/*
 * XREFs of Ndis::BindRegistry::UpdateFiltersInner @ 0x1C010E9C8
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C010E9C8 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112E20 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C01076E0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C010E9C8 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C010EF08 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C01158B0 (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

bool __fastcall Ndis::BindRegistry::UpdateFiltersInner(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        char a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r12
  __int64 *v7; // r13
  unsigned __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // r10
  Ndis::BindState *v18; // rcx
  _DWORD *m_AdditionalContext; // r8
  __int64 v20; // r12
  _QWORD *v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v30; // [rsp+50h] [rbp-B0h]
  __int128 v31; // [rsp+58h] [rbp-A8h]
  __int128 v32; // [rsp+58h] [rbp-A8h]
  __int128 v33; // [rsp+58h] [rbp-A8h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  unsigned __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 *v39; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v44; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  _QWORD *v47; // [rsp+E8h] [rbp-18h]
  __int128 v48; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v49; // [rsp+100h] [rbp+0h]
  __int128 v50; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+120h] [rbp+20h]
  __int128 v52; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v53; // [rsp+140h] [rbp+40h]
  __int128 v54; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v55; // [rsp+160h] [rbp+60h]
  char v56[160]; // [rsp+170h] [rbp+70h] BYREF

  v6 = a3[1];
  v7 = a3;
  v8 = a3[2];
  v9 = (_QWORD *)a2;
  *a4 = 0LL;
  v10 = a1;
  v11 = *(_QWORD *)(a2 + 8);
  v12 = v6;
  v47 = a4;
  v39 = a3;
  v30 = v11;
  v38 = v6;
  v42 = v8;
  if ( v6 < v8 )
  {
    v13 = *a3;
    v28 = *a3;
    while ( 1 )
    {
      if ( v12 >= *(unsigned int *)(v13 + 4) )
LABEL_34:
        __fastfail(5u);
      a2 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * v12);
      if ( !a2 )
        goto LABEL_15;
      if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 80) + 40LL) & 0xC) != 0) == a5 )
        break;
LABEL_14:
      v13 = v28;
LABEL_15:
      if ( ++v12 >= v42 )
      {
        v7 = v39;
        goto LABEL_17;
      }
    }
    v14 = v9[2];
    v15 = v11;
    if ( v11 >= v14 )
    {
LABEL_11:
      v20 = *v9;
      if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(v10, *v9, v11) )
        return 0;
      v21 = v47;
      ++v11;
      v9[2] = v14 + 1;
      ++*v21;
      if ( !a5 )
        goto LABEL_13;
      v41 = 0LL;
      *(_QWORD *)&v34 = v28;
      *((_QWORD *)&v34 + 1) = v38;
      *((_QWORD *)&v31 + 1) = v30;
      v48 = v34;
      v49 = v12;
      *(_QWORD *)&v31 = v20;
      v50 = v31;
      v51 = v11;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               a1,
                               (unsigned int)&v50,
                               (unsigned int)&v48,
                               (unsigned int)&v41,
                               0,
                               a6) )
        return 0;
      v11 += v41;
      v25 = v14 + 1 + v41;
    }
    else
    {
      v16 = *v9;
      v37 = *v9;
      v17 = *(unsigned int *)(*v9 + 4LL);
      while ( 1 )
      {
        if ( v15 >= v17 )
          goto LABEL_34;
        v46 = *(_QWORD *)(v16 + 8);
        v18 = *(Ndis::BindState **)(v46 + 8 * v15);
        m_AdditionalContext = v18[1].m_AdditionalContext;
        if ( ((m_AdditionalContext[10] & 0xC) != 0) == a5
          && *(_DWORD **)(a2 + 80) == m_AdditionalContext
          && *(_DWORD *)(a2 + 88) == v18[1].m_LastErrorCode )
        {
          break;
        }
        if ( ++v15 >= v14 )
          goto LABEL_11;
        v16 = v37;
      }
      if ( Ndis::BindState::SetSource(v18, AddBindSource, Registry) )
      {
        memset(v56, 0, sizeof(v56));
        if ( (unsigned __int8)byte_1C00EC66B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v46 + 8 * v15),
            (struct NDIS_PNPTRACE_LOCALS *)v56);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v27,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
              *(unsigned __int16 **)&v56[8],
              *(_QWORD *)v56);
        }
      }
      LOBYTE(v27) = a5;
      v43 = v37;
      v44 = v11;
      v45 = v15;
      Ndis::BindRegistry::RemoveBindingsInSpan(&v43, v27, a6);
      v11 = v15 + 1;
      if ( !a5 )
        goto LABEL_13;
      v40 = 0LL;
      *(_QWORD *)&v33 = v28;
      *(_QWORD *)&v36 = v37;
      *((_QWORD *)&v36 + 1) = v30;
      *((_QWORD *)&v33 + 1) = v6;
      v52 = v33;
      v53 = v12;
      v54 = v36;
      v55 = v15 + 1;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               a1,
                               (unsigned int)&v54,
                               (unsigned int)&v52,
                               (unsigned int)&v40,
                               0,
                               a6) )
        return 0;
      v11 += v40;
      v25 = v14 + v40;
    }
    v9[2] = v25;
LABEL_13:
    v10 = a1;
    v6 = v12;
    v38 = v12;
    v30 = v11;
    goto LABEL_14;
  }
LABEL_17:
  v22 = *v9;
  v23 = v9[2];
  LOBYTE(a2) = a5;
  v45 = v23;
  v43 = v22;
  v44 = v11;
  Ndis::BindRegistry::RemoveBindingsInSpan(&v43, a2, a6);
  if ( !a5 )
    return 1;
  v26 = *v7;
  v39 = 0LL;
  *(_QWORD *)&v35 = v26;
  v51 = v42;
  *((_QWORD *)&v35 + 1) = v6;
  *(_QWORD *)&v32 = v22;
  *((_QWORD *)&v32 + 1) = v11;
  v50 = v35;
  v48 = v32;
  v49 = v23;
  return (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                            a1,
                            (unsigned int)&v48,
                            (unsigned int)&v50,
                            (unsigned int)&v39,
                            0,
                            a6) != 0;
}
