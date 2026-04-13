/*
 * XREFs of ?OnErrorReported@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@UEAAX_NAEBUFailureInfo@wil@@@Z @ 0x18004F150
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x180001904 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001904.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerLogging::OnErrorReported(
        ContentDeliveryManager::Background::ContentDeliveryManagerLogging *this,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  const struct _tlgProvider_t *v4; // r9
  int v5; // [rsp+B0h] [rbp-80h] BYREF
  int v6; // [rsp+B4h] [rbp-7Ch] BYREF
  int v7; // [rsp+B8h] [rbp-78h] BYREF
  int v8; // [rsp+BCh] [rbp-74h] BYREF
  int v9; // [rsp+C0h] [rbp-70h] BYREF
  int v10; // [rsp+C4h] [rbp-6Ch] BYREF
  int v11; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v12; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v13; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v14; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v16; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v17; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v18; // [rsp+100h] [rbp-30h] BYREF
  __int64 v19; // [rsp+108h] [rbp-28h] BYREF
  __int64 v20; // [rsp+110h] [rbp-20h] BYREF
  __int64 v21; // [rsp+118h] [rbp-18h] BYREF
  __int64 v22; // [rsp+148h] [rbp+18h] BYREF

  v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v12 = *((_QWORD *)a3 + 6);
    LODWORD(v22) = *((_DWORD *)a3 + 17);
    v5 = *((_DWORD *)a3 + 4);
    v13 = *((_QWORD *)a3 + 15);
    v14 = *((_QWORD *)a3 + 14);
    v6 = *((_DWORD *)a3 + 26);
    v15 = *((_QWORD *)a3 + 12);
    v16 = *((_QWORD *)a3 + 11);
    v7 = *((_DWORD *)a3 + 20);
    v17 = *((_QWORD *)a3 + 9);
    v8 = *((_DWORD *)a3 + 8);
    v18 = *((_QWORD *)a3 + 3);
    v9 = *(_DWORD *)a3;
    v19 = *((_QWORD *)a3 + 16);
    v10 = *((_DWORD *)a3 + 16);
    v20 = *((_QWORD *)a3 + 7);
    v11 = *((_DWORD *)a3 + 2);
    v21 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)v4,
      (int)&dword_180190465,
      0,
      (__int64)v4,
      (__int64)&v21,
      (__int64)&v11,
      (const unsigned __int16 **)&v20,
      (__int64)&v10,
      (const unsigned __int16 **)&v19,
      (__int64)&v9,
      (const WCHAR **)&v18,
      (__int64)&v8,
      (const unsigned __int16 **)&v17,
      (__int64)&v7,
      (const unsigned __int16 **)&v16,
      (const WCHAR **)&v15,
      (__int64)&v6,
      (const unsigned __int16 **)&v14,
      (const WCHAR **)&v13,
      (__int64)&v5,
      (__int64)&v22,
      (const unsigned __int16 **)&v12);
  }
}
