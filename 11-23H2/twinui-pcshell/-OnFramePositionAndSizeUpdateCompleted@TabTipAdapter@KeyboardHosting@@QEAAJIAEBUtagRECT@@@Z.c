/*
 * XREFs of ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180525B78
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180514044 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18014B338 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnFramePositionAndSizeUpdateCompleted(
        RTL_SRWLOCK *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  unsigned int v4; // eax
  __int64 *Ptr; // rcx
  float top; // xmm1_4
  __m128i v7; // xmm0
  unsigned int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  _DWORD v14[4]; // [rsp+40h] [rbp-40h] BYREF
  float v15[4]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v16[4]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v17[4]; // [rsp+64h] [rbp-1Ch] BYREF
  _BYTE v18[16]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v4 = a3->right - a3->left;
  Ptr = (__int64 *)this[15].Ptr;
  top = (float)a3->top;
  v15[0] = (float)a3->left;
  v7 = _mm_cvtsi32_si128(v4);
  v8 = a3->bottom - a3->top;
  v15[1] = top;
  LODWORD(v15[2]) = _mm_cvtepi32_ps(v7).m128_u32[0];
  v9 = _mm_cvtsi32_si128(v8);
  v10 = *Ptr;
  LODWORD(v15[3]) = _mm_cvtepi32_ps(v9).m128_u32[0];
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, float *, _BYTE *, _BYTE *, _BYTE *, _DWORD *))(v10 + 312))(
          Ptr,
          a2,
          v15,
          v17,
          v16,
          v18,
          v14);
  if ( v11 < 0 )
  {
    v12 = 2719LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  if ( v14[0] == 3 )
  {
    v11 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v11 < 0 )
    {
      v12 = 2723LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
