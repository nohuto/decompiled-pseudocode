/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWINEVENTHOOK__@@@Z @ 0x1800E5150
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::reset(
        HWINEVENTHOOK *a1,
        HWINEVENTHOOK a2)
{
  HWINEVENTHOOK v4; // rsi
  DWORD LastError; // ebx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    UnhookWinEvent(v4);
    SetLastError(LastError);
  }
  *a1 = a2;
}
