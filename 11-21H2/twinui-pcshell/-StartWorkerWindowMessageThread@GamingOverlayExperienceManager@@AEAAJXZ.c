/*
 * XREFs of ?StartWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18033A090
 * Callers:
 *     ?add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18033CA40 (-add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIGaming.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033A860 (-StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StartWorkerWindowMessageThread(HANDLE *this)
{
  int v2; // eax
  unsigned int v3; // edi
  HANDLE EventW; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rax
  HANDLE v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = GamingOverlayExperienceManager::StopWorkerWindowMessageThread((GamingOverlayExperienceManager *)this, 1);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  this[74] = EventW;
  if ( !EventW )
  {
    v7 = 947LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
             v6);
  }
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *v8 = this;
    v9 = this[74];
    v8[2] = 0LL;
    v8[1] = v9;
    if ( !SHCreateThreadWithHandle(
            GamingOverlayExperienceManager::StaticWorkerWindowMessageThread,
            v8,
            0x1000u,
            GamingOverlayExperienceManager::StaticWorkerWindowMessageThreadSetup,
            this + 60) )
    {
      v7 = 959LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v7,
               (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
               v6);
    }
    if ( this[56] )
      return 0LL;
    v10 = -2147024890;
    v11 = 961LL;
  }
  else
  {
    v10 = -2147024882;
    v11 = 952LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)v10);
  return v10;
}
