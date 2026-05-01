/*
 * XREFs of ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180152950
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18014AF7C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180531140 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  __m128 v3; // xmm2
  float v7; // xmm1_4
  const struct Windows::Foundation::Rect *v8; // rdx
  float v9; // xmm6_4
  int v10; // edi
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  RECT v19; // xmm1
  int v20; // eax
  LONG v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rdx
  void (*v27)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v28; // rcx
  int v29; // xmm0_4
  int v30; // xmm1_4
  int v31; // xmm0_4
  int v32; // xmm1_4
  WINBOOL fPending; // [rsp+68h] [rbp-A0h] BYREF
  int v35; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v36; // [rsp+70h] [rbp-98h] BYREF
  int v37; // [rsp+74h] [rbp-94h] BYREF
  int v38; // [rsp+78h] [rbp-90h] BYREF
  int v39; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v40; // [rsp+80h] [rbp-88h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-80h] BYREF
  HMONITOR v42; // [rsp+98h] [rbp-70h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-68h]
  __int128 v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+C0h] [rbp-48h]
  __int128 v46; // [rsp+C4h] [rbp-44h]
  __int128 v47; // [rsp+D4h] [rbp-34h]
  RECT rc; // [rsp+E8h] [rbp-20h] BYREF

  v3 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  *a3 = 0;
  v7 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  rc.left = (int)v3.m128_f32[0];
  rc.top = (int)v7;
  rc.right = (int)(float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] + v3.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v3, v3, 255).m128_f32[0] + v7);
  v45 = 100;
  v42 = MonitorFromRect(&rc, 2u);
  v43 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v42);
  v9 = *(float *)a2;
  v10 = v45;
  v11 = *(float *)a2;
  if ( v45 )
  {
    v12 = (float)v45;
    v11 = (float)(v11 * 100.0) / (float)v45;
  }
  else
  {
    v12 = 0.0;
  }
  v13 = *(float *)(a2 + 4);
  *(float *)&rc.left = v11;
  v14 = v13;
  if ( v45 )
    v14 = (float)(v13 * 100.0) / v12;
  v15 = *(float *)(a2 + 8);
  *(float *)&rc.top = v14;
  v16 = v15;
  if ( v45 )
    v16 = (float)(v15 * 100.0) / v12;
  v17 = *(float *)(a2 + 12);
  *(float *)&rc.right = v16;
  v18 = v17;
  if ( v45 )
    v18 = (float)(v17 * 100.0) / v12;
  *(float *)&rc.bottom = v18;
  v19 = rc;
  if ( *(float *)&rc.left != *(float *)(a1 + 176)
    || _mm_shuffle_ps((__m128)rc, (__m128)rc, 85).m128_f32[0] != *(float *)(a1 + 180)
    || _mm_shuffle_ps((__m128)rc, (__m128)rc, 170).m128_f32[0] != *(float *)(a1 + 184)
    || _mm_shuffle_ps((__m128)rc, (__m128)rc, 255).m128_f32[0] != *(float *)(a1 + 188) )
  {
    v20 = DWORD2(v44) - v44;
    *(float *)&v21 = (float)(int)v44;
    *(_BYTE *)(a1 + 556) = 0;
    *(RECT *)(a1 + 176) = v19;
    rc.left = v21;
    *(float *)&rc.right = (float)v20;
    *(float *)&rc.top = (float)SDWORD1(v44);
    *(float *)&rc.bottom = (float)(HIDWORD(v44) - DWORD1(v44));
    if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)a2, v8)
      && (v9 != *(float *)&rc.left
       || v23 != *(float *)&rc.top
       || v22 != *(float *)&rc.right
       || v17 != *(float *)&rc.bottom) )
    {
      *a3 = 3;
    }
  }
  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    *(_QWORD *)&rc.left = &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_18098E9B8;
    qword_18098E9B8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098E9D0 = (__int64)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    rc.right = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&rc, v26, v27);
  }
  v28 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v28 > 5u
    && (*(_BYTE *)(v28 + 16) & 0x10) != 0
    && (*(_QWORD *)(v28 + 24) & 0x10LL) == *(_QWORD *)(v28 + 24) )
  {
    v29 = *(_DWORD *)(a1 + 188);
    v30 = *(_DWORD *)(a1 + 184);
    v35 = *a3;
    v37 = v29;
    v31 = *(_DWORD *)(a1 + 180);
    v38 = v30;
    v32 = *(_DWORD *)(a1 + 176);
    v39 = v31;
    v40 = v32;
    *(_QWORD *)&rc.left = 0x1000000LL;
    v36 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v28,
      (unsigned int)&unk_180864A75,
      v24,
      v25,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&rc);
  }
  return 0LL;
}
