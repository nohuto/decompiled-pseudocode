/*
 * XREFs of StorQueryMFNDChildPFList @ 0x1C00ACA10
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0039ED4 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorMapMFNDErrorToNtStatus @ 0x1C003E6B8 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryChildPFList @ 0x1C00763E4 (StorLogMFNDQueryChildPFList.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFList(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rbx
  size_t v6; // r12
  __int64 v7; // rsi
  unsigned __int16 v8; // r15
  __int64 v9; // rax
  int v10; // r14d
  unsigned int v11; // r14d
  __int64 Pool; // rax
  _WORD *v13; // rdi
  int v14; // r14d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // r10d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  _DWORD *v20; // r8
  int v21; // r9d
  char v22; // r8
  _DWORD v24[15]; // [rsp+60h] [rbp-19h] BYREF
  int v25; // [rsp+9Ch] [rbp+23h]
  int v26; // [rsp+E0h] [rbp+67h] BYREF
  int v27; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v28; // [rsp+F0h] [rbp+77h]

  v28 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(v24, 0, 0x40uLL);
  v7 = 0LL;
  v8 = 0;
  v27 = 0;
  *a3 = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v26 = -1073741637;
    goto LABEL_41;
  }
  if ( v4 && v6 >= 8 )
  {
    if ( *(_DWORD *)(a1 + 5964) != 1 )
    {
      v26 = -1073741436;
      goto LABEL_41;
    }
    v9 = *(_QWORD *)(a1 + 5968);
    if ( v9 )
      v10 = *(unsigned __int16 *)(v9 + 8) - 1;
    else
      v10 = 255;
    v11 = (v10 << 8) + 8;
    Pool = RaidAllocatePool(64LL, v11, 1179476306LL, *(_QWORD *)(a1 + 8));
    v13 = (_WORD *)Pool;
    if ( !Pool )
    {
      v26 = -1073741670;
      goto LABEL_41;
    }
    LOBYTE(v25) = 2;
    v25 |= 0xFFFF00u;
    v24[0] = v24[0] & 0xFFFFFF00 | 0xD2;
    v24[10] = v11 >> 2;
    v26 = StorSendMFNDCommand(a1, Pool, 0, v11, (__int64)v24);
    v14 = v26;
    if ( v26 >= 0 )
    {
      v15 = 200 * (unsigned __int16)*v13 + 16;
      memset_0(v4, 0, v6);
      *(_WORD *)v4 = 1;
      if ( v6 >= v15 )
      {
        LOWORD(v16) = *v13;
        v17 = 0;
        if ( *v13 )
        {
          do
          {
            v18 = 50LL * v17;
            v19 = (unsigned __int64)v17 << 8;
            LOWORD(v4[v18 + 4]) = 1;
            v20 = &v4[v18];
            v4[v18 + 5] = 200;
            LOWORD(v4[v18 + 6]) = *(_WORD *)((char *)v13 + v19 + 8);
            *(_OWORD *)((char *)&v4[v18 + 6] + 2) = *(_OWORD *)((char *)v13 + v19 + 10);
            *(_QWORD *)((char *)&v4[v18 + 10] + 2) = *(_QWORD *)((char *)v13 + v19 + 26);
            HIWORD(v4[v18 + 12]) = *(_WORD *)((char *)v13 + v19 + 34);
            if ( (*((_BYTE *)v13 + v19 + 36) & 1) != 0 )
              v20[13] |= 1u;
            v21 = v20[13];
            if ( (*((_BYTE *)v13 + v19 + 36) & 2) != 0 )
            {
              v21 |= 2u;
              v20[13] = v21;
            }
            if ( (*((_BYTE *)v13 + v19 + 119) & 1) != 0 )
              v4[v18 + 14] |= 1u;
            if ( (*((_BYTE *)v13 + v19 + 119) & 2) != 0 )
              v4[v18 + 14] |= 2u;
            if ( (*((_BYTE *)v13 + v19 + 119) & 4) != 0 )
              v4[v18 + 14] |= 4u;
            if ( (*((_BYTE *)v13 + v19 + 119) & 8) != 0 )
              v4[v18 + 14] |= 8u;
            v4[v18 + 15] = *((unsigned __int8 *)v13 + v19 + 42);
            v4[v18 + 17] = *(_DWORD *)((char *)v13 + v19 + 44);
            v4[v18 + 18] = *(_DWORD *)((char *)v13 + v19 + 48);
            v4[v18 + 19] = *(_DWORD *)((char *)v13 + v19 + 52);
            v4[v18 + 20] = *(_DWORD *)((char *)v13 + v19 + 56);
            v4[v18 + 21] = *(_DWORD *)((char *)v13 + v19 + 60);
            v4[v18 + 22] = *(_DWORD *)((char *)v13 + v19 + 64);
            v4[v18 + 23] = *(_DWORD *)((char *)v13 + v19 + 68);
            v4[v18 + 24] = *(_DWORD *)((char *)v13 + v19 + 72);
            v4[v18 + 25] = *(unsigned __int16 *)((char *)v13 + v19 + 38);
            v4[v18 + 26] = *(unsigned __int16 *)((char *)v13 + v19 + 40);
            if ( (v21 & 2) != 0 )
            {
              v4[v18 + 27] = 3670017;
              v22 = *((_BYTE *)v13 + v19 + 136);
              if ( v22 )
              {
                if ( v22 == 1 )
                  v4[v18 + 28] = 2;
                else
                  v4[v18 + 28] = (*((_BYTE *)v13 + v19 + 136) != 2) + 3;
              }
              else
              {
                v4[v18 + 28] = 1;
              }
              LOBYTE(v4[v18 + 29]) = *((_BYTE *)v13 + v19 + 137);
              BYTE1(v4[v18 + 29]) = *((_BYTE *)v13 + v19 + 138);
              v4[v18 + 30] = *(_DWORD *)((char *)v13 + v19 + 140);
              v4[v18 + 31] = *(_DWORD *)((char *)v13 + v19 + 144);
              v4[v18 + 32] = *(_DWORD *)((char *)v13 + v19 + 148);
              v4[v18 + 33] = *(_DWORD *)((char *)v13 + v19 + 152);
              v4[v18 + 34] = *(_DWORD *)((char *)v13 + v19 + 156);
              v4[v18 + 35] = *(_DWORD *)((char *)v13 + v19 + 160);
              v4[v18 + 36] = *(_DWORD *)((char *)v13 + v19 + 164);
              v4[v18 + 37] = *(_DWORD *)((char *)v13 + v19 + 168);
            }
            ++v17;
            *(_OWORD *)&v4[v18 + 41] = *(_OWORD *)((char *)v13 + v19 + 120);
            *(_QWORD *)&v4[v18 + 46] = *(_QWORD *)((char *)v13 + v19 + 80);
            *(_QWORD *)&v4[v18 + 48] = *(_QWORD *)((char *)v13 + v19 + 88);
            *(_QWORD *)&v4[v18 + 50] = *(_QWORD *)((char *)v13 + v19 + 96);
            *(_QWORD *)&v4[v18 + 52] = *(_QWORD *)((char *)v13 + v19 + 104);
            v16 = (unsigned __int16)*v13;
          }
          while ( v17 < v16 );
        }
        v4[2] = (unsigned __int16)v16;
        *v28 = v15;
      }
      else
      {
        v14 = -2147483643;
        v26 = -2147483643;
        *v28 = 8LL;
      }
      v4[1] = v15;
    }
    ExFreePoolWithTag(v13, 0x464D6152u);
    v8 = v27;
  }
  else
  {
    v14 = -1073741811;
    v26 = -1073741811;
  }
  if ( v14 >= 0 )
  {
LABEL_42:
    v7 = (__int64)v4;
    goto LABEL_43;
  }
LABEL_41:
  StorMapMFNDErrorToNtStatus(v8, &v26);
  v14 = v26;
  if ( v26 >= 0 )
    goto LABEL_42;
LABEL_43:
  StorLogMFNDQueryChildPFList(a1, v7, v8, v14);
  return (unsigned int)v14;
}
