/*
 * XREFs of ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x140005338
 * Callers:
 *     ?GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServiceProvider@@@Z @ 0x140006740 (-GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServicePr.c)
 * Callees:
 *     ??0CAPOServiceProvider@@QEAA@XZ @ 0x1400053F8 (--0CAPOServiceProvider@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F094 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
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
  CAPOServiceProvider *v9; // [rsp+30h] [rbp+8h] BYREF
  GUID *v10; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (CAPOServiceProvider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v2;
  if ( v2 )
  {
    v3 = (GUID *)CAPOServiceProvider::CAPOServiceProvider(v2);
    v10 = v3;
    v9 = 0LL;
    Guid = CoCreateGuid(v3 + 2);
    v5 = Guid;
    if ( Guid < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
        (const char *)(unsigned int)Guid,
        v7);
      Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v10);
      Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v9);
    }
    else
    {
      v5 = (**(__int64 (__fastcall ***)(GUID *, GUID *, _QWORD *))&v3->Data1)(
             v3,
             &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
             a1);
      (*(void (__fastcall **)(GUID *))(*(_QWORD *)&v3->Data1 + 16LL))(v3);
    }
    return v5;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v9);
    return 2147942414LL;
  }
}
