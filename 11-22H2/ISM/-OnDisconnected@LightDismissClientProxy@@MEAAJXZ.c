/*
 * XREFs of ?OnDisconnected@LightDismissClientProxy@@MEAAJXZ @ 0x18017FE20
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 */

__int64 __fastcall LightDismissClientProxy::OnDisconnected(LightDismissClientProxy *this)
{
  LightDismissClientProxy **i; // rcx

  for ( i = (LightDismissClientProxy **)LightDismissProcessor::s_clients;
        i != (LightDismissClientProxy **)qword_180278160 && *i != this;
        ++i )
  {
    ;
  }
  memmove_0(i, i + 1, qword_180278160 - (_QWORD)(i + 1));
  qword_180278160 -= 8LL;
  return 0LL;
}
