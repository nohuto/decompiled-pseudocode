/*
 * XREFs of RmgrSrv_RmAvailabilityCheck @ 0x18006CC20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18006C9CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800845FC (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 */

__int64 __fastcall RmgrSrv_RmAvailabilityCheck(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+40h] [rbp-91h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-8Dh] BYREF
  unsigned int v16; // [rsp+48h] [rbp-89h] BYREF
  int v17; // [rsp+4Ch] [rbp-85h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v19[56]; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+90h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+C0h] [rbp-11h] BYREF
  int *v22; // [rsp+E0h] [rbp+Fh]
  int v23; // [rsp+E8h] [rbp+17h]
  int v24; // [rsp+ECh] [rbp+1Bh]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v19, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 2LL) )
  {
    v14 = v20;
    v15 = a4;
    v16 = a2;
    v17 = a5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DC1E0,
      byte_1800BCD01,
      v10,
      v11,
      (__int64)&v14,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  v12 = ExecutionModel::ResourceManager::RmAvailabilityCheck(v9, a2, a3, a4, a5);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 2LL) )
  {
    v24 = 0;
    v22 = (int *)&v14;
    v14 = v12;
    v23 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800BCB75,
      0LL,
      0LL,
      3u,
      &v21);
  }
  return v12;
}
