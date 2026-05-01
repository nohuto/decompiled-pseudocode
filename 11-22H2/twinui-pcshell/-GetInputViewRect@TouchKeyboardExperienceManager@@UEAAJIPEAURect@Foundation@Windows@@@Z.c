/*
 * XREFs of ?GetInputViewRect@TouchKeyboardExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180510770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetViewRect@TouchKeyboardExperienceManager@@AEAAJIPEAUtagRECT@@@Z @ 0x18020A7A4 (-GetViewRect@TouchKeyboardExperienceManager@@AEAAJIPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetInputViewRect(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  int ViewRect; // eax
  unsigned int v5; // edi
  __int64 result; // rax
  __m128i v7; // xmm3
  __m128i v8; // xmm2
  unsigned int v9; // eax
  __m128i v10; // xmm1
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ViewRect = TouchKeyboardExperienceManager::GetViewRect(
               (TouchKeyboardExperienceManager *)((char *)this - 200),
               a2,
               &v11);
  v5 = ViewRect;
  if ( ViewRect >= 0 )
  {
    v7 = _mm_cvtsi32_si128(v11.top);
    v8 = _mm_cvtsi32_si128(v11.right - v11.left);
    v9 = v11.bottom - v11.top;
    *(float *)a3 = (float)v11.left;
    v10 = _mm_cvtsi32_si128(v9);
    result = 0LL;
    *((_DWORD *)a3 + 1) = _mm_cvtepi32_ps(v7).m128_u32[0];
    *((_DWORD *)a3 + 2) = _mm_cvtepi32_ps(v8).m128_u32[0];
    *((_DWORD *)a3 + 3) = _mm_cvtepi32_ps(v10).m128_u32[0];
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C2,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewRect);
    return v5;
  }
  return result;
}
