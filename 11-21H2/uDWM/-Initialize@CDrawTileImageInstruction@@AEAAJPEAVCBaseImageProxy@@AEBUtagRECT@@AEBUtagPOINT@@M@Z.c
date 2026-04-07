/*
 * XREFs of ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z @ 0x1800184FC
 * Callers:
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180018390 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Initialize(
        CDrawTileImageInstruction *this,
        struct CBaseImageProxy *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4,
        float a5)
{
  CBaseObject *v7; // rcx

  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( a2 )
  {
    *((_QWORD *)this + 6) = a2;
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
  *((struct tagRECT *)this + 1) = *a3;
  *((float *)this + 10) = a5;
  *((struct tagPOINT *)this + 4) = *a4;
  return 0LL;
}
