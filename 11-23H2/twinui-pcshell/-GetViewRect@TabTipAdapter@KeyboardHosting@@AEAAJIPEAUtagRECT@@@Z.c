/*
 * XREFs of ?GetViewRect@TabTipAdapter@KeyboardHosting@@AEAAJIPEAUtagRECT@@@Z @ 0x180523E3C
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180526460 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180526850 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetViewRect(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        struct tagRECT *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 result; // rax
  LONG v7; // r8d
  LONG v8; // edx
  float v9; // xmm0_4
  float v10; // [rsp+20h] [rbp-28h] BYREF
  float v11; // [rsp+24h] [rbp-24h]
  float v12; // [rsp+28h] [rbp-20h]
  float v13; // [rsp+2Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 9) + 144LL))(
         *((_QWORD *)this + 9),
         a2,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (int)v11;
    v8 = (int)(float)(v12 + v10);
    v9 = v13 + v11;
    a3->left = (int)v10;
    result = 0LL;
    a3->top = v7;
    a3->right = v8;
    a3->bottom = (int)v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  return result;
}
