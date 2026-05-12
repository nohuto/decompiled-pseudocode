/*
 * XREFs of TcglibEalAllocateIfRecvCommand @ 0x1C0054C10
 * Callers:
 *     TcglibpAllocateRequestResources @ 0x1C007C67C (TcglibpAllocateRequestResources.c)
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x1C007D704 (TcglibpGetProtocolList.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

__int64 __fastcall TcglibEalAllocateIfRecvCommand(__int64 a1, char a2, __int16 a3, int a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 *v9; // r15
  __int64 v10; // r9
  void *Pool; // r12
  __int64 *v12; // r9
  void *v13; // r13
  __int64 Srb; // rcx
  char v15; // al
  int v16; // eax
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rax
  _BYTE *v20; // rdx
  char v21; // al
  int v22; // eax
  unsigned int v23; // esi
  char v25; // [rsp+60h] [rbp+8h]
  char v27; // [rsp+71h] [rbp+19h]

  v27 = HIBYTE(a3);
  v5 = 0;
  v25 = a3;
  v6 = a1;
  v7 = 0LL;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = a1;
  }
  else if ( *(_DWORD *)a1 != 1094997074 )
  {
    return (unsigned int)-1073741637;
  }
  v8 = (a4 + 511) & 0xFFFFFE00;
  v9 = (__int64 *)(v7 + 8);
  if ( v7 )
    v10 = *v9;
  else
    v10 = *(_QWORD *)(v6 + 8);
  Pool = (void *)RaidAllocatePool(64LL, v8, 1129603410LL, v10);
  if ( !Pool )
    return (unsigned int)-1073741801;
  v12 = (__int64 *)(v7 + 8);
  if ( !v7 )
    v12 = (__int64 *)(v6 + 8);
  v13 = (void *)RaidAllocatePool(64LL, 255LL, 1314087250LL, *v12);
  if ( !v13 )
  {
    v5 = -1073741801;
LABEL_17:
    ExFreePoolWithTag(Pool, 0x43546152u);
    return v5;
  }
  if ( !v7 )
    v9 = (__int64 *)(v6 + 8);
  Srb = RaidAllocateSrb(*v9, 0, *(_BYTE *)(v6 + 442), 1);
  if ( !Srb )
  {
    v5 = -1073741801;
    ExFreePoolWithTag(v13, 0x4E536152u);
    goto LABEL_17;
  }
  v15 = *(_BYTE *)(v6 + 442);
  *(_BYTE *)(Srb + 3) = 0;
  if ( v15 == 1 )
  {
    *(_DWORD *)(Srb + 32) = -1;
    *(_DWORD *)(Srb + 20) = 0;
    *(_DWORD *)(Srb + 24) = 320;
    *(_QWORD *)(Srb + 64) = Pool;
    *(_DWORD *)(Srb + 60) = v8;
    *(_QWORD *)(Srb + 80) = 0LL;
    if ( v7 )
      v16 = *(_DWORD *)(v7 + 1320);
    else
      v16 = *(_DWORD *)(v6 + 4060);
    v17 = *(unsigned int *)(Srb + 52);
    *(_DWORD *)(Srb + 40) = v16;
    if ( v7 )
    {
      *(_BYTE *)(v17 + Srb + 8) = *(_BYTE *)(v7 + 96);
      *(_BYTE *)(v17 + Srb + 9) = *(_BYTE *)(v7 + 97);
      v18 = *(_BYTE *)(v7 + 98);
    }
    else
    {
      *(_WORD *)(v17 + Srb + 8) = 0;
      v18 = 0;
    }
    *(_BYTE *)(v17 + Srb + 10) = v18;
    v19 = Srb + *(unsigned int *)(Srb + 120);
    *(_DWORD *)v19 = 64;
    v20 = (_BYTE *)(v19 + 24);
    *(_DWORD *)(v19 + 4) = 32;
    *(_WORD *)(v19 + 8) = -256;
    *(_QWORD *)(v19 + 16) = v13;
    *(_BYTE *)(v19 + 10) = 12;
  }
  else
  {
    *(_BYTE *)(Srb + 2) = 0;
    *(_WORD *)Srb = 88;
    *(_DWORD *)(Srb + 12) = 320;
    if ( v7 )
    {
      *(_BYTE *)(Srb + 5) = *(_BYTE *)(v7 + 96);
      *(_BYTE *)(Srb + 6) = *(_BYTE *)(v7 + 97);
      v21 = *(_BYTE *)(v7 + 98);
    }
    else
    {
      *(_WORD *)(Srb + 5) = 0;
      v21 = 0;
    }
    *(_BYTE *)(Srb + 7) = v21;
    *(_BYTE *)(Srb + 8) = -1;
    *(_QWORD *)(Srb + 24) = Pool;
    *(_DWORD *)(Srb + 16) = v8;
    *(_QWORD *)(Srb + 48) = 0LL;
    if ( v7 )
      v22 = *(_DWORD *)(v7 + 1320);
    else
      v22 = *(_DWORD *)(v6 + 4060);
    *(_DWORD *)(Srb + 20) = v22;
    v20 = (_BYTE *)(Srb + 72);
    *(_WORD *)(Srb + 10) = -244;
    *(_QWORD *)(Srb + 32) = v13;
  }
  v20[4] |= 0x80u;
  v20[1] = a2;
  v20[3] = v25;
  v20[2] = v27;
  v23 = v8 >> 9;
  v20[9] = v23;
  v20[8] = BYTE1(v23);
  v20[7] = BYTE2(v23);
  *v20 = -94;
  v20[6] = HIBYTE(v23);
  *a5 = Srb;
  return v5;
}
