/*
 * XREFs of sub_1409A3C10 @ 0x1409A3C10
 * Callers:
 *     sub_1409A3648 @ 0x1409A3648 (sub_1409A3648.c)
 * Callees:
 *     sub_1409A8E90 @ 0x1409A8E90 (sub_1409A8E90.c)
 */

char __fastcall sub_1409A3C10(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ecx

  ++*(_DWORD *)(a1 + 264);
  v1 = 0;
  v2 = -1;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = *(_QWORD *)(a1 + 256);
  if ( v5 != -1 )
  {
    v2 = MEMORY[0xFFFFF78000000008] - v5;
    if ( MEMORY[0xFFFFF78000000008] - v5 < (unsigned __int64)(unsigned int)(10000 * dword_140D3CB3C) )
    {
      ++*(_DWORD *)(a1 + 272);
      v1 = 1;
    }
  }
  v6 = *(_DWORD *)(a1 + 272);
  LOBYTE(v6) = v1;
  sub_1409A8E90(v6, v2, *(_DWORD *)(a1 + 264), *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 272));
  *(_QWORD *)(a1 + 256) = v4;
  return v1;
}
