/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18004A2C0
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x1800175DC (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&stru_180061748);
  if ( qword_180061770 )
  {
    free(qword_180061770);
    qword_180061770 = 0LL;
  }
  qword_180061778 = 0LL;
}
