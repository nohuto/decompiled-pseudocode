/*
 * XREFs of ?HandleEditControlLineTypeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801848E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlLineTypeChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 result; // rax

  *((_DWORD *)this + 52) = a2;
  result = 0LL;
  *(_DWORD *)a3 = 0;
  return result;
}
