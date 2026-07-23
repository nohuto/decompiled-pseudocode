/*
 * XREFs of sub_1405FF070 @ 0x1405FF070
 * Callers:
 *     sub_1405FF390 @ 0x1405FF390 (sub_1405FF390.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405FF070(__int64 a1, _OWORD *a2)
{
  __int64 Pool2; // rax
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1

  Pool2 = *(_QWORD *)(a1 + 224);
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1835297878LL);
    if ( !Pool2 )
      return 0LL;
    *(_DWORD *)Pool2 = 2;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 24;
    *(_QWORD *)(a1 + 224) = Pool2;
  }
  v5 = 0;
  if ( !*(_DWORD *)Pool2 )
    return 0LL;
  v6 = *(_QWORD *)(Pool2 + 8);
  while ( *(_QWORD *)(32LL * v5 + v6) )
  {
    if ( ++v5 >= *(_DWORD *)Pool2 )
      return 0LL;
  }
  v8 = 32LL * v5;
  result = 1LL;
  v9 = a2[1];
  *(_OWORD *)(v8 + v6) = *a2;
  *(_OWORD *)(v8 + v6 + 16) = v9;
  return result;
}
