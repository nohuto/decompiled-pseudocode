/*
 * XREFs of ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x14001D554
 * Callers:
 *     ?GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServiceProvider@@@Z @ 0x14001D610 (-GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServicePr.c)
 * Callees:
 *     ??0CAPOServiceProvider@@QEAA@XZ @ 0x14001C530 (--0CAPOServiceProvider@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOServiceProvider,IServiceProvider,>(_QWORD *a1)
{
  CAPOServiceProvider *v2; // rax
  GUID *v3; // rdi
  HRESULT Guid; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v2 = (CAPOServiceProvider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = (GUID *)CAPOServiceProvider::CAPOServiceProvider(v2);
    Guid = CoCreateGuid(v3 + 2);
    v5 = Guid;
    if ( Guid < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
        (const char *)(unsigned int)Guid,
        v7);
    else
      v5 = (**(__int64 (__fastcall ***)(GUID *, GUID *, _QWORD *))&v3->Data1)(
             v3,
             &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(GUID *))(*(_QWORD *)&v3->Data1 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
