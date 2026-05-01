/*
 * XREFs of _lambda_7e7f8cd3e685741244f76c8bd4111764_::operator() @ 0x180552DF0
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___::RunTask @ 0x180553100 (CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AltTabInvoked@AEAW4ALT_TAB_VIEW_FLAGS@@@MultitaskingViewTelemetry@@SAXAEAW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x180552C1C (--$AltTabInvoked@AEAW4ALT_TAB_VIEW_FLAGS@@@MultitaskingViewTelemetry@@SAXAEAW4ALT_TAB_VIEW_FLAGS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7e7f8cd3e685741244f76c8bd4111764_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, __int64, GUID *, __int64 *); // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BOOL v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  if ( ((*(_DWORD *)a1 - 40) & 0xFFFFFFF9) != 0 || (v4 = 5, *(_DWORD *)a1 == 46) )
    v4 = 6;
  v15 = 0LL;
  v5 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  if ( v5(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v15) < 0 )
  {
    v9 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    v6 = v9(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v15);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 201LL;
      goto LABEL_13;
    }
    v10 = *(_DWORD *)a1 - 44;
    v11 = v10 <= 1;
    v14 = v10 <= 1;
    if ( v4 == 6 )
    {
      v11 = (unsigned int)v11 | 2;
      v14 = v11;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v15 + 48LL))(
           v15,
           *(_QWORD *)(a1 + 8),
           v11,
           *(_QWORD *)(a1 + 16));
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 213LL;
      goto LABEL_13;
    }
    MultitaskingViewTelemetry::AltTabInvoked<enum ALT_TAB_VIEW_FLAGS &>((unsigned int *)&v14);
LABEL_15:
    v7 = 0;
    goto LABEL_16;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, v4);
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_15;
  v8 = 196LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v6);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  return v7;
}
