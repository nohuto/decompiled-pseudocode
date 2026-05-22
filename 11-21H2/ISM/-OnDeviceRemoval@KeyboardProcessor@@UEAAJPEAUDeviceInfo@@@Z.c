/*
 * XREFs of ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180193670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180003B74 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     memcpy_s_0 @ 0x18004CFCC (memcpy_s_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@PEAU12@00@Z @ 0x180192B94 (--$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@Keyboar.c)
 *     ?GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ @ 0x1801934A0 (-GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ.c)
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x1801934D4 (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 *     ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x180193CF0 (-OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardProcessor::OnDeviceRemoval(KeyboardProcessor *this, struct DeviceInfo *a2)
{
  int v3; // eax
  bool v4; // dl
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __int64 v8; // rbx
  const char *v9; // r9
  unsigned __int16 UnhandedVirtualKey; // ax
  const char *v11; // r9
  int v12; // eax
  __int64 v13; // rbx
  int v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE Destination[256]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v3 = KeyboardProcessor::InvalidateKeyboardModifiers(this);
  v5 = v3;
  if ( v3 >= 0 )
  {
    KeyboardProcessorTelemetry::OnKeyPress((KeyboardProcessor *)((char *)this + 40), v4);
    memset_0(Destination, 0, sizeof(Destination));
    AcquireSRWLockExclusive(&KeyboardProcessor::s_keyStateSnapshotLock);
    *(_QWORD *)v14 = &KeyboardProcessor::s_keyStateSnapshotLock;
    memcpy_s_0(Destination, 0x100uLL, &KeyboardProcessor::s_keyStateSnapshot, 0x100uLL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)v14);
    v7 = *((_QWORD *)this + 8);
    while ( v7 != *((_QWORD *)this + 9) )
    {
      v8 = *(_QWORD *)(v7 + 376);
      *(_QWORD *)v14 = v8;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)v14);
      v9 = (const char *)*(unsigned __int16 *)(v7 + 60);
      if ( (unsigned __int16)v9 >= 0x100u )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          201LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
          v9);
      *(_WORD *)(v7 + 94) &= 1u;
      Destination[(_QWORD)v9] &= ~0x80u;
      UnhandedVirtualKey = KeyboardInputInfo::GetUnhandedVirtualKey((KeyboardInputInfo *)v7);
      if ( UnhandedVirtualKey >= 0x100u )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          210LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
          v11);
      if ( UnhandedVirtualKey != (_WORD)v11 )
        Destination[UnhandedVirtualKey] &= ~0x80u;
      memcpy_s_0((void *const)(v7 + 96), 0x100uLL, Destination, 0x100uLL);
      if ( v8 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, v7);
        v5 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDF,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
            (const char *)(unsigned int)v12);
          Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v14);
          return v5;
        }
      }
      std::_Move_unchecked<KeyboardProcessor::TargetingInfo *,KeyboardProcessor::TargetingInfo *>(
        v7 + 384,
        *((_QWORD *)this + 9),
        v7);
      v13 = *((_QWORD *)this + 9);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(v13 - 8));
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(v13 - 16));
      *((_QWORD *)this + 9) -= 384LL;
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v14);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
