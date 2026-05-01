/*
 * XREFs of ?v_OnMessage@CFallbackWindow@@MEAA_JI_K_JPEA_N@Z @ 0x18015B150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LONG_PTR __fastcall CFallbackWindow::v_OnMessage(CFallbackWindow *this, int a2, WPARAM a3, __int64 a4, bool *ppvOut)
{
  bool *v6; // r14
  __int64 v7; // rbp
  char *v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v6 = ppvOut;
  *ppvOut = 1;
  v7 = 0LL;
  switch ( a2 )
  {
    case 6:
      if ( a3 == 1 )
      {
        v9 = (char *)this - 24;
        v10 = (unsigned __int64)this + 64;
        UiaRaiseAutomationEvent(
          (IRawElementProviderSimple *)(((unsigned __int64)this + 64) & -(__int64)(this != (CFallbackWindow *)24)),
          20005);
        UiaRaiseAutomationEvent((IRawElementProviderSimple *)(v10 & -(__int64)(v9 != 0LL)), 30005);
        *v6 = 0;
        if ( *((_QWORD *)this + 13) )
        {
          if ( *((_DWORD *)this + 6) == 12 && *((HWND *)this + 2) == GetForegroundWindow() )
          {
            v13 = 0;
            if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 56LL))(*((_QWORD *)this + 13), &v13) >= 0
              && v13 == 1 )
            {
              ppvOut = 0LL;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
              if ( IUnknown_QueryService(
                     *((IUnknown **)this - 1),
                     &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
                     &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
                     (void **)&ppvOut) >= 0 )
              {
                v11 = (*(__int64 (__fastcall **)(bool *))(*(_QWORD *)ppvOut + 56LL))(ppvOut);
                if ( v11 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x1D1,
                    (__int64)"pcshell\\twinui\\appmanager\\lib\\iamspecialwnd.cpp",
                    (const char *)(unsigned int)v11);
                *v6 = 1;
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
            }
          }
        }
      }
      break;
    case 61:
      if ( a4 == -25 )
        return UiaReturnRawElementProvider(
                 *((HWND *)this + 2),
                 a3,
                 -25LL,
                 (IRawElementProviderSimple *)(((unsigned __int64)this + 64) & -(__int64)(this != (CFallbackWindow *)24)));
      break;
    case 258:
      if ( a3 == 32 || a3 == 13 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 9) + 24LL))((char *)this + 72);
      break;
    default:
      *v6 = 0;
      break;
  }
  return v7;
}
