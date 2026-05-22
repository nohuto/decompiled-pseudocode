/*
 * XREFs of ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B2720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EE878 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ @ 0x1801934A0 (-GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ.c)
 *     ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x1801B259C (-GetContainerGuidFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B331C (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801D2828 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotkeyContextualProcessor::OnInput(
        HotKeyProcessor **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  GUID v7; // xmm6
  int v8; // ecx
  __int64 *v9; // rbx
  int v10; // eax
  int v11; // eax
  unsigned __int16 UnhandedVirtualKey; // ax
  unsigned __int64 v13; // r9
  bool v14; // r11
  int v15; // eax
  HotKeyProcessor *v16; // rcx
  int v17; // eax
  int Source; // [rsp+28h] [rbp-69h]
  int Sourcea; // [rsp+28h] [rbp-69h]
  unsigned int v21; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v22; // [rsp+5Ch] [rbp-35h] BYREF
  __int64 v23; // [rsp+60h] [rbp-31h] BYREF
  __int64 v24[2]; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID v25; // [rsp+78h] [rbp-19h] BYREF
  std::_Ref_count_base *v26[2]; // [rsp+88h] [rbp-9h] BYREF
  GUID v27; // [rsp+98h] [rbp+7h]
  char v28; // [rsp+A8h] [rbp+17h]
  int v29; // [rsp+ACh] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  *((_DWORD *)a4 + 2) = (*((_DWORD *)a3 + 26) != 3) + 3;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    *(_OWORD *)v26 = 0LL;
    v7 = GUID_NULL;
    v27 = GUID_NULL;
    v28 = 0;
    v29 = 0;
    if ( *((_WORD *)a2 + 30) > 6u || (v8 = 118, !_bittest(&v8, *((unsigned __int16 *)a2 + 30))) )
    {
      if ( *((_WORD *)a2 + 30) != 231 )
      {
        v22 = 0;
        v21 = 0;
        v25 = GUID_NULL;
        v23 = 0LL;
        v9 = (__int64 *)((char *)a3 + 16);
        if ( *((_QWORD *)a3 + 2)
          && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3 + 2,
                    &v23) >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 32LL))(v23, &v22);
          if ( v10 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x9E,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotk"
                   "eycontextualprocessor.cpp",
              (const char *)(unsigned int)v10,
              Source);
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 40LL))(v23, &v21);
          if ( v11 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x9F,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotk"
                   "eycontextualprocessor.cpp",
              (const char *)(unsigned int)v11,
              Source);
          v24[0] = *v9;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v24);
          GetContainerGuidFromInputTarget(v24, &v25);
          v7 = v25;
        }
        UnhandedVirtualKey = KeyboardInputInfo::GetUnhandedVirtualKey(a2);
        v25 = v7;
        v15 = HotKeyProcessor::DetectAndProcessHotKey(
                this[5],
                UnhandedVirtualKey,
                v14,
                v13,
                (unsigned __int8 *)a2 + 96,
                v22,
                v21,
                &v25,
                (struct HotKeyDetectionResult *)v26);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xAD,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkey"
                 "contextualprocessor.cpp",
            (const char *)(unsigned int)v15,
            Sourcea);
        if ( v29 )
        {
          v16 = this[4];
          if ( v16 )
            (*(void (__fastcall **)(HotKeyProcessor *))(*(_QWORD *)v16 + 40LL))(v16);
        }
        v25 = v7;
        v17 = VirtualHotKeyTracker::OnInput(this[6], a2, &v25, (const struct HotKeyDetectionResult *)v26);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xB8,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkey"
                 "contextualprocessor.cpp",
            (const char *)(unsigned int)v17,
            Sourcea);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
        if ( v28 )
          *((_DWORD *)a4 + 2) = 3;
      }
    }
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
  }
  return 0LL;
}
