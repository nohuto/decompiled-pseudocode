/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___ @ 0x18053B990
 * Callers:
 *     ?SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18053CC00 (-SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db_____lambda_40e4bef0421a20eaf8768beed4f575db___ @ 0x18053B860 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_40e4bef0421a2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r9
  __int64 v3; // r8
  Microsoft::WRL::Details *v4; // rcx
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  v3 = a1;
  v13 = a1;
  v4 = (Microsoft::WRL::Details *)(a1 + 44);
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  v10 = *(_OWORD *)v2;
  v11[0] = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40e4bef0421a20eaf8768beed4f575db_____lambda_40e4bef0421a20eaf8768beed4f575db___(
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
  v8 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  return v8;
}
