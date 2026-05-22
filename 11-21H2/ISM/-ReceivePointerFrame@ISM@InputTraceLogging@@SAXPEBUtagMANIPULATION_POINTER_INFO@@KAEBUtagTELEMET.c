/*
 * XREFs of ?ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_POINTER_INFO@@KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1800E14CC
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800DF9E0 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x18008AA8C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800DD0BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444443343444@Z @ 0x1800DD184 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

void __fastcall InputTraceLogging::ISM::ReceivePointerFrame(
        const struct tagMANIPULATION_POINTER_INFO *a1,
        unsigned int a2,
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v14; // [rsp+D0h] [rbp-80h] BYREF
  int v15; // [rsp+D4h] [rbp-7Ch] BYREF
  int v16; // [rsp+D8h] [rbp-78h] BYREF
  int v17; // [rsp+DCh] [rbp-74h] BYREF
  int v18; // [rsp+E0h] [rbp-70h] BYREF
  int v19; // [rsp+E4h] [rbp-6Ch] BYREF
  int v20; // [rsp+E8h] [rbp-68h] BYREF
  int v21; // [rsp+ECh] [rbp-64h] BYREF
  int v22; // [rsp+F0h] [rbp-60h] BYREF
  int v23; // [rsp+F4h] [rbp-5Ch] BYREF
  int v24; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+100h] [rbp-50h] BYREF
  __int64 v26; // [rsp+108h] [rbp-48h] BYREF
  __int64 v27; // [rsp+110h] [rbp-40h] BYREF
  __int64 v28; // [rsp+118h] [rbp-38h] BYREF
  __int64 v29; // [rsp+120h] [rbp-30h] BYREF
  __int64 v30; // [rsp+128h] [rbp-28h] BYREF
  __int64 v31; // [rsp+130h] [rbp-20h] BYREF
  __int64 v32; // [rsp+138h] [rbp-18h] BYREF
  __int64 v33; // [rsp+140h] [rbp-10h] BYREF
  int v34; // [rsp+188h] [rbp+38h] BYREF

  v4 = a2;
  if ( InputTraceLogging::Enabled(0LL) )
  {
    v7 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                       v6,
                       _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
         + 1);
    if ( *(_DWORD *)v7 > 4u
      && (*(_DWORD *)(v7 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x200LL) == *(_QWORD *)(v7 + 24) )
    {
      v14 = *((_DWORD *)a1 + 2);
      v29 = *((_QWORD *)a3 + 17);
      v28 = *((_QWORD *)a3 + 9);
      v27 = *((_QWORD *)a3 + 8);
      v26 = *(_QWORD *)a3;
      v25 = *((_QWORD *)a1 + 10);
      v34 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        byte_18020313F,
        v8,
        v9,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v14,
        (__int64)&v34);
    }
    if ( v4 )
    {
      v10 = (char *)a1 + 76;
      do
      {
        v11 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                            v7,
                            _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
              + 1);
        if ( *(_DWORD *)v11 > 4u
          && (*(_DWORD *)(v11 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v11 + 24) & 0x200LL) == *(_QWORD *)(v11 + 24) )
        {
          v13 = *((_DWORD *)v10 - 3);
          v34 = *((_DWORD *)v10 + 3);
          v14 = *(_DWORD *)v10;
          v15 = *((_DWORD *)v10 - 2);
          v30 = *(_QWORD *)(v10 + 4);
          v33 = v30;
          v16 = v13;
          v31 = *(_QWORD *)(v10 - 52);
          v32 = *(_QWORD *)(v10 - 60);
          v17 = *((_DWORD *)v10 - 1);
          v18 = *((_DWORD *)v10 - 4);
          v19 = *((_DWORD *)v10 - 5);
          v20 = *((_DWORD *)v10 - 8);
          v21 = *((_DWORD *)v10 - 9);
          v22 = *((_DWORD *)v10 - 6);
          v23 = *((_DWORD *)v10 - 7);
          v24 = *((_DWORD *)v10 - 10);
          LODWORD(v25) = *((_DWORD *)v10 - 11);
          LODWORD(v26) = *((_DWORD *)v10 - 16);
          LODWORD(v27) = *((_DWORD *)v10 - 19);
          LODWORD(v28) = *((_DWORD *)v10 - 17);
          LODWORD(v29) = *((_DWORD *)v10 - 18);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v11,
            byte_180202FD5,
            v11,
            v12,
            (__int64)&v33,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v27,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v16,
            (__int64)&v30,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v34);
        }
        v10 += 240;
        --v4;
      }
      while ( v4 );
    }
  }
}
