/*
 * XREFs of ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x18022F068
 * Callers:
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::operator() @ 0x1801B09E4 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--operator().c)
 * Callees:
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1805F4A0C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
        TouchKeyboardExperienceManager *this,
        int a2,
        bool a3,
        bool a4)
{
  if ( a2 == *((_DWORD *)this + 191) )
  {
    LOBYTE(this) = a3;
    IhmNotification::SendKeyboardSetVisible(this, a4, a3);
  }
  return 0LL;
}
