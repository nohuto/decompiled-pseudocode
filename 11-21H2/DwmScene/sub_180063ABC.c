/*
 * XREFs of sub_180063ABC @ 0x180063ABC
 * Callers:
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 * Callees:
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057EA4 @ 0x180057EA4 (sub_180057EA4.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 */

__int64 __fastcall sub_180063ABC(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 *v8; // rcx

  v4 = sub_18008E70C(a1);
  result = sub_180037388(v4);
  v6 = result;
  v7 = **(_QWORD **)(a1 + 1616);
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *(_DWORD *)(v7 + 32) == -1 || *(_DWORD *)(v7 + 32) == a2 )
      sub_180057EA4(v6);
    result = *(_QWORD *)(v7 + 16);
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = *(_QWORD *)(v7 + 8);
            !*(_BYTE *)(result + 25) && v7 == *(_QWORD *)(result + 16);
            result = *(_QWORD *)(result + 8) )
      {
        v7 = result;
      }
      v7 = result;
    }
    else
    {
      v8 = *(__int64 **)result;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          result = *v8;
          v7 = (__int64)v8;
          v8 = (__int64 *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  return result;
}
