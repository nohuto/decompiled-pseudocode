/*
 * XREFs of sub_180071988 @ 0x180071988
 * Callers:
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     sub_180059694 @ 0x180059694 (sub_180059694.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 */

__int64 __fastcall sub_180071988(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  char v5; // r9
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx

  result = sub_18006B2C0(*a3);
  v5 = 0;
  v6 = **(_QWORD **)(result + 104);
  while ( *(_BYTE *)(v6 + 25) == v5 )
  {
    result = sub_180059694(*(_DWORD **)(v6 + 40), a2);
    v8 = *(_QWORD *)(v7 + 16);
    if ( *(_BYTE *)(v8 + 25) == v5 )
    {
      v6 = *(_QWORD *)(v7 + 16);
      v9 = *(_QWORD *)v8;
      if ( *(_BYTE *)(v9 + 25) == v5 )
      {
        do
        {
          result = *(_QWORD *)v9;
          v6 = v9;
          v9 = result;
        }
        while ( *(_BYTE *)(result + 25) == v5 );
      }
    }
    else
    {
      for ( result = *(_QWORD *)(v7 + 8);
            *(_BYTE *)(result + 25) == v5 && v7 == *(_QWORD *)(result + 16);
            result = *(_QWORD *)(result + 8) )
      {
        v7 = result;
      }
      v6 = result;
    }
  }
  return result;
}
