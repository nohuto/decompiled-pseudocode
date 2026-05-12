/*
 * XREFs of StorQueryMFNDChildPFList @ 0x1C00911EC
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorLogMFNDQueryChildPFList @ 0x1C00672D0 (StorLogMFNDQueryChildPFList.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFList(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rbx
  size_t v6; // r14
  bool v7; // zf
  int v8; // esi
  __int64 v9; // rax
  int v10; // esi
  unsigned int v11; // esi
  __int64 Pool; // rax
  _WORD *v13; // rdi
  unsigned int v14; // ebp
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int16 v19; // ax
  int v20; // r8d
  char v21; // al
  char v22; // al
  _DWORD v24[16]; // [rsp+50h] [rbp-68h] BYREF

  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset(v24, 0, sizeof(v24));
  v7 = (*(_BYTE *)(a1 + 111) & 1) == 0;
  *a3 = 0LL;
  if ( v7 )
  {
    v8 = -1073741637;
  }
  else if ( v4 && v6 >= 8 )
  {
    if ( *(_DWORD *)(a1 + 5900) == 1 )
    {
      v9 = *(_QWORD *)(a1 + 5904);
      if ( v9 )
        v10 = *(unsigned __int16 *)(v9 + 8);
      else
        v10 = 255;
      v11 = (v10 << 8) + 8;
      Pool = RaidAllocatePool(64LL, v11, 1179476306LL, *(_QWORD *)(a1 + 8));
      v13 = (_WORD *)Pool;
      if ( Pool )
      {
        LOBYTE(v24[15]) = 2;
        v24[15] |= 0xFFFF00u;
        v24[0] = v24[0] & 0xFFFFFF00 | 0xD2;
        v24[10] = v11 >> 2;
        v8 = StorSendMFNDCommand(a1, Pool, v11, (unsigned int)v24);
        if ( v8 >= 0 )
        {
          v14 = ((unsigned __int16)*v13 << 8) + 8;
          memset(v4, 0, v6);
          *v4 = 160;
          if ( v6 >= v14 )
          {
            LOWORD(v15) = *v13;
            v16 = 0;
            if ( *v13 )
            {
              do
              {
                v17 = 37LL * v16;
                v18 = (unsigned __int64)v16 << 8;
                v4[v17 + 3] = 148;
                v4[v17 + 4] = 148;
                LOWORD(v4[v17 + 5]) = *(_WORD *)((char *)v13 + v18 + 8);
                *(_OWORD *)((char *)&v4[v17 + 5] + 2) = *(_OWORD *)((char *)v13 + v18 + 10);
                *(_QWORD *)((char *)&v4[v17 + 9] + 2) = *(_QWORD *)((char *)v13 + v18 + 26);
                HIWORD(v4[v17 + 11]) = *(_WORD *)((char *)v13 + v18 + 34);
                v19 = *(_WORD *)((char *)v13 + v18 + 36);
                if ( (v19 & 1) != 0 )
                {
                  v4[v17 + 12] |= 1u;
                  v19 = *(_WORD *)((char *)v13 + v18 + 36);
                }
                v20 = v4[v17 + 12];
                if ( (v19 & 2) != 0 )
                {
                  v20 |= 2u;
                  v4[v17 + 12] = v20;
                }
                v21 = *((_BYTE *)v13 + v18 + 43);
                if ( (v21 & 1) != 0 )
                {
                  v4[v17 + 13] |= 1u;
                  v21 = *((_BYTE *)v13 + v18 + 43);
                }
                if ( (v21 & 2) != 0 )
                  v4[v17 + 13] |= 2u;
                if ( (*((_BYTE *)v13 + v18 + 43) & 4) != 0 )
                  v4[v17 + 13] |= 4u;
                v4[v17 + 14] = *((unsigned __int8 *)v13 + v18 + 42);
                v4[v17 + 16] = *(_DWORD *)((char *)v13 + v18 + 44);
                v4[v17 + 17] = *(_DWORD *)((char *)v13 + v18 + 48);
                v4[v17 + 18] = *(_DWORD *)((char *)v13 + v18 + 52);
                v4[v17 + 19] = *(_DWORD *)((char *)v13 + v18 + 56);
                v4[v17 + 20] = *(_DWORD *)((char *)v13 + v18 + 60);
                v4[v17 + 21] = *(_DWORD *)((char *)v13 + v18 + 64);
                v4[v17 + 22] = *(_DWORD *)((char *)v13 + v18 + 68);
                v4[v17 + 23] = *(_DWORD *)((char *)v13 + v18 + 72);
                v4[v17 + 24] = *(unsigned __int16 *)((char *)v13 + v18 + 38);
                v4[v17 + 25] = *(unsigned __int16 *)((char *)v13 + v18 + 40);
                if ( (v20 & 2) != 0 )
                {
                  v4[v17 + 26] = 3670072;
                  v22 = *((_BYTE *)v13 + v18 + 136);
                  if ( v22 )
                  {
                    if ( v22 == 1 )
                    {
                      v4[v17 + 27] = 2;
                    }
                    else if ( v22 == 2 )
                    {
                      v4[v17 + 27] = 3;
                    }
                  }
                  else
                  {
                    v4[v17 + 27] = 1;
                  }
                  LOBYTE(v4[v17 + 28]) = *((_BYTE *)v13 + v18 + 137);
                  v4[v17 + 29] = *(_DWORD *)((char *)v13 + v18 + 140);
                  v4[v17 + 30] = *(_DWORD *)((char *)v13 + v18 + 144);
                  v4[v17 + 31] = *(_DWORD *)((char *)v13 + v18 + 148);
                  v4[v17 + 32] = *(_DWORD *)((char *)v13 + v18 + 152);
                  v4[v17 + 33] = *(_DWORD *)((char *)v13 + v18 + 156);
                  v4[v17 + 34] = *(_DWORD *)((char *)v13 + v18 + 160);
                  v4[v17 + 35] = *(_DWORD *)((char *)v13 + v18 + 164);
                  v4[v17 + 36] = *(_DWORD *)((char *)v13 + v18 + 168);
                }
                v15 = (unsigned __int16)*v13;
                ++v16;
              }
              while ( v16 < v15 );
            }
            v4[2] = (unsigned __int16)v15;
            *a3 = v14;
          }
          else
          {
            *a3 = 8LL;
            v8 = -2147483643;
          }
          v4[1] = v14;
        }
        ExFreePoolWithTag(v13, 0x464D6152u);
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      v8 = -1073741436;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    v4 = 0LL;
  StorLogMFNDQueryChildPFList(a1, (__int64)v4, 0, v8);
  return (unsigned int)v8;
}
