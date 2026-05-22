/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x180108C38
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800234F0 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800033B8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x1800375A8 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x18006809C (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800CB1BC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180106270 (--$find@X@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDev.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x180107EA0 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x180108348 (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x180108710 (-IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x18010976C (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180109B50 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x1801C0ED0 (-GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Win32kInterop::ProcessInputMessage(
        Win32kInterop *this,
        const struct Win32kInterop::InputMessageContext *a2,
        const struct _InputMessageNotification *a3,
        char a4)
{
  unsigned int v8; // esi
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // r9
  _DWORD *v12; // rdi
  char *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  char v21; // al
  int v22; // edx
  __int16 v23; // cx
  int v24; // edx
  _WORD *v25; // r8
  __int64 v26; // rax
  __int16 v27; // ax
  int v28; // [rsp+28h] [rbp-E0h]
  char *v29; // [rsp+38h] [rbp-D0h] BYREF
  KeyboardModifierState *v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  void *v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+90h] [rbp-78h] BYREF
  __int128 v37; // [rsp+98h] [rbp-70h]
  __int64 *v38; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall ***v39)(); // [rsp+C8h] [rbp-40h]
  __int64 (__fastcall **v40)(); // [rsp+D0h] [rbp-38h] BYREF
  __int128 v41; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall ***v42)(); // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]
  int v44; // [rsp+150h] [rbp+48h] BYREF
  int v45; // [rsp+154h] [rbp+4Ch]

  if ( *(_DWORD *)a2 )
    return;
  v34 = *((_QWORD *)a2 + 1);
  v8 = *((_DWORD *)a3 + 38);
  if ( !v8 )
    v8 = -1;
  v44 = v8;
  InputETW::Win32kInterop::ReceivedInputMessage(v8);
  InputTraceLogging::ISM::ReceiveMouseInput(a3);
  if ( v8 != -1 && !Win32kInterop::IsDeviceAttached(this, v8, 1) )
  {
    InputTraceLogging::ISM::DropMouseInput(a3);
    v44 = 1;
    v45 = 0;
    NtMITPostMouseInputMessage(&v34, 1LL, 0LL, &v44);
    return;
  }
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)&v35, 0x1D0uLL, v9, v10);
  v12 = v35;
  v29 = (char *)v35;
  *(_DWORD *)v35 = 2;
  *((_DWORD *)v29 + 1) = v8;
  *((_DWORD *)v29 + 2) = *((_DWORD *)a3 + 34);
  *((_QWORD *)v29 + 2) = *((_QWORD *)a3 + 18);
  *((_QWORD *)v29 + 38) = v34;
  v29[312] = a4;
  if ( *((_DWORD *)a2 + 1) == 1 )
    v29[314] = 1;
  *((_DWORD *)v29 + 79) = 1;
  v13 = v29;
  *(_OWORD *)(v29 + 236) = *(_OWORD *)((char *)a3 + 168);
  *(_OWORD *)(v13 + 252) = *(_OWORD *)((char *)a3 + 184);
  *(_OWORD *)(v13 + 268) = *(_OWORD *)((char *)a3 + 200);
  *(_OWORD *)(v13 + 284) = *(_OWORD *)((char *)a3 + 216);
  *((_QWORD *)v29 + 8) = *((_QWORD *)a3 + 3);
  *((_DWORD *)v29 + 18) = *((_DWORD *)a3 + 4) & 1;
  if ( (*((_BYTE *)a3 + 232) & 1) != 0 )
  {
    *((_DWORD *)v29 + 19) = 1;
    *((_DWORD *)v29 + 20) = 100;
    *((_DWORD *)v29 + 21) = 100;
  }
  v28 = (_DWORD)v29 + 56;
  LOBYTE(v11) = 1;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 54) + 72LL))(
          *((_QWORD *)this + 54),
          v8,
          1LL,
          v11);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x489,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v14,
      v28);
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v30);
  v15 = KeyboardModifierState::Create(&v30);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v15,
      v28);
  KeyboardModifierState::GetCurrentKeyboardModifierState(v30, (unsigned int *)v29 + 58);
  v12[81] = 1;
  v12[83] = 2;
  v16 = *((__int16 *)a3 + 64);
  v12[92] = v16;
  v17 = *((__int16 *)a3 + 65);
  v12[93] = v17;
  v12[88] = v16;
  v12[89] = v17;
  v18 = *((_DWORD *)a3 + 40);
  v12[94] = v18;
  v19 = *((_DWORD *)a3 + 41);
  v12[95] = v19;
  v12[90] = v18;
  v12[91] = v19;
  v12[80] = 4;
  v12[96] = *((_DWORD *)v29 + 2);
  *((_QWORD *)v12 + 50) = *((_QWORD *)v29 + 2);
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::find<void>(
    (_QWORD *)this + 8,
    &v32,
    (const unsigned __int8 *)&v44);
  if ( (_QWORD)v32 == *((_QWORD *)this + 9) || *(_DWORD *)(*(_QWORD *)(v32 + 24) + 4LL) == 2 )
    v20 = *((unsigned int *)v29 + 1);
  else
    v20 = -1LL;
  *((_QWORD *)v12 + 42) = v20;
  v21 = 0;
  v22 = 2;
  if ( *((_QWORD *)a3 + 15) )
  {
    v23 = *((_WORD *)a3 + 60);
    if ( (v23 & 1) != 0 )
    {
      v22 = 18;
      v12[83] = 18;
      v21 = 1;
    }
    if ( (v23 & 2) != 0 )
    {
      v22 |= 0x20u;
      v12[83] = v22;
      v21 = 1;
    }
    if ( (v23 & 0x10) != 0 )
    {
      v22 |= 0x40u;
      v12[83] = v22;
      v21 = 1;
    }
    if ( (v23 & 0x20) != 0 )
    {
      v22 |= 0x80u;
      v12[83] = v22;
      v21 = 1;
    }
    if ( (v23 & 0x40) != 0 )
    {
      v22 |= 0x100u;
LABEL_31:
      v12[83] = v22 | 4;
      goto LABEL_32;
    }
    if ( v21 )
      goto LABEL_31;
  }
LABEL_32:
  if ( !CInputTransform::IsIdentityTransform((const struct tagINPUT_TRANSFORM *)(v29 + 236)) )
  {
    v12[83] = v24 | 0x400000;
    v25 = v29;
  }
  v26 = (unsigned int)(*((_DWORD *)a3 + 28) - 512);
  if ( (unsigned int)v26 <= 0xE )
  {
    v25[150] = word_18023B9D8[v26];
    v25 = v29;
    v27 = *((_WORD *)v29 + 150);
    if ( (v27 & 0xC0) != 0 && *((_WORD *)a3 + 61) == 2 )
    {
      *((_WORD *)v29 + 150) = 4 * v27;
      v25 = v29;
    }
  }
  if ( ((*((_DWORD *)a3 + 28) - 522) & 0xFFFFFFFB) == 0 )
    v25[151] = *((_WORD *)a3 + 61);
  InputDestTarget::GetExistingOrCreateNewInputTarget(
    &v31,
    a3,
    *((int (__fastcall ****)(_QWORD, GUID *, InputDestTarget **))this + 53));
  *(_QWORD *)&v32 = this;
  *((_QWORD *)&v32 + 1) = &v29;
  v33 = &v31;
  v36 = off_180211D80;
  v37 = v32;
  v38 = &v31;
  v39 = &v36;
  *(_QWORD *)&v32 = &v31;
  *((_QWORD *)&v32 + 1) = a3;
  v40 = off_180211D18;
  v41 = v32;
  v42 = &v40;
  Win32kInterop::DeliverToContextualProcessing(this, (__int64)v29, *((_DWORD *)a3 + 59), (__int64)&v40, (__int64)&v36);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v30);
  if ( v35 )
    operator delete[](v35);
}
