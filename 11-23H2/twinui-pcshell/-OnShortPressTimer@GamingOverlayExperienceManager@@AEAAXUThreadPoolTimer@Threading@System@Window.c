/*
 * XREFs of ?OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x1804032D0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows@@W4ButtonPressType@@@Z @ 0x18040694C (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamingOverlayExperienceManager::OnShortPressTimer(__int64 a1, winrt::Windows::Foundation::IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rdx

  v4 = (RTL_SRWLOCK *)(a1 + 216);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 216));
  if ( *(_BYTE *)(a1 + 288) )
  {
    v5 = *(unsigned int *)(a1 + 292);
    if ( (_DWORD)v5 && !*(_BYTE *)(a1 + 304) )
    {
      GamingOverlayExperienceManager::SendGamepadCommand(a1, v5, 0LL);
      *(_DWORD *)(a1 + 292) = 0;
      *(_BYTE *)(a1 + 304) = 0;
    }
    if ( *(_BYTE *)(a1 + 288) )
    {
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)(a1 + 280));
      *(_BYTE *)(a1 + 288) = 0;
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
}
