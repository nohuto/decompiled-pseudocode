/*
 * XREFs of Ndis::BindRegistry::UpdateFiltersInner @ 0x1C011EECC
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C011EECC (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0120EA8 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0113794 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C011EB60 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C011EECC (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C011F2B0 (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AAA8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

bool __fastcall Ndis::BindRegistry::UpdateFiltersInner(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned int **a3,
        _QWORD *a4,
        char a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r12
  unsigned int **v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned int *v12; // rcx
  unsigned __int64 v13; // rax
  struct NDIS_BIND_FILTER_LINK **v14; // r8
  struct NDIS_BIND_FILTER_LINK *v15; // rcx
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // r10
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r14
  unsigned int *v19; // rax
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *v22; // rdx
  unsigned int *v23; // r13
  _QWORD *v24; // rax
  unsigned __int64 v25; // r14
  unsigned int *v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v29; // rax
  unsigned int *v30; // rax
  __int64 v31; // rdx
  unsigned int *v33; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+50h] [rbp-B0h]
  unsigned int *i; // [rsp+58h] [rbp-A8h]
  unsigned int **v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-88h]
  unsigned __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+A0h] [rbp-60h]
  unsigned int *v43; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v47; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v48; // [rsp+E0h] [rbp-20h]
  _QWORD *v49; // [rsp+E8h] [rbp-18h]
  _QWORD v50[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v51[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v52[4]; // [rsp+130h] [rbp+30h] BYREF
  char v53[160]; // [rsp+150h] [rbp+50h] BYREF

  v6 = (unsigned __int64)a3[1];
  v7 = a3;
  v8 = (unsigned __int64)a3[2];
  v9 = a2;
  *a4 = 0LL;
  v10 = v6;
  v11 = *(_QWORD *)(a2 + 8);
  v49 = a4;
  v36 = a3;
  v34 = v11;
  v42 = v8;
  if ( v6 < v8 )
  {
    v12 = *a3;
    for ( i = *a3; ; v12 = i )
    {
      v13 = v12[1];
      v47 = v11;
      if ( v10 >= v13 )
LABEL_34:
        __fastfail(5u);
      v14 = (struct NDIS_BIND_FILTER_LINK **)(*((_QWORD *)v12 + 1) + 8 * v10);
      v15 = *v14;
      if ( *v14 )
      {
        p = v15->BindDriver._p;
        if ( ((p->_t.FilterBindFlags & 0xC) != 0) == a5 )
          break;
      }
LABEL_14:
      if ( ++v10 >= v42 )
      {
        v7 = v36;
        goto LABEL_17;
      }
    }
    v17 = *(_QWORD *)(v9 + 16);
    v18 = v11;
    v48 = v17;
    if ( v11 >= v17 )
    {
LABEL_11:
      v23 = *(unsigned int **)v9;
      if ( !Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(a1, *(unsigned int **)v9, v11, v14) )
        return 0;
      v24 = v49;
      ++v11;
      v25 = v48 + 1;
      *(_QWORD *)(v9 + 16) = v48 + 1;
      ++*v24;
      if ( !a5 )
        goto LABEL_13;
      v41 = 0LL;
      v43 = i;
      v38 = v34;
      v44 = v6;
      v45 = v10;
      v37 = v23;
      v39 = v11;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               (_DWORD)a1,
                               (unsigned int)&v37,
                               (unsigned int)&v43,
                               (unsigned int)&v41,
                               0,
                               a6) )
        return 0;
      v11 += v41;
      v29 = v25 + v41;
    }
    else
    {
      v19 = *(unsigned int **)v9;
      v33 = *(unsigned int **)v9;
      v20 = *(unsigned int *)(*(_QWORD *)v9 + 4LL);
      while ( 1 )
      {
        if ( v18 >= v20 )
          goto LABEL_34;
        v46 = *((_QWORD *)v19 + 1);
        v21 = *(_QWORD *)(v46 + 8 * v18);
        v22 = *(KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder **)(v21 + 80);
        if ( ((v22->_t.FilterBindFlags & 0xC) != 0) == a5 && p == v22 && v15->FilterIndex == *(_DWORD *)(v21 + 88) )
          break;
        if ( ++v18 >= v17 )
          goto LABEL_11;
        v19 = v33;
      }
      if ( Ndis::BindState::SetSource(*(Ndis::BindState **)(v46 + 8 * v18), AddBindSource, Registry) )
      {
        memset(v53, 0, sizeof(v53));
        if ( (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v46 + 8 * v18),
            (struct NDIS_PNPTRACE_LOCALS *)v53);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v31,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
              *(unsigned __int16 **)&v53[8],
              *(_QWORD *)v53);
        }
      }
      LOBYTE(v31) = a5;
      v50[0] = v33;
      v50[1] = v11;
      v50[2] = v18;
      Ndis::BindRegistry::RemoveBindingsInSpan(v50, v31, a6);
      v11 = v18 + 1;
      if ( !a5 )
        goto LABEL_13;
      v40 = 0LL;
      v51[0] = i;
      v52[0] = v33;
      v52[1] = v47;
      v51[1] = v6;
      v51[2] = v10;
      v52[2] = v18 + 1;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               (_DWORD)a1,
                               (unsigned int)v52,
                               (unsigned int)v51,
                               (unsigned int)&v40,
                               0,
                               a6) )
        return 0;
      v11 += v40;
      v29 = v17 + v40;
    }
    *(_QWORD *)(v9 + 16) = v29;
LABEL_13:
    v6 = v10;
    v34 = v11;
    goto LABEL_14;
  }
LABEL_17:
  v26 = *(unsigned int **)v9;
  v27 = *(_QWORD *)(v9 + 16);
  LOBYTE(a2) = a5;
  v39 = v27;
  v37 = v26;
  v38 = v11;
  Ndis::BindRegistry::RemoveBindingsInSpan(&v37, a2, a6);
  if ( !a5 )
    return 1;
  v30 = *v7;
  v36 = 0LL;
  v37 = v30;
  v39 = v42;
  v38 = v6;
  v43 = v26;
  v44 = v11;
  v45 = v27;
  return (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                            (_DWORD)a1,
                            (unsigned int)&v43,
                            (unsigned int)&v37,
                            (unsigned int)&v36,
                            0,
                            a6) != 0;
}
