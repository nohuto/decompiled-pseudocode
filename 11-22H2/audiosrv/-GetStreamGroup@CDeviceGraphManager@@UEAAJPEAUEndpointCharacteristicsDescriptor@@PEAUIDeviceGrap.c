/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000ED90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U1@U2@U?$_tlgWrapperByVal@$00@@U6@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@34AEBU?$_tlgWrapperByVal@$00@@88@Z @ 0x18000EB18 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByV.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUICompositeSystemEffect@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUICompositeSystemEffect@@@Z @ 0x1800103EC (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristic.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x18002967C (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18004A0BC (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18010368C (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteris.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct IDeviceGraphObjectsStore *a3,
        struct StreamGroupParams *a4,
        char a5,
        struct MODE_PARAMS *a6,
        struct IStreamGroupProxy **a7)
{
  struct IStreamGroupProxy **v7; // r12
  struct MODE_PARAMS *v8; // rdi
  int v11; // esi
  unsigned int v12; // esi
  char *v13; // rax
  char *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  struct IStreamGroupProxy *v30; // [rsp+88h] [rbp-31h] BYREF
  __int16 v31[2]; // [rsp+90h] [rbp-29h] BYREF
  int v32; // [rsp+94h] [rbp-25h] BYREF
  int v33; // [rsp+98h] [rbp-21h] BYREF
  int v34; // [rsp+9Ch] [rbp-1Dh] BYREF
  __int64 v35; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-11h] BYREF
  const WCHAR *v37; // [rsp+B0h] [rbp-9h] BYREF
  struct IStreamGroupProxy *v38; // [rsp+B8h] [rbp-1h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[7]; // [rsp+C0h] [rbp+7h] BYREF
  struct EndpointCharacteristicsDescriptor *v40; // [rsp+110h] [rbp+57h] BYREF
  __int64 v41; // [rsp+118h] [rbp+5Fh] BYREF
  struct StreamGroupParams *v42; // [rsp+120h] [rbp+67h] BYREF

  v42 = a4;
  v40 = a2;
  v7 = a7;
  v8 = a6;
  *a7 = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)a3 + 72LL))(
    a3,
    lpCriticalSection);
  if ( *((_BYTE *)a4 + 48)
    || *((_BYTE *)a4 + 50)
    || (v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)a3 + 32LL))(
                a3,
                a4,
                v7),
        v11 == -2147023728) )
  {
    v30 = 0LL;
    if ( v8 )
      v12 = *(_DWORD *)(*((_QWORD *)v8 + 1) + 60LL);
    else
      v12 = 0;
    v13 = (char *)ATL::CComAllocator::Allocate(16LL * v12 + 84);
    a7 = (struct IStreamGroupProxy **)v13;
    v14 = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = *((_DWORD *)a4 + 2);
      *(_QWORD *)(v13 + 4) = *((unsigned __int8 *)a4 + 48);
      if ( v8 )
        v15 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL) + 16LL) + 18;
      else
        v15 = 0;
      *((_DWORD *)v14 + 3) = v15;
      if ( v8 )
        v16 = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
      else
        v16 = 0LL;
      *((_QWORD *)v14 + 2) = v16;
      *((_QWORD *)v14 + 3) = *(_QWORD *)a4;
      *((_DWORD *)v14 + 9) = *(unsigned __int16 *)(*((_QWORD *)a4 + 2) + 16LL) + 18;
      *((_QWORD *)v14 + 5) = *((_QWORD *)a4 + 2);
      *((_QWORD *)v14 + 6) = *((_QWORD *)a4 + 3);
      if ( v8 )
        v17 = *(_DWORD *)(*((_QWORD *)v8 + 1) + 32LL);
      else
        v17 = 0;
      *((_DWORD *)v14 + 14) = v17;
      *(_OWORD *)(v14 + 60) = *((_OWORD *)a4 + 2);
      *((_DWORD *)v14 + 20) = v12;
      *((_DWORD *)v14 + 8) = *((unsigned __int8 *)a4 + 50);
      if ( v8 )
        v18 = *(_DWORD *)(*((_QWORD *)v8 + 1) + 56LL);
      else
        v18 = 0;
      v19 = 0LL;
      *((_DWORD *)v14 + 19) = v18;
      if ( v12 )
      {
        do
        {
          v20 = 2 * (v19 + 4);
          v21 = 2LL * (unsigned int)v19;
          v19 = (unsigned int)(v19 + 1);
          *(_OWORD *)&v14[8 * v21 + 84] = *(_OWORD *)(*((_QWORD *)v8 + 1) + 8 * v20);
        }
        while ( (unsigned int)v19 < *((_DWORD *)v14 + 20) );
      }
      if ( *((_BYTE *)a4 + 48) )
      {
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v30);
        v23 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                (unsigned int)&v30,
                (unsigned int)&v40,
                (unsigned int)&v42,
                (unsigned int)&a7,
                (__int64)&a5);
      }
      else
      {
        if ( v8 )
          v22 = *(_QWORD *)v8;
        else
          v22 = 0LL;
        v41 = v22;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v30);
        v23 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &,ICompositeSystemEffect *>(
                (unsigned int)&v30,
                (unsigned int)&v40,
                (unsigned int)&v42,
                (unsigned int)&a7,
                (__int64)&a5,
                (__int64)&v41);
      }
      v11 = v23;
      v25 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v24,
                           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v25 > 4u )
      {
        LOBYTE(v42) = *((_BYTE *)a4 + 50);
        LOBYTE(a7) = *((_BYTE *)a4 + 49);
        LOBYTE(v41) = *((_BYTE *)a4 + 48);
        v32 = *((_DWORD *)a4 + 2);
        v35 = *((_QWORD *)a4 + 3);
        v27 = *((_QWORD *)a4 + 2);
        v36 = (__int64)a4 + 32;
        v31[0] = *(_WORD *)(v27 + 2);
        v33 = *(_DWORD *)(*((_QWORD *)a4 + 2) + 4LL);
        v37 = *(const WCHAR **)a4;
        v38 = v30;
        v34 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          (int)v25,
          (int)&unk_180192F80,
          (__int64)v25,
          v26,
          (__int64)&v38,
          (__int64)&v34,
          &v37,
          (__int64)&v33,
          (__int64)v31,
          &v36,
          (__int64)&v35,
          (__int64)&v32,
          (__int64)&v41,
          (__int64)&a7,
          (__int64)&v42);
      }
      if ( v11 >= 0 )
      {
        v42 = 0LL;
        a7 = &v42;
        v28 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&a7);
        v11 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v30, v28);
        if ( v11 >= 0 )
          v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct StreamGroupParams **))(*(_QWORD *)a3 + 40LL))(
                  a3,
                  &v42);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v42);
        if ( v11 >= 0 )
        {
          *v7 = v30;
          v30 = 0LL;
        }
      }
    }
    else
    {
      v11 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v30);
    CoTaskMemFree(v14);
  }
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return (unsigned int)v11;
}
