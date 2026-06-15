/*
 * XREFs of ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800EDF70
 * Callers:
 *     ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18005D670 (-Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x1800E3D9C (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 *     ?GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ @ 0x1800E462C (-GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U5@U3@U3@U3@U3@U6@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555555AEBU?$_tlgWrapperByVal@$00@@54AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByRef@$0BA@@@575555865@Z @ 0x1800ED0FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::CaptureState(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rbx
  char v4; // r14
  _WORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _WORD *v10; // rax
  GUID *v11; // rax
  const wchar_t *v12; // rax
  CAudioStream *v13; // rcx
  char v14; // [rsp+F0h] [rbp-80h] BYREF
  bool v15[3]; // [rsp+F1h] [rbp-7Fh] BYREF
  float MinStreamChannelVolume; // [rsp+F4h] [rbp-7Ch] BYREF
  _WORD v17[2]; // [rsp+F8h] [rbp-78h] BYREF
  int v18; // [rsp+FCh] [rbp-74h] BYREF
  float v19; // [rsp+100h] [rbp-70h] BYREF
  int v20; // [rsp+104h] [rbp-6Ch] BYREF
  int v21; // [rsp+108h] [rbp-68h] BYREF
  int v22; // [rsp+10Ch] [rbp-64h] BYREF
  int v23; // [rsp+110h] [rbp-60h] BYREF
  int v24; // [rsp+114h] [rbp-5Ch] BYREF
  int v25; // [rsp+118h] [rbp-58h] BYREF
  int v26; // [rsp+11Ch] [rbp-54h] BYREF
  int v27; // [rsp+120h] [rbp-50h] BYREF
  int v28; // [rsp+124h] [rbp-4Ch] BYREF
  int v29; // [rsp+128h] [rbp-48h] BYREF
  int v30; // [rsp+12Ch] [rbp-44h] BYREF
  int v31; // [rsp+130h] [rbp-40h] BYREF
  int v32; // [rsp+134h] [rbp-3Ch] BYREF
  int v33; // [rsp+138h] [rbp-38h] BYREF
  __int64 v34; // [rsp+140h] [rbp-30h] BYREF
  GUID *v35; // [rsp+148h] [rbp-28h] BYREF
  const wchar_t *v36; // [rsp+150h] [rbp-20h] BYREF
  void *v37; // [rsp+158h] [rbp-18h] BYREF
  void *v38; // [rsp+160h] [rbp-10h] BYREF
  __int64 v39; // [rsp+168h] [rbp-8h] BYREF
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+170h] [rbp+0h] BYREF
  GUID v41; // [rsp+178h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 224) & -(__int64)TryEnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224)));
  v40 = v2;
  v41 = GUID_00000000_0000_0000_0000_000000000000;
  v3 = 0LL;
  v4 = 0;
  MinStreamChannelVolume = FLOAT_N1_0;
  v5 = (_WORD *)*((_QWORD *)this + 22);
  v6 = 65534LL;
  if ( *v5 == 0xFFFE )
  {
    v3 = *((_QWORD *)this + 22);
  }
  else
  {
    v41 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v41.Data1 = (unsigned __int16)*v5;
  }
  if ( v2 )
  {
    v6 = *((_QWORD *)this + 24);
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 48) )
      {
        v4 = *(_BYTE *)(v6 + 240);
        MinStreamChannelVolume = CAudioStream::GetMinStreamChannelVolume((CAudioStream *)v6);
      }
    }
  }
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v6,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 4) != 0 && (*(_QWORD *)(v7 + 24) & 4LL) == *(_QWORD *)(v7 + 24) )
  {
    v19 = MinStreamChannelVolume;
    v14 = v4;
    v34 = (__int64)this + 376;
    v20 = *((_DWORD *)this + 91);
    v21 = *((_DWORD *)this + 90);
    v22 = *((_DWORD *)this + 89);
    v23 = *((_DWORD *)this + 88);
    v9 = *((_QWORD *)this + 22);
    v10 = (_WORD *)(v3 + 18);
    if ( !v3 )
      v10 = (_WORD *)(v9 + 14);
    v17[0] = *v10;
    if ( v3 )
    {
      v18 = *(_DWORD *)(v3 + 20);
      v11 = (GUID *)(v3 + 24);
    }
    else
    {
      v18 = 0;
      v11 = &v41;
    }
    v35 = v11;
    v24 = *(_DWORD *)(v9 + 8);
    v25 = *(_DWORD *)(v9 + 4);
    LOWORD(MinStreamChannelVolume) = *(_WORD *)(v9 + 2);
    v12 = L"WAVEFORMATEXTENSIBLE";
    if ( !v3 )
      v12 = L"WAVEFORMATEX";
    v36 = v12;
    v26 = *((_DWORD *)this + 67);
    v15[0] = *((_DWORD *)this + 83) == 1;
    v27 = *((_DWORD *)this + 87);
    v28 = *((_DWORD *)this + 84);
    v29 = *((_DWORD *)this + 66);
    v30 = *((_DWORD *)this + 82);
    v31 = *((_DWORD *)this + 142);
    v32 = v29;
    v37 = (void *)*((_QWORD *)this + 26);
    v33 = *((_DWORD *)this + 16);
    v38 = (void *)*((_QWORD *)this + 18);
    v39 = *((_QWORD *)this + 70);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v7,
      byte_1801892BC,
      v7,
      v8,
      (__int64)&v39,
      &v38,
      (__int64)&v33,
      &v37,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)v15,
      (__int64)&v26,
      (void **)&v36,
      (__int64)&MinStreamChannelVolume,
      (__int64)&v25,
      (__int64)&v24,
      (__int64 *)&v35,
      (__int64)&v18,
      (__int64)v17,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      &v34,
      (__int64)&v14,
      (__int64)&v19);
  }
  if ( v2 )
  {
    v13 = (CAudioStream *)*((_QWORD *)this + 24);
    if ( v13 )
    {
      if ( *((_QWORD *)v13 + 6) )
        CAudioStream::CapturePolicyVolumeState(v13);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v40);
}
