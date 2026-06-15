/*
 * XREFs of ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400721F4
 * Callers:
 *     ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x14006D540 (-OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CBC (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070080 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x140071B28 (-GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x140071BC4 (-GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOEndpointNotificationsHandler::OnPropertyValueChanged(
        CAPOEndpointNotificationsHandler *this,
        struct _tagpropertykey *a2)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int FxPropertyStore; // eax
  __int64 v10; // rdx
  _QWORD *i; // rbx
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _GUID fmtid; // [rsp+30h] [rbp-20h] BYREF
  DWORD pid; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char *v17; // [rsp+90h] [rbp+40h] BYREF
  _DWORD *v18; // [rsp+98h] [rbp+48h]

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  LOBYTE(v17) = 0;
  *(_QWORD *)&fmtid.Data1 = v4;
  *(_QWORD *)fmtid.Data4 = &v17;
  LOBYTE(pid) = 1;
  v5 = operator new(0x18uLL);
  v18 = v5;
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_1400A8228;
  *((_QWORD *)v5 + 2) = v4;
  v13[0] = v4;
  v13[1] = v5;
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 101LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)v6);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v13);
    return v6;
  }
  memset_0(v4, 0, 0x48uLL);
  *v4 = 2;
  v8 = *((_QWORD *)this + 5);
  *((_QWORD *)v4 + 1) = v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  fmtid = a2->fmtid;
  pid = a2->pid;
  if ( pid == 5 && IsEqualGUID(&fmtid, &PKEY_AudioEndpoint_Disable_SysFx.fmtid) )
  {
    FxPropertyStore = CAPOEndpointNotificationsHandler::GetFxPropertyStore(this, (struct IPropertyStore **)v4 + 2);
    v6 = FxPropertyStore;
    if ( FxPropertyStore < 0 )
    {
      v10 = 86LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)FxPropertyStore);
      v7 = 107LL;
      goto LABEL_10;
    }
  }
  else
  {
    FxPropertyStore = CAPOEndpointNotificationsHandler::GetEndpointPropertyStore(this, (struct IPropertyStore **)v4 + 2);
    v6 = FxPropertyStore;
    if ( FxPropertyStore < 0 )
    {
      v10 = 90LL;
      goto LABEL_9;
    }
  }
  *(GUID *)(v4 + 6) = a2->fmtid;
  v4[10] = a2->pid;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v17 = (char *)this + 48;
  for ( i = (_QWORD *)*((_QWORD *)this + 11); i; i = (_QWORD *)*i )
    CAPOProcessingHostObject::QueueNotification(i[1], v13);
  if ( this != (CAPOEndpointNotificationsHandler *)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return 0LL;
}
