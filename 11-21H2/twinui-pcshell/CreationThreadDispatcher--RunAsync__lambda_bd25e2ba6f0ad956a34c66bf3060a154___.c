/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___ @ 0x180197BF4
 * Callers:
 *     wistd::__function::__func__lambda_1e6faaceccb8ce5b93798b6f5dffead9__void___cdecl(void)_::operator() @ 0x1801982F0 (wistd--__function--__func__lambda_1e6faaceccb8ce5b93798b6f5dffead9__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalAddRef@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEBAXXZ @ 0x180158CBC (-InternalAddRef@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c_____lambda_8fef6c83aa67504ee790809a4b74de3c___ @ 0x18019791C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8fef6c83aa675.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  volatile int *v4; // rdx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-10h] BYREF
  volatile signed __int32 *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a1;
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalAddRef(&v13, a2);
  v10 = v2;
  v11[0] = v3;
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalAddRef(v11, v4);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c_____lambda_8fef6c83aa67504ee790809a4b74de3c___(
         &v12,
         &v10);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v8;
}
