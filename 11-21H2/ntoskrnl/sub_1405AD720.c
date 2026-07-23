/*
 * XREFs of sub_1405AD720 @ 0x1405AD720
 * Callers:
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405AD720(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  _QWORD *v8; // r11

  v3 = dword_140D05004;
  v4 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  if ( (*(_DWORD *)(v4 + 22784) & 1) != 0 )
    v3 = a3 + 1;
  v5 = (*(_DWORD *)(v4 + 22784) & 1) != 0 ? a3 : 0;
  v6 = 0;
LABEL_8:
  if ( v5 != v3 )
  {
    v7 = 0;
    v8 = (_QWORD *)(704LL * v5 + v4 + 3256);
    while ( !*v8 )
    {
      ++v7;
      v8 += 11;
      if ( v7 >= 8 )
      {
        ++v5;
        goto LABEL_8;
      }
    }
  }
  LOBYTE(v6) = v5 != v3;
  return v6;
}
