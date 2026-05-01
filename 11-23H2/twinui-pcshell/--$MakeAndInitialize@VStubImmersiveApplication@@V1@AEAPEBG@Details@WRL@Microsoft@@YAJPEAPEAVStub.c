/*
 * XREFs of ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEAPEBG@Z @ 0x1805089AC
 * Callers:
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18051B528 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0StubImmersiveApplication@@QEAA@XZ @ 0x18050BF30 (--0StubImmersiveApplication@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@StubImmersiveApplication@@QEAAJPEBG@Z @ 0x180515D20 (-RuntimeClassInitialize@StubImmersiveApplication@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short const * &>(
        StubImmersiveApplication **a1,
        const unsigned __int16 **a2)
{
  StubImmersiveApplication *v4; // rax
  int v5; // edi
  StubImmersiveApplication *v6; // rbx
  StubImmersiveApplication *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (StubImmersiveApplication *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = StubImmersiveApplication::StubImmersiveApplication(v4);
    v8 = v6;
    v5 = StubImmersiveApplication::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(StubImmersiveApplication *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
