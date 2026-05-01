/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180052F2C (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     std::call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___ @ 0x18020CC2C (std--call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802DA566 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x180513280 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18052FAEC (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x18052FE54 (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 *     ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x180530078 (-GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequ.c)
 *     ??$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEAM111AEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1805361EC (--$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElement.c)
 *     ??1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180536828 (--1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     GetWorkAreaRect @ 0x180537300 (GetWorkAreaRect.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x1805373E4 (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 *     ?StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1805374E0 (-StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Foundation@Windows@@_N1@Z @ 0x180537588 (-Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Fo.c)
 *     ?GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18053A188 (-GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18053A1EC (-GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x18053B508 (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        const struct Windows::Foundation::Rect *a2,
        KeyboardHosting *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        bool *a9,
        char *a10)
{
  float v13; // xmm8_4
  float v14; // xmm7_4
  bool v15; // si
  float v16; // xmm9_4
  float v17; // xmm10_4
  bool IsRectNull; // al
  char *v19; // r8
  const char *v20; // r9
  float *v21; // r10
  __m128 v22; // xmm0
  const struct Windows::Foundation::Rect *v23; // rdx
  char v24; // dl
  int ViewRectNearCaret; // eax
  unsigned int v26; // edi
  __int64 result; // rax
  const struct tagRECT *v28; // rdx
  KeyboardHosting::UIAutomationHelpers *v29; // rcx
  int BoundRectForCursorPos; // eax
  const wchar_t *v31; // rcx
  __m128i v32; // xmm6
  const struct Windows::Foundation::Rect *v33; // rdx
  int ViewRectNearFocusedElement; // eax
  unsigned int v35; // edi
  KeyboardHosting::ViewRectProvider *v36; // rcx
  int v37; // r14d
  __int64 v38; // rdx
  __m128i *v39; // rdi
  int ViewRectRelativeToInside; // edi
  __int64 v41; // rdx
  KeyboardHosting::ViewRectProvider *v42; // rcx
  struct tagRECT *v43; // rdi
  struct tagRECT *v44; // rdi
  __int64 v45; // rdx
  __m128i *v46; // rax
  bool v47; // [rsp+40h] [rbp-278h]
  __int128 v48; // [rsp+50h] [rbp-268h] BYREF
  __int128 v49; // [rsp+60h] [rbp-258h] BYREF
  __int128 v50; // [rsp+70h] [rbp-248h]
  __int128 v51; // [rsp+80h] [rbp-238h]
  __int128 v52; // [rsp+90h] [rbp-228h]
  __m128i v53; // [rsp+A0h] [rbp-218h] BYREF
  __int128 v54; // [rsp+B0h] [rbp-208h] BYREF
  struct tagRECT v55; // [rsp+C0h] [rbp-1F8h] BYREF
  __m128i v56; // [rsp+D0h] [rbp-1E8h] BYREF
  _QWORD v57[40]; // [rsp+E0h] [rbp-1D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  *(_QWORD *)&v48 = a9;
  v13 = (float)*(int *)(a5 + 8);
  v14 = (float)*(int *)(a5 + 4);
  *(_DWORD *)a8 = 0;
  *(_DWORD *)(a8 + 4) = 0;
  *(float *)(a8 + 8) = v13;
  *(float *)(a8 + 12) = v14;
  *a9 = 0;
  *a10 = 0;
  v15 = *(_BYTE *)(a5 + 40) || *(_BYTE *)(a5 + 41);
  *(_QWORD *)&v54 = 0LL;
  v16 = *(float *)(a5 + 56);
  *((float *)&v54 + 2) = v16;
  v17 = *(float *)(a5 + 60);
  *((float *)&v54 + 3) = v17;
  IsRectNull = KeyboardHosting::IsRectNull((KeyboardHosting *)(a5 + 48), a2);
  v47 = IsRectNull;
  if ( IsRectNull )
    *((_QWORD *)&v54 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v13));
  try
  {
    switch ( *(_DWORD *)a5 )
    {
      case 1:
        if ( *(_BYTE *)(a5 + 43) )
        {
          v45 = a1 + 16;
          if ( !v15 )
            v45 = a1 + 176;
          v56 = *(__m128i *)GetWorkAreaRect(&v56, v45);
          v49 = *(_OWORD *)a5;
          v50 = *(_OWORD *)(a5 + 16);
          v51 = *(_OWORD *)(a5 + 32);
          v52 = *(_OWORD *)(a5 + 48);
          ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
                                       (__int64)&v49,
                                       (const struct Windows::Foundation::Rect *)&v56);
          if ( ViewRectRelativeToInside >= 0 )
            goto LABEL_30;
          v41 = 65LL;
        }
        else
        {
          if ( v15 )
            v53 = *(__m128i *)(a1 + 24);
          else
            v56 = *(__m128i *)(a1 + 236);
          v46 = &v56;
          if ( v15 )
            v46 = &v53;
          v56 = *v46;
          v49 = *(_OWORD *)a5;
          v50 = *(_OWORD *)(a5 + 16);
          v51 = *(_OWORD *)(a5 + 32);
          v52 = *(_OWORD *)(a5 + 48);
          ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
                                       (__int64)&v49,
                                       (const struct Windows::Foundation::Rect *)&v56);
          if ( ViewRectRelativeToInside >= 0 )
            goto LABEL_13;
          v41 = 70LL;
        }
        break;
      case 2:
        if ( v15 )
          v44 = (struct tagRECT *)(a1 + 24);
        else
          v44 = (struct tagRECT *)(a1 + 184);
        v56 = *(__m128i *)a3;
        v53 = *(__m128i *)a2;
        v55 = *v44;
        v49 = *(_OWORD *)a5;
        v50 = *(_OWORD *)(a5 + 16);
        v51 = *(_OWORD *)(a5 + 32);
        v52 = *(_OWORD *)(a5 + 48);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                     &v49,
                                     (float *)&v55.left,
                                     (float *)v53.m128i_i32,
                                     (float *)v56.m128i_i32,
                                     a7,
                                     (__int64)&v54,
                                     a9,
                                     v19);
        if ( ViewRectRelativeToInside >= 0 )
          goto LABEL_30;
        v41 = 77LL;
        break;
      case 3:
        v56 = *(__m128i *)a3;
        v49 = *(_OWORD *)a5;
        v50 = *(_OWORD *)(a5 + 16);
        v51 = *(_OWORD *)(a5 + 32);
        v52 = *(_OWORD *)(a5 + 48);
        v37 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
                (__int64)&v49,
                (const struct Windows::Foundation::Rect *)&v56);
        if ( v37 < 0 )
        {
          v38 = 83LL;
          goto LABEL_41;
        }
        if ( !KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v42, (struct Windows::Foundation::Rect *)&v54, a2) )
          goto LABEL_30;
        v43 = (struct tagRECT *)(v15 ? a1 + 104 : a1 + 184);
        v56 = *(__m128i *)a3;
        v53 = *(__m128i *)a2;
        v55 = *v43;
        v49 = *(_OWORD *)a5;
        v50 = *(_OWORD *)(a5 + 16);
        v51 = *(_OWORD *)(a5 + 32);
        v52 = *(_OWORD *)(a5 + 48);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                     &v49,
                                     (float *)&v55.left,
                                     (float *)v53.m128i_i32,
                                     (float *)v56.m128i_i32,
                                     a7,
                                     (__int64)&v54,
                                     (bool *)v48,
                                     a10);
        if ( ViewRectRelativeToInside >= 0 )
          goto LABEL_30;
        v41 = 88LL;
        break;
      case 5:
        v53 = *(__m128i *)v20;
        v49 = *(_OWORD *)a5;
        v50 = *(_OWORD *)(a5 + 16);
        v51 = *(_OWORD *)(a5 + 32);
        v52 = *(_OWORD *)(a5 + 48);
        v37 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
                (__int64)&v49,
                (const struct Windows::Foundation::Rect *)&v53);
        if ( v37 < 0 )
        {
          v38 = 94LL;
LABEL_41:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v38,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
            (const char *)(unsigned int)v37);
          return (unsigned int)v37;
        }
        if ( !KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v36, (struct Windows::Foundation::Rect *)&v54, a2) )
          goto LABEL_30;
        v39 = (__m128i *)(v15 ? a1 + 24 : a1 + 184);
        v53 = *(__m128i *)a3;
        v55 = *(struct tagRECT *)a2;
        v56 = *v39;
        v49 = *(_OWORD *)a5;
        v50 = *(_OWORD *)(a5 + 16);
        v51 = *(_OWORD *)(a5 + 32);
        v52 = *(_OWORD *)(a5 + 48);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                     &v49,
                                     (float *)v56.m128i_i32,
                                     (float *)&v55.left,
                                     (float *)v53.m128i_i32,
                                     a7,
                                     (__int64)&v54,
                                     (bool *)v48,
                                     a10);
        if ( ViewRectRelativeToInside >= 0 )
          goto LABEL_30;
        v41 = 99LL;
        break;
      case 6:
        *(_QWORD *)&v48 = a1;
        std::call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___((union _RTL_RUN_ONCE *)(a1 + 272), (__int64)&v48);
        LOBYTE(v23) = KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(*(KeyboardHosting::UIAutomationHelpers **)(a1 + 256));
        if ( KeyboardHosting::IsRectNull(a3, v23) || v24 )
        {
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
            (struct wil::details::IFailureCallback *)v57,
            (__int64)"FocusedElementViewRectCalculation");
          v57[0] = &TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::`vftable';
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::StartActivity((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v57);
          v55 = 0LL;
          if ( (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedText(
                      *(KeyboardHosting::UIAutomationHelpers **)(a1 + 256),
                      &v55) < 0 )
          {
            BoundRectForCursorPos = KeyboardHosting::UIAutomationHelpers::GetBoundRectForCursorPos(v29, &v55);
            v31 = L"CurrentMousePosition";
            if ( BoundRectForCursorPos < 0 )
              v31 = L"InputAppDefault";
            *(_QWORD *)&v48 = v31;
          }
          else
          {
            *(_QWORD *)&v48 = L"UIA";
          }
          v32 = 0LL;
          v53 = 0LL;
          if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v55, v28) )
          {
            *(float *)v53.m128i_i32 = (float)v55.left;
            *(float *)&v53.m128i_i32[1] = (float)v55.top;
            *(float *)&v53.m128i_i32[2] = (float)(v55.right - v55.left);
            *(float *)&v53.m128i_i32[3] = (float)(v55.bottom - v55.top);
            v32 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                     (float *)v56.m128i_i32,
                                                     (float *)v53.m128i_i32,
                                                     *(_DWORD *)(a1 + 216)));
            v53 = v32;
          }
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::TextSelectionBoundingFetched<unsigned short const * &,float &,float &,float &,float &,enum DEVICE_SCALE_FACTOR &>(
            (__int64 *)&v48,
            v53.m128i_i32,
            &v53.m128i_i32[1],
            &v53.m128i_i32[2],
            &v53.m128i_i32[3],
            (int *)(a1 + 216));
          if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v53, v33) )
          {
            v53 = v32;
            v48 = *(_OWORD *)(a1 + 184);
            v49 = *(_OWORD *)a5;
            v50 = *(_OWORD *)(a5 + 16);
            v51 = *(_OWORD *)(a5 + 32);
            v52 = *(_OWORD *)(a5 + 48);
            ViewRectNearFocusedElement = KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(
                                           &v49,
                                           (float *)&v48,
                                           (float *)v53.m128i_i32,
                                           (__int64)&v54,
                                           a9,
                                           a10);
            v35 = ViewRectNearFocusedElement;
            if ( ViewRectNearFocusedElement < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA9,
                (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                (const char *)(unsigned int)ViewRectNearFocusedElement);
              TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v57);
              return v35;
            }
          }
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::Stop(
            (TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v57,
            (const struct Windows::Foundation::Rect *)&v54,
            *a9,
            *a10);
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v57);
        }
        else
        {
          v53 = *(__m128i *)a3;
          v55 = *(struct tagRECT *)a2;
          v48 = *(_OWORD *)((-(__int64)v15 & 0xFFFFFFFFFFFFFF60uLL) + a1 + 184);
          v49 = *(_OWORD *)a5;
          v50 = *(_OWORD *)(a5 + 16);
          v51 = *(_OWORD *)(a5 + 32);
          v52 = *(_OWORD *)(a5 + 48);
          ViewRectNearCaret = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                &v49,
                                (float *)&v48,
                                (float *)&v55.left,
                                (float *)v53.m128i_i32,
                                a7,
                                (__int64)&v54,
                                a9,
                                a10);
          v26 = ViewRectNearCaret;
          if ( ViewRectNearCaret < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7A,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
              (const char *)(unsigned int)ViewRectNearCaret);
            return v26;
          }
        }
LABEL_30:
        v21 = (float *)(a5 + 48);
        goto LABEL_13;
      default:
        v22 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)v15 & 0xFFFFFFFFFFFFFF60uLL) + a1 + 184));
        LODWORD(v54) = v22.m128_i32[0];
        *((float *)&v54 + 1) = (float)((float)(_mm_shuffle_ps(v22, v22, 255).m128_f32[0]
                                             + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
                                     - v14)
                             - (float)*(int *)(a5 + 16);
LABEL_13:
        if ( v47 )
        {
          *(_OWORD *)a8 = v54;
        }
        else
        {
          *(float *)a8 = *(float *)&v54 - *v21;
          *(float *)(a8 + 4) = *((float *)&v54 + 1) - *(float *)(a5 + 52);
          *(float *)(a8 + 8) = (float)(v13 - v16) + *((float *)&v54 + 2);
          *(float *)(a8 + 12) = (float)(v14 - v17) + *((float *)&v54 + 3);
        }
        return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
      (const char *)(unsigned int)ViewRectRelativeToInside);
    result = (unsigned int)ViewRectRelativeToInside;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAF,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                           v20);
  }
  return result;
}
