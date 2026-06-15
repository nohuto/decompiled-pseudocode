/*
 * XREFs of ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18001DDB8
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020858 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180030FA4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060678 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     wil::details::lambda_call__lambda_72a25199660f6795c403dac77fe923c4___::_lambda_call__lambda_72a25199660f6795c403dac77fe923c4___ @ 0x18007416C (wil--details--lambda_call__lambda_72a25199660f6795c403dac77fe923c4___--_lambda_call__lambda_72a2.c)
 *     _lambda_cc8545399a300f832261433c2fbaac5d_::operator() @ 0x180075540 (_lambda_cc8545399a300f832261433c2fbaac5d_--operator().c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014F61C (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180032880 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z @ 0x180044C90 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAX_N@Z.c)
 *     ?SpatialAudioSettingsChanged@CSpatialProperties@@QEAAXXZ @ 0x1800478F0 (-SpatialAudioSettingsChanged@CSpatialProperties@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180113B04 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x18014994C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U_ea_18014994C.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180149D84 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
        CEndpointCharacteristics *this,
        char a2,
        int a3,
        const struct tWAVEFORMATEX *a4)
{
  int v8; // eax
  unsigned int v9; // esi
  const PROPERTYKEY *v10; // rax
  char v11; // r15
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // [rsp+20h] [rbp-E0h]
  WORD nChannels; // [rsp+60h] [rbp-A0h] BYREF
  int v35[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v36; // [rsp+70h] [rbp-90h] BYREF
  int v37[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v39; // [rsp+88h] [rbp-78h] BYREF
  char *v40; // [rsp+90h] [rbp-70h] BYREF
  PROPVARIANT propvar1[2]; // [rsp+98h] [rbp-68h] BYREF
  const struct tWAVEFORMATEX *v42; // [rsp+A8h] [rbp-58h]
  PROPVARIANT propvar2[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-40h]
  int v45[4]; // [rsp+D0h] [rbp-30h] BYREF
  GUID v46; // [rsp+E0h] [rbp-20h]
  GUID v47; // [rsp+F0h] [rbp-10h]
  GUID v48; // [rsp+100h] [rbp+0h]
  GUID v49; // [rsp+110h] [rbp+10h] BYREF
  GUID fmtid; // [rsp+120h] [rbp+20h] BYREF
  DWORD pid; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  *(_OWORD *)propvar1 = 0LL;
  v42 = 0LL;
  if ( a4 )
  {
    v8 = ValidateWaveFormatEx(a4);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1943,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8,
        v33);
      return v9;
    }
    LOWORD(propvar1[0]) = 65;
    LODWORD(propvar1[1]) = a4->cbSize + 18;
    v42 = a4;
  }
  else
  {
    CSpatialProperties::ClearSpatialAudioSettings((CEndpointCharacteristics *)((char *)this + 416), 0);
  }
  v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  if ( a3 != 3 )
    v10 = &PKEY_AudioEngine_DeviceFormat;
  fmtid = v10->fmtid;
  pid = v10->pid;
  v11 = 1;
  *(_OWORD *)propvar2 = 0LL;
  v44 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &fmtid,
         propvar2) >= 0 )
  {
    if ( !PropVariantCompareEx(propvar1, propvar2, PVCU_DEFAULT, 0) )
    {
      v11 = 0;
      goto LABEL_10;
    }
    v11 = 2;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 9) + 48LL))(
          *((_QWORD *)this + 9),
          &fmtid,
          propvar1);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1961,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12,
      v33);
    goto LABEL_33;
  }
LABEL_10:
  v13 = (_DWORD *)*((_QWORD *)this + 1036);
  if ( !a4 )
  {
    if ( *v13 > 4u && (unsigned __int8)tlgKeywordOn(v13, 16LL) )
    {
      LOBYTE(nChannels) = v11;
      LODWORD(v36) = a3;
      *(_QWORD *)v35 = *((_QWORD *)this + 6);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v27,
        (unsigned int)&unk_18019611D,
        v28,
        v29,
        (__int64)v35,
        (__int64)&v36,
        (__int64)&nChannels);
    }
    goto LABEL_32;
  }
  if ( a4->wFormatTag == 0xFFFE )
  {
    if ( *v13 > 4u && (unsigned __int8)tlgKeywordOn(v13, 16LL) )
    {
      v37[0] = *(_DWORD *)&a4[1].nChannels;
      v40 = (char *)&a4[1].nSamplesPerSec + 2;
      LODWORD(v38) = a4->nAvgBytesPerSec;
      LODWORD(v36) = a4->nSamplesPerSec;
      nChannels = a4->nChannels;
      v39 = L"WAVEFORMATEXTENSIBLE";
      v35[0] = a3;
      *(_QWORD *)&v49.Data1 = *((_QWORD *)this + 6);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v14,
        (unsigned int)&unk_18019600A,
        v15,
        v16,
        (__int64)&v49,
        (__int64)v35,
        (__int64)&v39,
        (__int64)&nChannels,
        (__int64)&v36,
        (__int64)&v38,
        (__int64)&v40,
        (__int64)v37);
    }
  }
  else
  {
    v49 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v49.Data1 = a4->wFormatTag;
    if ( *v13 > 4u && (unsigned __int8)tlgKeywordOn(v13, 16LL) )
    {
      *(_QWORD *)v35 = &v49;
      LODWORD(v36) = a4->nAvgBytesPerSec;
      LODWORD(v38) = a4->nSamplesPerSec;
      nChannels = a4->nChannels;
      v39 = L"WAVEFORMATEX";
      v37[0] = a3;
      v40 = (char *)*((_QWORD *)this + 6);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v30,
        (unsigned int)&unk_18019609A,
        v31,
        v32,
        (__int64)&v40,
        (__int64)v37,
        (__int64)&v39,
        (__int64)&nChannels,
        (__int64)&v38,
        (__int64)&v36,
        (__int64)v35);
    }
  }
  if ( !a2 && a3 != 3 && !*((_DWORD *)this + 16) )
  {
    if ( *((_DWORD *)this + 53) || a3 )
      CSpatialProperties::ClearSpatialAudioSettings((CEndpointCharacteristics *)((char *)this + 416), 1);
    else
      CSpatialProperties::SpatialAudioSettingsChanged((LPCRITICAL_SECTION)((char *)this + 416));
    if ( !*((_BYTE *)this + 8234) )
    {
      *(_QWORD *)v35 = 0LL;
      v17 = (__int64 *)*((_QWORD *)this + 5);
      v18 = *v17;
      *(_QWORD *)v35 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v18 + 24))(
              v17,
              &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
              1LL);
      v9 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19AA,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19,
          (int)v35);
      }
      else
      {
        v45[0] = 64;
        v46 = GUID_73647561_0000_0010_8000_00aa00389b71;
        v47 = GUID_00000001_0000_0010_8000_00aa00389b71;
        v48 = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
        *(_QWORD *)v37 = 0LL;
        v20 = **(_QWORD **)v35;
        *(_QWORD *)v37 = 0LL;
        v21 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, _QWORD))(v20 + 24))(*(_QWORD *)v35, v45, 64LL, 0LL);
        v9 = v21;
        if ( v21 >= 0 )
        {
          v36 = 0LL;
          v22 = **(_QWORD **)v35;
          v36 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 **))(v22 + 32))(
                 *(_QWORD *)v35,
                 *(_QWORD *)v37,
                 &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
                 &v36) >= 0 )
          {
            v38 = 0LL;
            v23 = *v36;
            v38 = 0LL;
            if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v23 + 104))(
                   v36,
                   1LL,
                   &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
                   &v38) >= 0 )
            {
              if ( a4->wFormatTag == 0xFFFE )
                v24 = *(unsigned int *)&a4[1].nChannels;
              else
                v24 = (unsigned int)(a4->nChannels != 2) + 3;
              v25 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v38 + 24LL))(
                      v38,
                      v24,
                      &EVENTCONTEXT_POLICYCONFIG);
              if ( v25 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x19CA,
                  (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)(unsigned int)v25);
            }
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v38);
          }
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v37);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
          goto LABEL_32;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19B4,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v21,
          (int)v37);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v37);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
      goto LABEL_33;
    }
  }
LABEL_32:
  v9 = 0;
LABEL_33:
  PropVariantClear(propvar2);
  return v9;
}
