/*
 * XREFs of ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x140069BD4
 * Callers:
 *     ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x140065E60 (-OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x1400681A0 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x140069804 (-GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x1400698A8 (-GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOEndpointNotificationsHandler::OnPropertyValueChanged(
        struct _RTL_CRITICAL_SECTION *this,
        struct _tagpropertykey *a2)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // rsi
  PRTL_CRITICAL_SECTION_DEBUG i; // rbx
  __int64 v7; // rdx
  ULONG_PTR SpinCount; // rcx
  struct IPropertyStore **v9; // rdx
  __int64 v10; // rax
  int EndpointPropertyStore; // eax
  __int64 v12; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  GUID fmtid; // [rsp+30h] [rbp-20h]
  char v16; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+90h] [rbp+40h] BYREF
  _DWORD *v19; // [rsp+98h] [rbp+48h]

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  LOBYTE(v18) = 0;
  *(_QWORD *)&fmtid.Data1 = v4;
  *(_QWORD *)fmtid.Data4 = &v18;
  v16 = 1;
  v5 = operator new(0x18uLL);
  v19 = v5;
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_14009CCF8;
  *((_QWORD *)v5 + 2) = v4;
  v14[0] = v4;
  v14[1] = v5;
  if ( !v4 )
  {
    LODWORD(i) = -2147024882;
    v7 = 102LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)(unsigned int)i);
    goto LABEL_17;
  }
  memset_0(v4, 0, 0x48uLL);
  *v4 = 2;
  SpinCount = this[1].SpinCount;
  *((_QWORD *)v4 + 1) = SpinCount;
  (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(SpinCount);
  v9 = (struct IPropertyStore **)(v4 + 4);
  fmtid = a2->fmtid;
  if ( a2->pid != 5 )
    goto LABEL_9;
  v10 = *(_QWORD *)&fmtid.Data1 - *(_QWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data1;
  if ( *(_QWORD *)&fmtid.Data1 == *(_QWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data1 )
    v10 = *(_QWORD *)fmtid.Data4 - *(_QWORD *)PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data4;
  if ( v10 )
  {
LABEL_9:
    EndpointPropertyStore = CAPOEndpointNotificationsHandler::GetEndpointPropertyStore(
                              (CAPOEndpointNotificationsHandler *)this,
                              v9);
    LODWORD(i) = EndpointPropertyStore;
    if ( EndpointPropertyStore < 0 )
    {
      v12 = 91LL;
      goto LABEL_11;
    }
  }
  else
  {
    EndpointPropertyStore = CAPOEndpointNotificationsHandler::GetFxPropertyStore(
                              (CAPOEndpointNotificationsHandler *)this,
                              v9);
    LODWORD(i) = EndpointPropertyStore;
    if ( EndpointPropertyStore < 0 )
    {
      v12 = 87LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)EndpointPropertyStore);
      v7 = 108LL;
      goto LABEL_12;
    }
  }
  *(GUID *)(v4 + 6) = a2->fmtid;
  v4[10] = a2->pid;
  EnterCriticalSection(this + 2);
  v18 = this + 2;
  for ( i = this[3].DebugInfo; i; i = *(PRTL_CRITICAL_SECTION_DEBUG *)&i->Type )
    CAPOProcessingHostObject::QueueNotification(i->CriticalSection, v14);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
LABEL_17:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return (unsigned int)i;
}
