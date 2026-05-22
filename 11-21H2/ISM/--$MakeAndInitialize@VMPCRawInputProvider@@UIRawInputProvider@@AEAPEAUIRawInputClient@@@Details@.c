/*
 * XREFs of ??$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIRawInputProvider@@AEAPEAUIRawInputClient@@@Z @ 0x18002B824
 * Callers:
 *     ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18002B7D0 (-Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180015E20 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18002C0A0 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ??0MPCRawInputProvider@@QEAA@XZ @ 0x18002D6D8 (--0MPCRawInputProvider@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180046C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180046C90.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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

  *a1 = 0LL;
  v4 = (MPCRawInputProvider *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = MPCRawInputProvider::MPCRawInputProvider(v4);
    v6 = MPCRawInputProvider::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
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
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
