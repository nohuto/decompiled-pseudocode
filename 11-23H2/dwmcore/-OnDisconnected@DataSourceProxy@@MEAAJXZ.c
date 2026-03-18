/*
 * XREFs of ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x1801E2C20
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueForDeferredDestruction@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1801E4A8C (-QueueForDeferredDestruction@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::OnDisconnected(DataProviderProxy **this)
{
  if ( this[24] )
    DataProviderProxy::QueueForDeferredDestruction(this[24], (struct BamoDataSourceProxy *)this);
  return 0LL;
}
