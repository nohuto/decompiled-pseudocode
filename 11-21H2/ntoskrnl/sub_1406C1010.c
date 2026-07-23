/*
 * XREFs of sub_1406C1010 @ 0x1406C1010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406C1068 @ 0x1406C1068 (sub_1406C1068.c)
 */

__int64 __fastcall sub_1406C1010(__int64 a1, __int64 a2)
{
  int v3; // eax

  ++*(_DWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = a1;
  v3 = sub_1406C1068(*(_QWORD *)(a2 + 8) + 48LL, sub_1406DA120, a2);
  if ( v3 < 0 )
  {
    *(_DWORD *)(a2 + 32) = v3;
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) == *(_DWORD *)(a2 + 28) )
      return 1LL;
    *(_DWORD *)(a2 + 32) = -1073741445;
  }
  return 0LL;
}
