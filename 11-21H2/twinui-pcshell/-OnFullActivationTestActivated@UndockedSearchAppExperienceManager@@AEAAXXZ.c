/*
 * XREFs of ?OnFullActivationTestActivated@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019F920
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E788 (-CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::OnFullActivationTestActivated(
        UndockedSearchAppExperienceManager *this)
{
  if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 91) )
    UndockedSearchAppExperienceManager::CompleteFullActivationTest((struct _TP_TIMER **)this);
}
