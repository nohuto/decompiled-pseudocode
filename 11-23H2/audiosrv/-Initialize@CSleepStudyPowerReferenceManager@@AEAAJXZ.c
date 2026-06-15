/*
 * XREFs of ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x180058FAC
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005889C (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_BLOCKER@@@Z @ 0x18003AB8C (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyLibrary@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_LIBRARY@@@Z @ 0x180059138 (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4DD4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180119908 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-S.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlockerBuilder@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011992C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyLibrary@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180119950 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1-S.c)
 */

__int64 __fastcall CSleepStudyPowerReferenceManager::Initialize(CSleepStudyPowerReferenceManager *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  GUID v14; // [rsp+58h] [rbp-28h] BYREF
  GUID v15; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v2 = 0;
  v11 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::reset(
    &v11,
    0LL);
  v3 = SleepstudyHelperCreateLibrary(7369325LL, &v11);
  if ( v3 == -1073741637 )
    goto LABEL_20;
  if ( v3 < 0 )
  {
    v2 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xB2,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
           (const char *)(unsigned int)v3,
           v9);
LABEL_20:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>>(&v11);
    return v2;
  }
  RtlInitUnicodeString(&DestinationString, L"AudioSrv virtual power reference");
  v12 = 0LL;
  v15 = GUID_SLEEPSTUDY_BLOCKER_NOCS_PHASE;
  v14 = GUID_AUDIOSRV_VIRTUAL_POWER_REFERENCE_BLOCKER;
  v4 = SleepstudyHelperCreateBlockerFromGuid(v11, &v15, &v14, &DestinationString);
  if ( v4 < 0 )
  {
    v2 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xC5,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
           (const char *)(unsigned int)v4,
           7);
LABEL_19:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>>(&v12);
    goto LABEL_20;
  }
  v10 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
    &v10,
    0LL);
  v5 = SleepstudyHelperBuildBlocker(v12, &v10);
  if ( v5 < 0 )
  {
    v2 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xC8,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
           (const char *)(unsigned int)v5,
           7);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>>(&v10);
    goto LABEL_19;
  }
  v12 = 0LL;
  if ( (__int64 *)((char *)this + 8) == &v10 )
  {
    v7 = v10;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
      (__int64 *)this + 1,
      v10);
    v7 = 0LL;
    v10 = 0LL;
  }
  if ( this != (CSleepStudyPowerReferenceManager *)&v11 )
  {
    wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::reset(
      this,
      v11);
    v7 = v10;
    v11 = 0LL;
  }
  *((GUID *)this + 1) = v14;
  if ( v7 )
    SleepstudyHelperDestroyBlocker(v7);
  if ( v12 )
    SleepstudyHelperDestroyBlockerBuilder(v12, v6);
  if ( v11 )
    SleepstudyHelperDestroyLibrary(v11, v6);
  return 0LL;
}
