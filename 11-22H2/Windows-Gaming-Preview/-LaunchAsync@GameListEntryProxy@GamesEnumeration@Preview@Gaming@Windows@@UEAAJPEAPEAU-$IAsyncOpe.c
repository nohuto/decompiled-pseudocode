/*
 * XREFs of ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x18002AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010EBC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013F80 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::LaunchAsync(__int64 a1, __int64 a2)
{
  __int64 *v4; // r8
  int v5; // ebx
  HRESULT v6; // eax
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  IUnknown *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IUnknown *pUnk; // [rsp+30h] [rbp+8h] BYREF

  pUnk = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>((__int64 *)&pUnk);
  *v4 = 0LL;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v5 = -2147467259;
    goto LABEL_8;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 96) + 24LL))(
         *(_QWORD *)(a1 + 96),
         &GUID_735924d3_811f_4494_b69c_c641a0c61543,
         v4);
  if ( v5 < 0 )
  {
LABEL_8:
    v8 = (unsigned int)v5;
    v9 = 70LL;
    goto LABEL_9;
  }
  v6 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      77LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v6);
  v7 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[2].AddRef)(pUnk, a2);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 79LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v8);
  }
  v10 = pUnk;
  if ( pUnk )
  {
    pUnk = 0LL;
    ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
  }
  return (unsigned int)v5;
}
