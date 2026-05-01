/*
 * XREFs of ?EraseAllViews@FullScreenPositioner@@AEAAJXZ @ 0x1801A25E0
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A2390 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::EraseAllViews(FullScreenPositioner *this)
{
  *((_QWORD *)this + 30) = *((_QWORD *)this + 29);
  return 0LL;
}
