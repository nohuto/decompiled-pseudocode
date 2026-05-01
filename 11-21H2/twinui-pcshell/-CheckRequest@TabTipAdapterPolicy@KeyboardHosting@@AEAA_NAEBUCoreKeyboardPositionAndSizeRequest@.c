/*
 * XREFs of ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180480500
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800C0C40 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
char __fastcall KeyboardHosting::TabTipAdapterPolicy::CheckRequest(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  int PositionAndSizeOptions; // eax
  int v5; // eax
  unsigned int i; // edi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-50h] BYREF
  _DWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+38h] [rbp-40h]
  char v15; // [rsp+39h] [rbp-3Fh]
  unsigned int v16; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v17; // [rsp+40h] [rbp-38h]
  unsigned int v18; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v19; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(this, &v11);
  if ( PositionAndSizeOptions < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x697,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions,
      v11);
  v12 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 56LL))(v11, &v12);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x699,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v5,
      v11);
  for ( i = 0; i < v12; ++i )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v11 + 48LL))(v11, i, v13);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x69E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)v7,
        v11);
    if ( *(_DWORD *)a2 == v13[0] && *((_DWORD *)a2 + 6) == v13[1] )
    {
      v8 = *((_DWORD *)a2 + 2);
      if ( v19 <= v8 && v8 <= v17 )
      {
        v9 = *((_DWORD *)a2 + 1);
        if ( v18 <= v9 && v9 <= v16 && *((_BYTE *)a2 + 40) == v14 && *((_BYTE *)a2 + 41) == v15 )
        {
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
          return 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return 0;
}
