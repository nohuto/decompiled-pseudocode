/*
 * XREFs of ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B9030
 * Callers:
 *     ?SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B66B0 (-SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT.c)
 * Callees:
 *     ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@00@Z @ 0x1800B8BE8 (-StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemet.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BAEA4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800BB0EC (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@@Z @ 0x1800D63BC (-check_hresult@winrt@@YA-AUhresult@1@U21@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2b1190aa71c35694843c2dd3124163c4___ @ 0x1801E6630 (Windows--Internal--ComTaskPool--QueueTask__lambda_2b1190aa71c35694843c2dd3124163c4___.c)
 *     _lambda_2b1190aa71c35694843c2dd3124163c4_::_lambda_2b1190aa71c35694843c2dd3124163c4_ @ 0x1801E7ED8 (_lambda_2b1190aa71c35694843c2dd3124163c4_--_lambda_2b1190aa71c35694843c2dd3124163c4_.c)
 *     _lambda_2b1190aa71c35694843c2dd3124163c4_::__lambda_2b1190aa71c35694843c2dd3124163c4_ @ 0x1801E8610 (_lambda_2b1190aa71c35694843c2dd3124163c4_--__lambda_2b1190aa71c35694843c2dd3124163c4_.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(
        __int64 a1,
        __int64 a2,
        const struct tagRECT *a3,
        __int64 a4)
{
  int v4; // esi
  struct tagRECT *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT si128; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[40]; // [rsp+60h] [rbp-A0h] BYREF
  int v17[92]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = a4;
  *(_QWORD *)v13 = a2;
  v7 = *(struct tagRECT **)a4;
  v8 = (__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 4;
  if ( v8 <= 1 )
  {
    si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    if ( !v8 )
    {
      v15 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      goto LABEL_6;
    }
  }
  else
  {
    si128 = v7[1];
  }
  v15 = *v7;
LABEL_6:
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v16,
    "UndockedSearchAppExperienceManager_SetWindowRgn");
  v16[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v16,
    a3,
    &v15,
    &si128);
  v9 = lambda_2b1190aa71c35694843c2dd3124163c4_::_lambda_2b1190aa71c35694843c2dd3124163c4_(
         (int)v17,
         (int)v13,
         (int)a3,
         v4,
         (struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v16);
  v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_2b1190aa71c35694843c2dd3124163c4___(
          v11,
          v10,
          *(unsigned int *)(a1 + 8),
          v9);
  winrt::check_hresult(v13, v12);
  lambda_2b1190aa71c35694843c2dd3124163c4_::__lambda_2b1190aa71c35694843c2dd3124163c4_(v17);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v16);
}
