/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x1400833D0
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140088CA0 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140021B70 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  unsigned __int64 v10; // r9
  __int64 v11; // rbx
  void *v12; // rax
  bool v13; // dl
  __int64 v14; // rax
  int v15; // eax
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
    v9 = 716LL;
LABEL_5:
    v10 = (unsigned int)v8;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v10);
    goto LABEL_36;
  }
  if ( !a2 )
  {
    v8 = -2147024809;
    v9 = 717LL;
    goto LABEL_5;
  }
  v11 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v12 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12
    && (v14 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v12,
                v13)) != 0 )
  {
    v11 = v14;
    v26 = v14;
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v8 < 0 )
  {
    v9 = 719LL;
    goto LABEL_5;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 56LL))(
          *(_QWORD *)(a1 + 112),
          &v29);
  v8 = v15;
  if ( v15 < 0 )
  {
    v10 = (unsigned int)v15;
    v9 = 721LL;
    goto LABEL_6;
  }
  v16 = 0;
  if ( !v29 )
  {
LABEL_31:
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 64LL))(v11, a4);
    v8 = v21;
    if ( v21 < 0 )
    {
      v10 = (unsigned int)v21;
      v9 = 747LL;
      goto LABEL_6;
    }
    if ( *a4 )
    {
      v8 = 0;
      goto LABEL_36;
    }
    v8 = -2147467259;
    v9 = 748LL;
    goto LABEL_5;
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
      v20 = 733LL;
      goto LABEL_30;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 64LL))(v25, &v23);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 734LL;
      goto LABEL_30;
    }
    if ( v23 == a3 )
    {
      v19 = WindowsCompareStringOrdinal(string1, a2, &result);
      v8 = v19;
      if ( v19 < 0 )
      {
        v20 = 738LL;
        goto LABEL_30;
      }
      if ( !result )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 104LL))(v11, v25);
        v8 = v19;
        if ( v19 < 0 )
        {
          v20 = 742LL;
          goto LABEL_30;
        }
      }
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v25);
    if ( ++v16 >= v29 )
      goto LABEL_31;
  }
  v20 = 732LL;
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v19);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v25);
LABEL_36:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v26);
  return (unsigned int)v8;
}
