/*
 * XREFs of ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x1800342B8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@std@@$0A@@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x18003441C (--$-4V-$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU-$_Ph@$00.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
GameInputProcessor *__fastcall GameInputProcessor::GameInputProcessor(
        GameInputProcessor *this,
        struct IInputDeviceInfoStore *a2)
{
  const char *v4; // r9
  __int128 v6; // [rsp+20h] [rbp-58h]
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  GameInputProcessor *v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  GameInputProcessor *v10; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

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
    v7 = v6;
    v8 = this;
    ____4V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std___0A____function___A6AXPEAUDeviceInfo___Z_std__QEAAAEAV01___QEAV___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__1__Z(
      (char *)this + 40,
      &v7);
    *(_QWORD *)&v6 = GameInputProcessor::OnDeviceRemoval;
    DWORD2(v6) = 0;
    v9 = v6;
    v10 = this;
    ____4V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std___0A____function___A6AXPEAUDeviceInfo___Z_std__QEAAAEAV01___QEAV___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__1__Z(
      (char *)this + 104,
      &v9);
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
