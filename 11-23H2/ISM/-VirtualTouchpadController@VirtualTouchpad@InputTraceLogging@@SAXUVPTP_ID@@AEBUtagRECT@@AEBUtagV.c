/*
 * XREFs of ?VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagVIRTUAL_PTP_CONFIG@@AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUPhysicalClickZone@789Windows@@4@Z @ 0x180146788
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18014404C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180145D94 (-TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$07@@44333333333333333333333333333333333333333333333333@Z @ 0x1801431F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U1@U1@U1@U1@U1@U.c)
 */

int __fastcall InputTraceLogging::VirtualTouchpad::VirtualTouchpadController(
        __int64 a1,
        int *a2,
        int *a3,
        __int64 *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  int v15; // [rsp+1E8h] [rbp-80h] BYREF
  int v16; // [rsp+1ECh] [rbp-7Ch] BYREF
  int v17; // [rsp+1F0h] [rbp-78h] BYREF
  int v18; // [rsp+1F4h] [rbp-74h] BYREF
  int v19; // [rsp+1F8h] [rbp-70h] BYREF
  int v20; // [rsp+1FCh] [rbp-6Ch] BYREF
  int v21; // [rsp+200h] [rbp-68h] BYREF
  int v22; // [rsp+204h] [rbp-64h] BYREF
  int v23; // [rsp+208h] [rbp-60h] BYREF
  int v24; // [rsp+20Ch] [rbp-5Ch] BYREF
  int v25; // [rsp+210h] [rbp-58h] BYREF
  int v26; // [rsp+214h] [rbp-54h] BYREF
  int v27; // [rsp+218h] [rbp-50h] BYREF
  int v28; // [rsp+21Ch] [rbp-4Ch] BYREF
  int v29; // [rsp+220h] [rbp-48h] BYREF
  int v30; // [rsp+224h] [rbp-44h] BYREF
  int v31; // [rsp+228h] [rbp-40h] BYREF
  int v32; // [rsp+22Ch] [rbp-3Ch] BYREF
  int v33; // [rsp+230h] [rbp-38h] BYREF
  int v34; // [rsp+234h] [rbp-34h] BYREF
  int v35; // [rsp+238h] [rbp-30h] BYREF
  int v36; // [rsp+23Ch] [rbp-2Ch] BYREF
  int v37; // [rsp+240h] [rbp-28h] BYREF
  int v38; // [rsp+244h] [rbp-24h] BYREF
  int v39; // [rsp+248h] [rbp-20h] BYREF
  int v40; // [rsp+24Ch] [rbp-1Ch] BYREF
  int v41; // [rsp+250h] [rbp-18h] BYREF
  int v42; // [rsp+254h] [rbp-14h] BYREF
  int v43; // [rsp+258h] [rbp-10h] BYREF
  int v44; // [rsp+25Ch] [rbp-Ch] BYREF
  int v45; // [rsp+260h] [rbp-8h] BYREF
  int v46; // [rsp+264h] [rbp-4h] BYREF
  int v47; // [rsp+268h] [rbp+0h] BYREF
  int v48; // [rsp+26Ch] [rbp+4h] BYREF
  int v49; // [rsp+270h] [rbp+8h] BYREF
  int v50; // [rsp+274h] [rbp+Ch] BYREF
  int v51; // [rsp+278h] [rbp+10h] BYREF
  int v52; // [rsp+27Ch] [rbp+14h] BYREF
  int v53; // [rsp+280h] [rbp+18h] BYREF
  int v54; // [rsp+284h] [rbp+1Ch] BYREF
  int v55; // [rsp+288h] [rbp+20h] BYREF
  int v56; // [rsp+28Ch] [rbp+24h] BYREF
  int v57; // [rsp+290h] [rbp+28h] BYREF
  int v58; // [rsp+294h] [rbp+2Ch] BYREF
  int v59; // [rsp+298h] [rbp+30h] BYREF
  int v60; // [rsp+29Ch] [rbp+34h] BYREF
  int v61; // [rsp+2A0h] [rbp+38h] BYREF
  int v62; // [rsp+2A4h] [rbp+3Ch] BYREF
  int v63; // [rsp+2A8h] [rbp+40h] BYREF
  int v64; // [rsp+2ACh] [rbp+44h] BYREF
  int v65; // [rsp+2B0h] [rbp+48h] BYREF
  int v66; // [rsp+2B4h] [rbp+4Ch] BYREF
  int v67; // [rsp+2B8h] [rbp+50h] BYREF
  __int64 v68; // [rsp+2C0h] [rbp+58h] BYREF
  __int64 v69; // [rsp+2C8h] [rbp+60h] BYREF
  __int64 v70; // [rsp+2D0h] [rbp+68h] BYREF

  v9 = a1;
  v10 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                   a1,
                   _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v13 = *(_QWORD *)(v10 + 8);
  if ( *(_DWORD *)v13 > 4u )
  {
    LODWORD(v10) = *(_DWORD *)(v13 + 16);
    if ( (v10 & 0x200) != 0 )
    {
      v10 = *(_QWORD *)(v13 + 24) & 0x200LL;
      if ( v10 == *(_QWORD *)(v13 + 24) )
      {
        v15 = a3[29];
        v16 = a3[28];
        v17 = a3[27];
        v18 = a3[26];
        v19 = a3[25];
        v20 = a3[24];
        v21 = a3[23];
        v22 = a3[22];
        v23 = a3[21];
        v24 = a3[20];
        v25 = a3[19];
        v26 = a3[18];
        v27 = a3[17];
        v28 = a3[16];
        v29 = a3[15];
        v30 = a3[14];
        v31 = a3[13];
        v32 = a3[12];
        v33 = a3[11];
        v34 = a3[10];
        v35 = a3[9];
        v36 = a3[8];
        v37 = a3[7];
        v38 = a3[6];
        v39 = a3[5];
        v40 = a3[4];
        v41 = a3[3];
        v42 = a3[2];
        v43 = a3[1];
        v44 = *a3;
        v45 = a3[37];
        v46 = a3[36];
        v47 = a3[35];
        v48 = a3[34];
        v49 = a6[4];
        v50 = a6[3];
        v51 = a6[2];
        v52 = a6[1];
        v53 = *(unsigned __int8 *)a6;
        v54 = a3[33];
        v55 = a3[32];
        v56 = a3[31];
        v57 = a3[30];
        v58 = a5[4];
        v59 = a5[3];
        v60 = a5[2];
        v61 = a5[1];
        v62 = *(unsigned __int8 *)a5;
        v68 = a4[2];
        v69 = a4[1];
        v70 = *a4;
        v63 = a2[3];
        v64 = a2[2];
        v65 = a2[1];
        v66 = *a2;
        v67 = v9;
        LODWORD(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                         v13,
                         byte_180225B7D,
                         v11,
                         v12,
                         (__int64)&v67,
                         (__int64)&v66,
                         (__int64)&v65,
                         (__int64)&v64,
                         (__int64)&v63,
                         (__int64)&v70,
                         (__int64)&v69,
                         (__int64)&v68,
                         (__int64)&v62,
                         (__int64)&v61,
                         (__int64)&v60,
                         (__int64)&v59,
                         (__int64)&v58,
                         (__int64)&v57,
                         (__int64)&v56,
                         (__int64)&v55,
                         (__int64)&v54,
                         (__int64)&v53,
                         (__int64)&v52,
                         (__int64)&v51,
                         (__int64)&v50,
                         (__int64)&v49,
                         (__int64)&v48,
                         (__int64)&v47,
                         (__int64)&v46,
                         (__int64)&v45,
                         (__int64)&v44,
                         (__int64)&v43,
                         (__int64)&v42,
                         (__int64)&v41,
                         (__int64)&v40,
                         (__int64)&v39,
                         (__int64)&v38,
                         (__int64)&v37,
                         (__int64)&v36,
                         (__int64)&v35,
                         (__int64)&v34,
                         (__int64)&v33,
                         (__int64)&v32,
                         (__int64)&v31,
                         (__int64)&v30,
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
                         (__int64)&v16,
                         (__int64)&v15);
      }
    }
  }
  return v10;
}
