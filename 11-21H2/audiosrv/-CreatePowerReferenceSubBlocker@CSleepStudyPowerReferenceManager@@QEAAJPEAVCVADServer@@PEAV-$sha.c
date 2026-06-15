/*
 * XREFs of ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x1800225A0
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlockerBuilder@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800567A8 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1-Sleepstud.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800567C4 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHelperD.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4278 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  const WCHAR *v7; // rdi
  __int64 v8; // rcx
  const WCHAR *v9; // rax
  const wchar_t *v10; // rax
  wchar_t *v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v16; // rax
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r13
  std::_Ref_count_base *v23; // rcx
  int active; // eax
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  DWORD LastError; // edi
  unsigned int v30; // edi
  __int64 v31; // [rsp+30h] [rbp-78h] BYREF
  __int64 v32; // [rsp+38h] [rbp-70h] BYREF
  __int64 v33; // [rsp+40h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  __int128 v35; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !a1[1] || !*a1 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 192);
  v7 = 0LL;
  v8 = *(_QWORD *)(v6 + 72);
  if ( v8 )
  {
    v9 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
    v7 = v9;
    if ( !v9 || !*v9 )
    {
      v10 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 72) + 80LL))(*(_QWORD *)(v6 + 72));
      if ( v10 )
      {
        if ( *v10 )
        {
          v11 = wcsrchr(v10, 0x5Cu);
          if ( v11 )
            v7 = v11 + 1;
          else
            v7 = 0LL;
        }
      }
    }
  }
  RtlInitUnicodeString(&DestinationString, v7);
  v35 = *(_OWORD *)(a2 + 280);
  v31 = 0LL;
  v12 = SleepstudyHelperCreateBlockerFromGuid(*a1, a1 + 2, &v35, &DestinationString);
  if ( v12 < 0 )
  {
    v26 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0xDF,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v12,
            7);
    wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v31);
    return v26;
  }
  v13 = SleepstudyHelperSetBlockerParentHandle(v31, a1[1]);
  if ( v13 < 0 )
  {
    v27 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0xE1,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v13,
            7);
    wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v31);
    return v27;
  }
  v32 = 0LL;
  v14 = SleepstudyHelperBuildBlocker(v31, &v32);
  if ( v14 < 0 )
  {
    v28 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0xE4,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v14,
            7);
    wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>(&v32);
    wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v31);
    return v28;
  }
  v31 = 0LL;
  ProcessHeap = GetProcessHeap();
  v16 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v17 = v16;
  if ( v16 )
  {
    *((_DWORD *)v16 + 2) = 1;
    *((_DWORD *)v16 + 3) = 1;
    *(_QWORD *)v16 = &std::_Ref_count_obj2<CSleepStudyPowerReference>::`vftable';
    *((_QWORD *)v16 + 2) = 0LL;
    v18 = (__int64)(v16 + 4);
    v19 = (__int64)(v16 + 4);
    v20 = (__int64)(v16 + 4);
    v33 = (__int64)(v17 + 4);
    if ( v17 == (volatile signed __int32 *)-16LL )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        (const char *)0x8007000ELL,
        7);
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)0xFFFFFFFFFFFFFFF0LL);
      wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>(&v32);
      wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v31);
      return 2147942414LL;
    }
  }
  else
  {
    v17 = 0LL;
    v18 = 16LL;
    v19 = 16LL;
    v20 = 16LL;
    v33 = 16LL;
  }
  if ( (__int64 *)v18 != &v32 )
  {
    v21 = v32;
    v22 = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 )
    {
      LastError = GetLastError();
      SleepstudyHelperDestroyBlocker(v22);
      SetLastError(LastError);
      v20 = v33;
    }
    *(_QWORD *)v18 = v21;
    v32 = 0LL;
  }
  if ( v17 )
    _InterlockedIncrement(v17 + 2);
  *a3 = v19;
  v23 = (std::_Ref_count_base *)a3[1];
  a3[1] = (__int64)v17;
  if ( v23 )
  {
    std::_Ref_count_base::_Decref(v23);
    v20 = *a3;
  }
  active = SleepstudyHelperBlockerActiveReference(*(_QWORD *)v20);
  if ( active >= 0 )
  {
    if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v17);
    }
    if ( v32 )
      SleepstudyHelperDestroyBlocker(v32);
    if ( v31 )
      SleepstudyHelperDestroyBlockerBuilder();
    return 0LL;
  }
  v30 = wil::details::in1diag3::Return_NtStatus(
          retaddr,
          (void *)0xEE,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)active,
          7);
  if ( v17 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v17);
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>(&v32);
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v31);
  return v30;
}
