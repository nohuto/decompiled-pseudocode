/*
 * XREFs of StorUnmapSenseInfo @ 0x1C0008570
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 */

void __fastcall StorUnmapSenseInfo(__int64 a1, __int64 a2)
{
  const void *v2; // rsi
  unsigned __int8 v3; // r12
  __int64 v4; // r9
  __int64 v6; // rbp
  const void **v7; // r14
  unsigned __int8 *v8; // r15
  __int64 v9; // rbx
  int v10; // r11d
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // r14
  char v18; // al
  int v19; // ecx
  unsigned int v20; // r13d
  void *Pool; // rax
  const void *v22; // r12

  v2 = 0LL;
  v3 = 0;
  v4 = a2;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (*(_BYTE *)(a1 + 16) & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 168);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 2) != 40 )
      {
        v2 = *(const void **)(v9 + 32);
        v7 = (const void **)(v9 + 32);
        v3 = *(_BYTE *)(v9 + 11);
        v8 = (unsigned __int8 *)(v9 + 11);
        v10 = *(_DWORD *)(v9 + 12);
        goto LABEL_13;
      }
      v6 = *(_QWORD *)(a1 + 168);
      v10 = *(_DWORD *)(v9 + 24);
      if ( !*(_DWORD *)(v9 + 20) )
      {
        v11 = *(_DWORD *)(v9 + 56);
        v12 = 0;
        if ( !v11 )
          goto LABEL_12;
        while ( 1 )
        {
          v13 = *(unsigned int *)(v9 + 4LL * v12 + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v14 = *(unsigned int *)(v9 + 16);
            if ( (unsigned int)v13 <= (unsigned int)v14 )
            {
              v15 = (unsigned int)v13;
              v16 = *(_DWORD *)(v13 + v9);
              if ( v16 == 64 )
              {
                if ( v15 + 40 <= v14 )
                  goto LABEL_10;
              }
              else
              {
                v19 = v16 - 65;
                if ( v19 )
                {
                  if ( v19 == 1 && v15 + 40 <= v14 )
                  {
                    v17 = v9 + 24;
LABEL_11:
                    v7 = (const void **)(v15 + v17);
                    v8 = (unsigned __int8 *)(v15 + v9 + 9);
                    v2 = *v7;
                    v3 = *v8;
LABEL_12:
                    v4 = a2;
                    break;
                  }
                }
                else if ( v15 + 56 <= v14 )
                {
LABEL_10:
                  v17 = v9 + 16;
                  goto LABEL_11;
                }
              }
            }
          }
          if ( ++v12 >= v11 )
            goto LABEL_12;
        }
      }
LABEL_13:
      v18 = *(_BYTE *)(v9 + 3);
      if ( v18 < 0 )
      {
        if ( (v10 & 0x200000) != 0 && v3 )
        {
          v20 = v3;
          Pool = (void *)RaidAllocatePool(64LL, v3, 1230201170LL, v4);
          v22 = Pool;
          if ( Pool )
          {
            memmove(Pool, v2, v20);
            *v7 = v22;
            if ( *(_BYTE *)(v9 + 2) == 40 )
              *(_DWORD *)(v6 + 24) |= 0x400u;
            else
              *(_DWORD *)(v9 + 12) |= 0x400u;
          }
          else
          {
            *v7 = *(const void **)(a1 + 200);
            *v8 = *(_BYTE *)(a1 + 208);
            *(_BYTE *)(v9 + 3) &= ~0x80u;
          }
        }
        else
        {
          if ( v3 >= *(_BYTE *)(a1 + 208) )
            v3 = *(_BYTE *)(a1 + 208);
          if ( v3 )
            memmove(*(void **)(a1 + 200), v2, v3);
          else
            *(_BYTE *)(v9 + 3) = v18 & 0x7F;
          *v7 = *(const void **)(a1 + 200);
          *v8 = v3;
        }
      }
      else
      {
        *v7 = *(const void **)(a1 + 200);
        *v8 = *(_BYTE *)(a1 + 208);
      }
    }
  }
}
