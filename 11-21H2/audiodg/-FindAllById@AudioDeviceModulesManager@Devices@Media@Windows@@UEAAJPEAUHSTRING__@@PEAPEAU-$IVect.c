/*
 * XREFs of ?FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x140076020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x14002504C (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllById(__int64 a1, HSTRING a2, _QWORD *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rdx
  void *v9; // rax
  bool v10; // dl
  __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // r9
  unsigned int v14; // esi
  __int64 *v15; // rcx
  __int64 v16; // rax
  HRESULT v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string1[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v25; // [rsp+80h] [rbp+40h] BYREF
  INT32 result; // [rsp+88h] [rbp+48h] BYREF

  v25 = 0;
  v6 = 0LL;
  v22 = 0LL;
  if ( !a3 )
  {
    v7 = -2147467261;
    v8 = 668LL;
LABEL_29:
    v13 = (unsigned int)v7;
    goto LABEL_30;
  }
  if ( !a2 )
  {
    v7 = -2147024809;
    v8 = 669LL;
    goto LABEL_29;
  }
  v7 = 0;
  v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9
    && (v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v9,
                v10)) != 0 )
  {
    v6 = v11;
    v22 = v11;
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v7 < 0 )
  {
    v8 = 671LL;
    goto LABEL_29;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 56LL))(
          *(_QWORD *)(a1 + 112),
          &v25);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v8 = 673LL;
    goto LABEL_30;
  }
  v14 = 0;
  if ( !v25 )
  {
LABEL_20:
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, a3);
    v7 = v18;
    if ( v18 >= 0 )
    {
      if ( *a3 )
      {
        v7 = 0;
        goto LABEL_32;
      }
      v7 = -2147467259;
      v8 = 694LL;
      goto LABEL_29;
    }
    v13 = (unsigned int)v18;
    v8 = 693LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v13);
    goto LABEL_32;
  }
  while ( 1 )
  {
    result = 0;
    v15 = *(__int64 **)(a1 + 112);
    v16 = *v15;
    v21 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v16 + 48))(v15, v14, &v21);
    v7 = v17;
    if ( v17 < 0 )
      break;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21 + 48LL))(v21, string1);
    v7 = v17;
    if ( v17 < 0 )
    {
      v19 = 684LL;
      goto LABEL_26;
    }
    v17 = WindowsCompareStringOrdinal(string1[0], a2, &result);
    v7 = v17;
    if ( v17 < 0 )
    {
      v19 = 685LL;
      goto LABEL_26;
    }
    if ( !result )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104LL))(v6, v21);
      v7 = v17;
      if ( v17 < 0 )
      {
        v19 = 689LL;
        goto LABEL_26;
      }
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
    if ( ++v14 >= v25 )
      goto LABEL_20;
  }
  v19 = 683LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v17);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
LABEL_32:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
  return (unsigned int)v7;
}
