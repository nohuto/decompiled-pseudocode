/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180002DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180003000 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x180003030 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180003080 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003F0A8 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int v5; // eax
  unsigned int v6; // edi
  int MixFormat; // edi
  void *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rdx
  void *v13; // r14
  __int64 i; // r8
  int v15; // esi
  CEndpointCharacteristics *v16; // rcx
  void *v17; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  int SessionConfiguration; // eax
  unsigned int v22; // ebx
  void *v23; // rcx
  HANDLE ProcessHeap; // rax
  void *v25; // rcx
  void *v26; // rcx
  int v27; // [rsp+20h] [rbp-50h]
  struct _GUID v28; // [rsp+40h] [rbp-30h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-20h]
  struct tWAVEFORMATEX *v30; // [rsp+58h] [rbp-18h] BYREF
  char v31; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  LPVOID pv; // [rsp+A0h] [rbp+30h] BYREF
  CEndpointCharacteristics *v34; // [rsp+B0h] [rbp+40h] BYREF
  char *v35; // [rsp+B8h] [rbp+48h] BYREF

  v34 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 584));
  v5 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                  + 24LL))(
         g_pEndpointCharacteristicsCache,
         Buffer,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x602,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5,
      (int)&v34);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
    return v6;
  }
  pv = 0LL;
  p_pv = &pv;
  v30 = 0LL;
  v31 = 1;
  v28 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(v34, eHostProcessConnector, &v28, &v30);
  if ( v31 )
  {
    v8 = *p_pv;
    *p_pv = v30;
    if ( v8 )
      CoTaskMemFree(v8);
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)MixFormat,
      (int)&v34);
    v23 = pv;
    pv = 0LL;
    if ( v23 )
      CoTaskMemFree(v23);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
    return (unsigned int)MixFormat;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v35 = (char *)this + 736;
    v9 = *((unsigned __int16 *)pv + 1);
    *((_DWORD *)this + 222) = v9;
    v10 = 4 * v9;
    if ( !is_mul_ok(v9, 4uLL) )
      v10 = -1LL;
    v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v13 = (void *)*((_QWORD *)this + 112);
    *((_QWORD *)this + 112) = v11;
    if ( v13 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v13);
      v11 = (void *)*((_QWORD *)this + 112);
    }
    if ( v11 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 222); i = (unsigned int)(i + 1) )
      {
        v12 = (unsigned int)i;
        *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * (unsigned int)i) = 1065353216;
      }
      if ( this != (CPerStreamVolumeAudioSession *)-736LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      v15 = a2 & 2;
      *((_BYTE *)this + 920) = v15 != 0;
      v16 = v34;
      if ( *((_DWORD *)v34 + 8) == 3 )
      {
        *((_BYTE *)this + 920) = 0;
        goto LABEL_17;
      }
      if ( !v15 )
      {
LABEL_17:
        v17 = pv;
        pv = 0LL;
        if ( v17 )
        {
          CoTaskMemFree(v17);
          v16 = v34;
        }
        if ( v16 )
          (*(void (__fastcall **)(CEndpointCharacteristics *, __int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, v12, i);
        return 0LL;
      }
      v19 = *((_QWORD *)this + 116);
      *((_QWORD *)this + 116) = 0LL;
      if ( v19 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, v12, i);
      v20 = CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(this, (struct IPropertyStore **)this + 116);
      if ( (int)wil::details::in1diag3::Log_IfFailedWithExpected(
                  retaddr,
                  (void *)0x634,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                  (const char *)v20,
                  2,
                  2) < 0
        || !*((_QWORD *)this + 116)
        || (SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this),
            v22 = SessionConfiguration,
            SessionConfiguration >= 0) )
      {
        v16 = v34;
        goto LABEL_17;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x638,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)SessionConfiguration,
        v27);
      v26 = pv;
      pv = 0LL;
      if ( v26 )
        CoTaskMemFree(v26);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
      return v22;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x614,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL,
        (int)&v34);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v35);
      v25 = pv;
      pv = 0LL;
      if ( v25 )
        CoTaskMemFree(v25);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
      return 2147942414LL;
    }
  }
}
