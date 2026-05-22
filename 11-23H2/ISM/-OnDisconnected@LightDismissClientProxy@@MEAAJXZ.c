/*
 * XREFs of ?OnDisconnected@LightDismissClientProxy@@MEAAJXZ @ 0x180172010
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 */

__int64 __fastcall LightDismissClientProxy::OnDisconnected(LightDismissClientProxy *this)
{
  LightDismissClientProxy **i; // rcx

  for ( i = (LightDismissClientProxy **)LightDismissProcessor::s_clients;
        i != (LightDismissClientProxy **)qword_180268DE0 && *i != this;
        ++i )
  {
    ;
  }
  memmove_0(i, i + 1, qword_180268DE0 - (_QWORD)(i + 1));
  qword_180268DE0 -= 8LL;
  return 0LL;
}
