/*
 * XREFs of ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x180056590
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180056398 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_BLOCKER@@@Z @ 0x1800566FC (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyLibrary@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_LIBRARY@@@Z @ 0x180056744 (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyLibrary@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18005678C (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1-SleepstudyHelperD.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlockerBuilder@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800567A8 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1-Sleepstud.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800567C4 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHelperD.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4278 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSleepStudyPowerReferenceManager::Initialize(GUID *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-60h]
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  GUID v12; // [rsp+58h] [rbp-28h] BYREF
  GUID v13; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v2 = 0;
  v8 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::reset(
    &v8,
    0LL);
  v3 = SleepstudyHelperCreateLibrary(7369325LL, &v8);
  if ( v3 < 0 )
  {
    v2 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xAA,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
           (const char *)(unsigned int)v3,
           v7);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"AudioSrv virtual power reference");
    v13 = GUID_SLEEPSTUDY_BLOCKER_NOCS_PHASE;
    v12 = GUID_AUDIOSRV_VIRTUAL_POWER_REFERENCE_BLOCKER;
    v10 = 0LL;
    v4 = SleepstudyHelperCreateBlockerFromGuid(v8, &v13, &v12, &DestinationString);
    if ( v4 < 0 )
    {
      v2 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xBC,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
             (const char *)(unsigned int)v4,
             7);
    }
    else
    {
      v9 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
        &v9,
        0LL);
      v5 = SleepstudyHelperBuildBlocker(v10, &v9);
      if ( v5 < 0 )
      {
        v2 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xBF,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
               (const char *)(unsigned int)v5,
               7);
      }
      else
      {
        v10 = 0LL;
        if ( this->Data4 != (unsigned __int8 *)&v9 )
        {
          wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
            this->Data4,
            v9);
          v9 = 0LL;
        }
        if ( this != (GUID *)&v8 )
        {
          wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::reset(
            this,
            v8);
          v8 = 0LL;
        }
        this[1] = v12;
      }
      wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>(&v9);
    }
    wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v10);
  }
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>(&v8);
  return v2;
}
