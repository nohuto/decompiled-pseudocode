/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1801051EC
 * Callers:
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x18010156C (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F0928 (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x1801052DC (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 */

__int64 __fastcall HidLampArrayControlReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        unsigned __int8 *a2,
        void **a3,
        _DWORD *a4)
{
  void *v8; // rax
  unsigned __int8 *v9; // rdi
  int v11; // edx
  void *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  v9 = (unsigned __int8 *)v8;
  if ( v8 )
  {
    memset_0(v8, 0, *(unsigned int *)(a1 + 20));
    v11 = *a2;
    *v9 = *(_BYTE *)(a1 + 16);
    HidChannelValueInfo::InsertValue((HidChannelValueInfo *)(a1 + 24), v11, *(unsigned int *)(a1 + 20), v9);
    std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(a3, &v14);
    v12 = v14;
    *a4 = *(_DWORD *)(a1 + 20);
    if ( v12 )
      operator delete[](v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraycontrolreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
