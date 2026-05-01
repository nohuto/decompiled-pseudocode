/*
 * XREFs of ?GetAndDeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@PEAURect@Foundation@Windows@@@Z @ 0x180221E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@std@@@std@@@1@V21@@Z @ 0x180220BCC (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUhstring@winrt@@USnapL.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x180220CE0 (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V-$_Uhash.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180665658 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShellSnapComponent::GetAndDeleteSnapLaunchRect(
        RTL_SRWLOCK *this,
        RTL_SRWLOCK *a2,
        struct Windows::Foundation::Rect *a3)
{
  __int64 v5; // r8
  const char *v6; // r9
  __int64 result; // rax
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  void *v11; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12 = a2;
  v11 = 0LL;
  try
  {
    winrt::hstring::operator=((volatile signed __int32 **)&v11, (winrt::impl **)&v12, (unsigned int)a3);
    wil::srwlock::lock_exclusive(this + 174, &v12);
    std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::find<void>(
      &this[203].Ptr,
      v13,
      (__int64)&v11);
    v5 = v13[0];
    if ( (PVOID)v13[0] == this[204].Ptr )
    {
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
      winrt::hstring::~hstring(&v11);
      result = 2147943568LL;
    }
    else
    {
      v8 = (float)*(int *)(v13[0] + 28LL);
      v9 = (float)(*(_DWORD *)(v13[0] + 32LL) - *(_DWORD *)(v13[0] + 24LL));
      v10 = (float)(*(_DWORD *)(v13[0] + 36LL) - *(_DWORD *)(v13[0] + 28LL));
      *(float *)a3 = (float)*(int *)(v13[0] + 24LL);
      *((float *)a3 + 1) = v8;
      *((float *)a3 + 2) = v9;
      *((float *)a3 + 3) = v10;
      std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>>>,0>(
        &this[203].Ptr,
        v13,
        v5);
      CShellSnapComponent::UpdateLaunchSnappedBehavior(&this[-16]);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
      winrt::hstring::~hstring(&v11);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3F2,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           v6);
  }
  return result;
}
