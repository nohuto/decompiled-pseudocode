/*
 * XREFs of ?HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C01F7EC0
 * Callers:
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x1C01F7E94 (-HasPendingPromotion@@YAHXZ.c)
 */

__int64 __fastcall PointerPromotion::HasPendingPromotion(PointerPromotion *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = 0;
  if ( HasPendingPromotion((__int64)this) )
    return *(_QWORD *)(SGDGetUserSessionState(v3) + 16288) == (_QWORD)this;
  return v4;
}
