/*
 * XREFs of ?copy_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXPEAVCControlCenterExperienceManager@@@Z @ 0x18042695C
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DE790 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DFD20 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1804275F8 (-unconditional_release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::com_ptr<CControlCenterExperienceManager>::copy_ref(_QWORD *a1, __int64 a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  if ( *a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<CControlCenterExperienceManager>::unconditional_release_ref();
    *a1 = a2;
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 96);
      while ( v4 >= 0 )
      {
        if ( (_DWORD)v4 != 0x7FFFFFFF )
        {
          v5 = v4;
          v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 96), v4 + 1, v4);
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
