/*
 * XREFs of ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP84@EAAJ24@_E@Z @ 0x18014905C
 * Callers:
 *     ?RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180148F8C (-RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x180149138 (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@S.c)
 *     ??0IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x180149364 (--0IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ @ 0x180161E0C (-InternalRelease@-$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ___MakeAndInitialize_VIInputHostLayoutChangesHandler_Shell_Internal_Windows__V1234_PEAVUndockedSearchAppExperienceManager__P85_EAAJPEAUHWND____PEAUtagRECT__W4IHM_DISPLAY_MODE__11__EP85_EAAJ02__E_Details_WRL_Microsoft__YAJV__ComPtrRef_V__ComPtr_VIInputHostLayoutChangesHandler_Shell_Internal_Windows___WRL_Microsoft___012___QEAPEAVUndockedSearchAppExperienceManager____QEAP84_EAAJPEAUHWND____PEAUtagRECT__W4IHM_DISPLAY_MODE__33__E__QEAP84_EAAJ24__E_Z(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3,
        __int128 *a4)
{
  Windows::Internal::Shell::IInputHostLayoutChangesHandler *v8; // rax
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int64 v13; // rdi
  volatile int *v14; // rdx
  int v15; // esi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(a1);
  *a1 = 0LL;
  v8 = (Windows::Internal::Shell::IInputHostLayoutChangesHandler *)operator new(
                                                                     0x118uLL,
                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = Windows::Internal::Shell::IInputHostLayoutChangesHandler::IInputHostLayoutChangesHandler(v8);
    v10 = *a4;
    v11 = *a2;
    v12 = *a3;
    v21 = v9;
    v13 = v9;
    v19 = v10;
    v20 = v12;
    v15 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, __int128 *))Windows::Internal::Shell::IInputHostLayoutChangesHandler::RuntimeClassInitialize<UndockedSearchAppExperienceManager>)(
            v9,
            v11,
            &v20,
            &v19);
    if ( v15 < 0 )
    {
      Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v21);
    }
    else
    {
      if ( v13 )
      {
        v16 = *(_QWORD *)(v13 + 32);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 32), v16 + 1, v16);
            if ( v17 != v16 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v16 + 16), v14);
      }
LABEL_8:
      *a1 = v13;
      Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v21);
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
