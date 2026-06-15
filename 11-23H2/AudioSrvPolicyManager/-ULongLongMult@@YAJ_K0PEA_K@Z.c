/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x18002A67C
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180010F8C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800241D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x180035544 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x180045950 (--$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 * a2;
  result = 0LL;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = v4;
  }
  else
  {
    *a3 = -1LL;
    return 2147942934LL;
  }
  return result;
}
