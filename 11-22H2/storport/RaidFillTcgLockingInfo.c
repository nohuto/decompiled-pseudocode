/*
 * XREFs of RaidFillTcgLockingInfo @ 0x1C0059178
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidFillTcgLockingObjects @ 0x1C0059214 (RaidFillTcgLockingObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidFillTcgLockingInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // eax
  char result; // al

  v2 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)a2 = v2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 28);
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_DWORD *)(a2 + 4) = 1;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 56);
  }
  else if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 72);
  }
  else if ( !v2 )
  {
    *(_QWORD *)(a2 + 48) = -1LL;
  }
  *(_DWORD *)(a2 + 56) = 1;
  if ( *(_BYTE *)(a1 + 64) && *(_BYTE *)(a1 + 65) )
  {
    if ( *(_BYTE *)(a1 + 66) && *(_BYTE *)(a1 + 67) )
    {
      *(_DWORD *)(a2 + 56) = 3;
    }
    else
    {
      v3 = 1;
      if ( *(_BYTE *)(a1 + 68) )
        v3 = 2;
      *(_DWORD *)(a2 + 56) = v3;
    }
  }
  result = *(_BYTE *)(a1 + 69);
  *(_BYTE *)(a2 + 60) = result;
  return result;
}
