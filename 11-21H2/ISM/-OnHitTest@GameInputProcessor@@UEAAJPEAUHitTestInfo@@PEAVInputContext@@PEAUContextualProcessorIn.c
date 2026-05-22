/*
 * XREFs of ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800074F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x180048B70 (-AddPublicReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008C928 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GameInputProcessor::OnHitTest(
        GameInputProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  SharedObjectBase *v7; // rbx
  char *v8; // rax
  unsigned int *v9; // rbx
  unsigned int *v10; // r14
  int v11; // eax
  int v12; // eax
  unsigned int *v14; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( gbIsDWMNoRawGameController )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    if ( !*((_QWORD *)this + 4) )
    {
      *((_QWORD *)this + 4) = 0LL;
      AcquireSRWLockShared(&GameInputServerProxy::s_singletonLock);
      v7 = GameInputServerProxy::s_singleton;
      if ( GameInputServerProxy::s_singleton )
      {
        SharedObjectBase::AddPublicReference(GameInputServerProxy::s_singleton);
        v7 = GameInputServerProxy::s_singleton;
      }
      ReleaseSRWLockShared(&GameInputServerProxy::s_singletonLock);
      v8 = (char *)v7 + 16;
      if ( !v7 )
        v8 = 0LL;
      *((_QWORD *)this + 4) = v8;
      if ( v8 )
      {
        v9 = (unsigned int *)*((_QWORD *)this + 21);
        v10 = (unsigned int *)*((_QWORD *)this + 22);
        if ( v9 != v10 )
        {
          do
          {
            if ( (*(int (__fastcall **)(_QWORD, _QWORD, unsigned int **))(**((_QWORD **)this + 3) + 24LL))(
                   *((_QWORD *)this + 3),
                   *v9,
                   &v14) >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, unsigned int *, _QWORD))(**((_QWORD **)this + 4) + 24LL))(
                *((_QWORD *)this + 4),
                v14 + 19,
                *v14);
              if ( v14[1] == 4 && !*((_BYTE *)this + 192) )
              {
                v11 = NtMITSetKeyboardInputRoutingPolicy(1LL);
                if ( v11 < 0 )
                  wil::details::in1diag3::_FailFast_NtStatus(
                    retaddr,
                    (void *)0x19B,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\"
                                  "system\\lib\\gameinputprocessor.cpp",
                    (const char *)(unsigned int)v11,
                    (int)v14);
                *((_BYTE *)this + 192) = 1;
              }
            }
            ++v9;
          }
          while ( v9 != v10 );
          v9 = (unsigned int *)*((_QWORD *)this + 21);
        }
        *((_QWORD *)this + 22) = v9;
        if ( v9 != *((unsigned int **)this + 23) )
          std::vector<Windows::UI::Color>::_Tidy((char *)this + 168);
      }
    }
    v12 = 3;
    if ( *(_DWORD *)a2 != 2 )
      v12 = 0;
    *(_DWORD *)a4 = v12;
  }
  return 0LL;
}
