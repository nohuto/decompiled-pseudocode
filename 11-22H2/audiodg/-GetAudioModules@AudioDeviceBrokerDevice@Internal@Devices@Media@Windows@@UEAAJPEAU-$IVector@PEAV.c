/*
 * XREFs of ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140014E9C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14001C688 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14007E60C (--$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDevi.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x140086BE8 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::GetAudioModules(
        RTL_SRWLOCK *this,
        __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v7; // rdx
  unsigned int *v8; // rax
  unsigned int *v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  struct _GUID *v13; // r15
  const unsigned __int16 *v14; // rsi
  int v15; // r14d
  __int64 v16; // r14
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-59h]
  int v19; // [rsp+20h] [rbp-59h]
  HSTRING v20; // [rsp+40h] [rbp-39h] BYREF
  UINT32 length[2]; // [rsp+48h] [rbp-31h] BYREF
  unsigned int *v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h] BYREF
  HSTRING v24; // [rsp+60h] [rbp-19h] BYREF
  struct _GUID v25; // [rsp+70h] [rbp-9h] BYREF
  struct KSIDENTIFIER v26; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  SIZE_T cb; // [rsp+E8h] [rbp+6Fh] BYREF
  int v29; // [rsp+F0h] [rbp+77h]
  HSTRING string; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = 0;
  v22 = 0LL;
  LODWORD(cb) = 0;
  if ( !a2 )
  {
    v4 = -2147024809;
    v7 = 2423LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v4,
      v18);
    goto LABEL_4;
  }
  v26.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  *(&v26.Alignment + 2) = 0x100000001LL;
  v5 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
         this,
         &v26,
         32LL,
         0LL,
         0,
         (unsigned int *)&cb);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2147024662 || !(_DWORD)cb )
    goto LABEL_4;
  v8 = (unsigned int *)CoTaskMemAlloc((unsigned int)cb);
  v9 = v8;
  v22 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, (unsigned int)cb);
    v10 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
            this,
            &v26,
            32LL,
            v9,
            cb,
            (unsigned int *)&cb);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99C,
        (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)(unsigned int)v10,
        v18);
      v4 = v11;
LABEL_4:
      wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v22);
      return v4;
    }
    if ( (unsigned int)cb < 8 )
    {
      v7 = 2463LL;
LABEL_13:
      v4 = -2147418113;
      goto LABEL_14;
    }
    v12 = v9[1];
    if ( (unsigned int)cb < (unsigned __int64)(8 * v12 + 8) )
    {
      v7 = 2465LL;
      goto LABEL_13;
    }
    v13 = (struct _GUID *)(v9 + 2);
    v29 = 0;
    if ( (_DWORD)v12 )
    {
      v14 = (const unsigned __int16 *)(v9 + 9);
      while ( 1 )
      {
        string = 0LL;
        *(_QWORD *)length = 0LL;
        WindowsDeleteString(0LL);
        v20 = 0LL;
        v25 = *v13;
        v15 = GuidToHString(&v25, &v20);
        if ( v15 < 0 )
          break;
        v15 = StringCchLengthW(v14, 128LL, (unsigned __int64 *)length);
        if ( v15 < 0 )
        {
          v17 = 2476LL;
          goto LABEL_28;
        }
        WindowsDeleteString(string);
        string = 0LL;
        v15 = WindowsCreateString(v14, length[0], &string);
        if ( v15 < 0 )
        {
          v17 = 2477LL;
          goto LABEL_28;
        }
        *(_QWORD *)length = this;
        v24 = string;
        *(_QWORD *)&v25.Data1 = v20;
        Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ *,unsigned long &,HSTRING__ *,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>(
          (unsigned int)&v23,
          (unsigned int)&v25,
          (_DWORD)v14 - 12,
          (unsigned int)&v24,
          (__int64)(v14 - 4),
          (__int64)(v14 - 2),
          (__int64)length);
        v16 = v23;
        if ( !v23 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9B5,
            (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
            (const char *)0x8007000ELL,
            v18);
          WindowsDeleteString(string);
          string = 0LL;
          WindowsDeleteString(v20);
          v20 = 0LL;
          v4 = -2147024882;
          goto LABEL_4;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 104LL))(a2, v23);
        v13 = (struct _GUID *)((char *)v13 + 284);
        v14 += 142;
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v20);
        if ( ++v29 >= v9[1] )
          goto LABEL_23;
      }
      v17 = 2475LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)(unsigned int)v15,
        v18);
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v20);
      v20 = 0LL;
      v4 = v15;
      goto LABEL_4;
    }
LABEL_23:
    CoTaskMemFree(v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x994,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x8007000ELL,
      v19);
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v22);
    return 2147942414LL;
  }
}
