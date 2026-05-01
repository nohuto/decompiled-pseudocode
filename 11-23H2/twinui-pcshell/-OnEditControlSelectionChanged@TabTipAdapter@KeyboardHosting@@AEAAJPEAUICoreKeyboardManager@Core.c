/*
 * XREFs of ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1801BB4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1802DCF84 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlSelectionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *a3)
{
  __int64 v3; // rax
  const struct Windows::Foundation::Rect *v5; // rdx
  int v6; // edi
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 (__fastcall *v13)(__int64, __int128 *); // r8
  int v14; // eax
  unsigned int v15; // ebx
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v3 = *(_QWORD *)a3;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *, __int128 *))(v3 + 48))(
         a3,
         &v18);
  if ( v6 < 0 )
  {
    v7 = 952LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( KeyboardHosting::IsRectNull((KeyboardHosting *)&v18, v5) )
    return 0LL;
  v9 = v18;
  v10 = (__int64 *)*((_QWORD *)this + 15);
  *(_OWORD *)((char *)this + 456) = v18;
  v11 = *v10;
  v16 = v9;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _BYTE *))(v11 + 88))(v10, &v16, v17);
  if ( v6 < 0 )
  {
    v7 = 966LL;
    goto LABEL_3;
  }
  v12 = *((_QWORD *)this + 7);
  if ( v12 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 64LL);
    DWORD1(v16) = (int)*((float *)&v18 + 1);
    LODWORD(v16) = (int)*(float *)&v18;
    DWORD2(v16) = (int)(float)(*((float *)&v18 + 2) + *(float *)&v18);
    HIDWORD(v16) = (int)(float)(*((float *)&v18 + 3) + *((float *)&v18 + 1));
    v6 = v13(v12, &v16);
    if ( v6 < 0 )
    {
      v7 = 970LL;
      goto LABEL_3;
    }
  }
  v14 = KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(this, 1LL);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3CF,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
