/*
 * XREFs of sub_1405E9E8C @ 0x1405E9E8C
 * Callers:
 *     sub_1405E9C3C @ 0x1405E9C3C (sub_1405E9C3C.c)
 * Callees:
 *     sub_140351BF4 @ 0x140351BF4 (sub_140351BF4.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405E952C @ 0x1405E952C (sub_1405E952C.c)
 *     sub_1405EAE78 @ 0x1405EAE78 (sub_1405EAE78.c)
 *     sub_1405EB250 @ 0x1405EB250 (sub_1405EB250.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 *     sub_1405F1C10 @ 0x1405F1C10 (sub_1405F1C10.c)
 *     sub_1405F1F34 @ 0x1405F1F34 (sub_1405F1F34.c)
 *     sub_1405F2358 @ 0x1405F2358 (sub_1405F2358.c)
 */

unsigned __int64 __fastcall sub_1405E9E8C(__int64 a1, ULONG_PTR *a2)
{
  __int64 v4; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // r9
  ULONG_PTR v17; // rdx
  __int64 v18; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v4 = sub_1405F2358(a1, *a2);
  v5 = v4;
  if ( v4 == a1 + 240 )
    return 0LL;
  if ( dword_140D04920 >= 1 && *(_QWORD *)(v4 + 40) < *a2 )
  {
    DbgPrint("(UCRBlock->Size >= *Size)");
    sub_1405F1F34();
  }
  v6 = v4 - 16;
  v7 = 0;
  v8 = *(unsigned __int8 *)(v4 - 16 + 14);
  if ( (_BYTE)v8 )
    v9 = (v6 & 0xFFFFFFFFFFFF0000uLL) - (v8 << 16) + 0x10000;
  else
    v9 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( qword_140C5AE40 != *(_QWORD *)(a1 + 360) )
  {
    v10 = sub_14042A5E0(a1, &BaseAddress);
  }
  else
  {
    v14 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *a2 = v14;
    if ( (unsigned int)sub_140351BF4(
                         v14,
                         *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                         a1,
                         (unsigned __int64 *)(a1 + 376)) )
      ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 4u);
    v10 = sub_1405EB250(a1, 2LL);
  }
  if ( v10 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    LOBYTE(v11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    if ( *(_BYTE *)(v6 + 11) != (_BYTE)v11 )
      sub_1405F1C10(a1, v6);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  sub_1405EAE78(v11, v5, v12, v13);
  --*(_DWORD *)(v9 + 84);
  *(_DWORD *)(v9 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v16 = *(_QWORD *)(v5 + 40);
  if ( v16 >= 0xFF000 )
  {
    *(_QWORD *)(a1 + 584) -= v16;
    v16 = *(_QWORD *)(v5 + 40);
  }
  v17 = *a2;
  if ( v16 > *a2 || v16 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v9 + 72) )
  {
    sub_1405E952C(a1, v9, *(_QWORD *)(v5 + 32) + v17 - 48, v16 - v17, v6, (__int64 *)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v17 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v18 = *(_QWORD *)(v9 + 40);
  if ( v18 != v9 )
  {
    if ( ((v6 - v9) >> 16) + 1 >= 0xFE )
      sub_1405F1BBC(3, v18, v6, v9, 0LL, 0LL);
    v7 = ((unsigned int)(v6 - v9) >> 16) + 1;
  }
  *(_BYTE *)(v6 + 14) = v7;
  return v6;
}
