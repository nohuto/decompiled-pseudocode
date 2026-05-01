/*
 * XREFs of ?InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z @ 0x1805249B4
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180526460 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  unsigned int v3; // eax
  __int64 *v4; // rcx
  float top; // xmm1_4
  __m128i v6; // xmm0
  unsigned int v7; // eax
  __m128i v8; // xmm0
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  float v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3->right - a3->left;
  v4 = (__int64 *)*((_QWORD *)this + 9);
  top = (float)a3->top;
  v13[0] = (float)a3->left;
  v6 = _mm_cvtsi32_si128(v3);
  v7 = a3->bottom - a3->top;
  v13[1] = top;
  LODWORD(v13[2]) = _mm_cvtepi32_ps(v6).m128_u32[0];
  v8 = _mm_cvtsi32_si128(v7);
  v9 = *v4;
  LODWORD(v13[3]) = _mm_cvtepi32_ps(v8).m128_u32[0];
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, float *))(v9 + 96))(v4, a2, v13);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAD,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
