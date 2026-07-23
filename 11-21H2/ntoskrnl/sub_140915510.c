/*
 * XREFs of sub_140915510 @ 0x140915510
 * Callers:
 *     <none>
 * Callees:
 *     sub_140915410 @ 0x140915410 (sub_140915410.c)
 */

__int64 __fastcall sub_140915510(__int64 a1, __int64 a2)
{
  char v3; // al
  unsigned int v4; // ecx

  v3 = sub_140915410(*(_QWORD *)a2, a1);
  v4 = 0;
  if ( v3 )
  {
    ++*(_DWORD *)(a2 + 8);
    return 2;
  }
  return v4;
}
