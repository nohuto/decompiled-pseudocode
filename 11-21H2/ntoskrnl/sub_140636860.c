/*
 * XREFs of sub_140636860 @ 0x140636860
 * Callers:
 *     <none>
 * Callees:
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 */

char __fastcall sub_140636860(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r8d
  int v11; // ebx
  int v12; // ecx
  int v13; // r11d
  unsigned int v14; // r11d
  unsigned int v15; // r11d
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  unsigned __int64 v19; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)CurrentPrcb + 3) || *((_BYTE *)CurrentPrcb + 32) > 1u )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = (unsigned int)v5;
    LODWORD(v5) = ((unsigned int)v5 >> 13) & 0x3FFFF;
    _BitScanReverse(&v7, v5);
    v8 = (v6 >> 4) & 0x1FF;
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4310) + 8LL * (v7 - 2))
                   + 8LL * ((unsigned int)v5 ^ (1 << v7))
                   + 8);
    if ( !*(_DWORD *)(v9 + 8 * v8 + 144) )
    {
LABEL_13:
      v19 = *(_QWORD *)(a1 + 360);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8 * v8 + 320));
      LOBYTE(CurrentThread) = sub_140636520(v19, 0x50000002u);
      return (char)CurrentThread;
    }
    v10 = MEMORY[0xFFFFF78000000320];
    LODWORD(CurrentThread) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v9 + 8 * v8 + 148);
    if ( (unsigned int)CurrentThread > *(_DWORD *)(v9 + 8 * v8 + 152) )
    {
      v11 = *(_DWORD *)(v9 + 8 * v8 + 144);
      *(_DWORD *)(v9 + 8 * v8 + 164) += v11;
      v12 = *(_DWORD *)(v9 + 8 * v8 + 164);
      v13 = *(_DWORD *)(v9 + 8 * v8 + 160);
      LODWORD(CurrentThread) = 2 * v11;
      if ( v12 > *(_DWORD *)(v9 + 8 * v8 + 156) )
        v12 = *(_DWORD *)(v9 + 8 * v8 + 156);
      *(_DWORD *)(v9 + 8 * v8 + 148) = v10;
      v14 = *(_DWORD *)(v9 + 8 * v8 + 172) + v13;
      *(_DWORD *)(v9 + 8 * v8 + 160) = 0;
      v15 = v14 >> 1;
      *(_DWORD *)(v9 + 8 * v8 + 164) = v12;
      *(_DWORD *)(v9 + 8 * v8 + 172) = v15;
      if ( v15 >= (unsigned int)CurrentThread )
      {
        v16 = v15 / (v11 + 1);
        v17 = 16777619 * (*(_DWORD *)(v9 + 8 * v8 + 180) ^ v10);
        *(_DWORD *)(v9 + 8 * v8 + 176) = v16;
        LODWORD(CurrentThread) = v17 & (2 * v16);
        *(_DWORD *)(v9 + 8 * v8 + 180) = v17;
        *(_DWORD *)(v9 + 8 * v8 + 168) = (_DWORD)CurrentThread;
      }
      else
      {
        *(_DWORD *)(v9 + 8 * v8 + 176) = 1;
        *(_DWORD *)(v9 + 8 * v8 + 168) = 1;
      }
    }
    ++*(_DWORD *)(v9 + 8 * v8 + 160);
    v18 = *(_DWORD *)(v9 + 8 * v8 + 164);
    if ( v18 > 0 )
    {
      LODWORD(CurrentThread) = --*(_DWORD *)(v9 + 8 * v8 + 168);
      if ( (int)CurrentThread <= 0 )
      {
        *(_DWORD *)(v9 + 8 * v8 + 164) = v18 - 1;
        *(_DWORD *)(v9 + 8 * v8 + 168) = *(_DWORD *)(v9 + 8 * v8 + 176);
        goto LABEL_13;
      }
    }
  }
  return (char)CurrentThread;
}
