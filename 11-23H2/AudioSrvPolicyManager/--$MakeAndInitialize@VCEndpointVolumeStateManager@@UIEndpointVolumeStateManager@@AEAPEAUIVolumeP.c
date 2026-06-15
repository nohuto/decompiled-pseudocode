/*
 * XREFs of ??$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Z @ 0x18003F218
 * Callers:
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x180034C90 (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18000AAA0 (InlineIsEqualGUID.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015DBC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016C6C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessionCallbacks@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessi.c)
 *     ??0CEndpointVolumeStateManager@@QEAA@XZ @ 0x18003F784 (--0CEndpointVolumeStateManager@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointVolumeStateManager,IEndpointVolumeStateManager,IVolumeProvider * &>(
        CEndpointVolumeStateManager **a1,
        __int64 *a2)
{
  void *v4; // rax
  unsigned int v5; // edi
  CEndpointVolumeStateManager *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _DWORD *v9; // rcx
  volatile int *v10; // rdx
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h]
  void *v14; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v13 = v4;
  if ( v4 )
  {
    v14 = v4;
    v6 = CEndpointVolumeStateManager::CEndpointVolumeStateManager((CEndpointVolumeStateManager *)v4);
    v12 = 0LL;
    v7 = *a2;
    v8 = *((_QWORD *)v6 + 15);
    *((_QWORD *)v6 + 15) = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_59d5b9a9_5e6e_4cd4_baae_95ad8d257a28, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v6;
      (*(void (__fastcall **)(CEndpointVolumeStateManager *))(*(_QWORD *)v6 + 8LL))(v6);
      v5 = 0;
    }
    else if ( InlineIsEqualGUID(v9, v9) )
    {
      *a1 = v6;
      v5 = 0;
      (*(void (__fastcall **)(CEndpointVolumeStateManager *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IBackgroundSessionCallbacks>::Release(
        (__int64)v6,
        v10);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v12);
  return v5;
}
