/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___ @ 0x18011DC64
 * Callers:
 *     wistd::__function::__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x18011D440 (wistd--__function--__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows--I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba7657056a16329b8a6e21579ce82d14_____lambda_ba7657056a16329b8a6e21579ce82d14___ @ 0x18011DD34 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ba7657056a163.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r10
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  v3 = a1;
  v12 = a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  else
    v4 = 44LL;
  v9 = *(_OWORD *)v2;
  v10[0] = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)v4, a2);
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba7657056a16329b8a6e21579ce82d14_____lambda_ba7657056a16329b8a6e21579ce82d14___(
                    &v11,
                    &v9);
  v6 = *v5;
  *v5 = 0LL;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v7 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  return v7;
}
