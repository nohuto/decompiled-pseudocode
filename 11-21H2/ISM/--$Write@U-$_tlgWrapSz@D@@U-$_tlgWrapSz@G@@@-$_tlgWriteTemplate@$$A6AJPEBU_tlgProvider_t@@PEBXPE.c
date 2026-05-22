/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800CFEC4
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18003D980 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800D0314 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800D20F4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800D6690 (--1HidLampArrayDevice@@UEAA@XZ.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800D8408 (-ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z.c)
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800D85FC (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x1800D882C (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800D897C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800D8ACC (-SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        unsigned __int16 **a6)
{
  __int64 v7; // rcx
  unsigned __int16 *v8; // rdx
  __int64 v9; // rax
  int v10; // r8d
  const unsigned __int16 *v11; // rdx
  int v12; // ecx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-58h] BYREF
  const unsigned __int16 *v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int16 *v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+68h] [rbp-20h]
  int v20; // [rsp+6Ch] [rbp-1Ch]

  v7 = -1LL;
  v8 = *a6;
  if ( *a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = word_1801F8EB4;
    v10 = 2;
  }
  v18 = v8;
  v19 = v10;
  v20 = 0;
  v11 = *a5;
  if ( *a5 )
  {
    do
      ++v7;
    while ( *((_BYTE *)v11 + v7) );
    v12 = v7 + 1;
  }
  else
  {
    v11 = &word_1801F8EB0;
    v12 = 1;
  }
  v15 = v11;
  v16 = v12;
  v17 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180240410, a2, 0LL, 0LL, 4u, &v14);
}
