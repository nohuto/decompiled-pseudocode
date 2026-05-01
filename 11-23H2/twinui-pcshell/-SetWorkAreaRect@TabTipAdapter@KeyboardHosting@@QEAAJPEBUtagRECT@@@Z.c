/*
 * XREFs of ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x18014A448
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18014A300 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18014B338 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::SetWorkAreaRect(
        KeyboardHosting::TabTipAdapter *this,
        const struct tagRECT *a2)
{
  unsigned int v3; // eax
  __int64 *v4; // rcx
  float top; // xmm1_4
  __m128i v6; // xmm0
  unsigned int v7; // eax
  __m128i v8; // xmm0
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  float v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2->right - a2->left;
  v4 = (__int64 *)*((_QWORD *)this + 16);
  top = (float)a2->top;
  v13[0] = (float)a2->left;
  v6 = _mm_cvtsi32_si128(v3);
  v7 = a2->bottom - a2->top;
  v13[1] = top;
  LODWORD(v13[2]) = _mm_cvtepi32_ps(v6).m128_u32[0];
  v8 = _mm_cvtsi32_si128(v7);
  v9 = *v4;
  LODWORD(v13[3]) = _mm_cvtepi32_ps(v8).m128_u32[0];
  v10 = (*(__int64 (__fastcall **)(__int64 *, float *, int *))(v9 + 64))(v4, v13, &v15);
  if ( v10 < 0 )
  {
    v11 = 2187LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( v15 == 3 )
  {
    v10 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v10 < 0 )
    {
      v11 = 2191LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
