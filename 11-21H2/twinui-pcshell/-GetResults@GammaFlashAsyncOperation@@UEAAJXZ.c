/*
 * XREFs of ?GetResults@GammaFlashAsyncOperation@@UEAAJXZ @ 0x180331DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x18032E330 (-ErrorCode@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperation.c)
 */

__int64 __fastcall GammaFlashAsyncOperation::GetResults(GammaFlashAsyncOperation *this)
{
  signed __int32 v1; // edx
  char *v2; // rcx
  int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  signed __int32 v6; // [rsp+30h] [rbp+8h] BYREF
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v7) = 0;
  v1 = *((_DWORD *)this + 16);
  v2 = (char *)this + 16;
  _InterlockedCompareExchange(&v6, v1, v6);
  if ( v6 == 1 )
  {
    return (unsigned int)v7;
  }
  else
  {
    if ( v6 == 3 )
    {
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
        (__int64)v2,
        (volatile signed __int32 *)&v7);
      v3 = (int)v7;
    }
    else
    {
      v3 = -2147418113;
    }
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2A,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  return (unsigned int)v3;
}
