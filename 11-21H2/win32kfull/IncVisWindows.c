/*
 * XREFs of IncVisWindows @ 0x1C0020088
 * Callers:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     SetMinimize @ 0x1C00CB6A0 (SetMinimize.c)
 * Callees:
 *     FVisCountable @ 0x1C00201C0 (FVisCountable.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall IncVisWindows(struct tagWND *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  _WORD v6[32]; // [rsp+20h] [rbp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *((_QWORD *)a1 + 2);
    v4 = *(_QWORD *)(v3 + 424);
    ++*(_DWORD *)(v3 + 900);
    ++*(_DWORD *)(v4 + 1024);
    if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6)
      && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
    {
      ++*(_DWORD *)(*(_QWORD *)(v3 + 424) + 1028LL);
    }
    v5 = *(_DWORD **)(v3 + 424);
    if ( v5[256] > v5[257] && (v5[205] & 0x4000) == 0 )
    {
      GreDxgkSetProcessStatus(v5, 2LL);
      PsUpdateComponentPower(**(_QWORD **)(v3 + 424), 5LL);
      *(_DWORD *)(*(_QWORD *)(v3 + 424) + 820LL) |= 0x4000u;
    }
    *(_QWORD *)(v3 + 1256) |= 0x100000000uLL;
    return EtwTraceProcessWindowInfo(v3);
  }
  return result;
}
