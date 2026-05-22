/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800B2D40
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x18004F220 (-OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800B2EA0 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B367C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceRemoval(InputStateManager *this, struct DeviceInfo *a2)
{
  __int64 i; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  const char *v11; // r9
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  InputETW::InputStateManager::OnDeviceRemoval(a2);
  for ( i = *((_QWORD *)this + 10); ; i += 16LL )
  {
    if ( i == *((_QWORD *)this + 11) )
    {
      v6 = -2147467259;
      v7 = 2147500037LL;
      v8 = 405LL;
      goto LABEL_17;
    }
    if ( *(_DWORD *)i == *(_DWORD *)a2 )
      break;
  }
  v15 = *(_QWORD *)(i + 8);
  v5 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v15 + 40LL))(v15, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = *((_QWORD *)this + 11);
    v10 = i + 16;
    if ( v10 != v9 )
    {
      do
      {
        *(_DWORD *)(v10 - 16) = *(_DWORD *)v10;
        *(_QWORD *)(v10 - 8) = *(_QWORD *)(v10 + 8);
        v10 += 16LL;
      }
      while ( v10 != v9 );
      v9 = *((_QWORD *)this + 11);
    }
    *((_QWORD *)this + 11) = v9 - 16;
    std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
      (char *)this + 104,
      a2);
    if ( !ISMScenarios::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        28LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
        v11);
    if ( *(_DWORD *)ISMScenarios::s_instance
      || (v12 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 40LL))(
                  *((_QWORD *)this + 5),
                  a2),
          v6 = v12,
          v12 >= 0) )
    {
      v6 = 0;
      goto LABEL_18;
    }
    v7 = (unsigned int)v12;
    v8 = 397LL;
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 383LL;
  }
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)v7);
LABEL_18:
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v15);
  return v6;
}
