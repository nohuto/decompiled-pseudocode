/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800CFDBC
 * Callers:
 *     ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x1800CFEB0 (-AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$emplace_back@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$$QEAH@Z @ 0x1800CF9B4 (--$emplace_back@AEAV-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@-$vector@ULockedListEntry@-.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::AddInterface(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+38h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v11 = (struct _RTL_CRITICAL_SECTION *)a1;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 == v4 )
    goto LABEL_7;
  do
  {
    if ( *(_QWORD *)v5 == *a2 )
      break;
    v5 += 16LL;
  }
  while ( v5 != v4 );
  if ( v5 == v4 )
  {
LABEL_7:
    try
    {
      v9 = 1;
      std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::emplace_back<ATL::CComPtr<IAudioEndpointVolumeCallback> &,int>(
        (__int64 *)(a1 + 40),
        a2,
        (int *)&v9);
    }
    catch ( ... )
    {
      v9 = wil::details::in1diag3::Return_CaughtException(
             retaddr,
             (void *)0x89,
             (int)"avcore\\audiocore\\Include\\LockedList.h",
             v6);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v10);
      return v9;
    }
  }
  else
  {
    ++*(_DWORD *)(v5 + 8);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a2);
  return 0LL;
}
