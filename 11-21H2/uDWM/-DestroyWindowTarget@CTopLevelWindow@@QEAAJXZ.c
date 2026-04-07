/*
 * XREFs of ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E4A44
 * Callers:
 *     wil::details::lambda_call__lambda_85f3225b710f422e24871280d0146166___::_lambda_call__lambda_85f3225b710f422e24871280d0146166___ @ 0x1800E4138 (wil--details--lambda_call__lambda_85f3225b710f422e24871280d0146166___--_lambda_call__lambda_85f3.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E4884 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180103210 (-DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::DestroyWindowTarget(CTopLevelWindow *this)
{
  __int64 v2; // rcx
  struct CVisual *v3; // rdx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    v3 = (struct CVisual *)*((_QWORD *)this + 105);
    if ( v3 )
      VisualCollection::Remove((VisualCollection *)(v2 + 32), v3);
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 105);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 105) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 106);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 106) = 0LL;
  }
  return 0LL;
}
