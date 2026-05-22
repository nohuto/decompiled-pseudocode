/*
 * XREFs of ??_GCProxyTable@DirectComposition@@QEAAPEAXI@Z @ 0x18008551C
 * Callers:
 *     ?CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z @ 0x18003FF34 (-CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 * Callees:
 *     ??1CProxyTable@DirectComposition@@QEAA@XZ @ 0x180085554 (--1CProxyTable@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CProxyTable *__fastcall DirectComposition::CProxyTable::`scalar deleting destructor'(
        DirectComposition::CProxyTable *this)
{
  DirectComposition::CProxyTable::~CProxyTable(this);
  VirtualFree(this, 0LL, 0x8000u);
  return this;
}
