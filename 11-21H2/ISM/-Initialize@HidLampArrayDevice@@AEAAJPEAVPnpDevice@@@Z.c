/*
 * XREFs of ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800D6A0C (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX_K@Z @ 0x18004A958 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18004AAF0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C1ED4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800CFEC4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800D080C (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800D1374 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800D148C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800D3548 (--1-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreePrepars.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800D4E2C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800D4E9C (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800D68F0 (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800D6C90 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800D7D4C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800D8198 (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800D82C4 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x1800D8754 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800D897C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800D8CC4 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800D9EA0 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HidLampArrayDevice::Initialize(HidLampArrayDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v4; // r15
  int InterfacePath; // eax
  signed int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PCWSTR StringRawBuffer; // rax
  unsigned int v12; // eax
  int v13; // eax
  char v14; // cl
  signed int LastError; // eax
  __int64 v16; // rdx
  int ReportDescriptorsFromPreparsedData; // eax
  signed int v18; // edi
  char *v19; // rbx
  struct ParsedHidReportDescriptor *v20; // rbx
  int v21; // eax
  int v22; // r14d
  int v23; // eax
  signed int v24; // eax
  unsigned __int64 v25; // rcx
  size_t v26; // rax
  void *v27; // rax
  void *v28; // rcx
  int v29; // edi
  __int64 v30; // rbx
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // r9
  LampArrayTelemetry *v43; // rcx
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-69h] BYREF
  HSTRING string; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v47[2]; // [rsp+70h] [rbp-59h] BYREF
  struct ParsedHidReportDescriptor *v48[2]; // [rsp+78h] [rbp-51h] BYREF
  UINT32 length; // [rsp+88h] [rbp-41h] BYREF
  _DWORD v50[7]; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int16 v51; // [rsp+ACh] [rbp-1Dh]
  char v52; // [rsp+B0h] [rbp-19h]
  char v53; // [rsp+B1h] [rbp-18h]
  char v54; // [rsp+B2h] [rbp-17h]
  char v55; // [rsp+B3h] [rbp-16h]
  __int128 v56; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-1h]
  _HIDD_ATTRIBUTES Attributes; // [rsp+D0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v4 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<PnpDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  WindowsDeleteString(0LL);
  string = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)a2, &string);
  v6 = InterfacePath;
  if ( InterfacePath < 0 )
  {
    v7 = 57LL;
LABEL_77:
    v42 = (unsigned int)InterfacePath;
LABEL_81:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v42);
    goto LABEL_82;
  }
  if ( (unsigned int)dword_180240410 > 5 )
  {
    v48[0] = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
    PreparsedData = (PHIDP_PREPARSED_DATA)"Attempting to initialize HidLampArrayDevice";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v8,
      byte_180202F90,
      v9,
      v10,
      (const unsigned __int16 **)&PreparsedData,
      (unsigned __int16 **)v48);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  if ( !length || !*StringRawBuffer )
  {
    v6 = -2147024809;
    v7 = 63LL;
    goto LABEL_80;
  }
  if ( length > 0x100 )
  {
    v6 = -2147024774;
    v7 = 64LL;
LABEL_80:
    v42 = (unsigned int)v6;
    goto LABEL_81;
  }
  v12 = _o_wcscpy_s((char *)this + 24, 256LL, StringRawBuffer);
  if ( !v12 )
  {
    v13 = PnpDevice::OpenInterface(*v4);
    if ( v13 < 0 )
      goto LABEL_11;
    PreparsedData = 0LL;
    if ( !HidD_GetPreparsedData(*((HANDLE *)*v4 + 5), &PreparsedData) )
    {
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      if ( v6 >= 0 )
        goto LABEL_19;
      v16 = 73LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v6);
LABEL_19:
      wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
      goto LABEL_82;
    }
    if ( *((_WORD *)PreparsedData + 5) != 89 )
    {
      v6 = -2147024890;
      v16 = 74LL;
      goto LABEL_18;
    }
    if ( *((_WORD *)PreparsedData + 4) != 1 )
    {
      v6 = -2147024890;
      v16 = 75LL;
      goto LABEL_18;
    }
    v48[0] = 0LL;
    v47[0] = 0;
    ReportDescriptorsFromPreparsedData = HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
                                           v14,
                                           (__int64)PreparsedData,
                                           (char **)v48,
                                           v47);
    v18 = ReportDescriptorsFromPreparsedData;
    if ( ReportDescriptorsFromPreparsedData < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)ReportDescriptorsFromPreparsedData);
      if ( v48[0] )
      {
        v19 = (char *)v48[0] - 8;
        `eh vector destructor iterator'(
          (char *)v48[0],
          24LL,
          *((_QWORD *)v48[0] - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[](v19);
      }
      wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
      v6 = v18;
      goto LABEL_82;
    }
    v20 = v48[0];
    v21 = HidLampArrayDevice::CacheReportSizes(this, v48[0], v47[0]);
    v22 = v21;
    if ( v21 >= 0 )
    {
      v23 = HidLampArrayDevice::ParseReportDescriptors(this, v20, v47[0]);
      v22 = v23;
      if ( v23 >= 0 )
      {
        if ( v20 )
        {
          `eh vector destructor iterator'(
            (char *)v20,
            24LL,
            *((_QWORD *)v20 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[]((char *)v20 - 8);
        }
        wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
        if ( !HidD_GetAttributes(*((HANDLE *)*v4 + 5), &Attributes) )
        {
          v24 = GetLastError();
          v6 = v24;
          if ( v24 > 0 )
            v6 = (unsigned __int16)v24 | 0x80070000;
          if ( v6 >= 0 )
            goto LABEL_82;
          v7 = 92LL;
          goto LABEL_80;
        }
        *((_WORD *)this + 269) = Attributes.VendorID;
        *((_WORD *)this + 270) = Attributes.ProductID;
        *((_WORD *)this + 271) = Attributes.VersionNumber;
        v56 = 0LL;
        v57 = 0LL;
        InterfacePath = HidLampArrayDevice::ReceiveLampArrayAttributesReport(
                          this,
                          (struct LampArrayAttributesDeviceReport *)&v56);
        v6 = InterfacePath;
        if ( InterfacePath < 0 )
        {
          v7 = 102LL;
          goto LABEL_77;
        }
        v25 = (int)v56;
        *((_OWORD *)this + 34) = v56;
        *((_QWORD *)this + 70) = v57;
        v26 = 36 * v25;
        if ( !is_mul_ok(v25, 0x24uLL) )
          v26 = -1LL;
        v27 = operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
        v28 = (void *)*((_QWORD *)this + 71);
        *((_QWORD *)this + 71) = v27;
        if ( v28 )
        {
          operator delete[](v28);
          v27 = (void *)*((_QWORD *)this + 71);
        }
        if ( !v27 )
        {
          v6 = -2147024882;
          v7 = 116LL;
          goto LABEL_80;
        }
        v29 = 0;
        if ( *((int *)this + 136) <= 0 )
        {
LABEL_70:
          if ( (unsigned int)dword_180240410 > 5 )
          {
            v48[0] = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
            *(_QWORD *)v47 = "Successfully parsed device data";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
              v33,
              byte_180202F90,
              v34,
              v35,
              (const unsigned __int16 **)v47,
              (unsigned __int16 **)v48);
            if ( (unsigned int)dword_180240410 > 5 )
            {
              v48[0] = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
              *(_QWORD *)v47 = "Setting device to known-good-state.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                v36,
                byte_180202F90,
                v37,
                v38,
                (const unsigned __int16 **)v47,
                (unsigned __int16 **)v48);
            }
          }
          InterfacePath = HidLampArrayDevice::SetAutonomousMode(this, 1);
          v6 = InterfacePath;
          if ( InterfacePath >= 0 )
          {
            *(_OWORD *)v48 = 0LL;
            LODWORD(v48[0]) = 1;
            LODWORD(v48[1]) = *((_DWORD *)this + 136) - 1;
            InterfacePath = HidLampArrayDevice::SendLampRangeUpdateReport(
                              this,
                              (const struct LampRangeUpdateDeviceReport *)v48);
            v6 = InterfacePath;
            if ( InterfacePath >= 0 )
            {
              LampArrayTelemetry::GetInstance(v40, v39, v41);
              LampArrayTelemetry::LogLampArrayDeviceAdded(
                v43,
                (unsigned __int16 *)this + 12,
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
              WindowsDeleteString(string);
              return 0LL;
            }
            v7 = 175LL;
          }
          else
          {
            v7 = 169LL;
          }
          goto LABEL_77;
        }
        v30 = 0LL;
        while ( 1 )
        {
          v22 = HidLampArrayDevice::SendLampAttributesRequest(this, v29);
          if ( v22 < 0 )
            break;
          v22 = HidLampArrayDevice::ReceiveLampAttributesReport(this, (struct LampAttributesResponseDeviceReport *)v50);
          if ( v22 < 0 )
          {
            v32 = 123LL;
            goto LABEL_69;
          }
          if ( v50[0] != v29 )
          {
            v6 = -2089418751;
            v7 = 128LL;
            goto LABEL_80;
          }
          *(_DWORD *)(v30 + *((_QWORD *)this + 71)) = v50[0];
          *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 4) = v50[1];
          *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 8) = v50[2];
          *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 12) = v50[3];
          *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 16) = v50[4];
          *(_BYTE *)(v30 + *((_QWORD *)this + 71) + 24) = v52;
          *(_BYTE *)(v30 + *((_QWORD *)this + 71) + 25) = v53;
          *(_BYTE *)(v30 + *((_QWORD *)this + 71) + 26) = v54;
          *(_BYTE *)(v30 + *((_QWORD *)this + 71) + 27) = v55;
          *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 28) = v50[6];
          *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 20) = v50[5];
          if ( *((_DWORD *)this + 140) == 1 )
          {
            *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 32) = HidUsageConverter::KeyboardHidUsageToVKey(v51);
          }
          else if ( *((_DWORD *)this + 140) == 2 )
          {
            if ( v51 >= 6u )
              v31 = 0;
            else
              v31 = dword_18020ABF0[v51];
            *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 32) = v31;
          }
          else
          {
            *(_DWORD *)(v30 + *((_QWORD *)this + 71) + 32) = 0;
          }
          ++v29;
          v30 += 36LL;
          if ( v29 >= *((_DWORD *)this + 136) )
            goto LABEL_70;
        }
        v32 = 120LL;
LABEL_69:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v22);
        goto LABEL_32;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v23);
      if ( v20 )
        goto LABEL_30;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v21);
      if ( v20 )
      {
LABEL_30:
        `eh vector destructor iterator'(
          (char *)v20,
          24LL,
          *((_QWORD *)v20 - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[]((char *)v20 - 8);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
LABEL_32:
    v6 = v22;
    goto LABEL_82;
  }
  v13 = wil::details::in1diag3::Return_Win32(
          retaddr,
          65LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)v12);
LABEL_11:
  v6 = v13;
LABEL_82:
  WindowsDeleteString(string);
  return (unsigned int)v6;
}
