/*
 * XREFs of ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x1801722CC
 * Callers:
 *     ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJPEAPEAVIInputHostLayoutChangesHandler@Shell@Internal@Windows@@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP87@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP87@EAAJ24@_E@Z @ 0x180172164 (--$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800B52B4 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@X@?$function@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_8d135f07ec1e4c768c6672246a6f5092_@@@Z @ 0x1801723EC (--$-4V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@X@-$function@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MO.c)
 *     ??$?4V_lambda_f168e09ea7893a980aca54fc3927844e_@@X@?$function@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_f168e09ea7893a980aca54fc3927844e_@@@Z @ 0x180172460 (--$-4V_lambda_f168e09ea7893a980aca54fc3927844e_@@X@-$function@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4I.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::IInputHostLayoutChangesHandler::RuntimeClassInitialize<UndockedSearchAppExperienceManager>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4)
{
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h]
  __int128 v15; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+28h] BYREF

  v17 = 0LL;
  v12 = &v17;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v12);
  v9 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(a2, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\Handlers.h",
      (const char *)(unsigned int)v9);
  }
  else
  {
    if ( *(_QWORD *)a3 )
    {
      v13 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v14 = a2;
      v15 = *a3;
      wistd::function<long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::operator=<_lambda_f168e09ea7893a980aca54fc3927844e_,void>(
        a1 + 40,
        &v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    }
    if ( *(_QWORD *)a4 )
    {
      v13 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v14 = a2;
      v15 = *a4;
      wistd::function<long (HWND__ *,enum IHM_DISPLAY_MODE)>::operator=<_lambda_8d135f07ec1e4c768c6672246a6f5092_,void>(
        a1 + 160,
        &v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    }
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  return v10;
}
