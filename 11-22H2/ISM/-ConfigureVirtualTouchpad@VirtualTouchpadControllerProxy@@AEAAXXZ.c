/*
 * XREFs of ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18015233C
 * Callers:
 *     ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180152C90 (-OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnPrimaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180152FF0 (-OnPrimaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSecondaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180153080 (-OnSecondaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801530A0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSystemContextNotification@VirtualTouchpadControllerProxy@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801532A0 (-OnSystemContextNotification@VirtualTouchpadControllerProxy@@UEAAJPEAV-$variant@Umonostate@std@@.c)
 *     ?OnTypingDefensesEnabledChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801532D0 (-OnTypingDefensesEnabledChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180033488 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18005A9C4 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800A5868 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C9F14 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@PEAVVirtualTouchpadControllerProxy@@$$V@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@PEAX@std@@_N@1@$$QEAPEAVVirtualTouchpadControllerProxy@@@Z @ 0x180151D24 (--$_Try_emplace@PEAVVirtualTouchpadControllerProxy@@$$V@-$_Hash@V-$_Umap_traits@PEAVVirtualTouch.c)
 *     std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___ @ 0x180151EB4 (std--find_if_gsl--details--span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a5339.c)
 *     ??C?$span_iterator@UINPUT_SPACE_REGION@@@details@gsl@@QEBAPEAUINPUT_SPACE_REGION@@XZ @ 0x180152270 (--C-$span_iterator@UINPUT_SPACE_REGION@@@details@gsl@@QEBAPEAUINPUT_SPACE_REGION@@XZ.c)
 *     ?GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x1801529E0 (-GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Interna.c)
 *     ?GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x180152A10 (-GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Inter.c)
 *     ?GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@XZ @ 0x180152A40 (-GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windo.c)
 *     ?GetSizeValid@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x180152A70 (-GetSizeValid@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?GetTypingDefensesEnabled@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x180152AB0 (-GetTypingDefensesEnabled@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?ScreenRectToRelative@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180153938 (-ScreenRectToRelative@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagVIRTUAL_PTP_CONFIG@@AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUPhysicalClickZone@789Windows@@4@Z @ 0x180154A68 (-VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagV.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAVVirtualTouchpadControllerProxy@@@Z @ 0x180155184 (-erase@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V-$_Uhash_compare@P.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(VirtualTouchpadControllerProxy *this)
{
  BamoVirtualTouchpadControllerProxy *v2; // r12
  int *v3; // rdi
  int v4; // r15d
  int v5; // eax
  __int64 v6; // r8
  const char *v7; // r9
  _BYTE *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r14
  float v16; // xmm6_4
  unsigned int v17; // xmm3_4
  unsigned int v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  __m128d v23; // xmm3
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  __m128i *PrimaryClickZone; // rax
  float v29; // xmm1_4
  float v30; // xmm2_4
  __m128i *SecondaryClickZone; // rax
  float v32; // xmm1_4
  float v33; // xmm2_4
  unsigned int *v34; // rsi
  const char *v35; // r9
  __int64 v36; // rcx
  int v37; // r14d
  const struct Windows::UI::Internal::Input::PhysicalClickZone *v38; // r14
  const struct Windows::UI::Internal::Input::PhysicalClickZone *v39; // r15
  const struct Windows::UI::Internal::Input::VirtualTouchpadSize *Size; // rax
  int v41; // [rsp+20h] [rbp-E0h]
  __int128 v42; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v43[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v44[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v45[24]; // [rsp+80h] [rbp-80h] BYREF
  char v46; // [rsp+98h] [rbp-68h]
  _OWORD v47[9]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+130h] [rbp+30h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+140h] [rbp+40h] BYREF
  __m128i v50; // [rsp+150h] [rbp+50h] BYREF
  __int64 v51; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  if ( !BamoVirtualTouchpadControllerProxy::GetSizeValid((VirtualTouchpadControllerProxy *)((char *)this + 8))
    || !*((_BYTE *)this + 208) )
  {
    return;
  }
  memset_0(v47, 0, 0x98uLL);
  v3 = (int *)((char *)this + 252);
  *(_OWORD *)((char *)this + 252) = v47[0];
  *(_OWORD *)((char *)this + 268) = v47[1];
  *(_OWORD *)((char *)this + 284) = v47[2];
  *(_OWORD *)((char *)this + 300) = v47[3];
  *(_OWORD *)((char *)this + 316) = v47[4];
  *(_OWORD *)((char *)this + 332) = v47[5];
  *(_OWORD *)((char *)this + 348) = v47[6];
  *(_OWORD *)((char *)this + 364) = v47[7];
  *(_OWORD *)((char *)this + 380) = v47[8];
  *(_QWORD *)((char *)this + 396) = v48;
  *(_OWORD *)lpCriticalSection = 0LL;
  if ( *((_BYTE *)this + 228) && *((_BYTE *)this + 240) )
  {
    v4 = 1;
    *v3 = 1;
    v46 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 51) + 40LL))(*((_QWORD *)this + 51), v45);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
        (const char *)(unsigned int)v5,
        v41);
    v8 = v45;
    if ( v46 != 1 )
      v8 = 0LL;
    if ( !v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xD7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
        v7);
    if ( *(_DWORD *)v8 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xD8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
        v7);
    v9 = *((_QWORD *)v8 + 1);
    *(_QWORD *)&v42 = *(_QWORD *)((char *)this + 212);
    v10 = *(_QWORD *)(v9 + 16);
    gsl::details::extent_type<-1>::extent_type<-1>(&v50, *(unsigned int *)(v9 + 12), v6, (__int64)v7);
    if ( v50.m128i_i64[0] != -1 && (v10 || !v50.m128i_i64[0]) )
    {
      v15 = v10 + 200 * v50.m128i_i64[0];
      v44[0] = v10;
      v44[1] = v15;
      v44[2] = v15;
      v43[0] = v10;
      v43[1] = v15;
      v43[2] = v10;
      std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___(
        (__int64)&v50,
        v43,
        (__int64)v44,
        (POINT *)&v42);
      if ( *(_OWORD *)&v50 == __PAIR128__(v15, v10) )
      {
        if ( v51 == v15 )
          v4 = 0;
        else
          *(_OWORD *)lpCriticalSection = *(_OWORD *)gsl::details::span_iterator<INPUT_SPACE_REGION>::operator->(
                                                      (unsigned __int64 *)&v50,
                                                      v11,
                                                      v13,
                                                      v14);
        *v3 = v4;
        std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v45);
        goto LABEL_23;
      }
    }
    _o_terminate(v12, v11, v13, v14);
  }
  *v3 = 0;
LABEL_23:
  if ( *v3 )
  {
    if ( !*((_BYTE *)this + 240) || (v16 = *((double *)this + 29), !*((_BYTE *)this + 208)) )
      std::_Throw_bad_optional_access();
    *(float *)&v17 = (float)(HIDWORD(lpCriticalSection[1]) - HIDWORD(lpCriticalSection[0]));
    *(float *)&v18 = (float)(LODWORD(lpCriticalSection[1]) - LODWORD(lpCriticalSection[0]));
    *(float *)lpCriticalSection = (float)SLODWORD(lpCriticalSection[0]);
    *((float *)lpCriticalSection + 1) = (float)SHIDWORD(lpCriticalSection[0]);
    lpCriticalSection[1] = (LPCRITICAL_SECTION)__PAIR64__(v17, v18);
    v50 = *(__m128i *)lpCriticalSection;
    CInputTransform::ScreenRectToRelative(lpCriticalSection, &v50, (char *)this + 144);
    *((_OWORD *)this + 17) = *((_OWORD *)this + 9);
    *((_OWORD *)this + 18) = *((_OWORD *)this + 10);
    *((_OWORD *)this + 19) = *((_OWORD *)this + 11);
    *((_OWORD *)this + 20) = *((_OWORD *)this + 12);
    LODWORD(v42) = (int)*(float *)lpCriticalSection;
    DWORD1(v42) = (int)*((float *)lpCriticalSection + 1);
    v19 = *(float *)&lpCriticalSection[1];
    DWORD2(v42) = (int)(float)(*(float *)&lpCriticalSection[1] + *(float *)lpCriticalSection);
    v20 = *((float *)&lpCriticalSection[1] + 1);
    HIDWORD(v42) = (int)(float)(*((float *)&lpCriticalSection[1] + 1) + *((float *)lpCriticalSection + 1));
    *((_OWORD *)this + 16) = v42;
    v21 = (float)(*(float *)lpCriticalSection - *(float *)lpCriticalSection) * v16;
    v22 = (float)(*((float *)lpCriticalSection + 1) - *((float *)lpCriticalSection + 1)) * v16;
    LODWORD(v42) = (int)v21;
    DWORD1(v42) = (int)v22;
    DWORD2(v42) = (int)(float)((float)(v19 * v16) + v21);
    HIDWORD(v42) = (int)(float)((float)(v20 * v16) + v22);
    *((_OWORD *)this + 21) = v42;
    v23 = *(__m128d *)BamoVirtualTouchpadControllerProxy::GetSize(v2);
    v24 = (float)(0.0 - *(float *)lpCriticalSection) * v16;
    v25 = (float)(0.0 - *((float *)lpCriticalSection + 1)) * v16;
    LODWORD(v42) = (int)v24;
    DWORD1(v42) = (int)v25;
    v26 = v23.m128d_f64[0];
    DWORD2(v42) = (int)(float)((float)(v26 * v16) + v24);
    v27 = _mm_unpackhi_pd(v23, v23).m128d_f64[0];
    HIDWORD(v42) = (int)(float)((float)(v27 * v16) + v25);
    *((_OWORD *)this + 22) = v42;
    *((_DWORD *)this + 92) = BamoVirtualTouchpadControllerProxy::GetTypingDefensesEnabled(v2);
    PrimaryClickZone = (__m128i *)BamoVirtualTouchpadControllerProxy::GetPrimaryClickZone(v2);
    v50 = *PrimaryClickZone;
    LODWORD(v51) = PrimaryClickZone[1].m128i_i32[0];
    if ( (unsigned __int8)_mm_cvtsi128_si32(v50) )
    {
      v29 = (float)(*(float *)&v50.m128i_i32[1] - *(float *)lpCriticalSection) * v16;
      v30 = (float)(*(float *)&v50.m128i_i32[2] - *((float *)lpCriticalSection + 1)) * v16;
      LODWORD(v42) = (int)v29;
      DWORD1(v42) = (int)v30;
      DWORD2(v42) = (int)(float)((float)(*(float *)&v50.m128i_i32[3] * v16) + v29);
      HIDWORD(v42) = (int)(float)((float)(*(float *)&v51 * v16) + v30);
      *(_OWORD *)((char *)this + 372) = v42;
    }
    SecondaryClickZone = (__m128i *)BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone(v2);
    v50 = *SecondaryClickZone;
    LODWORD(v51) = SecondaryClickZone[1].m128i_i32[0];
    if ( (unsigned __int8)_mm_cvtsi128_si32(v50) )
    {
      v32 = (float)(*(float *)&v50.m128i_i32[1] - *(float *)lpCriticalSection) * v16;
      v33 = (float)(*(float *)&v50.m128i_i32[2] - *((float *)lpCriticalSection + 1)) * v16;
      LODWORD(lpCriticalSection[0]) = (int)v32;
      HIDWORD(lpCriticalSection[0]) = (int)v33;
      LODWORD(lpCriticalSection[1]) = (int)(float)((float)(*(float *)&v50.m128i_i32[3] * v16) + v32);
      HIDWORD(lpCriticalSection[1]) = (int)(float)((float)(*(float *)&v51 * v16) + v33);
      *(_OWORD *)((char *)this + 388) = *(_OWORD *)lpCriticalSection;
    }
  }
  v34 = (unsigned int *)((char *)this + 248);
  if ( !(unsigned int)NtMITConfigureVirtualTouchpad((char *)this + 248, (char *)this + 252) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x11A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontr"
               "oller\\server\\virtualtouchpadcontrollerproxy.cpp",
      v35);
  wil::EnterCriticalSection(lpCriticalSection, &VirtualTouchpadControllerProxy::s_lock);
  v37 = *v34;
  *(_QWORD *)&v42 = this;
  if ( v37 )
    *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Try_emplace<VirtualTouchpadControllerProxy *,>(
                             v36,
                             (__int64)&v50,
                             (unsigned __int8 *)&v42)
              + 24LL) = v37;
  else
    std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::erase(
      v36,
      &v42);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  v38 = BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone(v2);
  v39 = BamoVirtualTouchpadControllerProxy::GetPrimaryClickZone(v2);
  Size = BamoVirtualTouchpadControllerProxy::GetSize(v2);
  if ( *((_BYTE *)this + 228) )
    *(_OWORD *)lpCriticalSection = *(_OWORD *)((char *)this + 212);
  else
    *(_OWORD *)lpCriticalSection = 0LL;
  InputTraceLogging::VirtualTouchpad::VirtualTouchpadController(
    *v34,
    lpCriticalSection,
    (char *)this + 252,
    Size,
    v39,
    v38,
    v42);
}
