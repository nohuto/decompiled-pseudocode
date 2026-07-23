/*
 * XREFs of sub_1403839C0 @ 0x1403839C0
 * Callers:
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     sub_140380D84 @ 0x140380D84 (sub_140380D84.c)
 *     sub_1403901F0 @ 0x1403901F0 (sub_1403901F0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1403839C0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // ecx
  __int64 v5; // rbx
  int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rdi
  unsigned int v11; // r10d
  __int64 v12; // rcx

  v4 = a1[98];
  v5 = (unsigned int)(*a3 >> v4);
  v6 = a1[100];
  v7 = (unsigned int)a1[102];
  v8 = (unsigned int)(*a2 >> v4);
  _BitScanReverse((unsigned int *)&v9, v8);
  _BitScanReverse((unsigned int *)&v10, v5);
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a1[2 * v9 + 32] + 16 * (v8 ^ (unsigned int)(1 << v9)))
                  + (unsigned int)(v6 * (*a2 & a1[99]))
                  + v7);
  v12 = *(_QWORD *)(*(_QWORD *)&a1[2 * v10 + 32] + 16 * (v5 ^ (unsigned int)(1 << v10)))
      + (unsigned int)(v6 * (*a3 & a1[99]));
  if ( v11 >= *(_DWORD *)(v12 + v7) )
    return v11 > *(_DWORD *)(v12 + v7);
  else
    return -1;
}
