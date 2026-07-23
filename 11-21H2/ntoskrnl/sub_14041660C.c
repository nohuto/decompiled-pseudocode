/*
 * XREFs of sub_14041660C @ 0x14041660C
 * Callers:
 *     sub_140410D50 @ 0x140410D50 (sub_140410D50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14041660C(__int64 a1, int a2, int a3)
{
  int v3; // r9d
  __int64 result; // rax
  int v5; // r10d

  v3 = 1;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a3;
  result = (unsigned int)(a3 * a2);
  v5 = 128;
  if ( a3 != 128 )
    v3 = 4;
  *(_DWORD *)(a1 + 24) = result;
  *(_DWORD *)a1 = v3;
  if ( a3 != 128 )
    v5 = 32;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 4) = v5;
  return result;
}
