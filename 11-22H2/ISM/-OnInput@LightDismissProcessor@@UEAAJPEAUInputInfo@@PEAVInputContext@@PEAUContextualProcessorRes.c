/*
 * XREFs of ?OnInput@LightDismissProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180180410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801163A8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?Dismiss@BamoLightDismissClientProxy@@UEAAJXZ @ 0x18017FC00 (-Dismiss@BamoLightDismissClientProxy@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LightDismissProcessor::OnInput(
        LightDismissProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v4; // eax
  __int64 v5; // rdi
  char *i; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  *((_DWORD *)a4 + 2) = 4;
  if ( (*(_BYTE *)a2 & 4) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lightdismiss\\processor\\lightdis"
           "missprocessor.cpp",
      (const char *)a4);
  if ( (*((_BYTE *)a2 + 94) & 1) != 0 )
  {
    v13 = 0;
    v14 = 0LL;
    if ( *((_QWORD *)a3 + 2) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3 + 2,
                  &v14) >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 32LL))(v14, &v13);
        if ( v4 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA8,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lightdismiss\\processor\\li"
                 "ghtdismissprocessor.cpp",
            (const char *)(unsigned int)v4,
            v11);
      }
    }
    v5 = qword_180278160;
    for ( i = (char *)LightDismissProcessor::s_clients; i != (char *)v5; i += 8 )
    {
      v7 = *(_QWORD *)i;
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)i + 32LL) + 16LL);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v13 != *(_DWORD *)(v9 + 32) )
        BamoLightDismissClientProxy::Dismiss((BamoLightDismissClientProxy *)(v7 + 8));
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
  }
  return 0LL;
}
