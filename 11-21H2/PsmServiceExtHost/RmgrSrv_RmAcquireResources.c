/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x180040A30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180040CA0 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180044300 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800449BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAcquireResources(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        int *a10,
        __int64 *a11)
{
  int v14; // ebx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  HANDLE CurrentProcess; // rbx
  HANDLE v19; // rax
  __int64 v20; // rcx
  signed int v21; // ebx
  int v22; // r8d
  int v23; // r9d
  signed int LastError; // eax
  int v26; // [rsp+48h] [rbp-B8h]
  char v27; // [rsp+60h] [rbp-A0h] BYREF
  bool v28; // [rsp+61h] [rbp-9Fh]
  int v29; // [rsp+64h] [rbp-9Ch] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  HANDLE TargetHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE hSourceHandle; // [rsp+90h] [rbp-70h]
  _DWORD RpcCallAttributes[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v39[56]; // [rsp+A8h] [rbp-58h] BYREF
  int v40; // [rsp+E0h] [rbp-20h]

  v35 = a3;
  hSourceHandle = a7;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v39, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  TargetHandle = 0LL;
  v14 = v40;
  v27 = 0;
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 2LL) )
  {
    v32 = a8;
    v31 = a9;
    v33 = a4;
    v34 = a2;
    v29 = a5;
    v30 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_1800BCEBE,
      v16,
      v17,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31);
  }
  v28 = a5 == v14;
  CurrentProcess = GetCurrentProcess();
  v19 = GetCurrentProcess();
  if ( DuplicateHandle(v19, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    LOBYTE(v26) = v28;
    v21 = ExecutionModel::ResourceManager::RmAcquireResources(
            v20,
            a2,
            v35,
            a4,
            a5,
            a6,
            TargetHandle,
            a8,
            a9,
            v26,
            &v27,
            a11);
    if ( v21 >= 0 )
      *a10 = v27 != 0;
  }
  else
  {
    LastError = GetLastError();
    v21 = LastError;
    if ( LastError > 0 )
      v21 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 2LL) )
  {
    v30 = *a10;
    v35 = *a11;
    v29 = v21;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800DC1E0,
      (unsigned int)&unk_1800BCE6A,
      v22,
      v23,
      (__int64)&v29,
      (__int64)&v35,
      (__int64)&v30);
  }
  return (unsigned int)v21;
}
