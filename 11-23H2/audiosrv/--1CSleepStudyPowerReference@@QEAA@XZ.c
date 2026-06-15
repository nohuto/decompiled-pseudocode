/*
 * XREFs of ??1CSleepStudyPowerReference@@QEAA@XZ @ 0x18003A97C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCSleepStudyPowerReference@@@std@@EEAAXXZ @ 0x18004BB40 (-_Destroy@-$_Ref_count_obj2@VCSleepStudyPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_BLOCKER@@@Z @ 0x18003AB8C (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 */

void __fastcall CSleepStudyPowerReference::~CSleepStudyPowerReference(CSleepStudyPowerReference *this)
{
  SleepstudyHelperBlockerActiveDereference(*(_QWORD *)this);
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
    this,
    0LL);
  if ( *(_QWORD *)this )
    SleepstudyHelperDestroyBlocker();
}
