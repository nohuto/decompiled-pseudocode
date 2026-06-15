/*
 * XREFs of ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140020FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x1400210A0 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x14006E230 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140071998 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDevi.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x140079A54 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::GetAudioModules(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        __int64 a2)
{
  unsigned int *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rdx
  unsigned int *v9; // rax
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  struct _GUID *v13; // r14
  int v14; // r13d
  const unsigned __int16 *v15; // rsi
  HRESULT v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-49h]
  UINT32 length[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v21; // [rsp+48h] [rbp-21h] BYREF
  HSTRING v22; // [rsp+50h] [rbp-19h] BYREF
  struct _GUID v23; // [rsp+60h] [rbp-9h] BYREF
  struct KSIDENTIFIER v24; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  SIZE_T cb; // [rsp+D8h] [rbp+6Fh] BYREF
  HSTRING string; // [rsp+E0h] [rbp+77h] BYREF
  HSTRING v28; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = 0LL;
  LODWORD(cb) = 0;
  if ( !a2 )
  {
    v6 = -2147024809;
    v8 = 2502LL;
LABEL_32:
    v11 = v6;
    goto LABEL_33;
  }
  v24.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  *(&v24.Alignment + 2) = 0x100000001LL;
  v5 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
         this,
         &v24,
         0x20u,
         0LL,
         0,
         (unsigned int *)&cb);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2147024662 || !(_DWORD)cb )
  {
    v6 = 0;
    goto LABEL_5;
  }
  v9 = (unsigned int *)CoTaskMemAlloc((unsigned int)cb);
  v4 = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    v8 = 2531LL;
    goto LABEL_32;
  }
  memset_0(v9, 0, (unsigned int)cb);
  v10 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
          this,
          &v24,
          0x20u,
          v4,
          cb,
          (unsigned int *)&cb);
  v6 = v10;
  if ( v10 >= 0 )
  {
    if ( (unsigned int)cb >= 8 )
    {
      v12 = v4[1];
      if ( (unsigned int)cb >= (unsigned __int64)(8 * v12 + 8) )
      {
        v13 = (struct _GUID *)(v4 + 2);
        v14 = 0;
        if ( (_DWORD)v12 )
        {
          v15 = (const unsigned __int16 *)(v4 + 9);
          while ( 1 )
          {
            string = 0LL;
            *(_QWORD *)length = 0LL;
            WindowsDeleteString(0LL);
            v28 = 0LL;
            v23 = *v13;
            v16 = GuidToHString(&v23, &v28);
            v6 = v16;
            if ( v16 < 0 )
              break;
            v16 = StringCchLengthW(v15, 0x80uLL, (unsigned __int64 *)length);
            v6 = v16;
            if ( v16 < 0 )
            {
              v18 = 2555LL;
              goto LABEL_29;
            }
            WindowsDeleteString(string);
            string = 0LL;
            v16 = WindowsCreateString(v15, length[0], &string);
            v6 = v16;
            if ( v16 < 0 )
            {
              v18 = 2556LL;
              goto LABEL_29;
            }
            *(_QWORD *)length = this;
            v22 = string;
            *(_QWORD *)&v23.Data1 = v28;
            Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ *,unsigned long &,HSTRING__ *,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>(
              (unsigned int)&v21,
              (unsigned int)&v23,
              (_DWORD)v15 - 12,
              (unsigned int)&v22,
              (__int64)(v15 - 4),
              (__int64)(v15 - 2),
              (__int64)length);
            v17 = v21;
            if ( !v21 )
            {
              v6 = -2147024882;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA04,
                (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
                (const char *)0x8007000ELL,
                v19);
              goto LABEL_30;
            }
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 104LL))(a2, v21);
            v13 = (struct _GUID *)((char *)v13 + 284);
            v15 += 142;
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            WindowsDeleteString(string);
            string = 0LL;
            WindowsDeleteString(v28);
            if ( ++v14 >= v4[1] )
              goto LABEL_23;
          }
          v18 = 2554LL;
LABEL_29:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
            (const char *)(unsigned int)v16,
            v19);
LABEL_30:
          WindowsDeleteString(string);
          string = 0LL;
          WindowsDeleteString(v28);
        }
        else
        {
LABEL_23:
          v6 = 0;
        }
        goto LABEL_24;
      }
      v6 = -2147418113;
      v8 = 2544LL;
    }
    else
    {
      v6 = -2147418113;
      v8 = 2542LL;
    }
    goto LABEL_32;
  }
  v11 = (unsigned int)v10;
  v8 = 2539LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v11,
    v19);
LABEL_5:
  if ( v4 )
LABEL_24:
    CoTaskMemFree(v4);
  return v6;
}
