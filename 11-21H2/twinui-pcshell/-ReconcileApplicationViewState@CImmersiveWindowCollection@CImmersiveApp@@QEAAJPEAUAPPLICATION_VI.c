/*
 * XREFs of ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18003B0AC
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180076880 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x180307E60 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewData@CImmersiveWindowCollection@CImmersiveApp@@QEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x18013D88C (-GetViewData@CImmersiveWindowCollection@CImmersiveApp@@QEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  int ViewData; // ebx
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __int64 v8; // rdx
  int v9[7]; // [rsp+20h] [rbp-68h] BYREF
  int v10; // [rsp+3Ch] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  ViewData = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 120LL))(*((_QWORD *)this + 19));
  if ( ViewData < 0 )
  {
    v8 = 7137LL;
  }
  else
  {
    v5 = *(__m128i *)((char *)this + 92);
    v6 = *(__m128i *)((char *)this + 108);
    *(_OWORD *)v9 = *(_OWORD *)((char *)this + 76);
    *((_DWORD *)a2 + 8) = _mm_cvtsi128_si32(v6);
    *((_DWORD *)a2 + 6) = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
    *((_DWORD *)a2 + 4) = _mm_cvtsi128_si32(v5);
    ViewData = CImmersiveApp::CImmersiveWindowCollection::GetViewData(this, (struct IMMAPP_APPLICATION_VIEW_DATA *)v9);
    if ( ViewData >= 0 )
    {
      *((_DWORD *)a2 + 7) = v10;
      return 0LL;
    }
    if ( ViewData == -2147023728 )
      return 0LL;
    v8 = 7157LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)ViewData,
    v9[0]);
  return (unsigned int)ViewData;
}
