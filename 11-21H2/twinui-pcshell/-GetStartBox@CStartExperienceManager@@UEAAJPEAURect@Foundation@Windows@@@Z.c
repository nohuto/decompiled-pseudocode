/*
 * XREFs of ?GetStartBox@CStartExperienceManager@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180197440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z @ 0x1800340E0 (-GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::GetStartBox(
        CStartExperienceManager *this,
        struct Windows::Foundation::Rect *a2)
{
  int WindowHandle; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  __m128i v6; // xmm3
  __m128i v7; // xmm2
  unsigned int v8; // eax
  __m128i v9; // xmm1
  HWND hWnd; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  WindowHandle = CStartExperienceManager::GetWindowHandle(
                   this,
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)&hWnd);
  if ( WindowHandle < 0 )
  {
    v4 = 1126LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)WindowHandle);
    return (unsigned int)WindowHandle;
  }
  if ( !GetWindowRgnBox(hWnd, &rc) )
  {
    WindowHandle = -2147418113;
    v4 = 1127LL;
    goto LABEL_3;
  }
  v6 = _mm_cvtsi32_si128(rc.top);
  v7 = _mm_cvtsi32_si128(rc.right - rc.left);
  v8 = rc.bottom - rc.top;
  *(float *)a2 = (float)rc.left;
  v9 = _mm_cvtsi32_si128(v8);
  result = 0LL;
  *((_DWORD *)a2 + 1) = _mm_cvtepi32_ps(v6).m128_u32[0];
  *((_DWORD *)a2 + 2) = _mm_cvtepi32_ps(v7).m128_u32[0];
  *((_DWORD *)a2 + 3) = _mm_cvtepi32_ps(v9).m128_u32[0];
  return result;
}
