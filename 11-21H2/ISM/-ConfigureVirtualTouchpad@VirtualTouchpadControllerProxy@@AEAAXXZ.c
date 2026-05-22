/*
 * XREFs of ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18012992C
 * Callers:
 *     ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A2C0 (-OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnPrimaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A610 (-OnPrimaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSecondaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A6A0 (-OnSecondaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A6C0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSystemContextNotification@VirtualTouchpadControllerProxy@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18012A8C0 (-OnSystemContextNotification@VirtualTouchpadControllerProxy@@UEAAJPEAV-$variant@Umonostate@std@@.c)
 *     ?OnTypingDefensesEnabledChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A8F0 (-OnTypingDefensesEnabledChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007B458 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1734 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800FA2C4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??$_Try_emplace@PEAVVirtualTouchpadControllerProxy@@$$V@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@PEAX@std@@_N@1@$$QEAPEAVVirtualTouchpadControllerProxy@@@Z @ 0x180129314 (--$_Try_emplace@PEAVVirtualTouchpadControllerProxy@@$$V@-$_Hash@V-$_Umap_traits@PEAVVirtualTouch.c)
 *     std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___ @ 0x1801294A4 (std--find_if_gsl--details--span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a5339.c)
 *     ??C?$span_iterator@UINPUT_SPACE_REGION@@@details@gsl@@QEBAPEAUINPUT_SPACE_REGION@@XZ @ 0x180129860 (--C-$span_iterator@UINPUT_SPACE_REGION@@@details@gsl@@QEBAPEAUINPUT_SPACE_REGION@@XZ.c)
 *     ?GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x18012A010 (-GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Interna.c)
 *     ?GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x18012A040 (-GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Inter.c)
 *     ?GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@XZ @ 0x18012A070 (-GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windo.c)
 *     ?GetSizeValid@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x18012A0A0 (-GetSizeValid@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?GetTypingDefensesEnabled@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x18012A0E0 (-GetTypingDefensesEnabled@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?ScreenRectToRelative@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x18012AF50 (-ScreenRectToRelative@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagVIRTUAL_PTP_CONFIG@@AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUPhysicalClickZone@789Windows@@4@Z @ 0x18012C02C (-VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagV.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAVVirtualTouchpadControllerProxy@@@Z @ 0x18012C73C (-erase@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V-$_Uhash_compare@P.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(VirtualTouchpadControllerProxy *this)
{
  BamoVirtualTouchpadControllerProxy *v2; // r12
  int *v3; // rsi
  int v4; // r14d
  int v5; // eax
  __int64 v6; // r8
  const char *v7; // r9
  _BYTE *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r15
  float v17; // xmm6_4
  unsigned int v18; // xmm3_4
  unsigned int v19; // xmm2_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  __m128d v24; // xmm3
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  __m128i *PrimaryClickZone; // rax
  float v30; // xmm1_4
  float v31; // xmm2_4
  __m128i *SecondaryClickZone; // rax
  float v33; // xmm1_4
  float v34; // xmm2_4
  unsigned int *v35; // rdi
  const char *v36; // r9
  __int64 v37; // rcx
  int v38; // r14d
  const struct Windows::UI::Internal::Input::PhysicalClickZone *v39; // r14
  const struct Windows::UI::Internal::Input::PhysicalClickZone *v40; // r15
  const struct Windows::UI::Internal::Input::VirtualTouchpadSize *Size; // rax
  int v42; // [rsp+28h] [rbp-E0h]
  __int128 v43; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int128 v44; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h]
  _QWORD v46[5]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v47[24]; // [rsp+88h] [rbp-80h] BYREF
  char v48; // [rsp+A0h] [rbp-68h]
  _OWORD v49[9]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v50; // [rsp+138h] [rbp+30h]
  __m128i v51; // [rsp+148h] [rbp+40h] BYREF
  __m128i v52; // [rsp+158h] [rbp+50h] BYREF
  __int64 v53; // [rsp+168h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v2 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  if ( !BamoVirtualTouchpadControllerProxy::GetSizeValid((VirtualTouchpadControllerProxy *)((char *)this + 8))
    || !*((_BYTE *)this + 208) )
  {
    return;
  }
  memset_0(v49, 0, 0x98uLL);
  v3 = (int *)((char *)this + 252);
  *(_OWORD *)((char *)this + 252) = v49[0];
  *(_OWORD *)((char *)this + 268) = v49[1];
  *(_OWORD *)((char *)this + 284) = v49[2];
  *(_OWORD *)((char *)this + 300) = v49[3];
  *(_OWORD *)((char *)this + 316) = v49[4];
  *(_OWORD *)((char *)this + 332) = v49[5];
  *(_OWORD *)((char *)this + 348) = v49[6];
  *(_OWORD *)((char *)this + 364) = v49[7];
  *(_OWORD *)((char *)this + 380) = v49[8];
  *(_QWORD *)((char *)this + 396) = v50;
  v51 = 0LL;
  if ( *((_BYTE *)this + 228) && *((_BYTE *)this + 240) )
  {
    v4 = 1;
    *v3 = 1;
    v48 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 51) + 40LL))(*((_QWORD *)this + 51), v47);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
        (const char *)(unsigned int)v5,
        v42);
    v8 = v47;
    if ( v48 != 1 )
      v8 = 0LL;
    if ( !v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        215LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcon"
                 "troller\\server\\virtualtouchpadcontrollerproxy.cpp",
        v7);
    if ( *(_DWORD *)v8 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        216LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcon"
                 "troller\\server\\virtualtouchpadcontrollerproxy.cpp",
        v7);
    v9 = *((_QWORD *)v8 + 1);
    *(_QWORD *)&v43 = *(_QWORD *)((char *)this + 212);
    v10 = *(_QWORD *)(v9 + 16);
    gsl::details::extent_type<-1>::extent_type<-1>(&v52, *(unsigned int *)(v9 + 12), v6, (__int64)v7);
    v15 = v52.m128i_i64[0];
    if ( v52.m128i_i64[0] != -1 && (v10 || !v52.m128i_i64[0]) )
    {
      v16 = v10 + 200 * v52.m128i_i64[0];
      v52.m128i_i64[0] = v10;
      v52.m128i_i64[1] = v10 + 200 * v15;
      v44 = __PAIR128__(v52.m128i_u64[1], v10);
      v45 = v10;
      *(__m128i *)&v46[1] = v52;
      v46[3] = v52.m128i_i64[1];
      v52 = (__m128i)__PAIR128__(v52.m128i_u64[1], v10);
      v53 = v10;
      std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___(
        (__int64)&v44,
        &v52,
        (__int64)&v46[1],
        (POINT *)&v43);
      if ( v44 == __PAIR128__(v16, v10) )
      {
        if ( v45 == v16 )
          v4 = 0;
        else
          v51 = *(__m128i *)gsl::details::span_iterator<INPUT_SPACE_REGION>::operator->(
                              (unsigned __int64 *)&v44,
                              v11,
                              v13,
                              v14);
        *v3 = v4;
        std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v47);
        if ( *((_DWORD *)this + 63) )
        {
          if ( !*((_BYTE *)this + 240) || (v17 = *((double *)this + 29), !*((_BYTE *)this + 208)) )
            std::_Throw_bad_optional_access();
          *(float *)&v18 = (float)(v51.m128i_i32[3] - v51.m128i_i32[1]);
          *(float *)&v19 = (float)(v51.m128i_i32[2] - v51.m128i_i32[0]);
          *(float *)v51.m128i_i32 = (float)v51.m128i_i32[0];
          *(float *)&v51.m128i_i32[1] = (float)v51.m128i_i32[1];
          v51.m128i_i64[1] = __PAIR64__(v18, v19);
          v52 = v51;
          CInputTransform::ScreenRectToRelative(&v51, &v52, (char *)this + 144);
          *((_OWORD *)this + 17) = *((_OWORD *)this + 9);
          *((_OWORD *)this + 18) = *((_OWORD *)this + 10);
          *((_OWORD *)this + 19) = *((_OWORD *)this + 11);
          *((_OWORD *)this + 20) = *((_OWORD *)this + 12);
          LODWORD(v43) = (int)*(float *)v51.m128i_i32;
          DWORD1(v43) = (int)*(float *)&v51.m128i_i32[1];
          v20 = *(float *)&v51.m128i_i32[2];
          DWORD2(v43) = (int)(float)(*(float *)&v51.m128i_i32[2] + *(float *)v51.m128i_i32);
          v21 = *(float *)&v51.m128i_i32[3];
          HIDWORD(v43) = (int)(float)(*(float *)&v51.m128i_i32[3] + *(float *)&v51.m128i_i32[1]);
          *((_OWORD *)this + 16) = v43;
          v22 = (float)(*(float *)v51.m128i_i32 - *(float *)v51.m128i_i32) * v17;
          v23 = (float)(*(float *)&v51.m128i_i32[1] - *(float *)&v51.m128i_i32[1]) * v17;
          LODWORD(v43) = (int)v22;
          DWORD1(v43) = (int)v23;
          DWORD2(v43) = (int)(float)((float)(v20 * v17) + v22);
          HIDWORD(v43) = (int)(float)((float)(v21 * v17) + v23);
          *((_OWORD *)this + 21) = v43;
          v24 = *(__m128d *)BamoVirtualTouchpadControllerProxy::GetSize(v2);
          v25 = (float)(0.0 - *(float *)v51.m128i_i32) * v17;
          v26 = (float)(0.0 - *(float *)&v51.m128i_i32[1]) * v17;
          LODWORD(v43) = (int)v25;
          DWORD1(v43) = (int)v26;
          v27 = v24.m128d_f64[0];
          DWORD2(v43) = (int)(float)((float)(v27 * v17) + v25);
          v28 = _mm_unpackhi_pd(v24, v24).m128d_f64[0];
          HIDWORD(v43) = (int)(float)((float)(v28 * v17) + v26);
          *((_OWORD *)this + 22) = v43;
          *((_DWORD *)this + 92) = BamoVirtualTouchpadControllerProxy::GetTypingDefensesEnabled(v2);
          PrimaryClickZone = (__m128i *)BamoVirtualTouchpadControllerProxy::GetPrimaryClickZone(v2);
          v52 = *PrimaryClickZone;
          LODWORD(v53) = PrimaryClickZone[1].m128i_i32[0];
          if ( (unsigned __int8)_mm_cvtsi128_si32(v52) )
          {
            v30 = (float)(*(float *)&v52.m128i_i32[1] - *(float *)v51.m128i_i32) * v17;
            v31 = (float)(*(float *)&v52.m128i_i32[2] - *(float *)&v51.m128i_i32[1]) * v17;
            LODWORD(v43) = (int)v30;
            DWORD1(v43) = (int)v31;
            DWORD2(v43) = (int)(float)((float)(*(float *)&v52.m128i_i32[3] * v17) + v30);
            HIDWORD(v43) = (int)(float)((float)(*(float *)&v53 * v17) + v31);
            *(_OWORD *)((char *)this + 372) = v43;
          }
          SecondaryClickZone = (__m128i *)BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone(v2);
          v52 = *SecondaryClickZone;
          LODWORD(v53) = SecondaryClickZone[1].m128i_i32[0];
          if ( (unsigned __int8)_mm_cvtsi128_si32(v52) )
          {
            v33 = (float)(*(float *)&v52.m128i_i32[1] - *(float *)v51.m128i_i32) * v17;
            v34 = (float)(*(float *)&v52.m128i_i32[2] - *(float *)&v51.m128i_i32[1]) * v17;
            v51.m128i_i32[0] = (int)v33;
            v51.m128i_i32[1] = (int)v34;
            v51.m128i_i32[2] = (int)(float)((float)(*(float *)&v52.m128i_i32[3] * v17) + v33);
            v51.m128i_i32[3] = (int)(float)((float)(*(float *)&v53 * v17) + v34);
            *(__m128i *)((char *)this + 388) = v51;
          }
        }
        goto LABEL_30;
      }
    }
    _o_terminate(v12, v11, v13, v14);
  }
  *v3 = 0;
LABEL_30:
  v35 = (unsigned int *)((char *)this + 248);
  if ( !(unsigned int)NtMITConfigureVirtualTouchpad((char *)this + 248, (char *)this + 252) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x11A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontr"
               "oller\\server\\virtualtouchpadcontrollerproxy.cpp",
      v36);
  EnterCriticalSection(&VirtualTouchpadControllerProxy::s_lock);
  v51.m128i_i64[0] = (__int64)&VirtualTouchpadControllerProxy::s_lock;
  v38 = *v35;
  *(_QWORD *)&v43 = this;
  if ( v38 )
    *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Try_emplace<VirtualTouchpadControllerProxy *,>(
                             v37,
                             (__int64)&v52,
                             (unsigned __int8 *)&v43)
              + 24LL) = v38;
  else
    std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::erase(
      v37,
      &v43);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v51);
  v39 = BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone(v2);
  v40 = BamoVirtualTouchpadControllerProxy::GetPrimaryClickZone(v2);
  Size = BamoVirtualTouchpadControllerProxy::GetSize(v2);
  if ( *((_BYTE *)this + 228) )
    v51 = *(__m128i *)((char *)this + 212);
  else
    v51 = 0LL;
  InputTraceLogging::VirtualTouchpad::VirtualTouchpadController(*v35, &v51, (char *)this + 252, Size, v40, v39, v43);
}
