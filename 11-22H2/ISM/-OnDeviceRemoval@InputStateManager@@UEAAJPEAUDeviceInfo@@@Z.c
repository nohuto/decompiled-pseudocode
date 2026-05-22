/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800DB0B0
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x180079BF0 (-OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ @ 0x180018678 (-Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B674 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18004097C (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UICursorBroker@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A91C0 (--1-$ComPtr@UICursorBroker@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800B69DC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800DB954 (-erase@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceRemoval(RTL_SRWLOCK *this, struct DeviceInfo *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // r8
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  _QWORD *i; // rbx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  _QWORD *Ptr; // rcx
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+60h] [rbp+18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v6 = InputETW::Provider(v4);
    v5 = v6;
    if ( *(_DWORD *)v6 > 5u && (*((_BYTE *)v6 + 16) & 1) != 0 && (*((_QWORD *)v6 + 3) & 1LL) == *((_QWORD *)v6 + 3) )
    {
      v17 = (RTL_SRWLOCK *)*((int *)a2 + 1);
      v18 = *(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v6,
        byte_180231BCA,
        (__int64)v6,
        v7,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
  for ( i = this[10].Ptr; i != this[11].Ptr; i += 2 )
  {
    if ( *(_DWORD *)i == *(_DWORD *)a2 )
    {
      v16 = i[1];
      v9 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *, const struct _tlgProvider_t *))(*(_QWORD *)v16 + 40LL))(
             v16,
             a2,
             v5);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 384LL;
        goto LABEL_19;
      }
      Ptr = this[11].Ptr;
      while ( 1 )
      {
        i += 2;
        if ( i == Ptr )
          break;
        *((_DWORD *)i - 4) = *(_DWORD *)i;
        *(i - 1) = i[1];
      }
      this[11].Ptr = (char *)this[11].Ptr - 16;
      wil::srwlock::lock_exclusive(this + 21, &v17);
      std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::erase(&this[13]);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
      if ( !ISMScenarios::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1C,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
          v13);
      if ( *(_DWORD *)ISMScenarios::s_instance
        || (v9 = (*(__int64 (__fastcall **)(PVOID, struct DeviceInfo *))(*(_QWORD *)this[5].Ptr + 40LL))(
                   this[5].Ptr,
                   a2),
            v10 = v9,
            v9 >= 0) )
      {
        v10 = 0;
      }
      else
      {
        v11 = 402LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v9);
      }
      Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>(&v16);
      return v10;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)0x80004005LL);
  Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>(&v16);
  return 2147500037LL;
}
