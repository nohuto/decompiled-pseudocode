/*
 * XREFs of sub_14039D6B0 @ 0x14039D6B0
 * Callers:
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_1403086B0 @ 0x1403086B0 (sub_1403086B0.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     sub_1405C6C1C @ 0x1405C6C1C (sub_1405C6C1C.c)
 *     sub_1405C7284 @ 0x1405C7284 (sub_1405C7284.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14039D6B0(unsigned __int16 *a1)
{
  unsigned __int8 v2; // di
  bool v3; // cf
  unsigned int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rdx

  v2 = 0;
  memset(a1 + 4, 0, 8LL * *a1);
  v3 = word_140D05000 != 0;
  v4 = 0;
  *a1 = 1;
  if ( v3 )
  {
    do
    {
      v5 = qword_140D31700[v4];
      v6 = *(_DWORD *)(v5 + 16);
      while ( v6 )
      {
        _BitScanForward((unsigned int *)&v8, v6);
        v6 &= ~(1 << v8);
        v9 = *(_QWORD *)(v5 + 8 * v8 + 24);
        v10 = *(unsigned __int16 *)(v9 + 136);
        v11 = *(_QWORD *)(v9 + 72);
        if ( *a1 <= (unsigned __int16)v10 )
        {
          if ( a1[1] <= (unsigned __int16)v10 )
            goto LABEL_8;
          *a1 = v10 + 1;
        }
        *(_QWORD *)&a1[4 * v10 + 4] |= v11;
        v11 = *(_QWORD *)(v9 + 72);
LABEL_8:
        if ( v11 )
          v2 = 1;
      }
      ++v4;
    }
    while ( v4 < (unsigned __int16)word_140D05000 );
  }
  return v2;
}
