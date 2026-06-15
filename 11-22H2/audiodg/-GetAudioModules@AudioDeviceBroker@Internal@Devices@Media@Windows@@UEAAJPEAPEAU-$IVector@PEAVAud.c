/*
 * XREFs of ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001B380
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
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  int v5; // edi
  void *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  unsigned int v19; // [rsp+58h] [rbp+38h] BYREF
  __int64 v20; // [rsp+60h] [rbp+40h] BYREF
  __int64 v21; // [rsp+68h] [rbp+48h] BYREF

  v4 = 0LL;
  v21 = 0LL;
  v19 = 0;
  if ( !a2 )
  {
    v5 = -2147467261;
    v14 = 1412LL;
LABEL_16:
    v15 = (unsigned int)v5;
    goto LABEL_18;
  }
  *a2 = 0LL;
  v5 = 0;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(v6)) != 0 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v7;
    v21 = v7;
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v5 < 0 )
  {
    v14 = 1416LL;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 56LL))(*(_QWORD *)(a1 + 64), &v19);
  v8 = 0;
  if ( !v19 )
  {
LABEL_10:
    v12 = (**v4)(v4, &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9, a2);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v5 = 0;
      goto LABEL_12;
    }
    v15 = (unsigned int)v12;
    v14 = 1434LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v15,
      savedregs);
    goto LABEL_12;
  }
  while ( 1 )
  {
    v9 = *(__int64 **)(a1 + 64);
    v10 = *v9;
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v10 + 48))(v9, v8, &v20);
    v5 = v11;
    if ( v11 < 0 )
      break;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v20 + 48LL))(
            v20,
            v4);
    v5 = v11;
    if ( v11 < 0 )
    {
      v16 = 1430LL;
      goto LABEL_21;
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v20);
    if ( ++v8 >= v19 )
      goto LABEL_10;
  }
  v16 = 1426LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v11,
    savedregs);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v20);
LABEL_12:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v21);
  return (unsigned int)v5;
}
