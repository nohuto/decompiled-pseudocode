/*
 * XREFs of ?copy_ref@?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXPEAVGamingOverlayExperienceManager@@@Z @ 0x18040AA58
 * Callers:
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x1801DB7C0 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ @ 0x18040B908 (-unconditional_release_ref@-$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::com_ptr<GamingOverlayExperienceManager>::copy_ref(_QWORD *a1, __int64 a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  if ( *a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<GamingOverlayExperienceManager>::unconditional_release_ref();
    *a1 = a2;
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 208);
      while ( v4 >= 0 )
      {
        if ( (_DWORD)v4 != 0x7FFFFFFF )
        {
          v5 = v4;
          v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 208), v4 + 1, v4);
          if ( v5 != v4 )
            continue;
        }
        return;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (Microsoft::WRL::Details *)(2 * v4 + 16),
        (volatile int *)a2);
    }
  }
}
