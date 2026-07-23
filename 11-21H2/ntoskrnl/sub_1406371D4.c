/*
 * XREFs of sub_1406371D4 @ 0x1406371D4
 * Callers:
 *     sub_14062E258 @ 0x14062E258 (sub_14062E258.c)
 * Callees:
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 */

char __fastcall sub_1406371D4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r8d
  int v9; // ebx
  int v10; // ecx
  int v11; // r11d
  unsigned int v12; // r11d
  unsigned int v13; // r11d
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // ecx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)qword_140C15D88 != CurrentThread && *(_QWORD *)qword_140C15D88 != a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread != *((struct _KTHREAD **)CurrentPrcb + 3) || *((_BYTE *)CurrentPrcb + 32) > 1u )
    {
      v3 = *(_QWORD *)(qword_140C15D88 + 8);
      v4 = (unsigned int)v3;
      LODWORD(v3) = ((unsigned int)v3 >> 13) & 0x3FFFF;
      _BitScanReverse(&v5, v3);
      v6 = (v4 >> 4) & 0x1FF;
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4310) + 8LL * (v5 - 2))
                     + 8LL * ((unsigned int)v3 ^ (1 << v5))
                     + 8);
      if ( !*(_DWORD *)(v7 + 8 * v6 + 224) )
      {
LABEL_15:
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8 * v6 + 328));
        LOBYTE(CurrentThread) = sub_140636520(0LL, 0x30000008u);
        return (char)CurrentThread;
      }
      v8 = MEMORY[0xFFFFF78000000320];
      LODWORD(CurrentThread) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v7 + 8 * v6 + 228);
      if ( (unsigned int)CurrentThread > *(_DWORD *)(v7 + 8 * v6 + 232) )
      {
        v9 = *(_DWORD *)(v7 + 8 * v6 + 224);
        *(_DWORD *)(v7 + 8 * v6 + 244) += v9;
        v10 = *(_DWORD *)(v7 + 8 * v6 + 244);
        v11 = *(_DWORD *)(v7 + 8 * v6 + 240);
        LODWORD(CurrentThread) = 2 * v9;
        if ( v10 > *(_DWORD *)(v7 + 8 * v6 + 236) )
          v10 = *(_DWORD *)(v7 + 8 * v6 + 236);
        *(_DWORD *)(v7 + 8 * v6 + 228) = v8;
        v12 = *(_DWORD *)(v7 + 8 * v6 + 252) + v11;
        *(_DWORD *)(v7 + 8 * v6 + 240) = 0;
        v13 = v12 >> 1;
        *(_DWORD *)(v7 + 8 * v6 + 244) = v10;
        *(_DWORD *)(v7 + 8 * v6 + 252) = v13;
        if ( v13 >= (unsigned int)CurrentThread )
        {
          v14 = v13 / (v9 + 1);
          v15 = 16777619 * (*(_DWORD *)(v7 + 8 * v6 + 260) ^ v8);
          *(_DWORD *)(v7 + 8 * v6 + 256) = v14;
          LODWORD(CurrentThread) = v15 & (2 * v14);
          *(_DWORD *)(v7 + 8 * v6 + 260) = v15;
          *(_DWORD *)(v7 + 8 * v6 + 248) = (_DWORD)CurrentThread;
        }
        else
        {
          *(_DWORD *)(v7 + 8 * v6 + 256) = 1;
          *(_DWORD *)(v7 + 8 * v6 + 248) = 1;
        }
      }
      ++*(_DWORD *)(v7 + 8 * v6 + 240);
      v16 = *(_DWORD *)(v7 + 8 * v6 + 244);
      if ( v16 > 0 )
      {
        LODWORD(CurrentThread) = --*(_DWORD *)(v7 + 8 * v6 + 248);
        if ( (int)CurrentThread <= 0 )
        {
          *(_DWORD *)(v7 + 8 * v6 + 244) = v16 - 1;
          *(_DWORD *)(v7 + 8 * v6 + 248) = *(_DWORD *)(v7 + 8 * v6 + 256);
          goto LABEL_15;
        }
      }
    }
  }
  return (char)CurrentThread;
}
