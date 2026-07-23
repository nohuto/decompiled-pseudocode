/*
 * XREFs of sub_1405EA72C @ 0x1405EA72C
 * Callers:
 *     sub_1405E9C3C @ 0x1405E9C3C (sub_1405E9C3C.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 * Callees:
 *     sub_140351BF4 @ 0x140351BF4 (sub_140351BF4.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     sub_1405E952C @ 0x1405E952C (sub_1405E952C.c)
 *     sub_1405EA9DC @ 0x1405EA9DC (sub_1405EA9DC.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

char __fastcall sub_1405EA72C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rbp
  __int64 v11; // r14
  char *v12; // r8
  signed __int64 v13; // r14
  int v14; // r13d
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // r14
  __int64 v23; // r8
  __int64 *v24; // rdi
  __int64 *v25; // rax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-38h] BYREF

  v8 = a8;
  RegionSize[0] = 0LL;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v11 = a3 + 15;
  v12 = BaseAddress;
  v13 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (__int64)(a8 - a6) / 4096;
  v15 = v13 + a2;
  v16 = v13 + a2 + 80;
  if ( v16 >= (unsigned __int64)BaseAddress )
  {
    if ( v16 < a8 )
    {
      v17 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      RegionSize[0] = (v15 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)sub_140351BF4(RegionSize[0], v17, a1, (unsigned __int64 *)(a1 + 376))
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&BaseAddress, 0LL, RegionSize, 0x1000u, 4u) >= 0 )
      {
        v12 = &BaseAddress[RegionSize[0]];
        BaseAddress += RegionSize[0];
        goto LABEL_7;
      }
      ++*(_DWORD *)(a1 + 632);
    }
    return 0;
  }
LABEL_7:
  *(_WORD *)(a2 + 8) = v13 >> 4;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  v18 = (__int64)(v8 - (_QWORD)v12) / 4096;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 20) = a5;
  v19 = (unsigned int)(v14 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v19;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v15;
  *(_DWORD *)(a2 + 56) = v14;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 576) += v19;
  *(_QWORD *)(a1 + 568) += v19;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v20 = *(_QWORD *)(a2 + 40);
  if ( v20 == a2 )
  {
    LOBYTE(v21) = 0;
  }
  else
  {
    v21 = ((unsigned __int64)v13 >> 16) + 1;
    if ( v21 >= 0xFE )
    {
      sub_1405F1BBC(3, v20, v15, a2, 0LL, 0LL);
      v12 = BaseAddress;
    }
  }
  *(_BYTE *)(v15 + 14) = v21;
  sub_1405E952C(a1, a2, (__int64)(v12 - 48), (unsigned int)((_DWORD)v18 << 12), v15, (__int64 *)RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize[0] )
    sub_1405EA9DC(a1, v15, RegionSize[0]);
  v23 = a1 + 288;
  v24 = (__int64 *)(a2 + 24);
  v25 = *(__int64 **)(a1 + 296);
  if ( *v25 == a1 + 288 )
  {
    *v24 = v23;
    v24[1] = (__int64)v25;
    *v25 = (__int64)v24;
    *(_QWORD *)(a1 + 296) = v24;
  }
  else
  {
    sub_1405F1BBC(13, 0, v23, 0, *v25, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
