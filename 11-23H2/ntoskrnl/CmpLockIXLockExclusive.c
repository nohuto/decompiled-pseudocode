/*
 * XREFs of CmpLockIXLockExclusive @ 0x14076AF0C
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1407691C0 (CmEqualTrans.c)
 */

char __fastcall CmpLockIXLockExclusive(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)a1 = -2147483647;
    if ( a3 )
    {
      if ( a3 == 1 )
        a2[3] = a1;
    }
    else
    {
      a2[2] = a1;
    }
    return 1;
  }
  if ( v3 >= 0 )
  {
    if ( v3 == 1 && CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7]) )
    {
      *(_DWORD *)a1 |= 0x80000000;
      return 1;
    }
  }
  else if ( CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7]) )
  {
    return 1;
  }
  return 0;
}
