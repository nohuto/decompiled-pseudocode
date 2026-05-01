/*
 * XREFs of ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x180660A40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805E4658 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??$?0AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAH@Z @ 0x18065CB4C (--$-0AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@AEA.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@1@AEBH@Z @ 0x18065EAA0 (--$find@X@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@std@@U.c)
 *     ??1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F380 (--1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?SnapRect@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x1806632C0 (-SnapRect@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180665658 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 */

__int64 __fastcall CShellSnapComponent::GetAndDeleteSnapId(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  int v5; // edx
  __int64 v6; // rcx
  const unsigned __int8 *v7; // rdx
  __int64 appended; // rax
  _QWORD *v9; // r11
  __int64 v10; // rcx
  _QWORD *Ptr; // rdx
  PVOID v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  const char *v15; // r9
  __int64 result; // rax
  unsigned int v17; // [rsp+20h] [rbp-178h] BYREF
  __int64 v18; // [rsp+28h] [rbp-170h] BYREF
  volatile signed __int32 *v19[40]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v17 = a2;
  CSnapComponentTelemetry::GetAndDeleteSnapId::GetAndDeleteSnapId((__int64)v19, a2, (int *)&v17);
  AcquireSRWLockExclusive(this + 174);
  std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::find<void>(
    &this[176].Ptr,
    &v18,
    (const unsigned __int8 *)&v17);
  if ( (PVOID)v18 == this[177].Ptr )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64 *)v19,
      v5);
    if ( this != (RTL_SRWLOCK *)-1392LL )
      ReleaseSRWLockExclusive(this + 174);
    CSnapComponentTelemetry::GetAndDeleteSnapId::~GetAndDeleteSnapId(v19);
    result = 2147942487LL;
  }
  else
  {
    v7 = (const unsigned __int8 *)(v18 + 16);
    *(_OWORD *)a3 = *(_OWORD *)(v18 + 20);
    appended = std::_Fnv1a_append_bytes(v6, v7, 4uLL);
    v10 = 2 * (appended & (__int64)this[182].Ptr);
    Ptr = this[179].Ptr;
    if ( (_QWORD *)Ptr[2 * (appended & (__int64)this[182].Ptr) + 1] == v9 )
    {
      if ( (_QWORD *)Ptr[2 * (appended & (__int64)this[182].Ptr)] == v9 )
      {
        v12 = this[177].Ptr;
        Ptr[v10] = v12;
      }
      else
      {
        v12 = (PVOID)v9[1];
      }
      Ptr[v10 + 1] = v12;
    }
    else if ( (_QWORD *)Ptr[2 * (appended & (__int64)this[182].Ptr)] == v9 )
    {
      Ptr[2 * (appended & (__int64)this[182].Ptr)] = *v9;
    }
    v13 = *v9;
    --this[178].Ptr;
    *(_QWORD *)v9[1] = v13;
    *(_QWORD *)(v13 + 8) = v9[1];
    std::_Deallocate<16,0>(v9, 0x28uLL);
    CShellSnapComponent::UpdateLaunchSnappedBehavior(&this[-16]);
    CSnapComponentTelemetry::GetAndDeleteSnapId::SnapRect((CSnapComponentTelemetry::GetAndDeleteSnapId *)v19, a3);
    wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64 *)v19,
      v14);
    if ( this != (RTL_SRWLOCK *)-1392LL )
      ReleaseSRWLockExclusive(this + 174);
    CSnapComponentTelemetry::GetAndDeleteSnapId::~GetAndDeleteSnapId(v19);
    result = 0LL;
  }
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v17 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0x3A7,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              v15);
      result = v17;
      continue;
    }
    break;
  }
  return result;
}
