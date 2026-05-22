/*
 * XREFs of ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18004DA90
 * Callers:
 *     ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004D9D0 (-OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x1801CCD20 (-OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801CCDC0 (-OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801CCEB0 (-OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059214 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x18005BE10 (-AddRef@-$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameInputProcessor::LazyInitialize(GameInputProcessor *this)
{
  SharedObjectBase *v2; // rdi
  __int64 v3; // rcx
  unsigned int *v4; // rsi
  unsigned int *v5; // rbp
  int v6; // eax
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 4) )
  {
    *((_QWORD *)this + 4) = 0LL;
    AcquireSRWLockShared(&GameInputServerProxy::s_singletonLock);
    v2 = GameInputServerProxy::s_singleton;
    if ( GameInputServerProxy::s_singleton )
    {
      SharedUnknownBase<ISIPCEndpoint>::AddRef((char *)GameInputServerProxy::s_singleton + 16);
      v2 = GameInputServerProxy::s_singleton;
    }
    ReleaseSRWLockShared(&GameInputServerProxy::s_singletonLock);
    v3 = ((unsigned __int64)v2 + 16) & -(__int64)(v2 != 0LL);
    *((_QWORD *)this + 4) = v3;
    if ( v3 )
    {
      v4 = (unsigned int *)*((_QWORD *)this + 21);
      v5 = (unsigned int *)*((_QWORD *)this + 22);
      while ( v4 != v5 )
      {
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, unsigned int **))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               *v4,
               &v11) >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, unsigned int *, _QWORD))(**((_QWORD **)this + 4) + 24LL))(
            *((_QWORD *)this + 4),
            v11 + 19,
            *v11);
          if ( v11[1] == 4 && !*((_BYTE *)this + 192) )
          {
            v6 = NtMITSetKeyboardInputRoutingPolicy(1LL);
            if ( v6 < 0 )
              wil::details::in1diag3::_FailFast_NtStatus(
                retaddr,
                (void *)0x19B,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\sys"
                              "tem\\lib\\gameinputprocessor.cpp",
                (const char *)(unsigned int)v6,
                v9);
            *((_BYTE *)this + 192) = 1;
          }
        }
        ++v4;
      }
      v7 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 22) = v7;
      if ( v7 != *((_QWORD *)this + 23) )
        std::vector<Windows::UI::Color>::_Tidy((char *)this + 168);
    }
  }
  return 0LL;
}
