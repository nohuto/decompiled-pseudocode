/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18004B7A0
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x1800177CC (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&stru_1800637C8);
  if ( qword_1800637F0 )
  {
    free(qword_1800637F0);
    qword_1800637F0 = 0LL;
  }
  qword_1800637F8 = 0LL;
}
