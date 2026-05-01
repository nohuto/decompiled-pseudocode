/*
 * XREFs of ?OnGameModeEnableChange@GamingOverlayExperienceManager@@UEAAJ_KE@Z @ 0x180402FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnGameModeEnableChange(
        GamingOverlayExperienceManager *this,
        __int64 a2,
        char a3)
{
  _QWORD *v6; // rax
  volatile int *v7; // rdx
  _QWORD *v8; // r10
  char *v9; // r9
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v6;
  if ( v6 )
  {
    v9 = (char *)this - 136;
    *v6 = (char *)this - 136;
    if ( this != (GamingOverlayExperienceManager *)136 )
    {
      v10 = *((_QWORD *)v9 + 26);
      while ( v10 >= 0 )
      {
        if ( (_DWORD)v10 != 0x7FFFFFFF )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 26, v10 + 1, v10);
          if ( v11 != v10 )
            continue;
        }
        goto LABEL_9;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), v7);
    }
LABEL_9:
    v8[1] = a2;
    *((_BYTE *)v8 + 16) = a3;
    if ( (unsigned int)SHQueueUserWorkItem(
                         GamingOverlayExperienceManager::StaticNotifyBcastDvrOfGameModeChange,
                         v8,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         16) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x62B,
               (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
               v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x622,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
