/*
 * XREFs of sub_140636DE4 @ 0x140636DE4
 * Callers:
 *     sub_1403ABA40 @ 0x1403ABA40 (sub_1403ABA40.c)
 * Callees:
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 */

void __fastcall sub_140636DE4(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9
  unsigned int v3; // ecx
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // r11d
  int v7; // ebx
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ecx

  if ( a1 && a1 != *(_QWORD *)qword_140C15D88 && a1 != *((_QWORD *)KeGetCurrentPrcb() + 3) )
  {
    v1 = *(_QWORD *)(qword_140C15D88 + 8);
    v2 = (unsigned int)v1;
    LODWORD(v1) = ((unsigned int)v1 >> 13) & 0x3FFFF;
    _BitScanReverse(&v3, v1);
    v4 = (v2 >> 4) & 0x1FF;
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4310) + 8LL * (v3 - 2))
                   + 8LL * ((unsigned int)v1 ^ (1 << v3))
                   + 8);
    if ( !*(_DWORD *)(v5 + 8 * v4 + 184) )
    {
LABEL_14:
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8 * v4 + 324));
      sub_140636520(0LL, 0x50000004u);
      return;
    }
    v6 = MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 8 * v4 + 188)) > *(_DWORD *)(v5 + 8 * v4 + 192) )
    {
      v7 = *(_DWORD *)(v5 + 8 * v4 + 184);
      *(_DWORD *)(v5 + 8 * v4 + 204) += v7;
      v8 = *(_DWORD *)(v5 + 8 * v4 + 204);
      v9 = *(_DWORD *)(v5 + 8 * v4 + 212);
      if ( v8 > *(_DWORD *)(v5 + 8 * v4 + 196) )
        v8 = *(_DWORD *)(v5 + 8 * v4 + 196);
      *(_DWORD *)(v5 + 8 * v4 + 188) = v6;
      v10 = *(_DWORD *)(v5 + 8 * v4 + 200) + v9;
      *(_DWORD *)(v5 + 8 * v4 + 200) = 0;
      v11 = v10 >> 1;
      *(_DWORD *)(v5 + 8 * v4 + 204) = v8;
      *(_DWORD *)(v5 + 8 * v4 + 212) = v11;
      if ( v11 >= 2 * v7 )
      {
        v12 = v11 / (v7 + 1);
        v13 = v6 ^ *(_DWORD *)(v5 + 8 * v4 + 220);
        *(_DWORD *)(v5 + 8 * v4 + 216) = v12;
        *(_DWORD *)(v5 + 8 * v4 + 220) = 16777619 * v13;
        *(_DWORD *)(v5 + 8 * v4 + 208) = (16777619 * v13) & (2 * v12);
      }
      else
      {
        *(_DWORD *)(v5 + 8 * v4 + 216) = 1;
        *(_DWORD *)(v5 + 8 * v4 + 208) = 1;
      }
    }
    ++*(_DWORD *)(v5 + 8 * v4 + 200);
    v14 = *(_DWORD *)(v5 + 8 * v4 + 204);
    if ( v14 > 0 && (int)--*(_DWORD *)(v5 + 8 * v4 + 208) <= 0 )
    {
      *(_DWORD *)(v5 + 8 * v4 + 204) = v14 - 1;
      *(_DWORD *)(v5 + 8 * v4 + 208) = *(_DWORD *)(v5 + 8 * v4 + 216);
      goto LABEL_14;
    }
  }
}
