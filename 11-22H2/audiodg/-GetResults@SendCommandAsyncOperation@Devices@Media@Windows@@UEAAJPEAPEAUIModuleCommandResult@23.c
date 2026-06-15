/*
 * XREFs of ?GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@234@@Z @ 0x140086000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x140083094 (-ErrorCode@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@.c)
 *     ?get_Status@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAW4AsyncStatus@Foundation@Windows@ABI@@@Z @ 0x14008E330 (-get_Status@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media.c)
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::GetResults(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        struct Windows::Media::Devices::IModuleCommandResult **a2)
{
  signed __int32 v2; // r8d
  unsigned int Status; // ebx
  struct Windows::Media::Devices::IModuleCommandResult *v6; // rcx
  signed __int32 v8; // [rsp+40h] [rbp+8h] BYREF
  signed __int32 v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = *((_DWORD *)this + 16);
  v8 = -2;
  _InterlockedCompareExchange(&v8, v2, -2);
  if ( v8 == 3 )
  {
    Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
      (__int64)this + 16,
      &v9);
    Status = v9;
    if ( v9 < 0 )
      return Status;
  }
  else if ( v8 != 1 )
  {
    Status = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return Status;
  }
  Status = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_Status(
             (char *)this + 16,
             &v10);
  if ( (Status & 0x80000000) == 0 )
  {
    if ( v10 == 1 && (v6 = (struct Windows::Media::Devices::IModuleCommandResult *)*((_QWORD *)this + 21)) != 0LL )
    {
      *a2 = v6;
      (*(void (__fastcall **)(struct Windows::Media::Devices::IModuleCommandResult *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else if ( v10 )
    {
      if ( v10 == 2 )
        return (unsigned int)-2147467260;
      else
        return (unsigned int)-2147467259;
    }
    else
    {
      return (unsigned int)-2147483638;
    }
  }
  return Status;
}
