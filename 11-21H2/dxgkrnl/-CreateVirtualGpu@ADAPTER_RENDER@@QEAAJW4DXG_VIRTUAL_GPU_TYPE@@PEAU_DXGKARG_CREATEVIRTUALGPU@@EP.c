/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C0356AD0
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C03592C8 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x1C005BDFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapBuffer@U_UNICODE_STR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C3C20 (-EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0357578 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(
        ADAPTER_RENDER *a1,
        int a2,
        _DWORD *a3,
        unsigned __int8 a4,
        __int64 a5)
{
  _DWORD *v5; // rdi
  unsigned __int8 v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  int v14; // r14d
  _DWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rcx
  struct _EPROCESS *v25; // [rsp+28h] [rbp-71h]
  __int64 v26; // [rsp+30h] [rbp-69h]
  __int64 v27; // [rsp+38h] [rbp-61h]
  __int64 v28; // [rsp+40h] [rbp-59h]
  int v29; // [rsp+78h] [rbp-21h] BYREF
  int v30; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v31; // [rsp+80h] [rbp-19h] BYREF
  int v32; // [rsp+84h] [rbp-15h] BYREF
  int v33; // [rsp+88h] [rbp-11h] BYREF
  int v34; // [rsp+8Ch] [rbp-Dh] BYREF
  int v35; // [rsp+90h] [rbp-9h] BYREF
  struct DXGPROCESS *v36; // [rsp+98h] [rbp-1h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int16 *v38; // [rsp+A8h] [rbp+Fh] BYREF

  v5 = a3;
  v6 = a4;
  v8 = a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(
      (__int64)a1,
      &CreateVirtualGpuStart,
      (__int64)a3,
      *((_QWORD *)a1 + 2),
      *a3,
      a4,
      0,
      0);
  LODWORD(v13) = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1);
  if ( (int)v13 < 0 )
  {
    v14 = 8;
    goto LABEL_36;
  }
  v15 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 2696LL);
  if ( (*v15 & 0x200) != 0 && v6 )
  {
    WdLogSingleEntry1(2LL, 1428LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CreateVirtualGpu failed due to blocklist disallowing paravirtualization for a high security scenario",
      1428LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v13) = -1073741823;
    v14 = 1;
    goto LABEL_36;
  }
  if ( g_ForceSecureVirtualMachine )
    v6 = 1;
  if ( (_DWORD)v8 == 1 )
    v16 = *((_QWORD *)a1 + 217);
  else
    v16 = *((_QWORD *)a1 + 216);
  if ( !v16 )
  {
    v14 = 2;
    WdLogSingleEntry1(2LL, 1442LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Creating a paravirtualzed GPU without setting partition count",
      1442LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v13) = -1073741811;
    goto LABEL_36;
  }
  if ( !DXGPROCESS::GetCurrent((__int64)v15, v9, v11, v12) )
  {
    LODWORD(v13) = DXGPROCESS::CreateDxgProcess(&v36, 0LL, 0LL, 0LL, 0LL);
    if ( (int)v13 < 0 )
    {
      v14 = 3;
      WdLogSingleEntry1(3LL, 1458LL);
      goto LABEL_36;
    }
  }
  if ( (_DWORD)v8 == 1 )
  {
    if ( v6 )
    {
      v19 = *((_QWORD *)a1 + 2);
      if ( *(int *)(v19 + 2424) < 9216 )
      {
LABEL_24:
        WdLogSingleEntry1(2LL, 1474LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The driver model does not support secure virtual GPU",
          1474LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v13) = -1073741637;
        v14 = 4;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v19 + 2424) == 9216 )
      {
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_EnableGpuPVFor2_4Drivers__private_reporting,
          0x1142650u,
          v17,
          v18,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
          0);
        goto LABEL_24;
      }
      goto LABEL_27;
    }
  }
  else if ( !(_DWORD)v8 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_IoMmuIsolationForGPUP__private_reporting,
      0x12622AFu,
      v17,
      v18,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    v19 = *((_QWORD *)a1 + 2);
LABEL_27:
    if ( (*(_DWORD *)(v19 + 2156) & 0x800) != 0 )
    {
      v21 = ADAPTER_RENDER::EnableIommuForSecureVgpu(a1, *(struct SYSMM_ADAPTER **)(v19 + 224));
      v13 = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry3(2LL, v8, v6, v21);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to enable IoMmu for virtual GPU. VirtualGpuType=%u, Secure=%u. Status=0x%.8x",
          v8,
          v6,
          v13,
          0LL,
          0LL);
        LODWORD(v8) = a2;
        v14 = 6;
        v5 = a3;
        goto LABEL_36;
      }
    }
    else if ( (*(_DWORD *)(v19 + 2752) & 8) == 0 )
    {
      v20 = *(_DWORD *)(v19 + 436);
      if ( (v20 & 8) == 0 && (v20 & 4) == 0 )
      {
        WdLogSingleEntry1(2LL, 1506LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The driver does not support IOMMU isolation and does not bypass this requirement for secure mode",
          1506LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v13) = -1073741637;
        v14 = 5;
        goto LABEL_36;
      }
    }
  }
  LOBYTE(v17) = v6;
  v14 = 0;
  LODWORD(v13) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)v16 + 16LL))(
                   v16,
                   v5,
                   v17,
                   a5);
  if ( (int)v13 < 0 )
    v14 = 7;
LABEL_36:
  if ( (unsigned int)dword_1C012F918 > 5 && tlgKeywordOn((__int64)&dword_1C012F918, 0x400000008000LL) )
  {
    v23 = *((_QWORD *)a1 + 2);
    v33 = v13;
    v34 = v14;
    v35 = v8;
    v29 = *(_DWORD *)(v23 + 424);
    v30 = *(_DWORD *)(v23 + 420);
    v31 = *(_DWORD *)(v23 + 416);
    v32 = *(_DWORD *)(v23 + 412);
    v37 = *(_QWORD *)(v23 + 404);
    v38 = *(unsigned __int16 **)(v23 + 1616);
    v36 = (struct DXGPROCESS *)0x2000000;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      byte_1C0099967,
      v11,
      v22,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      &v38,
      (__int64)&v37,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v13 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v28) = v14;
      LODWORD(v27) = v13;
      LODWORD(v26) = v6;
      LODWORD(v25) = *v5;
      McTemplateK0pqtqq_EtwWriteTransfer(v10, &CreateVirtualGpuFailed, v11, *((_QWORD *)a1 + 2), v25, v26, v27, v28);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v28) = v14;
      LODWORD(v27) = v13;
      LODWORD(v26) = v6;
      LODWORD(v25) = *v5;
      McTemplateK0pqtqq_EtwWriteTransfer(v10, &CreateVirtualGpuEnd, v11, *((_QWORD *)a1 + 2), v25, v26, v27, v28);
    }
  }
  return (unsigned int)v13;
}
