/*
 * XREFs of CleanupModuleAllocations @ 0x1C0121EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CleanupModuleAllocations()
{
  __int64 result; // rax

  if ( unk_1C03319F0 )
    result = Win32FreePool(unk_1C03319F0);
  if ( gpQmsgHistory )
  {
    result = Win32FreePool(gpQmsgHistory);
    gpQmsgHistory = 0LL;
  }
  if ( gpQmsgHistory2 )
  {
    result = Win32FreePool(gpQmsgHistory2);
    gpQmsgHistory2 = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    result = Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
  return result;
}
