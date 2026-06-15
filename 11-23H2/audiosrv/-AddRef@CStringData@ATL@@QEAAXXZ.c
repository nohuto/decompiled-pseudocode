/*
 * XREFs of ?AddRef@CStringData@ATL@@QEAAXXZ @ 0x180080EB0
 * Callers:
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x18004F7A0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringData::AddRef(ATL::CStringData *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
