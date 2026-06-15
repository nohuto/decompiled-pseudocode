/*
 * XREFs of ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18012B648
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1801262A0 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F40 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamInfo@@@Z @ 0x180125D08 (--4-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamI.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18012A420 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x18012AC80 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CStreamResource::Initialize(
        Sarm::CStreamResource *this,
        struct IAudioStreamInfo *a2,
        __int64 a3,
        const struct _GUID *a4,
        struct __POSITION *a5,
        const struct SPATIAL_STREAM_PROPERTIES *a6,
        struct Sarm::CEndpointResourcePool *a7)
{
  int v8; // r12d
  struct Sarm::CEndpointResourcePool *v11; // r14
  __int64 (__fastcall *v12)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  const struct SPATIAL_STREAM_PROPERTIES *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+28h] [rbp-91h]
  __int64 v21; // [rsp+88h] [rbp-31h] BYREF
  int v22; // [rsp+90h] [rbp-29h] BYREF
  int v23; // [rsp+94h] [rbp-25h] BYREF
  int v24; // [rsp+98h] [rbp-21h] BYREF
  int v25; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v26; // [rsp+A0h] [rbp-19h] BYREF
  int v27; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+7h] BYREF
  const CHAR *v32; // [rsp+C8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  char v34; // [rsp+110h] [rbp+57h] BYREF

  v8 = a3;
  SarmTraceLoggingTracer("Sarm::CStreamResource::Initialize", 32, a3, (__int64)a4);
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL,
      v20);
  v11 = a7;
  if ( !a7 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0108LL,
      v20);
  v21 = 0LL;
  v12 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v21);
  v13 = v12(a2, &v21);
  v14 = v13;
  if ( v13 >= 0 )
  {
    *((_QWORD *)this + 4) = a5;
    *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 360LL))(v21);
    *((_QWORD *)this + 5) = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
    *((_DWORD *)this + 12) = v8;
    *((struct _GUID *)this + 1) = *a4;
    *((_BYTE *)this + 88) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 120LL))(v21) == 1;
    v15 = a6;
    *((_DWORD *)this + 14) = *((_DWORD *)a6 + 1);
    *((_DWORD *)this + 15) = *(_DWORD *)v15;
    *((_DWORD *)this + 17) = *((_DWORD *)v15 + 3);
    *((_QWORD *)this + 1) = v11;
    ++*((_DWORD *)v11 + 3);
    if ( (unsigned int)dword_1801C0178 > 4 )
    {
      v28 = *((_QWORD *)this + 1);
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21);
      v22 = *((_DWORD *)this + 13);
      v34 = *((_BYTE *)this + 88);
      v23 = *((_DWORD *)this + 17);
      v24 = *((_DWORD *)this + 15);
      v25 = *((_DWORD *)this + 14);
      v26 = *((_DWORD *)this + 12);
      v30 = (__int64)this + 16;
      v31 = *((_QWORD *)this + 5);
      v27 = 68;
      v32 = "Sarm::CStreamResource::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v16,
        byte_18018BE94,
        v17,
        v18,
        &v32,
        (__int64)&v27,
        (__int64)&v31,
        &v30,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v22,
        (void **)&v29,
        (__int64)&v28);
    }
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v13);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
  return v14;
}
