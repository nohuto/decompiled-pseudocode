/*
 * XREFs of ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14009CE60
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$1 @ 0x14009E5F4 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$1.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14009E6C8 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$2 @ 0x14009E92D (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
