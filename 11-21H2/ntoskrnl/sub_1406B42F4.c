/*
 * XREFs of sub_1406B42F4 @ 0x1406B42F4
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 * Callees:
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x14041C160 (ZwProtectVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406B42F4(unsigned __int64 a1, int a2)
{
  unsigned int v3; // r14d
  struct _KTHREAD *CurrentThread; // r13
  char v5; // al
  char v6; // r12
  char *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  _DWORD *v13; // rdi
  ULONG_PTR v14; // rax
  char *v15; // rbx
  NTSTATUS v16; // eax
  char *v17; // rax
  __int64 v19; // rax
  __int16 v20; // cx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  void *v26; // rax
  void *v27; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-68h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR v30; // [rsp+40h] [rbp-58h] BYREF
  PVOID v31; // [rsp+48h] [rbp-50h] BYREF
  __int64 v32; // [rsp+50h] [rbp-48h]
  int v33; // [rsp+58h] [rbp-40h] BYREF
  int v34; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v35; // [rsp+60h] [rbp-38h]
  __int64 v36; // [rsp+68h] [rbp-30h]
  int v37; // [rsp+B0h] [rbp+18h]
  ULONG OldProtect; // [rsp+B8h] [rbp+20h] BYREF

  RegionSize = 0LL;
  v3 = 0;
  OldProtect = 0;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *((_BYTE *)CurrentThread + 1384);
  if ( v5 < 0 )
    return 2147483649LL;
  v6 = 1;
  if ( ((unsigned __int8)~(*((_BYTE *)CurrentThread + 1385) >> 6) & ((v5 & 3) == 0)) == 0
    || *((_BYTE *)CurrentThread + 586) == 1 )
  {
    return 2147483649LL;
  }
  if ( a2 )
  {
    v8 = 275;
  }
  else
  {
    v31 = 0LL;
    v30 = 0LL;
    v37 = 0;
    v7 = 0LL;
    if ( (dword_140D06880 & 0x2000000) == 0 )
      goto LABEL_6;
    v24 = sub_14030E7C0(a1, 2, &v33);
    v7 = (char *)v24;
    if ( !v24 )
      goto LABEL_6;
    if ( (*(_DWORD *)(v24 + 48) & 0xA200000) != 0x8200000 )
      goto LABEL_6;
    v37 = 1;
    v25 = (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12;
    sub_14030EA70((char *)v24);
    v7 = 0LL;
    v3 = -1073741571;
    v30 = 4096LL;
    v26 = (void *)((a1 & 0xFFFFFFFFFFFFF000uLL) - 4096);
    v31 = v26;
    if ( (unsigned __int64)v26 > a1 )
      goto LABEL_6;
    if ( (unsigned __int64)v26 > v25 )
    {
      v8 = 275;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v31, 0LL, &v30, 0x1000u, 0x102u) >= 0 )
        v3 = 275;
    }
    else
    {
LABEL_6:
      v8 = 275;
    }
    if ( v7 )
      sub_14030EA70(v7);
    if ( v37 )
      return v3;
  }
  v9 = *((_QWORD *)CurrentThread + 30);
  v10 = *(_QWORD *)(v9 + 8);
  v35 = v10;
  v36 = *(_QWORD *)(v9 + 5240);
  v11 = v36 & 0xFFFFFFFFFFFFF000uLL;
  v12 = (*(unsigned int *)(v9 + 5960) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v12;
  v13 = (_DWORD *)(v9 + 16);
  v14 = v12;
  if ( v12 )
  {
    v14 = v12 + 4096;
    v12 = v14;
    RegionSize = v14;
  }
  if ( v14 < 0x3000 )
  {
    v12 = 12288LL;
    RegionSize = 12288LL;
    v14 = 12288LL;
  }
  if ( a1 >= v10 || a1 < v11 )
  {
    v19 = *((_QWORD *)CurrentThread + 23);
    if ( *(_QWORD *)(v19 + 1408) )
    {
      v20 = *(_WORD *)(v19 + 2412);
      if ( v20 != 332 && v20 != 452 )
        v6 = 0;
      if ( v6 )
      {
        v32 = v9 + 0x2000;
        if ( (v9 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = *(unsigned int *)(v9 + 8196);
        v35 = v21;
        v22 = *(unsigned int *)(v9 + 11788);
        v36 = v22;
        v23 = *(unsigned int *)(v9 + 12152);
        RegionSize = v23;
        v11 = v22 & 0xFFFFFFFFFFFFF000uLL;
        if ( a1 < v21 && a1 >= v11 )
        {
          v12 = (v23 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v14 = v12;
          RegionSize = v12;
          if ( v12 )
          {
            v12 += 4096LL;
            RegionSize = v12;
            v14 = v12;
          }
          if ( v14 < 0x2000 )
          {
            v12 = 0x2000LL;
            RegionSize = 0x2000LL;
            v14 = 0x2000LL;
          }
          v13 = (_DWORD *)(v9 + 8200);
          goto LABEL_16;
        }
      }
    }
    return 2147483649LL;
  }
LABEL_16:
  v15 = (char *)((a1 & 0xFFFFFFFFFFFFF000uLL) - v14);
  BaseAddress = v15;
  if ( (unsigned __int64)v15 <= v11 )
  {
    v27 = (void *)(v11 + 4096);
LABEL_52:
    BaseAddress = v27;
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect);
    v17 = (char *)BaseAddress;
    v8 = -1073741571;
    goto LABEL_21;
  }
  v34 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)CurrentThread + 23) + 1360LL) + 188LL);
  if ( (v34 & 0x10000) != 0 )
  {
    v16 = -1073741523;
  }
  else
  {
    v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x104u);
    v15 = (char *)BaseAddress;
    v12 = RegionSize;
  }
  if ( v16 < 0 )
  {
    RegionSize = v12 - 4096;
    v27 = v15 + 4096;
    goto LABEL_52;
  }
  v17 = &v15[v12];
LABEL_21:
  if ( v32 )
    *v13 = (_DWORD)v17;
  else
    *(_QWORD *)v13 = v17;
  return v8;
}
