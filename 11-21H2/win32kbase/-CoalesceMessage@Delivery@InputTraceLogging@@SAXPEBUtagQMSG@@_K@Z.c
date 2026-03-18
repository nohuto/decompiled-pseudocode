/*
 * XREFs of ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C01C0928
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01C0DD4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C0001BAC (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01A8B24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1C01BBEB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     IsPointerInputMessage @ 0x1C01DA6A4 (IsPointerInputMessage.c)
 */

void __fastcall InputTraceLogging::Delivery::CoalesceMessage(const struct tagQMSG *a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v15; // [rsp+54h] [rbp-ACh] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  __int16 *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  __int64 *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  int *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  int *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  _QWORD *v31; // [rsp+F0h] [rbp-10h]

  if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6), a2, *((unsigned int *)a1 + 6), a1) )
  {
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 16LL) )
    {
      v14 = *(unsigned __int16 *)(v6 + 34);
      v17 = *(_QWORD *)(v6 + 40);
      v15 = *(_WORD *)(v6 + 32);
      v18 = *(_QWORD *)(v6 + 136);
      v31 = v19;
      v29 = &v16;
      v27 = &v14;
      v25 = &v17;
      v23 = &v15;
      v21 = &v18;
      v16 = v5;
      v26 = (unsigned int)(v4 - 8);
      v22 = v26;
      v19[0] = v7;
      v30 = 4LL;
      v28 = 4LL;
      v24 = 2LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025FF3D,
        0LL,
        0LL,
        v4 - 8,
        &v20);
    }
  }
  else if ( (unsigned int)(v3 - 256) > 9 )
  {
    if ( InputTraceLogging::IsMouseInputMessage(v2)
      && (unsigned int)dword_1C028EE70 > 4
      && tlgKeywordOn((__int64)&dword_1C028EE70, 16LL) )
    {
      v17 = *(_QWORD *)(v12 + 136);
      v18 = v13;
      v14 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C028EE70,
        byte_1C025FFD7,
        v11,
        v12,
        (__int64)&v17,
        (__int64)&v14,
        (__int64)&v18);
    }
  }
  else if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 16LL) )
  {
    v16 = *(unsigned __int16 *)(v9 + 40);
    v17 = *(_QWORD *)(v9 + 32);
    v19[0] = *(_QWORD *)(v9 + 136);
    v18 = v10;
    v14 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C028EE70,
      byte_1C0260048,
      v8,
      v9,
      (__int64)v19,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v18);
  }
}
