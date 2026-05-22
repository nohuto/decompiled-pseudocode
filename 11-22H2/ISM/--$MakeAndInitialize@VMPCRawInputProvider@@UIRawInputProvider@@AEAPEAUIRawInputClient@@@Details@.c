/*
 * XREFs of ??$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIRawInputProvider@@AEAPEAUIRawInputClient@@@Z @ 0x18003B118
 * Callers:
 *     ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800531F0 (-Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180024E04 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0MPCRawInputProvider@@QEAA@XZ @ 0x18003B774 (--0MPCRawInputProvider@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180042758 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180050C90.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VMPCRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DDDE4 (--1-$ComPtr@VMPCRawInputProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCRawInputProvider,IRawInputProvider,IRawInputClient * &>(
        MPCRawInputProvider **a1,
        struct IRawInputClient **a2)
{
  MPCRawInputProvider *v4; // rax
  MPCRawInputProvider *v5; // rbx
  int v6; // edi
  const struct _GUID *v7; // rcx
  MPCRawInputProvider *v9; // [rsp+30h] [rbp+8h] BYREF
  MPCRawInputProvider *v10; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (MPCRawInputProvider *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_12:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v9);
    return (unsigned int)v6;
  }
  v5 = MPCRawInputProvider::MPCRawInputProvider(v4);
  v10 = v5;
  v9 = 0LL;
  v6 = MPCRawInputProvider::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<MPCRawInputProvider>::~ComPtr<MPCRawInputProvider>(&v10);
    goto LABEL_12;
  }
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(MPCRawInputProvider *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    *a1 = v5;
    v6 = 0;
    (*(void (__fastcall **)(MPCRawInputProvider *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider>::Release(v5);
  return (unsigned int)v6;
}
