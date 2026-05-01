/*
 * XREFs of ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAU_RM_HAM_ACTIVITY_HOST@@PEA_N@Z @ 0x18008B5C0
 * Callers:
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180082CDC (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006D40 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003A090 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::AvailabilityCheck(
        struct ExecutionModel::ResourceManager *a1,
        __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        bool *a8)
{
  __int64 result; // rax
  struct ExecutionModel::ResourceManager *v12; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a1;
  if ( !a4 )
    return 2147942487LL;
  if ( a7 )
    ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
      a1,
      2u,
      a3,
      a4,
      (struct _RM_ACTIVITY_HOST *)(a7 - 64));
  result = ExecutionModel::BaseResourceSet::CheckResourceAvailability(a2, a3, (unsigned int *)a4, a6, a5, 0, &v13, &v12);
  if ( (int)result >= 0 )
    *a8 = (_BYTE)v12 != 0;
  return result;
}
