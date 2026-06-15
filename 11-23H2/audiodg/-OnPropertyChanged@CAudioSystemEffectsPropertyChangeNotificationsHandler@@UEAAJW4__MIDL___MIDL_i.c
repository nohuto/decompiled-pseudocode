/*
 * XREFs of ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x140072FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064C6C (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070030 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@PEAPEAUIPropertyStore@@@Z @ 0x140072DD0 (-GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_it.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::OnPropertyChanged(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 *v6; // rdi
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int PropertyStore; // eax
  _QWORD *i; // rbx
  int v15[2]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v16; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (__int64 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = operator new(0x18uLL);
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = off_1400A8290;
  *((_QWORD *)v7 + 2) = v6;
  *(_QWORD *)v15 = v6;
  v16 = v7;
  if ( !v6 )
  {
    v8 = -2147024882;
    v9 = 2147942414LL;
    v10 = 118LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      (const char *)v9);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v15);
    return v8;
  }
  memset_0(v6, 0, 0x48uLL);
  *(_DWORD *)v6 = 3;
  *((_DWORD *)v6 + 8) = a2;
  v11 = *(_QWORD *)(a1 + 80);
  v6[1] = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  PropertyStore = CAudioSystemEffectsPropertyChangeNotificationsHandler::GetPropertyStore(
                    (__int64 *)(a1 - 8),
                    a2,
                    v6 + 5);
  v8 = PropertyStore;
  if ( PropertyStore < 0 )
  {
    v9 = (unsigned int)PropertyStore;
    v10 = 125LL;
    goto LABEL_5;
  }
  *((_OWORD *)v6 + 1) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v6 + 3) = *(_OWORD *)a3;
  *((_DWORD *)v6 + 16) = *(_DWORD *)(a3 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
  for ( i = *(_QWORD **)(a1 + 168); i; i = (_QWORD *)*i )
    CAPOProcessingHostObject::QueueNotification(i[1], v15);
  if ( a1 != -88 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  return 0LL;
}
