/*
 * XREFs of ?FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x140083190
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140021B70 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllById(__int64 a1, HSTRING a2, _QWORD *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  void *v10; // rax
  bool v11; // dl
  __int64 v12; // rax
  int v13; // eax
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
    v8 = 657LL;
LABEL_5:
    v9 = (unsigned int)v7;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v9);
    goto LABEL_32;
  }
  if ( !a2 )
  {
    v7 = -2147024809;
    v8 = 658LL;
    goto LABEL_5;
  }
  v7 = 0;
  v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10
    && (v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v10,
                v11)) != 0 )
  {
    v6 = v12;
    v22 = v12;
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v7 < 0 )
  {
    v8 = 660LL;
    goto LABEL_5;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 56LL))(
          *(_QWORD *)(a1 + 112),
          &v25);
  v7 = v13;
  if ( v13 < 0 )
  {
    v9 = (unsigned int)v13;
    v8 = 662LL;
    goto LABEL_6;
  }
  v14 = 0;
  if ( !v25 )
  {
LABEL_22:
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, a3);
    v7 = v18;
    if ( v18 < 0 )
    {
      v9 = (unsigned int)v18;
      v8 = 682LL;
      goto LABEL_6;
    }
    if ( *a3 )
    {
      v7 = 0;
      goto LABEL_32;
    }
    v7 = -2147467259;
    v8 = 683LL;
    goto LABEL_5;
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
      v19 = 673LL;
      goto LABEL_28;
    }
    v17 = WindowsCompareStringOrdinal(string1[0], a2, &result);
    v7 = v17;
    if ( v17 < 0 )
    {
      v19 = 674LL;
      goto LABEL_28;
    }
    if ( !result )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104LL))(v6, v21);
      v7 = v17;
      if ( v17 < 0 )
      {
        v19 = 678LL;
        goto LABEL_28;
      }
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v21);
    if ( ++v14 >= v25 )
      goto LABEL_22;
  }
  v19 = 672LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v17);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v21);
LABEL_32:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v22);
  return (unsigned int)v7;
}
