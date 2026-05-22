/*
 * XREFs of ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801F24D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyClientRegistration@@$$QEAPEAUIMessageProxy@@AEA_NAEAU_GUID@@@Z @ 0x1801EF140 (--$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@W.c)
 *     ??$_Emplace@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAAPEAU?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@1@QEAU21@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@Z @ 0x1801EFCE0 (--$_Emplace@AEBV-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@-$list@V-$ComPtr@VHotkeyCli.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801F13B8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801F1480 (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotKeyProcessor::RegisterHotKeyClient(__int64 a1, __int64 a2, bool a3, struct _GUID *a4)
{
  int v7; // eax
  int v8; // ebx
  ULONG_PTR v9; // r8
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD, struct IMessageProxy **); // rbx
  int v12; // eax
  int RegisteredClient; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+0h] [rbp-98h] BYREF
  bool v19; // [rsp+30h] [rbp-68h] BYREF
  struct HotkeyClientRegistration *v20; // [rsp+38h] [rbp-60h] BYREF
  struct IMessageProxy *v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-50h] BYREF
  struct IMessageProxy *v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h] BYREF
  int v25; // [rsp+60h] [rbp-38h]
  ULONG_PTR retaddr; // [rsp+98h] [rbp+0h]

  v19 = a3;
  v22 = 0;
  v24 = 0LL;
  v25 = 0;
  v21 = 0LL;
  v20 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**(_QWORD **)(a1 + 360) + 24LL))(
         *(_QWORD *)(a1 + 360),
         &GUID_f17ab79d_12a5_4878_ac23_c0eb1c6e1572,
         &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 129LL;
LABEL_5:
    FailFastWithHR(v8, retaddr, v9);
    goto LABEL_31;
  }
  v10 = *(_QWORD *)(a1 + 360);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IMessageProxy **))(*(_QWORD *)v10 + 48LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
  v8 = v11(v10, a2, v22, &v21);
  if ( ((v8 + 2018375679) & 0xFFFFFFF3) == 0 && v8 != -2018375667 )
  {
    v8 = 0;
    goto LABEL_31;
  }
  if ( v8 < 0 )
  {
    if ( v8 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 150LL;
    goto LABEL_5;
  }
  v12 = (*(__int64 (__fastcall **)(struct IMessageProxy *, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v24);
  v8 = v12;
  if ( v12 < 0 )
  {
    if ( v12 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 156LL;
    goto LABEL_5;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
  RegisteredClient = HotKeyProcessor::FindRegisteredClient(
                       (HotKeyProcessor *)a1,
                       (const struct MessageObjectID *)&v24,
                       &v20);
  v8 = RegisteredClient;
  if ( RegisteredClient < 0 )
  {
    if ( RegisteredClient == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 157LL;
    goto LABEL_5;
  }
  if ( v20 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
    goto LABEL_31;
  }
  v14 = (*(__int64 (__fastcall **)(struct IMessageProxy *, __int64))(*(_QWORD *)v21 + 56LL))(
          v21,
          (a1 + 8) & -(__int64)(a1 != 0));
  v8 = v14;
  if ( v14 < 0 )
  {
    if ( v14 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 165LL;
    goto LABEL_5;
  }
  v23 = v21;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
  v15 = Microsoft::WRL::Details::MakeAndInitialize<HotkeyClientRegistration,HotkeyClientRegistration,IMessageProxy *,bool &,_GUID &>(
          (__int64 *)&v20,
          &v23,
          &v19,
          a4);
  v8 = v15;
  if ( v15 < 0 )
  {
    if ( v15 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 170LL;
    goto LABEL_5;
  }
  try
  {
    std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::_Emplace<Microsoft::WRL::ComPtr<HotkeyClientRegistration> const &>(
      a1 + 24,
      *(_QWORD *)(a1 + 24),
      &v20);
  }
  catch ( std::bad_alloc )
  {
    LODWORD(v23) = -2147024882;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(v16, (__int64)&v18, "HotKeyProcessor::RegisterHotKeyClient", 172LL, 14);
    v8 = (int)v23;
  }
LABEL_31:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v8;
}
