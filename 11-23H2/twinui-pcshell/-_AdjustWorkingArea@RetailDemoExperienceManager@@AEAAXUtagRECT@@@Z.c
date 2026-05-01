/*
 * XREFs of ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1804588D4
 * Callers:
 *     ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x180458A7C (-_Dock@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x180459278 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall RetailDemoExperienceManager::_AdjustWorkingArea(RetailDemoExperienceManager *this, struct tagRECT *a2)
{
  __m128i *v2; // rdi
  __m128i v5; // xmm0
  int v6; // ecx
  __int128 v7; // xmm1
  __m128i pvParam; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__m128i *)((char *)this + 416);
  if ( (*((_DWORD *)this + 106) <= *((_DWORD *)this + 104) || *((_DWORD *)this + 107) <= *((_DWORD *)this + 105))
    && !SystemParametersInfoW(0x30u, 0, v2, 0) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      pvParam.m128i_i32[0]);
  }
  v5 = *v2;
  v6 = a2->left - *((_DWORD *)this + 96);
  pvParam = v5;
  pvParam.m128i_i32[0] = v6 + _mm_cvtsi128_si32(v5);
  pvParam.m128i_i32[1] = a2->top - *((_DWORD *)this + 97) + v5.m128i_i32[1];
  pvParam.m128i_i32[2] = *((_DWORD *)this + 98) - a2->right + v5.m128i_i32[2];
  pvParam.m128i_i32[3] = *((_DWORD *)this + 99) - a2->bottom + v5.m128i_i32[3];
  if ( !SystemParametersInfoW(0x2Fu, 1u, &pvParam, 0) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x192,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      pvParam.m128i_i32[0]);
  v7 = (__int128)*a2;
  *v2 = pvParam;
  *((_OWORD *)this + 24) = v7;
}
