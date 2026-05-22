/*
 * XREFs of ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800F0E84
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800F0448 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_V@YAXPEAX_K@Z @ 0x180056754 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800568F0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057640 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DAE94 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800E990C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800EA14C (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800EACDC (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800EADF8 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800EE858 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800EE8C8 (-LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800F0330 (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800F06CC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800F17E4 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800F1C30 (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800F1D60 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z.c)
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x1800F21D0 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800F23F4 (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800F2730 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800F3958 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HidLampArrayDevice::Initialize(HidLampArrayDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v4; // r14
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
  signed int v22; // r15d
  int v23; // eax
  signed int v24; // eax
  unsigned __int64 v25; // rcx
  size_t v26; // rax
  void *v27; // rax
  void *v28; // rcx
  int v29; // edi
  __int64 v30; // rbx
  int v31; // r14d
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // r9
  LampArrayTelemetry *v44; // rcx
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-69h] BYREF
  HSTRING string; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v48[2]; // [rsp+70h] [rbp-59h] BYREF
  struct ParsedHidReportDescriptor *v49[2]; // [rsp+78h] [rbp-51h] BYREF
  UINT32 length; // [rsp+88h] [rbp-41h] BYREF
  _DWORD v51[7]; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int16 v52; // [rsp+ACh] [rbp-1Dh]
  char v53; // [rsp+B0h] [rbp-19h]
  char v54; // [rsp+B1h] [rbp-18h]
  char v55; // [rsp+B2h] [rbp-17h]
  char v56; // [rsp+B3h] [rbp-16h]
  __int128 v57; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-1h]
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
    v7 = 52LL;
LABEL_83:
    v43 = (unsigned int)InterfacePath;
LABEL_87:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)v43);
    goto LABEL_88;
  }
  if ( (unsigned int)dword_180266498 > 5 )
  {
    v49[0] = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
    PreparsedData = (PHIDP_PREPARSED_DATA)"Attempting to initialize HidLampArrayDevice";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v8,
      byte_180224945,
      v9,
      v10,
      (const unsigned __int16 **)&PreparsedData,
      (const WCHAR **)v49);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  if ( !length || !*StringRawBuffer )
  {
    v6 = -2147024809;
    v7 = 58LL;
    goto LABEL_86;
  }
  if ( length > 0x100 )
  {
    v6 = -2147024774;
    v7 = 59LL;
    goto LABEL_86;
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
      v16 = 68LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v6);
LABEL_19:
      if ( PreparsedData )
        HidD_FreePreparsedData(PreparsedData);
      goto LABEL_88;
    }
    if ( *((_WORD *)PreparsedData + 5) != 89 )
    {
      v6 = -2147024890;
      v16 = 69LL;
      goto LABEL_18;
    }
    if ( *((_WORD *)PreparsedData + 4) != 1 )
    {
      v6 = -2147024890;
      v16 = 70LL;
      goto LABEL_18;
    }
    v49[0] = 0LL;
    v48[0] = 0;
    ReportDescriptorsFromPreparsedData = HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
                                           v14,
                                           (__int64)PreparsedData,
                                           (char **)v49,
                                           v48);
    v18 = ReportDescriptorsFromPreparsedData;
    if ( ReportDescriptorsFromPreparsedData < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)ReportDescriptorsFromPreparsedData);
      if ( v49[0] )
      {
        v19 = (char *)v49[0] - 8;
        `eh vector destructor iterator'(
          (char *)v49[0],
          24LL,
          *((_QWORD *)v49[0] - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[](v19);
      }
      if ( PreparsedData )
        HidD_FreePreparsedData(PreparsedData);
      v6 = v18;
      goto LABEL_88;
    }
    v20 = v49[0];
    v21 = HidLampArrayDevice::CacheReportSizes(this, v49[0], v48[0]);
    v22 = v21;
    if ( v21 >= 0 )
    {
      v23 = HidLampArrayDevice::ParseReportDescriptors(this, v20, v48[0]);
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
        if ( PreparsedData )
          HidD_FreePreparsedData(PreparsedData);
        if ( HidD_GetAttributes(*((HANDLE *)*v4 + 5), &Attributes) )
        {
          *((_WORD *)this + 269) = Attributes.VendorID;
          *((_WORD *)this + 270) = Attributes.ProductID;
          *((_WORD *)this + 271) = Attributes.VersionNumber;
          v57 = 0LL;
          v58 = 0LL;
          InterfacePath = HidLampArrayDevice::ReceiveLampArrayAttributesReport(
                            this,
                            (struct LampArrayAttributesDeviceReport *)&v57);
          v6 = InterfacePath;
          if ( InterfacePath < 0 )
          {
            v7 = 97LL;
            goto LABEL_83;
          }
          v25 = (int)v57;
          *((_OWORD *)this + 34) = v57;
          *((_QWORD *)this + 70) = v58;
          v26 = 36 * v25;
          if ( !is_mul_ok(v25, 0x24uLL) )
            v26 = -1LL;
          v27 = operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
          v28 = (void *)*((_QWORD *)this + 71);
          *((_QWORD *)this + 71) = v27;
          if ( v28 )
            operator delete[](v28);
          if ( *((_QWORD *)this + 71) )
          {
            v29 = 0;
            if ( *((int *)this + 136) > 0 )
            {
              v30 = 0LL;
              while ( 1 )
              {
                v31 = HidLampArrayDevice::SendLampAttributesRequest(this, v29);
                if ( v31 < 0 )
                  break;
                v31 = HidLampArrayDevice::ReceiveLampAttributesReport(
                        this,
                        (struct LampAttributesResponseDeviceReport *)v51);
                if ( v31 < 0 )
                {
                  v33 = 118LL;
                  goto LABEL_75;
                }
                if ( v51[0] != v29 )
                {
                  v6 = -2089418751;
                  v7 = 123LL;
                  goto LABEL_86;
                }
                *(_DWORD *)(v30 + *((_QWORD *)this + 71)) = v51[0];
                *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 4) = v51[1];
                *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 8) = v51[2];
                *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 12) = v51[3];
                *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 16) = v51[4];
                *(_BYTE *)(*((_QWORD *)this + 71) + v30 + 24) = v53;
                *(_BYTE *)(*((_QWORD *)this + 71) + v30 + 25) = v54;
                *(_BYTE *)(*((_QWORD *)this + 71) + v30 + 26) = v55;
                *(_BYTE *)(*((_QWORD *)this + 71) + v30 + 27) = v56;
                *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 28) = v51[6];
                *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 20) = v51[5];
                if ( *((_DWORD *)this + 140) == 1 )
                {
                  *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 32) = HidUsageConverter::KeyboardHidUsageToVKey(v52);
                }
                else if ( *((_DWORD *)this + 140) == 2 )
                {
                  if ( v52 >= 6u )
                    v32 = 0;
                  else
                    v32 = dword_18022CEA0[v52];
                  *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 32) = v32;
                }
                else
                {
                  *(_DWORD *)(*((_QWORD *)this + 71) + v30 + 32) = 0;
                }
                ++v29;
                v30 += 36LL;
                if ( v29 >= *((_DWORD *)this + 136) )
                  goto LABEL_76;
              }
              v33 = 115LL;
LABEL_75:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v33,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                (const char *)(unsigned int)v31);
              v6 = v31;
              goto LABEL_88;
            }
LABEL_76:
            if ( (unsigned int)dword_180266498 > 5 )
            {
              v49[0] = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
              *(_QWORD *)v48 = "Successfully parsed device data";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                v34,
                byte_180224945,
                v35,
                v36,
                (const unsigned __int16 **)v48,
                (const WCHAR **)v49);
              if ( (unsigned int)dword_180266498 > 5 )
              {
                v49[0] = (struct ParsedHidReportDescriptor *)WindowsGetStringRawBuffer(string, 0LL);
                *(_QWORD *)v48 = "Setting device to known-good-state.";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
                  v37,
                  byte_180224945,
                  v38,
                  v39,
                  (const unsigned __int16 **)v48,
                  (const WCHAR **)v49);
              }
            }
            InterfacePath = HidLampArrayDevice::SetAutonomousMode(this, 1);
            v6 = InterfacePath;
            if ( InterfacePath >= 0 )
            {
              *(_OWORD *)v49 = 0LL;
              LODWORD(v49[0]) = 1;
              LODWORD(v49[1]) = *((_DWORD *)this + 136) - 1;
              InterfacePath = HidLampArrayDevice::SendLampRangeUpdateReport(
                                this,
                                (const struct LampRangeUpdateDeviceReport *)v49);
              v6 = InterfacePath;
              if ( InterfacePath >= 0 )
              {
                LampArrayTelemetry::GetInstance(v41, v40, v42);
                LampArrayTelemetry::LogLampArrayDeviceAdded(
                  v44,
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
                WindowsDeleteString(string);
                return 0LL;
              }
              v7 = 170LL;
            }
            else
            {
              v7 = 164LL;
            }
            goto LABEL_83;
          }
          v6 = -2147024882;
          v7 = 111LL;
        }
        else
        {
          v24 = GetLastError();
          v6 = v24;
          if ( v24 > 0 )
            v6 = (unsigned __int16)v24 | 0x80070000;
          if ( v6 >= 0 )
            goto LABEL_88;
          v7 = 87LL;
        }
LABEL_86:
        v43 = (unsigned int)v6;
        goto LABEL_87;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v23);
      if ( v20 )
        goto LABEL_33;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v21);
      if ( v20 )
      {
LABEL_33:
        `eh vector destructor iterator'(
          (char *)v20,
          24LL,
          *((_QWORD *)v20 - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[]((char *)v20 - 8);
      }
    }
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    v6 = v22;
    goto LABEL_88;
  }
  v13 = wil::details::in1diag3::Return_Win32(
          retaddr,
          60LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)v12);
LABEL_11:
  v6 = v13;
LABEL_88:
  WindowsDeleteString(string);
  return (unsigned int)v6;
}
