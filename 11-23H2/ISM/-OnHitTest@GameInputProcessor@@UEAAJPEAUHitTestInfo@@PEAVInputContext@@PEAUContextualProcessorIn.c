/*
 * XREFs of ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180010D00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059214 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x18005BE10 (-AddRef@-$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ.c)
 *     ?GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z @ 0x180063B40 (-GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$com_ptr_t@UIGameInputServer@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800CC988 (--B-$com_ptr_t@UIGameInputServer@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GameInputProcessor::OnHitTest(
        GameInputProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v7; // esi
  SharedObjectBase *v8; // rbx
  char *v9; // rax
  unsigned int *v10; // rbx
  unsigned int *v11; // rbp
  int v12; // eax
  __int64 v13; // rax
  struct InputContext *v14; // r8
  __int64 v15; // rdi
  unsigned __int8 (__fastcall *v16)(__int64, _QWORD); // rbx
  unsigned int TargetProcessId; // eax
  unsigned int *v19; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( gbIsDWMNoRawGameController )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v7 = 0;
    if ( !*((_QWORD *)this + 4) )
    {
      *((_QWORD *)this + 4) = 0LL;
      AcquireSRWLockShared(&GameInputServerProxy::s_singletonLock);
      v8 = GameInputServerProxy::s_singleton;
      if ( GameInputServerProxy::s_singleton )
      {
        SharedUnknownBase<ISIPCEndpoint>::AddRef((char *)GameInputServerProxy::s_singleton + 16);
        v8 = GameInputServerProxy::s_singleton;
      }
      ReleaseSRWLockShared(&GameInputServerProxy::s_singletonLock);
      v9 = (char *)v8 + 16;
      if ( !v8 )
        v9 = 0LL;
      *((_QWORD *)this + 4) = v9;
      if ( v9 )
      {
        v10 = (unsigned int *)*((_QWORD *)this + 21);
        v11 = (unsigned int *)*((_QWORD *)this + 22);
        while ( v10 != v11 )
        {
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, unsigned int **))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 *v10,
                 &v19) >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, unsigned int *, _QWORD))(**((_QWORD **)this + 4) + 24LL))(
              *((_QWORD *)this + 4),
              v19 + 19,
              *v19);
            if ( v19[1] == 4 && !*((_BYTE *)this + 192) )
            {
              v12 = NtMITSetKeyboardInputRoutingPolicy(1LL);
              if ( v12 < 0 )
                wil::details::in1diag3::_FailFast_NtStatus(
                  retaddr,
                  (void *)0x19B,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\s"
                                "ystem\\lib\\gameinputprocessor.cpp",
                  (const char *)(unsigned int)v12,
                  (int)v19);
              *((_BYTE *)this + 192) = 1;
            }
          }
          ++v10;
        }
        v13 = *((_QWORD *)this + 21);
        *((_QWORD *)this + 22) = v13;
        if ( v13 != *((_QWORD *)this + 23) )
          std::vector<Windows::UI::Color>::_Tidy((char *)this + 168);
      }
    }
    if ( *(_DWORD *)a2 == 2 )
    {
      if ( (unsigned __int8)wil::com_ptr_t<IGameInputServer,wil::err_exception_policy>::operator bool((char *)this + 32) )
      {
        v15 = *((_QWORD *)this + 4);
        v16 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 72LL);
        TargetProcessId = GameInputProcessor::GetTargetProcessId(v14);
        if ( v16(v15, TargetProcessId) )
          v7 = 3;
      }
    }
    *(_DWORD *)a4 = v7;
  }
  return 0LL;
}
