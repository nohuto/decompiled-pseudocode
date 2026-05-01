/*
 * XREFs of ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x18002A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010D4C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::LaunchAsync(__int64 a1, __int64 a2)
{
  __int64 *v4; // r8
  __int64 v5; // rcx
  int v6; // ebx
  HRESULT v7; // eax
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  IUnknown *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IUnknown *pUnk; // [rsp+30h] [rbp+8h] BYREF

  pUnk = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>((__int64 *)&pUnk);
  *v4 = 0LL;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v6 = -2147467259;
LABEL_11:
    v9 = (unsigned int)v6;
    v10 = 70LL;
    goto LABEL_12;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &GUID_735924d3_811f_4494_b69c_c641a0c61543,
           v4);
  else
    v6 = 0;
  if ( v6 < 0 )
    goto LABEL_11;
  v7 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      77LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v7);
  v8 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[2].AddRef)(pUnk, a2);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 79LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v9);
  }
  v11 = pUnk;
  if ( pUnk )
  {
    pUnk = 0LL;
    ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
  }
  return (unsigned int)v6;
}
