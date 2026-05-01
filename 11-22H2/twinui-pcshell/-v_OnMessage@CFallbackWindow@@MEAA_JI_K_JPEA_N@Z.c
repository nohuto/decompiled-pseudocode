/*
 * XREFs of ?v_OnMessage@CFallbackWindow@@MEAA_JI_K_JPEA_N@Z @ 0x180176310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LONG_PTR __fastcall CFallbackWindow::v_OnMessage(CFallbackWindow *this, int a2, WPARAM a3, __int64 a4, bool *ppvOut)
{
  bool *v6; // r14
  __int64 v7; // rsi
  IRawElementProviderSimple *v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v6 = ppvOut;
  *ppvOut = 1;
  v7 = 0LL;
  switch ( a2 )
  {
    case 6:
      if ( a3 == 1 )
      {
        v9 = (IRawElementProviderSimple *)(((unsigned __int64)this + 64) & -(__int64)(this != (CFallbackWindow *)24));
        UiaRaiseAutomationEvent(v9, 20005);
        UiaRaiseAutomationEvent(v9, 30005);
        *v6 = 0;
        if ( *((_QWORD *)this + 13) )
        {
          if ( *((_DWORD *)this + 6) == 12 && *((HWND *)this + 2) == GetForegroundWindow() )
          {
            v12 = 0;
            if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 56LL))(*((_QWORD *)this + 13), &v12) >= 0
              && v12 == 1 )
            {
              ppvOut = 0LL;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
              if ( IUnknown_QueryService(
                     *((IUnknown **)this - 1),
                     &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
                     &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
                     (void **)&ppvOut) >= 0 )
              {
                v10 = (*(__int64 (__fastcall **)(bool *))(*(_QWORD *)ppvOut + 56LL))(ppvOut);
                if ( v10 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x1D1,
                    (int)"pcshell\\twinui\\appmanager\\lib\\iamspecialwnd.cpp",
                    (const char *)(unsigned int)v10);
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
