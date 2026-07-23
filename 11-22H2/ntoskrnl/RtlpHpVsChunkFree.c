/*
 * XREFs of RtlpHpVsChunkFree @ 0x14024D5E0
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x14024EDD0 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140207670 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140249E80 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkCoalesce @ 0x14024B1C0 (RtlpHpVsChunkCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsChunkAlignSplit @ 0x14024EF70 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140289AC0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140351F78 (RtlpHpVsSubsegmentCleanup.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned int v5; // eax
  _DWORD *v6; // rdi
  _QWORD *v7; // r15
  _DWORD *v8; // r12
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  unsigned int v25; // edx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r11
  __int64 v29; // rdx
  int v30; // r9d
  BOOLEAN v31; // al
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // rdx
  int v35; // edx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdi
  int v38; // ebx
  unsigned int v39; // [rsp+20h] [rbp-58h]
  int v40; // [rsp+28h] [rbp-50h]
  int v41; // [rsp+30h] [rbp-48h]
  __int128 v42; // [rsp+38h] [rbp-40h] BYREF
  __int64 v43; // [rsp+48h] [rbp-30h]
  unsigned int v44; // [rsp+88h] [rbp+10h] BYREF
  int v45; // [rsp+98h] [rbp+20h]

  v45 = a4;
  v5 = 0;
  v6 = (_DWORD *)(a1 + 176);
  v44 = 0;
  v7 = (_QWORD *)(a2 + 16);
  v8 = (_DWORD *)(a1 + 176);
  while ( 1 )
  {
    v39 = v5;
    v12 = RtlpHpVsChunkCoalesce((_RTL_RB_TREE *)a1, a2, a3, &v44);
    v15 = v44;
    a3 = v12;
    if ( v44 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2, v13, v14);
      return a2;
    }
    if ( v44 <= v39 )
      break;
    v8 = v6;
    v16 = (v12 - a2 + 4127) & 0xFFFFF000;
    v17 = (v12 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v12) ^ *(unsigned __int16 *)(v12 + 2)) - a2) & 0xFFFFF000;
    if ( v16 >= v17 )
      break;
    v18 = v17 - v16;
    v19 = v16 >> 12;
    v15 = (unsigned __int8)v19;
    v20 = *v7 & (-1LL << v19) & (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v17 - 1) >> 12)));
    if ( v18 < 0x1000 )
      break;
    if ( !v20 )
      break;
    v15 = (0x101010101010101LL
         * ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    v41 = v15;
    if ( *(__int16 *)(a2 + 34) < 0 )
      break;
    v8 = (_DWORD *)(a1 + 176);
    if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
    {
      v34 = *(_QWORD *)(a1 + 48) >> 7;
      if ( v34 <= 8 )
        v34 = 8LL;
      if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v15 <= v34 )
        break;
    }
    *(_BYTE *)(v12 + 6) = BYTE6(v12) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
    *(_DWORD *)(v12 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v12 ^ ((unsigned int)(v12 - a2) >> 12)) | 0x200;
    v40 = v45 & 1;
    if ( (v45 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a5);
    v35 = *(_DWORD *)(a1 + 8);
    v43 = 0LL;
    _BitScanReverse64(&v36, v20);
    _BitScanForward64(&v37, v20);
    v42 = 0LL;
    v38 = v36 - v37 + 1;
    RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)(a2 + 24), v35, &v42);
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(
      *(_QWORD *)(a1 + 128) ^ a1,
      a2 + (unsigned int)((_DWORD)v37 << 12),
      (unsigned int)(v38 << 12));
    *v7 &= ~(((1LL << v38) - 1) << v37);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), -v41);
    RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v42);
    if ( !v40 )
      RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), a5);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v6 = (_DWORD *)(a1 + 176);
    v5 = v44;
  }
  if ( (*v8 & 1) != 0 && ((v12 + 32) & 0xFFF) != 0 )
  {
    v21 = RtlpHpVsChunkAlignSplit(v15, a2, v12);
    if ( v21 )
      RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)a1, a2, v21);
  }
  v22 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a3 ^ *(_DWORD *)a3) >> 16));
  v23 = (a3 - a2 + 4127) & 0xFFFFF000;
  v24 = (a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16)) - a2) & 0xFFFFF000;
  if ( v23 < v24 )
  {
    v25 = v24 - v23;
    v26 = *v7 & (-1LL << (v23 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                 - (unsigned __int8)((unsigned __int64)(v24 - 1) >> 12)));
  }
  else
  {
    v25 = 0;
    v26 = 0LL;
  }
  *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                        * ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                          + ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                            + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  *(_WORD *)a3 = RtlpHpHeapGlobals ^ a3 ^ (((v22 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                                         - ((unsigned __int64)(v22 + 4095) >> 12)
                                         + (v25 >> 12)
                                         - ((0x101010101010101LL
                                           * ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                             + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                             + ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                               + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v27 = *(_QWORD *)(a1 + 24);
  if ( (v27 & 1) == 0 )
  {
    v28 = *(_QWORD *)(a1 + 16);
    goto LABEL_14;
  }
  v29 = *(_QWORD *)(a1 + 16);
  if ( v29 )
  {
    v28 = v29 ^ (a1 + 16);
LABEL_14:
    v29 = v28;
    v30 = v27 & 1;
    v31 = 0;
    if ( !v28 )
      goto LABEL_27;
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3 ^ (unsigned int)a3) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v29 - 8) ^ ((_DWORD)v29 - 8)) )
      {
        v32 = *(_QWORD *)(v29 + 8);
        if ( v30 )
        {
          if ( !v32 )
            goto LABEL_25;
          v32 ^= v29;
        }
        if ( !v32 )
        {
LABEL_25:
          v31 = 1;
          goto LABEL_27;
        }
      }
      else
      {
        v32 = *(_QWORD *)v29;
        if ( v30 )
        {
          if ( !v32 )
            break;
          v32 ^= v29;
        }
        if ( !v32 )
          break;
      }
      v29 = v32;
    }
  }
  v31 = 0;
LABEL_27:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v29, v31, (PRTL_BALANCED_NODE)(a3 + 8));
  return 0LL;
}
