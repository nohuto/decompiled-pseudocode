/*
 * XREFs of sub_1C0076788 @ 0x1C0076788
 * Callers:
 *     sub_1C00AD3A8 @ 0x1C00AD3A8 (sub_1C00AD3A8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0076788(__int64 a1, char a2, __int64 a3, __int16 a4, char a5, unsigned __int16 a6)
{
  char v8; // dl
  unsigned int v9; // ecx
  char result; // al

  *(_DWORD *)(a1 + 4) = a6;
  *(_QWORD *)(a1 + 40) = a3;
  *(_WORD *)(a1 + 48) = a4 - 1;
  if ( a2 )
  {
    v8 = 10;
    v9 = *(_DWORD *)(a1 + 48) & 0x7FFFFFFF | (a5 != 0 ? 0x80000000 : 0);
    result = -46;
  }
  else
  {
    v8 = 11;
    v9 = *(_DWORD *)(a1 + 48) & 0x7FFFFFFF | (a5 != 0 ? 0x80000000 : 0);
    result = -47;
  }
  *(_BYTE *)a1 = result;
  *(_DWORD *)(a1 + 48) = v9;
  *(_BYTE *)(a1 + 60) = v8;
  return result;
}
