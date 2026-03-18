/*
 * XREFs of PpmEnableWmiInterface @ 0x1408565CC
 * Callers:
 *     PopNewProcessorCallback @ 0x1409893F0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x1402D75B0 (KeQueryGroupAffinity.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 */

int PpmEnableWmiInterface()
{
  unsigned int i; // ebx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v2; // rcx

  for ( i = 0; i < 0x40; ++i )
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, i) )
    {
      GroupAffinity = KeGetPrcb(i);
      v2 = GroupAffinity;
      if ( GroupAffinity )
      {
        LODWORD(GroupAffinity) = _InterlockedCompareExchange((volatile signed __int32 *)(GroupAffinity + 33840), 1, 0);
        if ( !(_DWORD)GroupAffinity )
          LODWORD(GroupAffinity) = IoWMIRegistrationControl((PDEVICE_OBJECT)(v2 + 33832), 0x80000001);
      }
    }
  }
  return GroupAffinity;
}
