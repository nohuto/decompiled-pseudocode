/*
 * XREFs of ?GetInputInfoForReport@DockDevice@@QEAAJPEADGPEAUDockInputInfo@@@Z @ 0x1800CD47C
 * Callers:
 *     ?OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800C8BB0 (-OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800CB010 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall DockDevice::GetInputInfoForReport(
        DockDevice *this,
        char *a2,
        unsigned __int16 a3,
        LARGE_INTEGER *a4)
{
  ULONG ReportLength; // edi
  __int64 v8; // r14
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  NTSTATUS UsageValueArray; // eax
  __int64 v11; // rdx
  LARGE_INTEGER v13; // rax
  signed int v14; // ecx
  signed int v15; // ecx
  signed int v16; // edx
  signed int v17; // ecx
  signed int v18; // edx
  signed int v19; // ecx
  char v20; // r14
  ULONG v21; // eax
  const char *v22; // rax
  __int64 v23; // rdx
  const char *UsageValueByteLength; // [rsp+28h] [rbp-48h]
  ULONG UsageLength; // [rsp+50h] [rbp-20h] BYREF
  CHAR UsageValue[8]; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  USHORT UsageList; // [rsp+B0h] [rbp+40h] BYREF
  ULONG v30; // [rsp+C8h] [rbp+58h] BYREF

  a4->HighPart = *((_DWORD *)this + 10);
  a4->LowPart = 0x100000;
  a4[3].LowPart = 88;
  ReportLength = a3;
  a4[1].LowPart = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  a4[2] = PerformanceCount;
  a4[4].LowPart = a4->HighPart;
  v8 = *((_QWORD *)this + 4);
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v30 = 0;
  if ( *(_BYTE *)(v8 + 1662) )
  {
    *(_QWORD *)UsageValue = 0LL;
    UsageValueArray = HidP_GetUsageValueArray(HidP_Input, 1u, 0, 0xD0u, UsageValue, 8u, PreparsedData, a2, ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 202LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v13 = *(LARGE_INTEGER *)UsageValue;
  }
  else
  {
    UsageValueArray = HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD0u, &v30, PreparsedData, a2, ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 216LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v13.QuadPart = v30;
  }
  a4[5] = v13;
  UsageValueArray = HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD1u, &v30, PreparsedData, a2, ReportLength);
  if ( UsageValueArray < 0 )
  {
    v11 = 229LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
             (const char *)(unsigned int)UsageValueArray);
  }
  LOWORD(a4[6].LowPart) = v30;
  UsageList = 0;
  UsageLength = 1;
  UsageValueArray = HidP_GetUsages(HidP_Input, 1u, 0, &UsageList, &UsageLength, PreparsedData, a2, ReportLength);
  if ( UsageValueArray < 0 )
  {
    v11 = 243LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
             (const char *)(unsigned int)UsageValueArray);
  }
  LOBYTE(a4[8].LowPart) = UsageList == 212;
  if ( *(_BYTE *)(v8 + 1663) )
  {
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        1u,
                        *(_WORD *)(v8 + 1664),
                        0x30u,
                        &v30,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 259LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v14 = *(_DWORD *)(v8 + 1676);
    if ( v14 >= (int)v30 )
    {
      v14 = v30;
      if ( (signed int)v30 < *(_DWORD *)(v8 + 1668) )
        v14 = *(_DWORD *)(v8 + 1668);
    }
    a4[8].HighPart = v14;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        1u,
                        *(_WORD *)(v8 + 1664),
                        0x31u,
                        &v30,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 274LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v15 = *(_DWORD *)(v8 + 1680);
    if ( v15 >= (int)v30 )
    {
      v15 = v30;
      if ( (signed int)v30 < *(_DWORD *)(v8 + 1672) )
        v15 = *(_DWORD *)(v8 + 1672);
    }
    a4[9].LowPart = v15;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        0xDu,
                        *(_WORD *)(v8 + 1664),
                        0x48u,
                        &v30,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 289LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v16 = a4[8].HighPart + v30;
    v17 = *(_DWORD *)(v8 + 1676);
    if ( v17 >= v16 )
    {
      v17 = a4[8].HighPart + v30;
      if ( v16 < *(_DWORD *)(v8 + 1668) )
        v17 = *(_DWORD *)(v8 + 1668);
    }
    a4[9].HighPart = v17;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        0xDu,
                        *(_WORD *)(v8 + 1664),
                        0x49u,
                        &v30,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v11 = 304LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v18 = v30 + a4[9].LowPart;
    v19 = *(_DWORD *)(v8 + 1680);
    if ( v19 >= v18 )
    {
      v19 = v30 + a4[9].LowPart;
      if ( v18 < *(_DWORD *)(v8 + 1672) )
        v19 = *(_DWORD *)(v8 + 1672);
    }
    a4[10].LowPart = v19;
  }
  v20 = 0;
  if ( HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD6u, &v30, PreparsedData, a2, ReportLength) < 0
    || (v21 = v30, v20 = 1, a4[7].LowPart = v30, v21 == 1) )
  {
    if ( HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD2u, &v30, PreparsedData, a2, ReportLength) >= 0 )
      WORD2(a4[7].QuadPart) = v30;
    if ( HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD3u, &v30, PreparsedData, a2, ReportLength) >= 0 )
      HIWORD(a4[7].QuadPart) = v30;
  }
  if ( a4[7].LowPart == 1 )
  {
    if ( !WORD2(a4[7].QuadPart) )
    {
      v22 = "Invalid Dockable Device Primary Usage Page.";
      v23 = 364LL;
LABEL_44:
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v23,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
        (const char *)0x80004005LL,
        (int)v22,
        UsageValueByteLength);
      return 2147500037LL;
    }
    if ( !HIWORD(a4[7].QuadPart) )
    {
      v22 = "Invalid Dockable Device Primary Usage ID.";
      v23 = 365LL;
      goto LABEL_44;
    }
  }
  if ( !v20 && WORD2(a4[7].QuadPart) )
  {
    if ( HIWORD(a4[7].QuadPart) )
      a4[7].LowPart = 1;
  }
  return 0LL;
}
