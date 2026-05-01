/*
 * XREFs of ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180332D50
 * Callers:
 *     ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x180332B24 (-HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z.c)
 * Callees:
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18032D85C (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows@@W4ButtonPressType@@@Z @ 0x180338D70 (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows.c)
 *     ?StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180339E2C (-StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::HandleTrackedButtonChange(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rax

  v4 = a1;
  if ( *(_BYTE *)(a1 + 248) )
  {
    if ( !a3 )
      return;
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)(a1 + 240));
    v5 = *(unsigned int *)(v4 + 252);
    v6 = 2LL;
    a1 = v4;
    *(_BYTE *)(v4 + 248) = 0;
    goto LABEL_9;
  }
  if ( a3 )
    return;
  if ( *(_BYTE *)(a1 + 264) )
  {
    v7 = *(_QWORD *)(a1 + 256);
    if ( v7 < a4 )
    {
      if ( 1000LL * *(_QWORD *)(a1 + 272) >= a4 - v7 )
      {
        GamingOverlayExperienceManager::StartShortPressTimer();
        goto LABEL_11;
      }
      v5 = *(unsigned int *)(a1 + 252);
      v6 = 1LL;
LABEL_9:
      GamingOverlayExperienceManager::SendGamepadCommand(a1, v5, v6);
      *(_DWORD *)(v4 + 252) = 0;
LABEL_11:
      *(_BYTE *)(v4 + 264) = 0;
      return;
    }
  }
  *(_DWORD *)(a1 + 252) = 0;
  *(_BYTE *)(a1 + 264) = 0;
}
