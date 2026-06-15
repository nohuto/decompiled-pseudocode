/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x140076260
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14007BA10 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x14002504C (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
        __int64 a1,
        HSTRING a2,
        int a3,
        _QWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rbx
  void *v11; // rax
  bool v12; // dl
  __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v15; // r9
  unsigned int v16; // esi
  __int64 *v17; // rcx
  __int64 v18; // rax
  HRESULT v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  int v23; // [rsp+20h] [rbp-20h] BYREF
  INT32 result; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h] BYREF
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v29; // [rsp+88h] [rbp+48h] BYREF

  v29 = 0;
  v26 = 0LL;
  if ( !a4 )
  {
    v8 = -2147467261;
    v9 = 727LL;
LABEL_33:
    v15 = (unsigned int)v8;
    goto LABEL_34;
  }
  if ( !a2 )
  {
    v8 = -2147024809;
    v9 = 728LL;
    goto LABEL_33;
  }
  v10 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v11 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11
    && (v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v11,
                v12)) != 0 )
  {
    v10 = v13;
    v26 = v13;
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v8 < 0 )
  {
    v9 = 730LL;
    goto LABEL_33;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 56LL))(
          *(_QWORD *)(a1 + 112),
          &v29);
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v9 = 732LL;
    goto LABEL_34;
  }
  v16 = 0;
  if ( !v29 )
  {
LABEL_29:
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 64LL))(v10, a4);
    v8 = v21;
    if ( v21 >= 0 )
    {
      if ( *a4 )
      {
        v8 = 0;
        goto LABEL_36;
      }
      v8 = -2147467259;
      v9 = 759LL;
      goto LABEL_33;
    }
    v15 = (unsigned int)v21;
    v9 = 758LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v15);
    goto LABEL_36;
  }
  while ( 1 )
  {
    v25 = 0LL;
    result = 0;
    v23 = 0;
    v17 = *(__int64 **)(a1 + 112);
    v18 = *v17;
    v25 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v18 + 48))(v17, v16, &v25);
    v8 = v19;
    if ( v19 < 0 )
      break;
    v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 48LL))(v25, &string1);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 744LL;
      goto LABEL_28;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 64LL))(v25, &v23);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 745LL;
      goto LABEL_28;
    }
    if ( v23 == a3 )
    {
      v19 = WindowsCompareStringOrdinal(string1, a2, &result);
      v8 = v19;
      if ( v19 < 0 )
      {
        v20 = 749LL;
        goto LABEL_28;
      }
      if ( !result )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 104LL))(v10, v25);
        v8 = v19;
        if ( v19 < 0 )
        {
          v20 = 753LL;
          goto LABEL_28;
        }
      }
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v25);
    if ( ++v16 >= v29 )
      goto LABEL_29;
  }
  v20 = 743LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v19);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v25);
LABEL_36:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
  return (unsigned int)v8;
}
