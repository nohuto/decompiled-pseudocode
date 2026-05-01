/*
 * XREFs of ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x180149138
 * Callers:
 *     ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP84@EAAJ24@_E@Z @ 0x18014905C (--$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x18006C088 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v11; // rbx
  __int128 v12; // xmm6
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int128 v15; // xmm6
  __int64 v16; // rcx
  __int64 *v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+38h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v23; // [rsp+88h] [rbp+28h] BYREF

  v23 = 0LL;
  v18 = &v23;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v18);
  v9 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(a2, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\Handlers.h",
      (const char *)(unsigned int)v9);
  }
  else
  {
    if ( *(_QWORD *)a3 )
    {
      v11 = v23;
      v19 = v23;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      v20 = a2;
      v12 = *a3;
      v21 = *a3;
      v13 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 152) = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
      *(_QWORD *)(a1 + 48) = &wistd::__function::__func<_lambda_f168e09ea7893a980aca54fc3927844e_,long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::`vftable';
      *(_QWORD *)(a1 + 56) = 0LL;
      if ( (__int64 *)(a1 + 56) != &v19 )
      {
        *(_QWORD *)(a1 + 56) = v11;
        v19 = 0LL;
      }
      *(_QWORD *)(a1 + 64) = a2;
      *(_OWORD *)(a1 + 72) = v12;
      *(_QWORD *)(a1 + 152) = a1 + 48;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    }
    if ( *(_QWORD *)a4 )
    {
      v14 = v23;
      v19 = v23;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      v20 = a2;
      v15 = *a4;
      v21 = *a4;
      v16 = *(_QWORD *)(a1 + 272);
      *(_QWORD *)(a1 + 272) = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
      *(_QWORD *)(a1 + 168) = &wistd::__function::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>::`vftable';
      *(_QWORD *)(a1 + 176) = 0LL;
      if ( (__int64 *)(a1 + 176) != &v19 )
      {
        *(_QWORD *)(a1 + 176) = v14;
        v19 = 0LL;
      }
      *(_QWORD *)(a1 + 184) = a2;
      *(_OWORD *)(a1 + 192) = v15;
      *(_QWORD *)(a1 + 272) = a1 + 168;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    }
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  return v10;
}
