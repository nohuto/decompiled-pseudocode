/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800D6258
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800D66F4 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@44@Z @ 0x1800D45E0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U3@U3@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@33333AEBU?$_tlgWrapSz@D@@355333@Z @ 0x1800D4994 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U-$_tlgWrapSz@D@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@333333333@Z @ 0x1800D4CD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWri.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800D55D0 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // rdi
  char **Vector3AsString; // rax
  char **v6; // rax
  char **v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
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
  int v24; // [rsp+C0h] [rbp-68h] BYREF
  int v25; // [rsp+C4h] [rbp-64h] BYREF
  int v26; // [rsp+C8h] [rbp-60h] BYREF
  int v27; // [rsp+CCh] [rbp-5Ch] BYREF
  int v28; // [rsp+D0h] [rbp-58h] BYREF
  _DWORD v29[3]; // [rsp+D4h] [rbp-54h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-40h] BYREF
  char *v32[2]; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+100h] [rbp-28h]
  unsigned __int64 v34; // [rsp+108h] [rbp-20h]
  char *v35[2]; // [rsp+110h] [rbp-18h] BYREF
  __int64 v36; // [rsp+120h] [rbp-8h]
  unsigned __int64 v37; // [rsp+128h] [rbp+0h]
  char *v38[3]; // [rsp+130h] [rbp+8h] BYREF
  unsigned __int64 v39; // [rsp+148h] [rbp+20h]

  if ( *((_DWORD *)a1 + 16) == 6 )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           (__int64)a1,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      v29[0] = *((_DWORD *)a1 + 303);
      v23 = *(_QWORD *)((char *)a1 + 1068);
      Vector3AsString = ISMTracing::GetVector3AsString(v38);
      if ( (unsigned __int64)Vector3AsString[3] >= 0x10 )
        Vector3AsString = (char **)*Vector3AsString;
      *(_QWORD *)&v29[1] = Vector3AsString;
      v6 = ISMTracing::GetVector3AsString(v35);
      if ( (unsigned __int64)v6[3] >= 0x10 )
        v6 = (char **)*v6;
      v30 = (__int64)v6;
      v24 = *((_DWORD *)a1 + 266);
      v7 = ISMTracing::GetVector3AsString(v32);
      if ( (unsigned __int64)v7[3] >= 0x10 )
        v7 = (char **)*v7;
      v31 = (__int64)v7;
      v25 = *((_DWORD *)a1 + 265);
      v26 = *((_DWORD *)a1 + 264);
      v27 = *((_DWORD *)a1 + 17);
      v28 = *((_DWORD *)a1 + 16);
      v20 = *((_DWORD *)a1 + 18);
      v19[0] = *a2;
      v21 = *((_DWORD *)a1 + 2);
      v22 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned __int8 *)dword_180230DEC,
        v8,
        v9,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)v19,
        (__int64)&v20,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (const unsigned __int16 **)&v31,
        (__int64)&v24,
        (const unsigned __int16 **)&v30,
        (const unsigned __int16 **)&v29[1],
        (__int64)&v23 + 4,
        (__int64)&v23,
        (__int64)v29);
      if ( v34 >= 0x10 )
        std::_Deallocate<16,0>(v32[0], v34 + 1);
      v33 = 0LL;
      v34 = 15LL;
      LOBYTE(v32[0]) = 0;
      if ( v37 >= 0x10 )
        std::_Deallocate<16,0>(v35[0], v37 + 1);
      v36 = 0LL;
      v37 = 15LL;
      LOBYTE(v35[0]) = 0;
LABEL_34:
      if ( v39 >= 0x10 )
        std::_Deallocate<16,0>(v38[0], v39 + 1);
    }
  }
  else
  {
    v10 = wil::details::static_lazy<ISMTracing>::get(
            (__int64)a1,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v10 > 4u
      && (*(_BYTE *)(v10 + 16) & 1) != 0
      && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
    {
      v22 = *((_DWORD *)a1 + 303);
      v21 = *((_DWORD *)a1 + 267);
      v20 = *((_DWORD *)a1 + 268);
      v28 = *((_DWORD *)a1 + 266);
      v27 = *((_DWORD *)a1 + 265);
      v26 = *((_DWORD *)a1 + 264);
      v25 = *((_DWORD *)a1 + 17);
      v24 = *((_DWORD *)a1 + 16);
      HIDWORD(v23) = *((_DWORD *)a1 + 18);
      v19[0] = *a2;
      LODWORD(v23) = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_180230F57,
        v11,
        v12,
        (__int64)&v23,
        (__int64)v19,
        (__int64)&v23 + 4,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22);
    }
    v13 = wil::details::static_lazy<ISMTracing>::get(
            v10,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v13 > 5u
      && (*(_BYTE *)(v13 + 16) & 1) != 0
      && (*(_QWORD *)(v13 + 24) & 1LL) == *(_QWORD *)(v13 + 24) )
    {
      v14 = ISMTracing::GetVector3AsString(v38);
      if ( (unsigned __int64)v14[3] >= 0x10 )
        v14 = (char **)*v14;
      v31 = (__int64)v14;
      v15 = ISMTracing::GetVector3AsString(v32);
      if ( (unsigned __int64)v15[3] >= 0x10 )
        v15 = (char **)*v15;
      v30 = (__int64)v15;
      v16 = ISMTracing::GetVector3AsString(v35);
      if ( (unsigned __int64)v16[3] >= 0x10 )
        v16 = (char **)*v16;
      *(_QWORD *)&v29[1] = v16;
      v22 = *((_DWORD *)a1 + 18);
      v21 = *((_DWORD *)a1 + 2);
      v20 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v13,
        (unsigned __int8 *)dword_180230EDD,
        v17,
        v18,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22,
        (const unsigned __int16 **)&v29[1],
        (const unsigned __int16 **)&v30,
        (const unsigned __int16 **)&v31);
      if ( v37 >= 0x10 )
        std::_Deallocate<16,0>(v35[0], v37 + 1);
      v36 = 0LL;
      v37 = 15LL;
      LOBYTE(v35[0]) = 0;
      if ( v34 >= 0x10 )
        std::_Deallocate<16,0>(v32[0], v34 + 1);
      v33 = 0LL;
      v34 = 15LL;
      LOBYTE(v32[0]) = 0;
      goto LABEL_34;
    }
  }
}
