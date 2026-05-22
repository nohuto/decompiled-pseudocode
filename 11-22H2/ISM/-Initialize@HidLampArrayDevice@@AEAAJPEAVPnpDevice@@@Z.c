/*
 * XREFs of ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800FF678 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1800015A0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTemplate@$$A6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180040AFC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800574E4 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180057680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?LogLampArrayHidDeviceAttributesFailure@LampArrayTelemetry@@QEAAXJPEBG@Z @ 0x1800645A4 (-LogLampArrayHidDeviceAttributesFailure@LampArrayTelemetry@@QEAAXJPEBG@Z.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x180064620 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x180064998 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAA_NXZ @ 0x180064BF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800D537C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E6A8C (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E9DF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z @ 0x1800F4A90 (-GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800F888C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800F9068 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800F9BEC (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800F9D6C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800FD9D8 (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800FF560 (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800FF8FC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x180100D1C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x18010119C (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x180101740 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x180101A2C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x180101DE0 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x180103A78 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampArrayDevice::Initialize(HidLampArrayDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v4; // r14
  int InterfacePath; // eax
  signed int v6; // ebx
  __int64 v7; // rdx
  unsigned int *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v13; // r12
  unsigned int v14; // eax
  int v15; // eax
  unsigned int *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // cl
  signed int LastError; // eax
  __int64 v22; // rdx
  int ReportDescriptorsFromPreparsedData; // eax
  signed int v24; // edi
  char *v25; // rbx
  struct ParsedHidReportDescriptor *v26; // rbx
  int v27; // eax
  signed int v28; // r15d
  int v29; // eax
  unsigned int *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  signed int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  LampArrayTelemetry *v38; // rcx
  signed int v39; // eax
  unsigned int *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rcx
  size_t v45; // rax
  void *v46; // rax
  void *v47; // rcx
  signed int v48; // ebx
  __int64 v49; // rdi
  unsigned int *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // r14d
  unsigned int *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int16 v63; // bx
  __int16 v64; // di
  __int16 v65; // si
  __int64 v66; // rcx
  __int64 v67; // rdx
  unsigned int *v68; // rdx
  unsigned int v69; // r9d
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int *v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned __int64 v80; // r9
  LampArrayTelemetry *v81; // rcx
  struct ParsedHidReportDescriptor *RawBuffer; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v84[2]; // [rsp+68h] [rbp-98h] BYREF
  HSTRING string; // [rsp+70h] [rbp-90h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+78h] [rbp-88h] BYREF
  const char *v87; // [rsp+80h] [rbp-80h] BYREF
  int v88[4]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+98h] [rbp-68h]
  UINT32 length; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v91[7]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int16 v92; // [rsp+C4h] [rbp-3Ch]
  char v93; // [rsp+C8h] [rbp-38h]
  char v94; // [rsp+C9h] [rbp-37h]
  char v95; // [rsp+CAh] [rbp-36h]
  char v96; // [rsp+CBh] [rbp-35h]
  _HIDD_ATTRIBUTES Attributes; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v98[16]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<PnpDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  WindowsDeleteString(0LL);
  string = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)a2, &string);
  v6 = InterfacePath;
  if ( InterfacePath < 0 )
  {
    v7 = 52LL;
LABEL_114:
    v80 = (unsigned int)InterfacePath;
LABEL_118:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v80);
    goto LABEL_119;
  }
  if ( (unsigned int)dword_180275498 > 5 && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
  {
    PreparsedData = (PHIDP_PREPARSED_DATA)Microsoft::WRL::Wrappers::HString::GetRawBuffer(&string, v8);
    RawBuffer = (struct ParsedHidReportDescriptor *)"Attempting to initialize HidLampArrayDevice";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v9,
      byte_1802337B3,
      v10,
      v11,
      (const unsigned __int16 **)&RawBuffer,
      (const WCHAR **)&PreparsedData);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  if ( !length || !*StringRawBuffer )
  {
    v6 = -2147024809;
    v7 = 58LL;
    goto LABEL_117;
  }
  if ( length > 0x100 )
  {
    v6 = -2147024774;
    v7 = 59LL;
    goto LABEL_117;
  }
  v13 = (const WCHAR *)((char *)this + 24);
  v14 = _o_wcscpy_s((char *)this + 24, 256LL, StringRawBuffer);
  if ( !v14 )
  {
    v15 = PnpDevice::OpenInterface(*v4);
    if ( v15 < 0 )
      goto LABEL_12;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl)
      && (unsigned int)dword_180275498 > 5
      && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
    {
      RawBuffer = (struct ParsedHidReportDescriptor *)Microsoft::WRL::Wrappers::HString::GetRawBuffer(&string, v16);
      *(_QWORD *)v84 = "Extracting HID report descriptors";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v17,
        byte_1802337B3,
        v18,
        v19,
        (const unsigned __int16 **)v84,
        (const WCHAR **)&RawBuffer);
    }
    PreparsedData = 0LL;
    if ( !HidD_GetPreparsedData(*((HANDLE *)*v4 + 5), &PreparsedData) )
    {
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      if ( v6 >= 0 )
        goto LABEL_24;
      v22 = 73LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v6);
LABEL_24:
      if ( PreparsedData )
        HidD_FreePreparsedData(PreparsedData);
      goto LABEL_119;
    }
    if ( *((_WORD *)PreparsedData + 5) != 89 )
    {
      v22 = 74LL;
LABEL_30:
      v6 = -2147024890;
      goto LABEL_23;
    }
    if ( *((_WORD *)PreparsedData + 4) != 1 )
    {
      v22 = 75LL;
      goto LABEL_30;
    }
    RawBuffer = 0LL;
    v84[0] = 0;
    ReportDescriptorsFromPreparsedData = HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
                                           v20,
                                           (__int64)PreparsedData,
                                           (char **)&RawBuffer,
                                           v84);
    v24 = ReportDescriptorsFromPreparsedData;
    if ( ReportDescriptorsFromPreparsedData < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)ReportDescriptorsFromPreparsedData);
      if ( RawBuffer )
      {
        v25 = (char *)RawBuffer - 8;
        `eh vector destructor iterator'(
          (char *)RawBuffer,
          24LL,
          *((_QWORD *)RawBuffer - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[](v25);
      }
      if ( PreparsedData )
        HidD_FreePreparsedData(PreparsedData);
      v6 = v24;
      goto LABEL_119;
    }
    v26 = RawBuffer;
    v27 = HidLampArrayDevice::CacheReportSizes(this, RawBuffer, v84[0]);
    v28 = v27;
    if ( v27 >= 0 )
    {
      v29 = HidLampArrayDevice::ParseReportDescriptors(this, v26, v84[0]);
      v28 = v29;
      if ( v29 >= 0 )
      {
        if ( v26 )
        {
          `eh vector destructor iterator'(
            (char *)v26,
            24LL,
            *((_QWORD *)v26 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[]((char *)v26 - 8);
        }
        if ( PreparsedData )
          HidD_FreePreparsedData(PreparsedData);
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
        {
          if ( (unsigned int)dword_180275498 > 5 && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
          {
            RawBuffer = (struct ParsedHidReportDescriptor *)Microsoft::WRL::Wrappers::HString::GetRawBuffer(
                                                              &string,
                                                              v30);
            *(_QWORD *)v84 = "Querying HIDD_ATTRIBUTES";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
              v31,
              byte_1802337B3,
              v32,
              v33,
              (const unsigned __int16 **)v84,
              (const WCHAR **)&RawBuffer);
          }
          if ( !HidD_GetAttributes(*((HANDLE *)*v4 + 5), &Attributes) )
          {
            v34 = GetLastError();
            v6 = v34;
            if ( v34 > 0 )
              v6 = (unsigned __int16)v34 | 0x80070000;
            LampArrayTelemetry::GetInstance(v36, v35, v37);
            LampArrayTelemetry::LogLampArrayHidDeviceAttributesFailure(v38, v6, (const unsigned __int16 *)this + 12);
            goto LABEL_119;
          }
        }
        else if ( !HidD_GetAttributes(*((HANDLE *)*v4 + 5), &Attributes) )
        {
          v39 = GetLastError();
          v6 = v39;
          if ( v39 > 0 )
            v6 = (unsigned __int16)v39 | 0x80070000;
          if ( v6 >= 0 )
            goto LABEL_119;
          v7 = 106LL;
          goto LABEL_117;
        }
        *((_WORD *)this + 269) = Attributes.VendorID;
        *((_WORD *)this + 270) = Attributes.ProductID;
        *((_WORD *)this + 271) = Attributes.VersionNumber;
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl)
          && (unsigned int)dword_180275498 > 5
          && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
        {
          RawBuffer = (struct ParsedHidReportDescriptor *)Microsoft::WRL::Wrappers::HString::GetRawBuffer(&string, v40);
          *(_QWORD *)v84 = "Querying LampArrayAttributesReport";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
            v41,
            byte_1802337B3,
            v42,
            v43,
            (const unsigned __int16 **)v84,
            (const WCHAR **)&RawBuffer);
        }
        *(_OWORD *)v88 = 0LL;
        v89 = 0LL;
        InterfacePath = HidLampArrayDevice::ReceiveLampArrayAttributesReport(
                          this,
                          (struct LampArrayAttributesDeviceReport *)v88);
        v6 = InterfacePath;
        if ( InterfacePath < 0 )
        {
          v7 = 122LL;
          goto LABEL_114;
        }
        v44 = v88[0];
        *((_DWORD *)this + 136) = v88[0];
        *((_DWORD *)this + 137) = v88[1];
        *((_DWORD *)this + 138) = v88[2];
        *((_DWORD *)this + 139) = v88[3];
        *((_QWORD *)this + 70) = v89;
        v45 = 36 * v44;
        if ( !is_mul_ok(v44, 0x24uLL) )
          v45 = -1LL;
        v46 = operator new[](v45, (const struct std::nothrow_t *)&std::nothrow);
        v47 = (void *)*((_QWORD *)this + 71);
        *((_QWORD *)this + 71) = v46;
        if ( v47 )
          operator delete[](v47);
        if ( *((_QWORD *)this + 71) )
        {
          v48 = 0;
          if ( *((int *)this + 136) > 0 )
          {
            v49 = 0LL;
            while ( 1 )
            {
              if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl)
                && (unsigned int)dword_180275498 > 5
                && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
              {
                v84[0] = *((_DWORD *)this + 136);
                LODWORD(RawBuffer) = v48;
                v87 = (const char *)Microsoft::WRL::Wrappers::HString::GetRawBuffer(&string, v50);
                *(_QWORD *)v88 = "Sending LampAttributesRequest";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v51,
                  (int)&unk_18023384D,
                  v52,
                  v53,
                  (const unsigned __int16 **)v88,
                  (const WCHAR **)&v87,
                  (__int64)&RawBuffer,
                  (__int64)v84);
              }
              v54 = HidLampArrayDevice::SendLampAttributesRequest(this, v48);
              if ( v54 < 0 )
              {
                v67 = 148LL;
                goto LABEL_103;
              }
              if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl)
                && (unsigned int)dword_180275498 > 5
                && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
              {
                LODWORD(RawBuffer) = *((_DWORD *)this + 136);
                v84[0] = v48;
                *(_QWORD *)v88 = Microsoft::WRL::Wrappers::HString::GetRawBuffer(&string, v55);
                v87 = "Requesting LampAttributesReport";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v56,
                  (int)&unk_18023384D,
                  v57,
                  v58,
                  (const unsigned __int16 **)&v87,
                  (const WCHAR **)v88,
                  (__int64)v84,
                  (__int64)&RawBuffer);
              }
              v54 = HidLampArrayDevice::ReceiveLampAttributesReport(
                      this,
                      v48,
                      (struct LampAttributesResponseDeviceReport *)v91);
              if ( v54 < 0 )
              {
                v67 = 159LL;
                goto LABEL_103;
              }
              if ( v91[0] != v48 )
                break;
              *(_DWORD *)(v49 + *((_QWORD *)this + 71)) = v91[0];
              *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 4) = v91[1];
              *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 8) = v91[2];
              *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 12) = v91[3];
              *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 16) = v91[4];
              *(_BYTE *)(*((_QWORD *)this + 71) + v49 + 24) = v93;
              *(_BYTE *)(*((_QWORD *)this + 71) + v49 + 25) = v94;
              *(_BYTE *)(*((_QWORD *)this + 71) + v49 + 26) = v95;
              *(_BYTE *)(*((_QWORD *)this + 71) + v49 + 27) = v96;
              *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 28) = v91[6];
              *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 20) = v91[5];
              if ( *((_DWORD *)this + 140) == 1 )
              {
                *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 32) = HidUsageConverter::KeyboardHidUsageToVKey(v92);
              }
              else if ( *((_DWORD *)this + 140) == 2 )
              {
                if ( v92 >= 6u )
                  v59 = 0;
                else
                  v59 = dword_18023B990[v92];
                *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 32) = v59;
              }
              else
              {
                *(_DWORD *)(*((_QWORD *)this + 71) + v49 + 32) = 0;
              }
              ++v48;
              v49 += 36LL;
              if ( v48 >= *((_DWORD *)this + 136) )
                goto LABEL_104;
            }
            v54 = -2089418751;
            if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl) )
            {
              LampArrayTelemetry::GetInstance(v61, v60, v62);
              v63 = *((_WORD *)this + 271);
              v64 = *((_WORD *)this + 270);
              v65 = *((_WORD *)this + 269);
              std::string::string(v98, (__int64)"LampArrayAttributesReport: lamp ID does not match most recent request");
              LampArrayTelemetry::LogLampArrayHidReportFailure(v66, v98, 2205548545LL, v13, v65, v64, v63);
              std::string::~string((__int64)v98);
            }
            v67 = 175LL;
LABEL_103:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v67,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)(unsigned int)v54);
            v6 = v54;
            goto LABEL_119;
          }
LABEL_104:
          if ( (unsigned int)dword_180275498 > 5 )
          {
            if ( tlgKeywordOn((__int64)&dword_180275498, 0LL) )
            {
              *(_QWORD *)v88 = Microsoft::WRL::Wrappers::HString::GetRawBuffer(&string, v68);
              v87 = "Successfully parsed device data";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                v70,
                byte_1802337B3,
                v71,
                v72,
                (const unsigned __int16 **)&v87,
                (const WCHAR **)v88);
              v69 = dword_180275498;
            }
            if ( v69 > 5 && tlgKeywordOn((__int64)&dword_180275498, 0LL) )
            {
              *(_QWORD *)v88 = Microsoft::WRL::Wrappers::HString::GetRawBuffer(&string, v73);
              v87 = "Setting device to known-good-state.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                v74,
                byte_1802337B3,
                v75,
                v76,
                (const unsigned __int16 **)&v87,
                (const WCHAR **)v88);
            }
          }
          InterfacePath = HidLampArrayDevice::SetAutonomousMode(this, 1);
          v6 = InterfacePath;
          if ( InterfacePath >= 0 )
          {
            *(_OWORD *)v88 = 0LL;
            v88[0] = 1;
            v88[2] = *((_DWORD *)this + 136) - 1;
            InterfacePath = HidLampArrayDevice::SendLampRangeUpdateReport(
                              this,
                              (const struct LampRangeUpdateDeviceReport *)v88);
            v6 = InterfacePath;
            if ( InterfacePath >= 0 )
            {
              LampArrayTelemetry::GetInstance(v78, v77, v79);
              LampArrayTelemetry::LogLampArrayDeviceAdded(
                v81,
                (const unsigned __int16 *)this + 12,
                *((unsigned __int16 *)this + 269),
                *((unsigned __int16 *)this + 270),
                *((_WORD *)this + 271),
                *((_DWORD *)this + 136),
                *((_DWORD *)this + 137),
                *((_DWORD *)this + 138),
                *((_DWORD *)this + 139),
                *((_DWORD *)this + 140),
                *((_DWORD *)this + 141));
              *((_BYTE *)this + 637) = 1;
              Microsoft::WRL::Wrappers::HString::~HString(&string);
              return 0LL;
            }
            v7 = 222LL;
          }
          else
          {
            v7 = 216LL;
          }
          goto LABEL_114;
        }
        v6 = -2147024882;
        v7 = 136LL;
LABEL_117:
        v80 = (unsigned int)v6;
        goto LABEL_118;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v29);
      if ( v26 )
        goto LABEL_39;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v27);
      if ( v26 )
      {
LABEL_39:
        `eh vector destructor iterator'(
          (char *)v26,
          24LL,
          *((_QWORD *)v26 - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[]((char *)v26 - 8);
      }
    }
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    v6 = v28;
    goto LABEL_119;
  }
  v15 = wil::details::in1diag3::Return_Win32(
          retaddr,
          60LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)v14);
LABEL_12:
  v6 = v15;
LABEL_119:
  Microsoft::WRL::Wrappers::HString::~HString(&string);
  return (unsigned int)v6;
}
