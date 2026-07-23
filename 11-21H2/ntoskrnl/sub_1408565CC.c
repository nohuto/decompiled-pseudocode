/*
 * XREFs of sub_1408565CC @ 0x1408565CC
 * Callers:
 *     sub_1409893F0 @ 0x1409893F0 (sub_1409893F0.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x1402D75B0 (KeQueryGroupAffinity.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 */

int sub_1408565CC()
{
  unsigned int i; // ebx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v2; // rcx

  for ( i = 0; i < 0x40; ++i )
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, i) )
    {
      GroupAffinity = sub_140348800(i);
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
