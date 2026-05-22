/*
 * XREFs of ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x180043C78
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?_Swap@?$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXAEAV12@@Z @ 0x180042EE8 (-_Swap@-$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXAEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXXZ @ 0x180047FE4 (-_Tidy@-$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
GameInputProcessor *__fastcall GameInputProcessor::GameInputProcessor(
        GameInputProcessor *this,
        struct IInputDeviceInfoStore *a2)
{
  const char *v4; // r9
  __int128 v6; // [rsp+20h] [rbp-E8h]
  char v7; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v8)(); // [rsp+60h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+68h] [rbp-A0h]
  char v10; // [rsp+78h] [rbp-90h]
  GameInputProcessor *v11; // [rsp+80h] [rbp-88h]
  __int64 (__fastcall ***v12)(); // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v13)(); // [rsp+A0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+A8h] [rbp-60h]
  char v15; // [rsp+B8h] [rbp-50h]
  GameInputProcessor *v16; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall ***v17)(); // [rsp+D8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &GameInputProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &GameInputProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputDeviceInfoStore *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_BYTE *)this + 192) = 0;
  if ( !gbIsDWMNoRawGameController )
  {
    *(_QWORD *)&v6 = GameInputProcessor::OnDeviceAttach;
    DWORD2(v6) = 0;
    v8 = ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std__XPEAUDeviceInfo___std__6B_;
    v9 = v6;
    v10 = v7;
    v11 = this;
    v12 = &v8;
    std::_Func_class<void,DeviceInfo *>::_Swap((__int64)&v8, (__int64)this + 40);
    std::_Func_class<void,DeviceInfo *>::_Tidy(&v8);
    *(_QWORD *)&v6 = GameInputProcessor::OnDeviceRemoval;
    DWORD2(v6) = 0;
    v13 = ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std__XPEAUDeviceInfo___std__6B_;
    v14 = v6;
    v15 = v7;
    v16 = this;
    v17 = &v13;
    std::_Func_class<void,DeviceInfo *>::_Swap((__int64)&v13, (__int64)this + 104);
    std::_Func_class<void,DeviceInfo *>::_Tidy(&v13);
    try
    {
      (*(void (**)(void))(*(_QWORD *)a2 + 32LL))();
      (*(void (__fastcall **)(struct IInputDeviceInfoStore *, char *))(*(_QWORD *)a2 + 40LL))(a2, (char *)this + 104);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib"
                      "\\gameinputprocessor.cpp",
        v4);
    }
  }
  return this;
}
