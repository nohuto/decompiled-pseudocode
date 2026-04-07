/*
 * XREFs of ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800A64DC
 * Callers:
 *     ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x1800A66A0 (-GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800A7650 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025C70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetAnimationDuration(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  __int64 Theme; // r14
  int ThemeAnimationProperty; // ebx
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int64 v10; // rbp
  _BYTE v12[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+A8h] [rbp+20h] BYREF

  *a3 = 0;
  Theme = CDesktopManager::GetTheme(3);
  if ( Theme )
  {
    v14 = 0;
    ThemeAnimationProperty = GetThemeAnimationProperty(Theme, a1, a2, 1LL, &v14, 4, v12);
    if ( ThemeAnimationProperty >= 0 )
    {
      v8 = 0;
      v9 = 0;
      if ( v14 )
      {
        while ( ThemeAnimationProperty >= 0 )
        {
          v13 = 0;
          ThemeAnimationProperty = GetThemeAnimationTransform(Theme, a1, a2, v9, 0LL, 0, &v13);
          if ( ThemeAnimationProperty == -2147024662 )
          {
            v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v13);
            if ( v10 )
            {
              ThemeAnimationProperty = GetThemeAnimationTransform(Theme, a1, a2, v9, v10, v13, &v13);
              if ( ThemeAnimationProperty >= 0 )
              {
                if ( v9 )
                {
                  if ( v8 <= *(_DWORD *)(v10 + 8) + *(_DWORD *)(v10 + 12) )
                    v8 = *(_DWORD *)(v10 + 8) + *(_DWORD *)(v10 + 12);
                }
                else
                {
                  v8 = *(_DWORD *)(v10 + 8) + *(_DWORD *)(v10 + 12);
                }
              }
              (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                v10);
            }
            else
            {
              ThemeAnimationProperty = -2147024882;
            }
          }
          if ( ++v9 >= v14 )
          {
            if ( ThemeAnimationProperty < 0 )
              return (unsigned int)ThemeAnimationProperty;
            goto LABEL_17;
          }
        }
      }
      else
      {
LABEL_17:
        *a3 = v8;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)ThemeAnimationProperty;
}
