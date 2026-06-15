/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x180046D10
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x18000347C (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( Block )
    {
      free(Block);
      Block = 0LL;
    }
    dword_18005BC50 = 0;
    dword_18005BC54 = 0;
    DeleteCriticalSection(&stru_18005BC18);
    ATL::_AtlWinModule = 0;
  }
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_18005BC50 = 0;
  dword_18005BC54 = 0;
}
