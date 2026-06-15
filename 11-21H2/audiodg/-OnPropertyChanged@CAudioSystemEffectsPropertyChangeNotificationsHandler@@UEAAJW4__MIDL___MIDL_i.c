/*
 * XREFs of ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x14006AA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x1400681A0 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@PEAPEAUIPropertyStore@@@Z @ 0x14006A840 (-GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_it.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::OnPropertyChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rsi
  __int64 **i; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int PropertyStore; // eax
  int v14[2]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v15; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = operator new(0x18uLL);
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = off_14009CD88;
  *((_QWORD *)v7 + 2) = v6;
  *(_QWORD *)v14 = v6;
  v15 = v7;
  if ( !v6 )
  {
    LODWORD(i) = -2147024882;
    v9 = 2147942414LL;
    v10 = 118LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      (const char *)v9);
    goto LABEL_10;
  }
  memset_0(v6, 0, 0x48uLL);
  *v6 = 3;
  v6[8] = a2;
  v11 = *(_QWORD *)(a1 + 80);
  *((_QWORD *)v6 + 1) = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  PropertyStore = CAudioSystemEffectsPropertyChangeNotificationsHandler::GetPropertyStore(
                    (_QWORD *)(a1 - 8),
                    a2,
                    (_QWORD *)v6 + 5);
  LODWORD(i) = PropertyStore;
  if ( PropertyStore < 0 )
  {
    v9 = (unsigned int)PropertyStore;
    v10 = 125LL;
    goto LABEL_5;
  }
  *((_OWORD *)v6 + 1) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v6 + 3) = *(_OWORD *)a3;
  v6[16] = *(_DWORD *)(a3 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
  v17 = (struct _RTL_CRITICAL_SECTION *)(a1 + 88);
  for ( i = *(__int64 ***)(a1 + 168); i; i = (__int64 **)*i )
    CAPOProcessingHostObject::QueueNotification((struct _RTL_CRITICAL_SECTION *)i[1], v14);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
LABEL_10:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  return (unsigned int)i;
}
