/*
 * XREFs of ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x18003A9B8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_BLOCKER@@@Z @ 0x18003AB8C (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18003AC34 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4E24 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker(_QWORD *a1, __int64 a2, __int64 a3)
{
  const WCHAR *ClientFriendlyName; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  std::_Ref_count_base *v14; // rcx
  int active; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // [rsp+38h] [rbp-50h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( !a1[1] || !*a1 )
    return 0LL;
  ClientFriendlyName = CAudioStream::GetClientFriendlyName(*(CAudioStream **)(a2 + 168));
  RtlInitUnicodeString(&DestinationString, ClientFriendlyName);
  v21 = *(_OWORD *)(a2 + 248);
  v7 = SleepstudyHelperCreateBlockerFromGuid(*a1, a1 + 2, &v21, &DestinationString);
  if ( v7 < 0 )
    return (unsigned int)wil::details::in1diag3::Return_NtStatus(
                           retaddr,
                           (void *)0xE8,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                           (const char *)(unsigned int)v7,
                           7);
  v8 = SleepstudyHelperSetBlockerParentHandle(0LL, a1[1]);
  if ( v8 < 0 )
    return (unsigned int)wil::details::in1diag3::Return_NtStatus(
                           retaddr,
                           (void *)0xEA,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                           (const char *)(unsigned int)v8,
                           7);
  v19 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
    &v19,
    0LL);
  v9 = SleepstudyHelperBuildBlocker(0LL, &v19);
  if ( v9 < 0 )
  {
    v17 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0xED,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v9,
            7);
    if ( v19 )
      SleepstudyHelperDestroyBlocker();
    return v17;
  }
  else
  {
    v10 = (volatile signed __int32 *)operator new(0x18uLL);
    v11 = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 2) = 1;
      *((_DWORD *)v10 + 3) = 1;
      *(_QWORD *)v10 = &std::_Ref_count_obj2<CSleepStudyPowerReference>::`vftable';
      *((_QWORD *)v10 + 2) = 0LL;
      v12 = (__int64)(v10 + 4);
      v13 = (__int64)(v10 + 4);
      if ( v10 == (volatile signed __int32 *)-16LL )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF3,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)0x8007000ELL);
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)0xFFFFFFFFFFFFFFF0LL);
        if ( v19 )
          SleepstudyHelperDestroyBlocker();
        return 2147942414LL;
      }
    }
    else
    {
      v11 = 0LL;
      v12 = 16LL;
      v13 = 16LL;
    }
    if ( (__int64 *)v12 != &v19 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
        v12,
        v19);
      v19 = 0LL;
    }
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    *(_QWORD *)a3 = v13;
    v14 = *(std::_Ref_count_base **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v11;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    active = SleepstudyHelperBlockerActiveReference(**(_QWORD **)a3);
    if ( active >= 0 )
    {
      if ( v11 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
      if ( v19 )
        SleepstudyHelperDestroyBlocker();
      return 0LL;
    }
    v18 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0xF7,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)active,
            7);
    if ( v11 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
    if ( v19 )
      SleepstudyHelperDestroyBlocker();
    return v18;
  }
}
