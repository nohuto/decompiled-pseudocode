/*
 * XREFs of ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x1400656B8
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x14002B690 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@PEAUIPropertyStore@@@Z @ 0x140065144 (-GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140065798 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140065AE8 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x140065C5C (-IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z.c)
 *     ?IsSafeToCoCreateForCapabilityChecks@@YA_NPEBG0@Z @ 0x140065D60 (-IsSafeToCoCreateForCapabilityChecks@@YA_NPEBG0@Z.c)
 */

__int64 __fastcall GetModuleInfo(
        __int64 a1,
        unsigned int a2,
        const struct _GUID *a3,
        __int64 a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6,
        unsigned __int16 **a7,
        _BYTE *a8,
        struct IPropertyStore *a9)
{
  __int64 result; // rax
  struct IComCatalog *v13; // r10
  struct _GUID v14; // [rsp+30h] [rbp-18h] BYREF

  result = IsEqualGUID(a3, &GUID_00000000_0000_0000_0000_000000000000);
  if ( !(_DWORD)result )
  {
    GetModuleName(a3, v13, a9, a5, a7);
    if ( *a5 )
      GetModuleVersion(*a5, a6);
    if ( *a5 && *a6 && IsSafeToCoCreateForCapabilityChecks(*a5, *a6) )
    {
      v14 = *a3;
      return IsCapXAPO(a1, a2, &v14, a8);
    }
    else
    {
      result = (__int64)a8;
      *a8 = 0;
    }
  }
  return result;
}
