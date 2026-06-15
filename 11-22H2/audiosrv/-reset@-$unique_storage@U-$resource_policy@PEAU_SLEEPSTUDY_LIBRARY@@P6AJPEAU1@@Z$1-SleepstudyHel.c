/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyLibrary@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_LIBRARY@@@Z @ 0x180059128
 * Callers:
 *     ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x180058F9C (-Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ.c)
 *     ??1CSleepStudyPowerReferenceManager@@QEAA@XZ @ 0x180119BA4 (--1CSleepStudyPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx
  __int64 v6; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    SleepstudyHelperDestroyLibrary(v2, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
