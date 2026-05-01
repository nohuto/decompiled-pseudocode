/*
 * XREFs of ?copy_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXPEAVCActionCenterExperienceManager@@@Z @ 0x180071CD8
 * Callers:
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x1801DC300 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DCA70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x18007376C (-unconditional_release_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

void __fastcall winrt::com_ptr<CActionCenterExperienceManager>::copy_ref(_QWORD *a1, __int64 a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  if ( *a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref();
    *a1 = a2;
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 104);
      while ( v4 >= 0 )
      {
        if ( (_DWORD)v4 != 0x7FFFFFFF )
        {
          v5 = v4;
          v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 104), v4 + 1, v4);
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
