/*
 * XREFs of sub_1405328C0 @ 0x1405328C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1405328C0(__int64 *a1)
{
  __int64 v1; // r9
  char v2; // dl
  __int64 v3; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = *a1;
  if ( (*(_QWORD *)(*a1 + 8224) & 0x67) != 0 )
  {
    v2 = 1;
    *(_QWORD *)(*a1 + 8224) &= 0x47uLL;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    while ( 1 )
    {
      v3 = *(_QWORD *)(v1 + 8224) & 0x67LL;
      if ( (*(_QWORD *)(v1 + 8224) & 0x67) == 0 )
        break;
      ++dword_140C49C70;
      *(_QWORD *)(*a1 + 8224) = v3;
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    }
  }
  else
  {
    v2 = 0;
    ++dword_140C49C90;
  }
  return v2;
}
