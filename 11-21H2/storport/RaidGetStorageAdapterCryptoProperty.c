/*
 * XREFs of RaidGetStorageAdapterCryptoProperty @ 0x1C00399F8
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0084C68 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaidGetStorageAdapterCryptoProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  _DWORD *v6; // rdi
  size_t v7; // rdx
  int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r8

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 5480);
  v6 = *(_DWORD **)(a2 + 24);
  v7 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v4 )
  {
    v8 = *(unsigned __int16 *)(v4 + 10);
    *a3 = 0LL;
    v9 = 24 * v8 + 16;
    if ( (unsigned int)v7 >= v9 )
    {
      memset(v6, 0, v7);
      *v6 = 1;
      v10 = 0;
      v6[1] = v9;
      *a3 = v9;
      v6[2] = *(unsigned __int16 *)(v4 + 8);
      for ( v6[3] = *(unsigned __int16 *)(v4 + 10);
            v10 < *(unsigned __int16 *)(v4 + 10);
            v6[2 * v12 + 9] = *(unsigned __int16 *)(v4 + 20 * v11 + 22) )
      {
        v11 = v10++;
        v12 = 3 * v11;
        v6[2 * v12 + 4] = 1;
        v6[2 * v12 + 5] = 24;
        v6[2 * v12 + 6] = *(unsigned __int16 *)(v4 + 20 * v11 + 20);
        v6[2 * v12 + 7] = *(_DWORD *)(v4 + 20 * v11 + 24);
        v6[2 * v12 + 8] = *(_DWORD *)(v4 + 20 * v11 + 28);
      }
    }
    else if ( (unsigned int)v7 < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      *v6 = 1;
      v6[1] = v9;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v3;
}
