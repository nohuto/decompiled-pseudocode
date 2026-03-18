/*
 * XREFs of ?StaticThreadThunk@FxSystemThread@@CAXPEAX@Z @ 0x1C0089540
 * Callers:
 *     <none>
 * Callees:
 *     ?Thread@FxSystemThread@@AEAAXXZ @ 0x1C0089558 (-Thread@FxSystemThread@@AEAAXXZ.c)
 */

void __fastcall FxSystemThread::StaticThreadThunk(FxSystemThread *Context)
{
  FxSystemThread::Thread(Context);
}
