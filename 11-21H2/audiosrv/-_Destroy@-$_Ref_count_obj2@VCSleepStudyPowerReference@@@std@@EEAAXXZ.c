/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCSleepStudyPowerReference@@@std@@EEAAXXZ @ 0x18000C2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Ref_count_obj2<CSleepStudyPowerReference>::_Destroy(__int64 a1)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  SleepstudyHelperBlockerActiveDereference(*(_QWORD *)(a1 + 16));
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    LastError = GetLastError();
    SleepstudyHelperDestroyBlocker(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
