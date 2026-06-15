/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800F68E0
 * Callers:
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180040570 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z @ 0x1800F7FC0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800F8D50 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DisconnectStreamGroupFromSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@@Z @ 0x1800F8ED0 (-DisconnectStreamGroupFromSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDevic.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v10 = a6;
  v11 = 8;
  v12 = 0;
  v7[4] = a5;
  v8 = 8;
  v9 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 4, (__int64)v7);
}
