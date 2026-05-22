/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C69EC
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800C6FB0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@44@Z @ 0x1800C4770 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U3@U3@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@33333AEBU?$_tlgWrapSz@D@@355333@Z @ 0x1800C4B24 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U-$_tlgWrapSz@D@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@333333333@Z @ 0x1800C4E68 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWri.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800C5748 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // rsi
  char **Vector3AsString; // rax
  char **v6; // rax
  char **v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rsi
  char **v14; // rax
  char **v15; // rax
  char **v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v19[4]; // [rsp+A8h] [rbp-80h] BYREF
  int v20; // [rsp+ACh] [rbp-7Ch] BYREF
  int v21; // [rsp+B0h] [rbp-78h] BYREF
  int v22; // [rsp+B4h] [rbp-74h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-70h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-68h] BYREF
  int v25; // [rsp+C8h] [rbp-60h] BYREF
  int v26; // [rsp+CCh] [rbp-5Ch] BYREF
  __int64 v27; // [rsp+D0h] [rbp-58h] BYREF
  int v28; // [rsp+D8h] [rbp-50h] BYREF
  int v29; // [rsp+DCh] [rbp-4Ch] BYREF
  int v30; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-40h] BYREF
  int v32; // [rsp+F0h] [rbp-38h]
  WINBOOL fPending; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v34; // [rsp+100h] [rbp-28h] BYREF
  __int64 v35; // [rsp+108h] [rbp-20h] BYREF
  char *v36[2]; // [rsp+110h] [rbp-18h] BYREF
  __int64 v37; // [rsp+120h] [rbp-8h]
  unsigned __int64 v38; // [rsp+128h] [rbp+0h]
  char *v39[2]; // [rsp+130h] [rbp+8h] BYREF
  __int64 v40; // [rsp+140h] [rbp+18h]
  unsigned __int64 v41; // [rsp+148h] [rbp+20h]
  char *v42[3]; // [rsp+150h] [rbp+28h] BYREF
  unsigned __int64 v43; // [rsp+168h] [rbp+40h]

  Context = 0LL;
  if ( *((_DWORD *)a1 + 16) == 6 )
  {
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v31 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v32 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v31);
    }
    v4 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      v25 = *((_DWORD *)a1 + 303);
      v26 = *((_DWORD *)a1 + 267);
      LODWORD(v27) = *((_DWORD *)a1 + 268);
      Vector3AsString = ISMTracing::GetVector3AsString(v42);
      if ( (unsigned __int64)Vector3AsString[3] >= 0x10 )
        Vector3AsString = (char **)*Vector3AsString;
      v34 = (__int64)Vector3AsString;
      v6 = ISMTracing::GetVector3AsString(v39);
      if ( (unsigned __int64)v6[3] >= 0x10 )
        v6 = (char **)*v6;
      v35 = (__int64)v6;
      HIDWORD(v27) = *((_DWORD *)a1 + 266);
      v7 = ISMTracing::GetVector3AsString(v36);
      if ( (unsigned __int64)v7[3] >= 0x10 )
        v7 = (char **)*v7;
      v31 = (__int64)v7;
      v28 = *((_DWORD *)a1 + 265);
      v29 = *((_DWORD *)a1 + 264);
      v30 = *((_DWORD *)a1 + 17);
      v20 = *((_DWORD *)a1 + 16);
      v21 = *((_DWORD *)a1 + 18);
      v19[0] = *a2;
      v22 = *((_DWORD *)a1 + 2);
      LODWORD(v23) = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned __int8 *)dword_180222292,
        v8,
        v9,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)v19,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (const unsigned __int16 **)&v31,
        (__int64)&v27 + 4,
        (const unsigned __int16 **)&v35,
        (const unsigned __int16 **)&v34,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25);
      if ( v38 >= 0x10 )
        std::_Deallocate<16,0>(v36[0], v38 + 1);
      v37 = 0LL;
      v38 = 15LL;
      LOBYTE(v36[0]) = 0;
      if ( v41 >= 0x10 )
        std::_Deallocate<16,0>(v39[0], v41 + 1);
      v40 = 0LL;
      v41 = 15LL;
      LOBYTE(v39[0]) = 0;
LABEL_43:
      if ( v43 >= 0x10 )
        std::_Deallocate<16,0>(v42[0], v43 + 1);
    }
  }
  else
  {
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&v23, &Context)
      && (_DWORD)v23 )
    {
      v31 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v32 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v31);
    }
    v12 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 4u
      && (*(_BYTE *)(v12 + 16) & 1) != 0
      && (*(_QWORD *)(v12 + 24) & 1LL) == *(_QWORD *)(v12 + 24) )
    {
      v22 = *((_DWORD *)a1 + 303);
      v21 = *((_DWORD *)a1 + 267);
      v20 = *((_DWORD *)a1 + 268);
      v30 = *((_DWORD *)a1 + 266);
      v29 = *((_DWORD *)a1 + 265);
      v28 = *((_DWORD *)a1 + 264);
      v27 = *((_QWORD *)a1 + 8);
      v26 = *((_DWORD *)a1 + 18);
      v19[0] = *a2;
      v25 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_180222383,
        v10,
        v11,
        (__int64)&v25,
        (__int64)v19,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v27 + 4,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22);
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&v23, &Context)
      && (_DWORD)v23 )
    {
      v31 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v32 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v31);
    }
    v13 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v13 > 5u
      && (*(_BYTE *)(v13 + 16) & 1) != 0
      && (*(_QWORD *)(v13 + 24) & 1LL) == *(_QWORD *)(v13 + 24) )
    {
      v14 = ISMTracing::GetVector3AsString(v42);
      if ( (unsigned __int64)v14[3] >= 0x10 )
        v14 = (char **)*v14;
      v31 = (__int64)v14;
      v15 = ISMTracing::GetVector3AsString(v36);
      if ( (unsigned __int64)v15[3] >= 0x10 )
        v15 = (char **)*v15;
      v35 = (__int64)v15;
      v16 = ISMTracing::GetVector3AsString(v39);
      if ( (unsigned __int64)v16[3] >= 0x10 )
        v16 = (char **)*v16;
      v34 = (__int64)v16;
      v22 = *((_DWORD *)a1 + 18);
      v21 = *((_DWORD *)a1 + 2);
      v20 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v13,
        (unsigned __int8 *)dword_180222445,
        v17,
        v18,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22,
        (const unsigned __int16 **)&v34,
        (const unsigned __int16 **)&v35,
        (const unsigned __int16 **)&v31);
      if ( v41 >= 0x10 )
        std::_Deallocate<16,0>(v39[0], v41 + 1);
      v40 = 0LL;
      v41 = 15LL;
      LOBYTE(v39[0]) = 0;
      if ( v38 >= 0x10 )
        std::_Deallocate<16,0>(v36[0], v38 + 1);
      v37 = 0LL;
      v38 = 15LL;
      LOBYTE(v36[0]) = 0;
      goto LABEL_43;
    }
  }
}
