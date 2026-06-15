/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlockerBuilder@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011997C
 * Callers:
 *     ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x180058F9C (-Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return SleepstudyHelperDestroyBlockerBuilder(v2, a2);
  return result;
}
