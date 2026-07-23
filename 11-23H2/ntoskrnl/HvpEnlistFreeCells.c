/*
 * XREFs of HvpEnlistFreeCells @ 0x14074FB40
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x140826A78 (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvpEnlistFreeCell @ 0x140746160 (HvpEnlistFreeCell.c)
 *     HvpMarkDirty @ 0x140747300 (HvpMarkDirty.c)
 */

__int64 __fastcall HvpEnlistFreeCells(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, int a4)
{
  char v4; // r12
  unsigned int v5; // r10d
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned int *v11; // rsi
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // [rsp+70h] [rbp+8h]

  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 32;
  v7 = *(_QWORD *)(BugCheckParameter2 + 56);
  v17 = v7;
  if ( v5 <= 0x20 )
    return 0LL;
  do
  {
    v11 = (unsigned int *)(a2 + v6);
    v12 = *v11;
    if ( (*v11 & 0x80000000) != 0 )
      v12 = -v12;
    if ( v12 + v6 < v6 || v12 + v6 > v5 || (v12 & 7) != 0 || !v12 )
    {
      SetFailureLocation(v7, 1, 26, -1073741492, 8);
      if ( (a4 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v7, 0, 26, -1073741492, 0);
        return 3221225804LL;
      }
      v13 = v6 + a3;
      v12 = *(_DWORD *)(a2 + 8) - v6;
      v15 = HvpMarkDirty(BugCheckParameter2, v6 + a3, v12, 0);
      v16 = v15;
      if ( v15 < 0 )
      {
        SetFailureLocation(v17, 0, 26, v15, 16);
        return v16;
      }
      memset((void *)(a2 + v6), 0, v12);
      *v11 = v12;
      v4 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      SetFailureLocation(v17, 1, 26, 1073741833, 32);
    }
    else
    {
      v13 = v6 + a3;
      if ( (*v11 & 0x80000000) != 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 152) += v12;
        goto LABEL_10;
      }
    }
    *(_DWORD *)(BugCheckParameter2 + 148) += v12;
    HvpEnlistFreeCell(BugCheckParameter2, v13, v12, 0);
LABEL_10:
    v5 = *(_DWORD *)(a2 + 8);
    v6 += v12;
    v7 = v17;
  }
  while ( v6 < v5 );
  if ( !v4 )
    return 0LL;
  return 1073741833LL;
}
