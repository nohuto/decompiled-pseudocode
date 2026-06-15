/*
 * XREFs of ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x140026C30
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CStringData@ATL@@QEAAXXZ @ 0x1400380F2 (-AddRef@CStringData@ATL@@QEAAXXZ.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::GetNilString(ATL::CAtlStringMgr *this)
{
  char *v1; // rbx

  v1 = (char *)this + 16;
  ATL::CStringData::AddRef((ATL::CAtlStringMgr *)((char *)this + 16));
  return (struct ATL::CStringData *)v1;
}
