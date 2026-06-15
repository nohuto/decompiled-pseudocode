/*
 * XREFs of ?CaptureState@CVADServer@@QEAAXXZ @ 0x18011CD8C
 * Callers:
 *     ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800654B0 (-Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x1800EB5B8 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 *     ?GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ @ 0x1800EC30C (-GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U5@U3@U3@U3@U3@U6@U4@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555555AEBU?$_tlgWrapperByVal@$00@@54AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByRef@$0BA@@@575555865553@Z @ 0x18011BE0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::CaptureState(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // r14
  char v4; // r15
  _WORD *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  _WORD *v12; // rax
  GUID *v13; // rax
  const WCHAR *v14; // rax
  CAudioStream *v15; // rcx
  char v16; // [rsp+118h] [rbp-80h] BYREF
  bool v17[3]; // [rsp+119h] [rbp-7Fh] BYREF
  float MinStreamChannelVolume; // [rsp+11Ch] [rbp-7Ch] BYREF
  _WORD v19[2]; // [rsp+120h] [rbp-78h] BYREF
  int v20; // [rsp+124h] [rbp-74h] BYREF
  int v21; // [rsp+128h] [rbp-70h] BYREF
  int v22; // [rsp+12Ch] [rbp-6Ch] BYREF
  float v23; // [rsp+130h] [rbp-68h] BYREF
  int v24; // [rsp+134h] [rbp-64h] BYREF
  int v25; // [rsp+138h] [rbp-60h] BYREF
  int v26; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v27; // [rsp+140h] [rbp-58h] BYREF
  int v28; // [rsp+144h] [rbp-54h] BYREF
  int v29; // [rsp+148h] [rbp-50h] BYREF
  int v30; // [rsp+14Ch] [rbp-4Ch] BYREF
  int v31; // [rsp+150h] [rbp-48h] BYREF
  int v32; // [rsp+154h] [rbp-44h] BYREF
  int v33; // [rsp+158h] [rbp-40h] BYREF
  int v34; // [rsp+15Ch] [rbp-3Ch] BYREF
  int v35; // [rsp+160h] [rbp-38h] BYREF
  int v36; // [rsp+164h] [rbp-34h] BYREF
  int v37; // [rsp+168h] [rbp-30h] BYREF
  __int64 v38; // [rsp+170h] [rbp-28h] BYREF
  __int64 v39; // [rsp+178h] [rbp-20h] BYREF
  GUID *v40; // [rsp+180h] [rbp-18h] BYREF
  const WCHAR *v41; // [rsp+188h] [rbp-10h] BYREF
  const WCHAR *v42; // [rsp+190h] [rbp-8h] BYREF
  const WCHAR *v43; // [rsp+198h] [rbp+0h] BYREF
  _QWORD v44[2]; // [rsp+1A0h] [rbp+8h] BYREF
  GUID v45; // [rsp+1B0h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 192) & -(__int64)TryEnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192)));
  v44[1] = v2;
  v45 = GUID_00000000_0000_0000_0000_000000000000;
  v3 = 0LL;
  v4 = 0;
  MinStreamChannelVolume = FLOAT_N1_0;
  v5 = (_WORD *)*((_QWORD *)this + 19);
  v6 = 65534LL;
  if ( *v5 == 0xFFFE )
  {
    v3 = *((_QWORD *)this + 19);
  }
  else
  {
    v45 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v45.Data1 = (unsigned __int16)*v5;
  }
  v7 = (__int64 *)((char *)this + 168);
  if ( v2 )
  {
    v6 = *v7;
    if ( *v7 )
    {
      if ( *(_QWORD *)(v6 + 48) )
      {
        v4 = *(_BYTE *)(v6 + 256);
        MinStreamChannelVolume = CAudioStream::GetMinStreamChannelVolume((CAudioStream *)v6);
      }
    }
  }
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v6,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 4u && tlgKeywordOn(v8[1], 4LL) )
  {
    v38 = *((_QWORD *)this + 52);
    v21 = *((_DWORD *)this + 102);
    v22 = *((_DWORD *)this + 98);
    v23 = MinStreamChannelVolume;
    v16 = v4;
    v39 = (__int64)this + 344;
    v24 = *((_DWORD *)this + 83);
    v25 = *((_DWORD *)this + 82);
    v26 = *((_DWORD *)this + 81);
    v27 = *((_DWORD *)this + 80);
    v11 = *((_QWORD *)this + 19);
    v12 = (_WORD *)(v3 + 18);
    if ( !v3 )
      v12 = (_WORD *)(v11 + 14);
    v19[0] = *v12;
    if ( v3 )
    {
      v20 = *(_DWORD *)(v3 + 20);
      v13 = (GUID *)(v3 + 24);
    }
    else
    {
      v20 = 0;
      v13 = &v45;
    }
    v40 = v13;
    v28 = *(_DWORD *)(v11 + 8);
    v29 = *(_DWORD *)(v11 + 4);
    LOWORD(MinStreamChannelVolume) = *(_WORD *)(v11 + 2);
    v14 = L"WAVEFORMATEXTENSIBLE";
    if ( !v3 )
      v14 = L"WAVEFORMATEX";
    v41 = v14;
    v30 = *((_DWORD *)this + 59);
    v17[0] = *((_DWORD *)this + 75) == 1;
    v31 = *((_DWORD *)this + 79);
    v32 = *((_DWORD *)this + 76);
    v33 = *((_DWORD *)this + 58);
    v34 = *((_DWORD *)this + 74);
    v35 = *((_DWORD *)this + 140);
    v36 = v33;
    v42 = (const WCHAR *)*((_QWORD *)this + 23);
    v37 = *((_DWORD *)this + 10);
    v43 = (const WCHAR *)*((_QWORD *)this + 15);
    v44[0] = *((_QWORD *)this + 69);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v10,
      byte_180193EE9,
      v9,
      v10,
      (__int64)v44,
      &v43,
      (__int64)&v37,
      &v42,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)v17,
      (__int64)&v30,
      &v41,
      (__int64)&MinStreamChannelVolume,
      (__int64)&v29,
      (__int64)&v28,
      (__int64 *)&v40,
      (__int64)&v20,
      (__int64)v19,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      &v39,
      (__int64)&v16,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v38);
  }
  if ( v2 )
  {
    v15 = (CAudioStream *)*v7;
    if ( *v7 )
    {
      if ( *((_QWORD *)v15 + 6) )
        CAudioStream::CapturePolicyVolumeState(v15);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
