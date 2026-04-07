/*
 * XREFs of ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x180038098
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180029FC0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180030330 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x1800373B0 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047CF0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x18010B9F8 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x1800141C0 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180016214 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 */

char __fastcall CWindowData::PropertiesAllowAutoParenting(CWindowData *this)
{
  char v1; // si
  const struct tagRECT *v4; // r8
  CWindowData *v5; // r8
  bool v6; // bl

  v1 = 1;
  if ( (*((_BYTE *)this + 672) & 1) == 0 )
    return 0;
  v4 = (const struct tagRECT *)*((_QWORD *)this + 75);
  if ( !v4 )
    return 0;
  if ( (*((_DWORD *)this + 29) & 0xC00000) == 0xC00000 )
    return 0;
  if ( !*((_QWORD *)this + 4) )
    return 0;
  if ( !ContainsRect(v4 + 3, (const struct tagRECT *)this + 3) )
    return 0;
  v6 = CWindowData::WillEndAnimationCloaked(v5);
  if ( CWindowData::WillEndAnimationCloaked(this) != v6 )
    return 0;
  return v1;
}
