/*
 * XREFs of ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1800BC010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18047045C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180481740 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlSelectionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // edi
  __int128 v6; // xmm6
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v3 = *(_QWORD *)a3;
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *, __int128 *))(v3 + 48))(
         a3,
         &v15);
  if ( v5 < 0 )
  {
    v8 = 678LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v6 = v15;
  v13 = v15;
  if ( (unsigned __int8)KeyboardHosting::IsRectNull(&v13) )
    return 0LL;
  v9 = *((_QWORD *)this + 14);
  *((_OWORD *)this + 32) = v6;
  v13 = v6;
  v5 = KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged(v9, &v13, v14);
  if ( v5 < 0 )
  {
    v8 = 692LL;
    goto LABEL_6;
  }
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    LODWORD(v13) = (int)*(float *)&v15;
    DWORD1(v13) = (int)*((float *)&v15 + 1);
    DWORD2(v13) = (int)(float)(*((float *)&v15 + 2) + *(float *)&v15);
    HIDWORD(v13) = (int)(float)(*((float *)&v15 + 1) + *((float *)&v15 + 3));
    v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 64LL))(v10, &v13);
    if ( v5 < 0 )
    {
      v8 = 696LL;
      goto LABEL_6;
    }
  }
  v11 = KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(this, 1LL);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2BD,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
