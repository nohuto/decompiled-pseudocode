/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800DA6E8
 * Callers:
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x1800D8754 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C8028 (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x1800DCCD4 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 */

__int64 __fastcall HidLampAttributesRequestReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        int *a2,
        void **a3,
        _DWORD *a4)
{
  void *v8; // rax
  unsigned __int8 *v9; // rbx
  int inserted; // eax
  unsigned int v12; // esi
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  v8 = operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v15 = v8;
  v9 = (unsigned __int8 *)v8;
  if ( v8 )
  {
    memset_0(v8, 0, *(unsigned int *)(a1 + 20));
    *v9 = *(_BYTE *)(a1 + 16);
    inserted = HidChannelValueInfo::InsertValue((HidChannelValueInfo *)(a1 + 24), *a2, *(unsigned int *)(a1 + 20), v9);
    v12 = inserted;
    if ( inserted >= 0 )
    {
      std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(a3, &v15);
      v13 = v15;
      *a4 = *(_DWORD *)(a1 + 20);
      if ( v13 )
        operator delete[](v13);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequestreportparser.cpp",
        (const char *)(unsigned int)inserted);
      operator delete[](v9);
      return v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequestreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
