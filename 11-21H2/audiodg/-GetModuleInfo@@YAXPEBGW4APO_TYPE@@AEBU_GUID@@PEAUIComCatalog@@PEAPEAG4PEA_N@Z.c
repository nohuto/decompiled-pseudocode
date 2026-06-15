/*
 * XREFs of ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z @ 0x140008030
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBG@Z @ 0x140008CF0 (-PublishApoTelemetry@@YAJPEBG@Z.c)
 *     ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@@Z @ 0x14002DD48 (-GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std.c)
 * Callees:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z @ 0x1400269F4 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140026CD4 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x14002C6C0 (-IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z.c)
 *     ?IsSafeToCoCreateForCapabilityChecks@@YA_NPEBG0@Z @ 0x140031D7C (-IsSafeToCoCreateForCapabilityChecks@@YA_NPEBG0@Z.c)
 */

__int64 __fastcall GetModuleInfo(
        __int64 a1,
        unsigned int a2,
        const struct _GUID *a3,
        struct IComCatalog *a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6,
        _BYTE *a7)
{
  __int64 result; // rax
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || (result = *(_QWORD *)a3->Data4, result != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    GetModuleName(a3, a4, a5);
    if ( *a5 && (GetModuleVersion(*a5, a6), *a5) && *a6 && IsSafeToCoCreateForCapabilityChecks(*a5, *a6) )
    {
      v11 = *a3;
      return ((__int64 (__fastcall *)(__int64, _QWORD, struct _GUID *, _BYTE *))IsCapXAPO)(a1, a2, &v11, a7);
    }
    else
    {
      result = (__int64)a7;
      *a7 = 0;
    }
  }
  return result;
}
