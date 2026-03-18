/*
 * XREFs of ?AddRef@BamoDataProviderProxy@@UEAAKXZ @ 0x1800FBB30
 * Callers:
 *     ?AddRef@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@W7EAAKXZ @ 0x18011D210 (-AddRef@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderProxy::AddRef(BamoDataProviderProxy *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
