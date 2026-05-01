/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByRef@$0BA@@@535@Z @ 0x18000120C
 * Callers:
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x18004CCCC (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const unsigned __int16 **a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        __int64 *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rcx
  int v17; // eax
  const unsigned __int16 *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  const unsigned __int16 *v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+7Ch] [rbp-84h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]

  v45 = a15;
  v43 = a14;
  v41 = a13;
  v46 = 8LL;
  v44 = 4LL;
  v42 = 8LL;
  v16 = *a12;
  v37 = a11;
  v39 = v16;
  v40 = 16LL;
  v38 = 4LL;
  v17 = *(unsigned __int8 *)(*a10 + 1);
  v34 = *a10;
  v36 = 0;
  v33 = 4LL;
  v31 = 8LL;
  v35 = 4 * v17 + 8;
  v32 = a9;
  v30 = a8;
  v18 = *a7;
  if ( *a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &word_1800B66C4;
    v20 = 2;
  }
  v25 = a6;
  v23 = a5;
  v27 = v18;
  v28 = v20;
  v29 = 0;
  v26 = 4LL;
  v24 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, a2, 0, 0, 0xDu, &v22);
}
