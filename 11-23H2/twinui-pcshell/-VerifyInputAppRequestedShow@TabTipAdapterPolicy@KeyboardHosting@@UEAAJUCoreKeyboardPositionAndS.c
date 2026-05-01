/*
 * XREFs of ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18014AB40 (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18017B820 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1801C7464 (_o_ceilf_0.c)
 *     floorf @ 0x1801C7470 (floorf.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802DE46E (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ShouldLoadLastFloatingPosition @ 0x1802DE9A2 (ShouldLoadLastFloatingPosition.c)
 *     ShouldSaveLastFloatingPosition @ 0x1802DE9C4 (ShouldSaveLastFloatingPosition.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x18050F9F0 (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ??$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAI1@Z @ 0x180530F24 (--$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0.c)
 *     ??$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x180530FC8 (--$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180531918 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@I.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180531D94 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1805321EC (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180533814 (-IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPo.c)
 *     ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180533914 (-IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKe.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180534758 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1805350D8 (-UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPosit.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __m128 *a6,
        _BYTE *a7)
{
  int updated; // ebx
  __int64 v10; // rdx
  __m128i *v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int128 v15; // xmm6
  __int128 v16; // xmm5
  __int128 v17; // xmm4
  __int128 v18; // xmm3
  __int128 v19; // xmm2
  _OWORD *v20; // rax
  char v21; // cl
  int v22; // eax
  char v23; // bl
  int v24; // r13d
  __m128 v25; // xmm3
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm9_4
  float v29; // xmm10_4
  __m128i v30; // xmm6
  __int64 v31; // rdx
  unsigned int v32; // r9d
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // eax
  unsigned int v36; // r9d
  __int64 v37; // rcx
  unsigned int v38; // r9d
  int v39; // eax
  unsigned int v40; // edi
  __m128 v41; // xmm0
  int v42; // [rsp+38h] [rbp-D0h]
  unsigned int v43; // [rsp+68h] [rbp-A0h] BYREF
  char X; // [rsp+70h] [rbp-98h] BYREF
  __m128 X_8; // [rsp+78h] [rbp-90h] BYREF
  char v46[8]; // [rsp+88h] [rbp-80h] BYREF
  __m128 v47; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v48[2]; // [rsp+A0h] [rbp-68h] BYREF
  __m128 *v49; // [rsp+B0h] [rbp-58h]
  _BYTE v50[68]; // [rsp+B8h] [rbp-50h] BYREF
  __m128i v51; // [rsp+108h] [rbp+0h]
  __m128i v52; // [rsp+118h] [rbp+10h] BYREF
  __m128i v53; // [rsp+128h] [rbp+20h]
  __m128i v54; // [rsp+138h] [rbp+30h]
  __m128i v55; // [rsp+148h] [rbp+40h]
  __m128 v56; // [rsp+158h] [rbp+50h] BYREF
  __int128 v57; // [rsp+168h] [rbp+60h] BYREF
  __int128 v58; // [rsp+178h] [rbp+70h]
  __int128 v59; // [rsp+188h] [rbp+80h]
  __int128 v60; // [rsp+198h] [rbp+90h]
  __int128 v61; // [rsp+1A8h] [rbp+A0h]
  _OWORD v62[5]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v43 = a3;
  v49 = a6;
  if ( KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToCaretShowRequest(
         (RTL_SRWLOCK *)a1,
         a3,
         (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2)
    || KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToFocusedElementShowRequest(
         (KeyboardHosting::TabTipAdapterPolicy *)a1,
         (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
  {
    *a7 = 0;
  }
  else if ( KeyboardHosting::TabTipAdapterPolicy::CheckRequest(
              (KeyboardHosting::TabTipAdapterPolicy *)a1,
              (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
  {
    updated = KeyboardHosting::TabTipAdapterPolicy::UpdateCurrentMonitorIfNecessary(
                (KeyboardHosting::TabTipAdapterPolicy *)a1,
                (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2);
    if ( updated < 0 )
    {
      v10 = 623LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    v48[0] = *(_QWORD *)(a1 + 312);
    v12 = (__m128i *)(a1 + 392);
    X_8.m128_u64[0] = *(_QWORD *)(a1 + 392);
    v47.m128_u64[0] = *(_QWORD *)(a1 + 232);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
      (unsigned __int64 *)&v47,
      (struct Windows::Foundation::Rect *)(a1 + 240),
      (unsigned int *)(a1 + 272),
      (unsigned __int64 *)&X_8,
      (struct Windows::Foundation::Rect *)(a1 + 400),
      (unsigned int *)(a1 + 432),
      v48,
      (struct Windows::Foundation::Rect *)(a1 + 320),
      (unsigned int *)(a1 + 352),
      (bool *)(a1 + 596),
      (bool *)(a1 + 544));
    v13 = *(_BYTE *)(a1 + 596) != 0 ? 312LL : 232LL;
    v62[0] = *(_OWORD *)(v13 + a1);
    v62[1] = *(_OWORD *)(v13 + a1 + 16);
    v62[2] = *(_OWORD *)(v13 + a1 + 32);
    v62[3] = *(_OWORD *)(v13 + a1 + 48);
    v62[4] = *(_OWORD *)(v13 + a1 + 64);
    v14 = -(__int64)(*(_BYTE *)(a1 + 544) != 0) & 0xFFFFFFFFFFFFFF60uLL;
    v57 = *(_OWORD *)(v14 + a1 + 392);
    v15 = v57;
    v58 = *(_OWORD *)(v14 + a1 + 408);
    v16 = v58;
    v59 = *(_OWORD *)(v14 + a1 + 424);
    v17 = v59;
    v60 = *(_OWORD *)(v14 + a1 + 440);
    v18 = v60;
    v61 = *(_OWORD *)(v14 + a1 + 456);
    v19 = v61;
    v20 = *(_OWORD **)(a1 + 224);
    v20[1] = *(_OWORD *)(v13 + a1);
    v20[2] = *(_OWORD *)(v13 + a1 + 16);
    v20[3] = *(_OWORD *)(v13 + a1 + 32);
    v20[4] = *(_OWORD *)(v13 + a1 + 48);
    v20[5] = *(_OWORD *)(v13 + a1 + 64);
    v20[6] = v15;
    v20[7] = v16;
    v20[8] = v17;
    v20[9] = v18;
    v20[10] = v19;
    v20[11] = *(_OWORD *)(a1 + 392);
    v20[12] = *(_OWORD *)(a1 + 408);
    v20[13] = *(_OWORD *)(a1 + 424);
    v20[14] = *(_OWORD *)(a1 + 440);
    v20[15] = *(_OWORD *)(a1 + 456);
    v56 = 0LL;
    if ( !*(_BYTE *)(a1 + 605) || *(_DWORD *)a2 != 2 || (v21 = 1, *(_DWORD *)(a2 + 24) != 6) )
      v21 = 0;
    v22 = *(_DWORD *)(a1 + 208);
    *(_OWORD *)v50 = *(_OWORD *)a2;
    *(_OWORD *)&v50[16] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v50[32] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v50[48] = *(_OWORD *)(a2 + 48);
    LOBYTE(v42) = v21;
    updated = KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
                *(_QWORD *)(a1 + 224),
                a1 + 144,
                a1 + 176,
                a1 + 192,
                v50,
                v22,
                v42,
                &v56,
                &X,
                v46);
    if ( updated < 0 )
    {
      v10 = 655LL;
      goto LABEL_6;
    }
    v23 = *(_BYTE *)(a2 + 40);
    if ( v23 || *(_BYTE *)(a2 + 41) )
    {
      v12 = (__m128i *)&v57;
      if ( *(_DWORD *)a2 == 1 )
        v12 = (__m128i *)v62;
    }
    v24 = *(_DWORD *)a2;
    v51 = *v12;
    v52 = v12[1];
    v53 = v12[2];
    v54 = v12[3];
    v55 = v12[4];
    v25 = (__m128)COERCE_UNSIGNED_INT((float)_mm_cvtsi128_si32(_mm_srli_si128(v53, 8)));
    v47 = _mm_div_ps(_mm_mul_ps(v56, _mm_shuffle_ps(v25, v25, 0)), (__m128)_xmm);
    X_8 = v47;
    if ( v24 != 1 || v23 || *(_BYTE *)(a2 + 41) || (*(_BYTE *)(a2 + 24) & 2) == 0 )
    {
      v29 = X_8.m128_f32[3];
      v28 = X_8.m128_f32[2];
      v27 = X_8.m128_f32[1];
      v26 = X_8.m128_f32[0];
    }
    else
    {
      v26 = floorf(X_8.m128_f32[0]);
      X_8.m128_f32[0] = v26;
      v27 = o_ceilf_0(X_8.m128_f32[1]);
      X_8.m128_f32[1] = v27;
      v28 = o_ceilf_0(X_8.m128_f32[2]);
      X_8.m128_f32[2] = v28;
      v29 = o_ceilf_0(X_8.m128_f32[3]);
      X_8.m128_f32[3] = v29;
    }
    *a7 = 1;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 536));
    v47.m128_u64[0] = a1 + 536;
    v50[0] = 1;
    *(_OWORD *)&v50[4] = *(_OWORD *)a2;
    *(_OWORD *)&v50[20] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v50[36] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v50[52] = *(_OWORD *)(a2 + 48);
    v30 = *(__m128i *)&v50[52];
    v31 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
                       (float *)(a1 + 472),
                       (__int64)v48,
                       (unsigned __int8 *)&v43);
    *(_OWORD *)(v31 + 20) = *(_OWORD *)v50;
    *(_OWORD *)(v31 + 36) = *(_OWORD *)&v50[16];
    *(_OWORD *)(v31 + 52) = *(_OWORD *)&v50[32];
    *(_OWORD *)(v31 + 68) = *(_OWORD *)&v50[48];
    *(_DWORD *)(v31 + 84) = _mm_cvtsi128_si32(_mm_srli_si128(v30, 12));
    if ( a1 != -536 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 536));
    if ( ShouldLoadLastFloatingPosition(a2)
      && (v33 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                             (__int64 **)(a1 + 576),
                             (__int64)&v47,
                             &v43,
                             v32),
          *(float *)(v33 + 32) = v28,
          *(float *)(v33 + 36) = v29,
          KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            v43),
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (__int64 ***)(a1 + 560),
                                  (__int64)&v47,
                                  &v43)
                   + 40LL)) )
    {
      KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (struct Windows::Foundation::Point *)v48,
        v43,
        v34);
      v56.m128_u64[0] = v48[0];
      v56.m128_u64[1] = __PAIR64__(LODWORD(v29), LODWORD(v28));
      KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v56, &v52.m128i_i32[2], &v47);
      if ( v23 )
      {
        v26 = v47.m128_f32[0];
        X_8.m128_i32[0] = v47.m128_i32[0];
      }
      if ( *(_BYTE *)(a2 + 41) )
      {
        v27 = v47.m128_f32[1];
        X_8.m128_i32[1] = v47.m128_i32[1];
      }
    }
    else if ( ShouldSaveLastFloatingPosition(a2) )
    {
      v37 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                         (__int64 **)(a1 + 576),
                         (__int64)&v47,
                         &v43,
                         v36);
      *(float *)(v37 + 32) = v28;
      *(float *)(v37 + 36) = v29;
      v48[0] = __PAIR64__(LODWORD(v27), LODWORD(v26));
      v39 = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
              (KeyboardHosting::TabTipAdapterPolicy *)a1,
              (const struct Windows::Foundation::Point *)v48,
              v43,
              v38);
      v40 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D9,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
          (const char *)(unsigned int)v39);
        return v40;
      }
    }
    if ( v24 == 2 )
    {
      v35 = v43;
      if ( v43 == *(_DWORD *)(a1 + 592) && *(_BYTE *)(a1 + 556) && (v23 || *(_BYTE *)(a2 + 41)) )
      {
        X_8.m128_u64[0] = *(_QWORD *)(a1 + 548);
      }
      else if ( !X )
      {
        *(float *)(a1 + 548) = v26;
        *(float *)(a1 + 552) = v27;
        *(_BYTE *)(a1 + 556) = 1;
        *(_DWORD *)(a1 + 592) = v35;
      }
    }
    v41 = X_8;
    *v49 = X_8;
    *(__m128 *)(a1 + 640) = v41;
  }
  else
  {
    *a7 = 0;
    X_8.m128_i32[0] = *(_DWORD *)(a2 + 24);
    LODWORD(v48[0]) = *(_DWORD *)a2;
    TouchKeyboardExperienceTelemetryLogger::InputAppRequestedShowBadRequest<unsigned int,unsigned int,unsigned int &,unsigned int &>(
      v48,
      (int *)&X_8,
      (int *)(a2 + 8),
      (int *)(a2 + 4));
  }
  return 0LL;
}
