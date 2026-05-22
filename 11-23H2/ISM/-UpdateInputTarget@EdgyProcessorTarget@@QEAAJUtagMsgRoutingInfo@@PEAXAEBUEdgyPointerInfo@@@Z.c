/*
 * XREFs of ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801CC0D4
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801C8560 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801CB304 (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180023B44 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044CFC (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800FFCE8 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18013F1AC (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  _OWORD *v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  char v8; // r13
  __int64 *v9; // r12
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *InputSiteFromInputSinkHandle; // rax
  __int64 v19; // rcx
  unsigned int v20; // esi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  const char *v25; // r9
  __int64 v26; // [rsp+20h] [rbp-88h] BYREF
  int (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-80h] BYREF
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h]
  __int64 *v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  wil::ResultException *v32; // [rsp+50h] [rbp-58h] BYREF
  __int64 v33; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v31 = a1;
  v33 = a2;
  v29 = a3;
  v8 = 0;
  v9 = (__int64 *)(a1 + 128);
  v30 = (__int64 *)(a1 + 128);
  v10 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 128);
  v27 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( !v10 )
    goto LABEL_9;
  v26 = 0LL;
  v11 = **v10;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v26);
  if ( v11(v27, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v26) >= 0 )
  {
    if ( !v26 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v26);
      return 2147549183LL;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, v6, v5);
    if ( v8 && v5 )
      NtCloseCompositionInputSink(v5, v13, v14, v15);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v26);
  if ( !v8 )
  {
LABEL_9:
    v28 = 0LL;
    v16 = 0LL;
    v27 = 0LL;
    if ( v5 )
    {
      try
      {
        InputSiteManager = ISMStatics::GetInputSiteManager();
        InputSiteFromInputSinkHandle = InputSiteManager::GetInputSiteFromInputSinkHandle(
                                         (__int64)InputSiteManager,
                                         &v26,
                                         v5);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)&v27, (char *)InputSiteFromInputSinkHandle);
        v19 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      catch ( wil::ResultException *v32 )
      {
        v25 = (const char *)*((unsigned int *)v32 + 8);
        LODWORD(v26) = (_DWORD)v25;
        if ( (int)v25 >= 0 )
        {
          v4 = a4;
          v9 = v30;
          v7 = v31;
          LODWORD(v6) = v33;
          v5 = v29;
          goto LABEL_16;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
          v25);
        if ( v27 )
          ((void (*)(void))(*v27)[2])();
        v20 = v26;
LABEL_20:
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v28);
        return v20;
      }
LABEL_16:
      v16 = (__int64)v27;
    }
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v28);
    v27 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v27);
    v21 = DWMInputTarget::Create(v6, (__int64 *)&v27, (__int64)&v28);
    v20 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v21);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      goto LABEL_20;
    }
    NtCloseCompositionInputSink(v5, v22, v23, v24);
    Microsoft::WRL::ComPtr<IMessageSession>::operator=(v9, &v28);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v28);
  }
  *(_DWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 48) = *v4;
  *(_OWORD *)(v7 + 64) = v4[1];
  return 0LL;
}
